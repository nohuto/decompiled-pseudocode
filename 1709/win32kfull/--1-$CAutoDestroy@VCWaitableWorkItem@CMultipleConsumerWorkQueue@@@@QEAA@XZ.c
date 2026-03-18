/*
 * XREFs of ??1?$CAutoDestroy@VCWaitableWorkItem@CMultipleConsumerWorkQueue@@@@QEAA@XZ @ 0x1C01A0DC4
 * Callers:
 *     _lambda_fe455f6b6173b0bb193a7b901cfd063e_::operator() @ 0x1C0036BCC (_lambda_fe455f6b6173b0bb193a7b901cfd063e_--operator().c)
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C00381D8 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CAutoDestroy<CMultipleConsumerWorkQueue::CWaitableWorkItem>::~CAutoDestroy<CMultipleConsumerWorkQueue::CWaitableWorkItem>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    EngFreeMem(v1);
}
