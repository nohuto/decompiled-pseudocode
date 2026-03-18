/*
 * XREFs of ??$SAFE_DELETE@VCInputSinkStruct@@@@YAXAEAPEAVCInputSinkStruct@@@Z @ 0x1800BA2D4
 * Callers:
 *     ?UpdateInputSink@CInteraction@@QEAAJPEAX@Z @ 0x180091734 (-UpdateInputSink@CInteraction@@QEAAJPEAX@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?UninitializeQueues@CInputSinkStruct@@AEAAXXZ @ 0x1800BA4B4 (-UninitializeQueues@CInputSinkStruct@@AEAAXXZ.c)
 */

void __fastcall SAFE_DELETE<CInputSinkStruct>(CInputSinkStruct **a1)
{
  CInputSinkStruct *v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    if ( *((_QWORD *)v1 + 12) )
    {
      CInputSinkStruct::UninitializeQueues(*a1);
      CloseHandle(*((HANDLE *)v1 + 12));
    }
    WPF::ProcessHeapImpl::Free(v1);
    *a1 = 0LL;
  }
}
