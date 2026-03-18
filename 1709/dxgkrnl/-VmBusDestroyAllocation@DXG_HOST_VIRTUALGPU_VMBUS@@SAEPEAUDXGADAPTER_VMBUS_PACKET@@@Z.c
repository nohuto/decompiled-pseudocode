/*
 * XREFs of ?VmBusDestroyAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0192BC0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkDestroyAllocation2 @ 0x1C008E3A0 (DxgkDestroyAllocation2.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusDestroyAllocation(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // r8
  unsigned __int64 v2; // r9
  __int64 v3; // rax
  _QWORD v5[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  v1 = *((_QWORD *)a1 + 9);
  v2 = *(unsigned int *)(v1 + 32);
  if ( (_DWORD)v2 && ((unsigned __int64)*((unsigned int *)a1 + 20) - 44) / v2 < 4 )
  {
    v3 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v3 + 24) = 892LL;
    WdLogEvent5_WdError(v3);
  }
  else
  {
    v5[0] = 0LL;
    v6 = 0LL;
    v5[0] = *(_QWORD *)(v1 + 24);
    v5[1] = v1 + 40;
    HIDWORD(v6) = *(_DWORD *)(v1 + 36);
    LODWORD(v6) = v2;
    DxgkDestroyAllocation2((ULONG64)v5);
  }
  return 0;
}
