/*
 * XREFs of SAFE_DELETE_ARRAY__CDisplaySet::LogTelemetry_::_5_::DisplayData_ @ 0x180077700
 * Callers:
 *     ?LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z @ 0x180076FCC (-LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

void __fastcall SAFE_DELETE_ARRAY__CDisplaySet::LogTelemetry_::_5_::DisplayData_(void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    WPF::ProcessHeapImpl::Free(v2);
    *a1 = 0LL;
  }
}
