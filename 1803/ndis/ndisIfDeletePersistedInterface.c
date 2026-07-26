/*
 * XREFs of ndisIfDeletePersistedInterface @ 0x1C0042820
 * Callers:
 *     ndisCheckIfTypeMismatch @ 0x1C005F854 (ndisCheckIfTypeMismatch.c)
 *     ?ndisIfInitGetInterfaceList@@YAJXZ @ 0x1C00DC740 (-ndisIfInitGetInterfaceList@@YAJXZ.c)
 *     ndisIfCreateInterfaceForiScsi @ 0x1C00DD388 (ndisIfCreateInterfaceForiScsi.c)
 *     ndisHandlePnPRequest @ 0x1C0100008 (ndisHandlePnPRequest.c)
 * Callees:
 *     ndisIfFindInterfaceByNetLuid @ 0x1C001D438 (ndisIfFindInterfaceByNetLuid.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     ?ndisIfDeletePersistedInterfaceIsolationInfo@@YAJT_NET_LUID_LH@@@Z @ 0x1C003ECC8 (-ndisIfDeletePersistedInterfaceIsolationInfo@@YAJT_NET_LUID_LH@@@Z.c)
 *     McTemplateK0qqq @ 0x1C00412A4 (McTemplateK0qqq.c)
 *     NdisIfDeregisterInterface @ 0x1C00B2850 (NdisIfDeregisterInterface.c)
 *     ndisInitializeNsi @ 0x1C00B5974 (ndisInitializeNsi.c)
 *     ?ndisIfUpdatePersistedInterfaceInfo@@YAHPEAEKK0@Z @ 0x1C00DCA98 (-ndisIfUpdatePersistedInterfaceInfo@@YAHPEAEKK0@Z.c)
 */

__int64 __fastcall ndisIfDeletePersistedInterface(__int64 a1)
{
  NET_IFINDEX Flink_high; // ebx
  unsigned int v3; // edi
  _LIST_ENTRY *InterfaceByNetLuid; // rax
  KIRQL v5; // r8
  _LIST_ENTRY *Arg2; // rbx
  KIRQL v7; // r8
  struct _MCGEN_TRACE_CONTEXT *v8; // rcx
  __int64 v9; // rdx
  int v10; // ebx
  _QWORD v12[10]; // [rsp+30h] [rbp-50h] BYREF
  int v13; // [rsp+A0h] [rbp+20h] BYREF
  union _NET_LUID_LH v14; // [rsp+A8h] [rbp+28h] BYREF

  Flink_high = 0;
  v13 = 0;
  if ( (unsigned __int8)byte_1C009961D >= 4u )
    WPP_SF_q(0xBCu, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, a1);
  if ( !ndisNsiInitialized )
    ndisInitializeNsi();
  if ( a1 )
  {
    v14.Value = (*(_DWORD *)a1 & 0xFFFFFF | ((unsigned __int64)*(unsigned __int16 *)(a1 + 4) << 24)) << 24;
    KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    InterfaceByNetLuid = ndisIfFindInterfaceByNetLuid((_LIST_ENTRY *)v14.Value);
    if ( InterfaceByNetLuid )
      Flink_high = HIDWORD(InterfaceByNetLuid->Flink);
    KeReleaseSpinLock(&ndisIfListLock, v5);
    if ( Flink_high
      && (NdisIfDeregisterInterface(Flink_high),
          KeAcquireSpinLockRaiseToDpc(&ndisIfListLock),
          Arg2 = ndisIfFindInterfaceByNetLuid((_LIST_ENTRY *)v14.Value),
          KeReleaseSpinLock(&ndisIfListLock, v7),
          Arg2) )
    {
      v13 |= 1u;
      ndisIfUpdatePersistedInterfaceInfo((unsigned __int8 *)&Arg2[82], 4u, 0x43Cu, (unsigned __int8 *)&v13);
      v3 = -1073741823;
      if ( (unsigned __int8)byte_1C009961D >= 2u )
        WPP_SF_q(0xBDu, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, (__int64)Arg2);
      if ( (Microsoft_Windows_NDISEnableBits & 0x10000) != 0 )
        McTemplateK0qqq(
          v8,
          &DeregisterInterfaceFailed,
          &NDIS_PROVIDER_ID,
          0xC0000001,
          0x45FCu,
          (const unsigned int)Arg2);
    }
    else
    {
      memset(v12, 0, 0x48uLL);
      v12[0] = 0LL;
      LODWORD(v12[1]) = 0;
      v12[4] = 0x300000000LL;
      v12[7] = 0LL;
      LODWORD(v12[8]) = 0;
      v12[2] = &NPI_MS_NDIS_MODULEID;
      v12[5] = &v14;
      LODWORD(v12[3]) = 10;
      LODWORD(v12[6]) = 8;
      v10 = 0;
      if ( (int)NsiSetAllParametersEx(v12) < 0 )
        v10 = -1073741823;
      if ( (int)ndisIfDeletePersistedInterfaceIsolationInfo(v14, v9) < 0 )
        v10 = -1073741823;
      v3 = v10;
    }
  }
  else
  {
    v3 = -1073741811;
  }
  if ( (unsigned __int8)byte_1C009961D >= 4u )
    WPP_SF_qD(0xBEu, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, a1, v3);
  return v3;
}
