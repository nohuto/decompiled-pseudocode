/*
 * XREFs of ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C000FC20
 * Callers:
 *     NtCompositionSetDropTarget @ 0x1C0001550 (NtCompositionSetDropTarget.c)
 *     NtQueryCompositionInputSink @ 0x1C0001D70 (NtQueryCompositionInputSink.c)
 *     NtQueryCompositionInputQueueAndTransform @ 0x1C00023C0 (NtQueryCompositionInputQueueAndTransform.c)
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAXKPEAUtagINPUTDEST@@@Z @ 0x1C0002648 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAXKPEAUtagINPUTDEST@@@Z.c)
 *     ?SatisfyNonPointerInputSinkInfoRequest@CSpatialProcessor@@IEAAXAEBU_InputHitTestResult@@@Z @ 0x1C00028A8 (-SatisfyNonPointerInputSinkInfoRequest@CSpatialProcessor@@IEAAXAEBU_InputHitTestResult@@@Z.c)
 *     NtUpdateInputSinkTransforms @ 0x1C00028E0 (NtUpdateInputSinkTransforms.c)
 *     ?SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z @ 0x1C0004124 (-SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z.c)
 *     NtDuplicateCompositionInputSink @ 0x1C0005C30 (NtDuplicateCompositionInputSink.c)
 *     NtQueryCompositionInputSinkLuid @ 0x1C0011060 (NtQueryCompositionInputSinkLuid.c)
 *     NtQueryCompositionInputSinkViewId @ 0x1C0011770 (NtQueryCompositionInputSinkViewId.c)
 *     NtQueryCompositionInputIsImplicit @ 0x1C0012440 (NtQueryCompositionInputIsImplicit.c)
 *     ?GetTransformFromInputSink@@YAJPEAXPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C00BB838 (-GetTransformFromInputSink@@YAJPEAXPEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@@Z @ 0x1C012C0EC (-AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@@Z.c)
 * Callees:
 *     ?ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z @ 0x1C000FC60 (-ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z.c)
 */

__int64 __fastcall CompositionInputObject::ResolveHandle(
        void *a1,
        __int64 a2,
        __int64 a3,
        struct CompositionInputObject **a4)
{
  __int64 result; // rax
  struct CompositionInputObject *v6; // [rsp+58h] [rbp+20h] BYREF

  *a4 = 0LL;
  v6 = 0LL;
  result = CompositionObject::ResolveHandle(a1, a2, a3, 2LL, &v6);
  if ( (int)result >= 0 )
    *a4 = v6;
  return result;
}
