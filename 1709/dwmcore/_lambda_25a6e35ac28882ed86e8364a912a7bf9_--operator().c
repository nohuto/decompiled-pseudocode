/*
 * XREFs of _lambda_25a6e35ac28882ed86e8364a912a7bf9_::operator() @ 0x180124028
 * Callers:
 *     ?NotifyOnDeadObserver@CProcessAttributionManager@@AEAAXPEAVCProcessAttributionObserver@@@Z @ 0x1801242C4 (-NotifyOnDeadObserver@CProcessAttributionManager@@AEAAXPEAVCProcessAttributionObserver@@@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

char __fastcall lambda_25a6e35ac28882ed86e8364a912a7bf9_::operator()(__int64 a1, __int64 a2)
{
  char v2; // bl

  v2 = 0;
  if ( !*(_DWORD *)(a2 + 124) && !*(_QWORD *)(a2 + 112) )
  {
    v2 = 1;
    WPF::ProcessHeapImpl::Free((void *)a2);
  }
  return v2;
}
