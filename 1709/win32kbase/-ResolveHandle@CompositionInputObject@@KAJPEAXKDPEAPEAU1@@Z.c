/*
 * XREFs of ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C0151770
 * Callers:
 *     NtUpdateInputSinkTransforms @ 0x1C0002F30 (NtUpdateInputSinkTransforms.c)
 *     ?SatisfyNonPointerInputSinkInfoRequest@CSpatialProcessor@@IEAAXAEBUtagDITCALLBACKSTRUCT@@@Z @ 0x1C0012F50 (-SatisfyNonPointerInputSinkInfoRequest@CSpatialProcessor@@IEAAXAEBUtagDITCALLBACKSTRUCT@@@Z.c)
 *     ?ResolveHitTestView@CSpatialProcessor@@AEAAKPEAPEAXI@Z @ 0x1C0013100 (-ResolveHitTestView@CSpatialProcessor@@AEAAKPEAPEAXI@Z.c)
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAX_KKPEAUtagINPUTDEST@@@Z @ 0x1C00134C0 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAX_KKPEAUtagINPUTDEST@@@Z.c)
 *     NtQueryCompositionInputSink @ 0x1C001E940 (NtQueryCompositionInputSink.c)
 *     NtQueryCompositionInputQueueAndTransform @ 0x1C0021470 (NtQueryCompositionInputQueueAndTransform.c)
 *     ?SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z @ 0x1C0022274 (-SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z.c)
 *     NtQueryCompositionInputIsImplicit @ 0x1C008BAD0 (NtQueryCompositionInputIsImplicit.c)
 *     NtQueryCompositionInputSinkLuid @ 0x1C008BB50 (NtQueryCompositionInputSinkLuid.c)
 *     NtCompositionSetDropTarget @ 0x1C008D770 (NtCompositionSetDropTarget.c)
 *     NtDuplicateCompositionInputSink @ 0x1C0151890 (NtDuplicateCompositionInputSink.c)
 *     NtQueryCompositionInputSinkViewId @ 0x1C0151970 (NtQueryCompositionInputSinkViewId.c)
 * Callees:
 *     ?ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z @ 0x1C0025338 (-ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z.c)
 */

__int64 __fastcall CompositionInputObject::ResolveHandle(
        void *a1,
        ACCESS_MASK a2,
        KPROCESSOR_MODE a3,
        struct CompositionInputObject **a4)
{
  __int64 result; // rax
  struct CompositionInputObject *v6; // [rsp+58h] [rbp+20h] BYREF

  *a4 = 0LL;
  v6 = 0LL;
  result = CompositionObject::ResolveHandle(a1, a2, a3, 3, &v6);
  if ( (int)result >= 0 )
    *a4 = v6;
  return result;
}
