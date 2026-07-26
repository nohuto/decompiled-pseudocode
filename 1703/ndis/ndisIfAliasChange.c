/*
 * XREFs of ndisIfAliasChange @ 0x1C00446C8
 * Callers:
 *     ndisHandleUModePnPOp @ 0x1C00D9594 (ndisHandleUModePnPOp.c)
 * Callees:
 *     ndisIfFindInterfaceByInterfaceGuid @ 0x1C001455C (ndisIfFindInterfaceByInterfaceGuid.c)
 *     NdisReferenceWithTag @ 0x1C001B270 (NdisReferenceWithTag.c)
 *     IFBLOCK_DECREMENT_REF @ 0x1C001B868 (IFBLOCK_DECREMENT_REF.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     memmove @ 0x1C0028840 (memmove.c)
 *     WPP_SF_d @ 0x1C0043BDC (WPP_SF_d.c)
 *     WPP_SF_ZZ @ 0x1C004406C (WPP_SF_ZZ.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C00B6D6C (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 *     ?ndisIfUpdatePersistedInterfaceInfo@@YAHPEAEKK0@Z @ 0x1C00D0664 (-ndisIfUpdatePersistedInterfaceInfo@@YAHPEAEKK0@Z.c)
 */

__int64 __fastcall ndisIfAliasChange(__int64 a1, __int64 a2)
{
  unsigned __int16 v4; // ax
  NTSTATUS v5; // edi
  KIRQL v6; // r15
  struct _LIST_ENTRY *InterfaceByInterfaceGuid; // rsi
  _WORD *v8; // rbx
  struct _NDIS_REFCOUNT_BLOCK *Flink; // rcx
  KIRQL v10; // bl
  UNICODE_STRING GuidString; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v13[3]; // [rsp+30h] [rbp-30h] BYREF
  GUID Guid; // [rsp+48h] [rbp-18h] BYREF

  *(_DWORD *)&GuidString.Length = 0;
  GuidString.Buffer = 0LL;
  if ( (unsigned __int8)byte_1C009261D >= 4u )
    WPP_SF_ZZ(a1, a2, (const wchar_t *)a1, (const wchar_t *)a2);
  v4 = *(_WORD *)a1 - ndisDeviceStr.Length;
  GuidString.Buffer = (wchar_t *)(*(_QWORD *)(a1 + 8) + 2 * ((unsigned __int64)ndisDeviceStr.Length >> 1));
  GuidString.Length = v4;
  GuidString.MaximumLength = v4 + 2;
  v5 = RtlGUIDFromString(&GuidString, &Guid);
  if ( v5 >= 0 )
  {
    v6 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    InterfaceByInterfaceGuid = ndisIfFindInterfaceByInterfaceGuid(&Guid);
    if ( InterfaceByInterfaceGuid )
    {
      v8 = (_WORD *)&InterfaceByInterfaceGuid[37].Flink + 2;
      if ( *(_WORD *)a2 <= 0x200u )
        *v8 = *(_WORD *)a2;
      else
        *v8 = 512;
      memmove((char *)&InterfaceByInterfaceGuid[37].Flink + 6, *(const void **)(a2 + 8), (unsigned __int16)*v8);
      Flink = (struct _NDIS_REFCOUNT_BLOCK *)InterfaceByInterfaceGuid[90].Flink;
      v13[0] = 0LL;
      v13[2] = 0x1400000204LL;
      v13[1] = (char *)InterfaceByInterfaceGuid + 596;
      NdisReferenceWithTag(Flink, 0xBu);
      ++LODWORD(InterfaceByInterfaceGuid[81].Blink);
      KeReleaseSpinLock(&ndisIfListLock, v6);
      ndisIfUpdatePersistedInterfaceInfo(
        (unsigned __int8 *)&InterfaceByInterfaceGuid[82],
        0x204u,
        4u,
        (unsigned __int8 *)&InterfaceByInterfaceGuid[37].Flink + 4);
      ndisNsiNotifyClientInterfaceChange(InterfaceByInterfaceGuid, 0LL, v13);
      v10 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
      IFBLOCK_DECREMENT_REF(InterfaceByInterfaceGuid, 0xBu);
      KeReleaseSpinLock(&ndisIfListLock, v10);
    }
    else
    {
      KeReleaseSpinLock(&ndisIfListLock, v6);
      v5 = -1073741772;
    }
  }
  if ( (unsigned __int8)byte_1C009261D >= 4u )
    WPP_SF_d(0xA6u, &WPP_af1106a9a46b3e0e2b308003762cd579_Traceguids, v5);
  return (unsigned int)v5;
}
