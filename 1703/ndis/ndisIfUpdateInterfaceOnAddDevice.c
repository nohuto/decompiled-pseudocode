/*
 * XREFs of ndisIfUpdateInterfaceOnAddDevice @ 0x1C001DD24
 * Callers:
 *     ndisCheckIfTypeMismatch @ 0x1C005EFE0 (ndisCheckIfTypeMismatch.c)
 *     ndisAddDevice @ 0x1C00F6250 (ndisAddDevice.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x1C001B270 (NdisReferenceWithTag.c)
 *     NdisFreeRefCount @ 0x1C0025560 (NdisFreeRefCount.c)
 *     memmove @ 0x1C0028840 (memmove.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C003CAE8 (WPP_SF_qqd.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C00B6D6C (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 *     NdisAllocateRefCount @ 0x1C00B6E90 (NdisAllocateRefCount.c)
 *     ndisNsiSyncMiniportOperStatusNotification @ 0x1C00B9F64 (ndisNsiSyncMiniportOperStatusNotification.c)
 *     ?ndisIfUpdatePersistedInterfaceInfo@@YAHPEAEKK0@Z @ 0x1C00D0664 (-ndisIfUpdatePersistedInterfaceInfo@@YAHPEAEKK0@Z.c)
 */

__int64 __fastcall ndisIfUpdateInterfaceOnAddDevice(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned int v3; // r15d
  char v4; // r14
  __int64 v5; // rbx
  _WORD *v6; // rsi
  void *RefCount; // r12
  KIRQL v8; // r13
  struct _NDIS_REFCOUNT_BLOCK *v9; // rcx
  _BYTE *v11; // rcx
  __int16 v12; // cx
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-30h] BYREF
  __int64 v14; // [rsp+40h] [rbp-20h] BYREF
  __int64 v15; // [rsp+48h] [rbp-18h]
  __int64 v16; // [rsp+50h] [rbp-10h]

  v2 = a2;
  v3 = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  v4 = 0;
  DestinationString.Buffer = 0LL;
  v5 = a1;
  if ( (unsigned __int8)byte_1C009261D >= 4u )
    WPP_SF_qq(182LL, &WPP_af1106a9a46b3e0e2b308003762cd579_Traceguids, a1, a2);
  v6 = (_WORD *)(v5 + 8);
  if ( !*(_WORD *)(v5 + 8)
    || (RtlInitUnicodeString(&DestinationString, (PCWSTR)(v5 + 10)),
        RtlCompareUnicodeString(&DestinationString, *(PCUNICODE_STRING *)(v2 + 3880), 1u)) )
  {
    v4 = 1;
  }
  LOBYTE(a2) = 2;
  LOBYTE(a1) = 23;
  RefCount = (void *)NdisAllocateRefCount(a1, a2);
  v8 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  if ( *(_BYTE *)(v5 + 1403) )
  {
    v3 = -1073741823;
    KeReleaseSpinLock(&ndisIfListLock, v8);
    v11 = *(_BYTE **)(v5 + 1448);
    if ( v11 )
      *v11 &= ~2u;
    NdisFreeRefCount(RefCount);
  }
  else
  {
    if ( v4 )
    {
      memset((void *)(v5 + 8), 0, 0x204uLL);
      v12 = **(_WORD **)(v2 + 3880);
      *v6 = (unsigned __int16)v12 <= 0x200u ? v12 : 512;
      if ( *v6 )
        memmove((void *)(v5 + 10), *(const void **)(*(_QWORD *)(v2 + 3880) + 8LL), (unsigned __int16)*v6);
    }
    v9 = *(struct _NDIS_REFCOUNT_BLOCK **)(v5 + 1440);
    *(_DWORD *)(v5 + 1192) = *(_DWORD *)(v2 + 4084);
    *(_QWORD *)(v5 + 1112) = 2LL;
    NdisReferenceWithTag(v9, 0xCu);
    ++*(_DWORD *)(v5 + 1304);
    *(_WORD *)(v5 + 1460) = 0;
    KeAcquireSpinLockAtDpcLevel(&ndisIfBlockMiniportLinkLock);
    *(_BYTE *)(v5 + 1403) = 1;
    *(_DWORD *)(v5 + 1404) = 1;
    *(_QWORD *)(v5 + 1416) = v2;
    *(_QWORD *)(v5 + 1448) = RefCount;
    *(_QWORD *)(v2 + 4064) = v5;
    *(_BYTE *)(v2 + 4056) = 1;
    KeReleaseSpinLockFromDpcLevel(&ndisIfBlockMiniportLinkLock);
    *(_DWORD *)(v2 + 4080) = *(_DWORD *)(v5 + 4);
    *(_QWORD *)(v2 + 4048) = *(_QWORD *)(v5 + 1312);
    *(_DWORD *)(v2 + 4088) = *(_DWORD *)(v5 + 1112);
    *(_DWORD *)(v2 + 4092) = 0;
    KeReleaseSpinLock(&ndisIfListLock, v8);
    if ( v4 )
    {
      ndisIfUpdatePersistedInterfaceInfo((unsigned __int8 *)(v5 + 1312), 0x204u, 0x208u, (unsigned __int8 *)(v5 + 8));
      v15 = v5 + 8;
      v14 = 2LL;
      v16 = 0x400000204LL;
      ndisNsiNotifyClientInterfaceChange(v5, 0LL, &v14);
    }
    v14 = 0LL;
    v15 = v5 + 1192;
    v16 = 0x1000000004LL;
    ndisNsiNotifyClientInterfaceChange(v5, 0LL, &v14);
    ndisNsiSyncMiniportOperStatusNotification(v2);
  }
  if ( (unsigned __int8)byte_1C009261D >= 4u )
    WPP_SF_qqd(183LL, &WPP_af1106a9a46b3e0e2b308003762cd579_Traceguids, v5, v2, v3);
  return v3;
}
