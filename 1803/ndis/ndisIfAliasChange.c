/*
 * XREFs of ndisIfAliasChange @ 0x1C004232C
 * Callers:
 *     ndisHandleUModePnPOp @ 0x1C00CADD4 (ndisHandleUModePnPOp.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x1C000CF20 (NdisReferenceWithTag.c)
 *     IFBLOCK_DECREMENT_REF @ 0x1C001BE18 (IFBLOCK_DECREMENT_REF.c)
 *     ndisIfFindInterfaceByInterfaceGuid @ 0x1C0024848 (ndisIfFindInterfaceByInterfaceGuid.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     memmove @ 0x1C0025E40 (memmove.c)
 *     WPP_SF_d @ 0x1C00419DC (WPP_SF_d.c)
 *     WPP_SF_ZZ @ 0x1C0041CD4 (WPP_SF_ZZ.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C00C078C (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 *     ?ndisIfUpdatePersistedInterfaceInfo@@YAHPEAEKK0@Z @ 0x1C00DCA98 (-ndisIfUpdatePersistedInterfaceInfo@@YAHPEAEKK0@Z.c)
 */

__int64 __fastcall ndisIfAliasChange(__int64 a1, __int64 a2)
{
  unsigned __int16 v4; // ax
  NTSTATUS v5; // edi
  KIRQL v6; // bl
  struct _LIST_ENTRY *InterfaceByInterfaceGuid; // rax
  struct _LIST_ENTRY *v8; // rsi
  unsigned __int8 *v9; // r15
  wchar_t v10; // ax
  struct _NDIS_REFCOUNT_BLOCK *Flink; // rcx
  KIRQL v12; // bl
  UNICODE_STRING GuidString; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v15[3]; // [rsp+30h] [rbp-30h] BYREF
  GUID Guid; // [rsp+48h] [rbp-18h] BYREF

  *(_DWORD *)&GuidString.Length = 0;
  GuidString.Buffer = 0LL;
  if ( (unsigned __int8)byte_1C009961D >= 4u )
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
    v8 = InterfaceByInterfaceGuid;
    if ( InterfaceByInterfaceGuid )
    {
      v9 = (unsigned __int8 *)&InterfaceByInterfaceGuid[37].Flink + 4;
      v10 = 512;
      if ( *(_WORD *)a2 <= 0x200u )
        v10 = *(_WORD *)a2;
      *(_WORD *)v9 = v10;
      memmove((char *)&v8[37].Flink + 6, *(const void **)(a2 + 8), v10);
      Flink = (struct _NDIS_REFCOUNT_BLOCK *)v8[90].Flink;
      v15[0] = 0LL;
      v15[2] = 0x1400000204LL;
      v15[1] = v9;
      NdisReferenceWithTag(Flink, 0xBu);
      ++LODWORD(v8[81].Blink);
      KeReleaseSpinLock(&ndisIfListLock, v6);
      ndisIfUpdatePersistedInterfaceInfo((unsigned __int8 *)&v8[82], 0x204u, 4u, v9);
      ndisNsiNotifyClientInterfaceChange(v8, 0LL, v15);
      v12 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
      IFBLOCK_DECREMENT_REF(v8, 0xBu);
      KeReleaseSpinLock(&ndisIfListLock, v12);
    }
    else
    {
      KeReleaseSpinLock(&ndisIfListLock, v6);
      v5 = -1073741772;
    }
  }
  if ( (unsigned __int8)byte_1C009961D >= 4u )
    WPP_SF_d(0xA6u, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, v5);
  return (unsigned int)v5;
}
