/*
 * XREFs of ?Release@CompositionObject@@QEBA_JXZ @ 0x1C003C7F0
 * Callers:
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAX_KKPEAUtagINPUTDEST@@@Z @ 0x1C00134C0 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAX_KKPEAUtagINPUTDEST@@@Z.c)
 *     NtDuplicateCompositionInputSink @ 0x1C0151890 (NtDuplicateCompositionInputSink.c)
 *     NtSetCompositionSurfaceAnalogExclusive @ 0x1C0151F30 (NtSetCompositionSurfaceAnalogExclusive.c)
 * Callees:
 *     <none>
 */

LONG_PTR __fastcall CompositionObject::Release(CompositionObject *this)
{
  return ObfDereferenceObject(this);
}
