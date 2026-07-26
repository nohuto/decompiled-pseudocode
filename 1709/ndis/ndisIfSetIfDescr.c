/*
 * XREFs of ndisIfSetIfDescr @ 0x1C0041CD8
 * Callers:
 *     ndisHandlePnPRequest @ 0x1C0101AFC (ndisHandlePnPRequest.c)
 * Callees:
 *     IFBLOCK_DECREMENT_REF @ 0x1C000634C (IFBLOCK_DECREMENT_REF.c)
 *     NdisReferenceWithTag @ 0x1C000C060 (NdisReferenceWithTag.c)
 *     ndisIfFindInterfaceByNetLuid @ 0x1C0020520 (ndisIfFindInterfaceByNetLuid.c)
 *     memmove @ 0x1C0024F40 (memmove.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C00B4EFC (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 *     ?ndisIfUpdatePersistedInterfaceInfo@@YAHPEAEKK0@Z @ 0x1C00DAEF8 (-ndisIfUpdatePersistedInterfaceInfo@@YAHPEAEKK0@Z.c)
 */

__int64 __fastcall ndisIfSetIfDescr(__int64 a1)
{
  unsigned int updated; // r14d
  char v3; // r15
  _LIST_ENTRY *v4; // rbx
  KIRQL v5; // r12
  _LIST_ENTRY *InterfaceByNetLuid; // rax
  _LIST_ENTRY *v7; // rdi
  _WORD *p_Blink; // rbx
  __int16 v9; // ax
  KIRQL v10; // bl
  _UNICODE_STRING String2; // [rsp+20h] [rbp-40h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v14[4]; // [rsp+40h] [rbp-20h] BYREF

  updated = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  v3 = 0;
  DestinationString.Buffer = 0LL;
  *(_DWORD *)&String2.Length = 0;
  String2.Buffer = 0LL;
  if ( (unsigned __int8)byte_1C009875D >= 4u )
    WPP_SF_q(0xC7u, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids, a1);
  if ( a1 )
  {
    v4 = (_LIST_ENTRY *)((*(_DWORD *)a1 & 0xFFFFFF | ((unsigned __int64)*(unsigned __int16 *)(a1 + 4) << 24)) << 24);
    v5 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    InterfaceByNetLuid = ndisIfFindInterfaceByNetLuid(v4);
    v7 = InterfaceByNetLuid;
    if ( InterfaceByNetLuid )
    {
      NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)InterfaceByNetLuid[90].Flink, 0xDu);
      ++LODWORD(v7[81].Blink);
      KeReleaseSpinLock(&ndisIfListLock, v5);
      p_Blink = &v7->Blink;
      if ( !LOWORD(v7->Blink)
        || (RtlInitUnicodeString(&DestinationString, (PCWSTR)&v7->Blink + 1),
            RtlInitUnicodeString(&String2, (PCWSTR)(a1 + 10)),
            RtlCompareUnicodeString(&DestinationString, &String2, 1u)) )
      {
        v3 = 1;
      }
      v5 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
      if ( v3 )
      {
        memset(&v7->Blink, 0, 0x204uLL);
        v9 = *(_WORD *)(a1 + 8);
        *p_Blink = (unsigned __int16)v9 <= 0x200u ? v9 : 512;
        if ( *(_WORD *)(a1 + 8) )
          memmove((char *)&v7->Blink + 2, (const void *)(a1 + 10), (unsigned __int16)*p_Blink);
      }
    }
    else
    {
      updated = -1073741772;
    }
    KeReleaseSpinLock(&ndisIfListLock, v5);
    if ( !updated && v3 )
    {
      if ( BYTE1(v7[87].Blink) )
        updated = ndisIfUpdatePersistedInterfaceInfo(
                    (unsigned __int8 *)&v7[82],
                    0x204u,
                    0x208u,
                    (unsigned __int8 *)&v7->Blink);
      v14[1] = &v7->Blink;
      v14[0] = 2LL;
      v14[2] = 0x400000204LL;
      ndisNsiNotifyClientInterfaceChange(v7, 0LL, v14);
    }
    if ( v7 )
    {
      v10 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
      IFBLOCK_DECREMENT_REF(v7);
      KeReleaseSpinLock(&ndisIfListLock, v10);
    }
  }
  else
  {
    updated = -1073741811;
  }
  if ( (unsigned __int8)byte_1C009875D >= 4u )
    WPP_SF_qD(0xC8u, &WPP_2bc6ba5610d33065eb742478dd1ca9e7_Traceguids, a1, updated);
  return updated;
}
