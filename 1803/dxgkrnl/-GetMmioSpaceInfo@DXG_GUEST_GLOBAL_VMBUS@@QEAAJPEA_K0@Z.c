/*
 * XREFs of ?GetMmioSpaceInfo@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEA_K0@Z @ 0x1C017B134
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C0149978 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXG_GUEST_GLOBAL_VMBUS::GetMmioSpaceInfo(
        DXG_GUEST_GLOBAL_VMBUS *this,
        unsigned __int64 *a2,
        unsigned __int64 *a3)
{
  __int64 v5; // rcx
  unsigned __int64 v6; // rcx
  __int64 v8; // rax

  VmbChannelGetMmioSpace(*(_QWORD *)this);
  v6 = *((_QWORD *)DXGGLOBAL::GetGlobal(v5) + 158);
  if ( *a3 >= v6 && *a2 )
    return 0LL;
  v8 = WdLogNewEntry5_WdAssertion(v6);
  *(_QWORD *)(v8 + 24) = 7666LL;
  WdLogEvent5_WdAssertion(v8);
  return 3221225485LL;
}
