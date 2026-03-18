/*
 * XREFs of DpiMitigatedRangeUpdate @ 0x1C01DBE68
 * Callers:
 *     DxgkMitigatedRangeUpdateCB @ 0x1C0025B00 (DxgkMitigatedRangeUpdateCB.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiMitigatedRangeUpdate(__int64 a1, CSHORT a2)
{
  __int64 v2; // rbx
  __int64 v4; // rcx
  void *v5; // rdx
  PIRP v6; // rdi
  __int64 v7; // rax

  v2 = *(_QWORD *)(a1 + 64);
  ExAcquirePushLockExclusiveEx(v2 + 5160, 0LL);
  v5 = *(void **)(v2 + 5096);
  if ( v5 )
  {
    v6 = IoCsqRemoveNextIrp((PIO_CSQ)(v2 + 4992), v5);
    if ( v6 )
    {
      KeClearEvent((PRKEVENT)(v2 + 5168));
      v6->AssociatedIrp.MasterIrp->Type = a2;
      v6->IoStatus.Status = 0;
      v6->IoStatus.Information = 2LL;
      IofCompleteRequest(v6, 1);
      KeWaitForSingleObject((PVOID)(v2 + 5168), Executive, 0, 0, 0LL);
    }
  }
  else
  {
    v7 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v7 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v7);
  }
  return ExReleasePushLockExclusiveEx(v2 + 5160, 0LL);
}
