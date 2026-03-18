/*
 * XREFs of ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C0010B70
 * Callers:
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAX0KPEAUtagINPUTDEST@@@Z @ 0x1C000103C (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAX0KPEAUtagINPUTDEST@@@Z.c)
 *     ?SatisfyNonPointerInputSinkInfoRequest@CSpatialProcessor@@IEAAXAEBUtagDITCALLBACKSTRUCT@@@Z @ 0x1C0001210 (-SatisfyNonPointerInputSinkInfoRequest@CSpatialProcessor@@IEAAXAEBUtagDITCALLBACKSTRUCT@@@Z.c)
 *     NtUpdateInputSinkTransforms @ 0x1C0001260 (NtUpdateInputSinkTransforms.c)
 *     NtDuplicateCompositionInputSink @ 0x1C00042A0 (NtDuplicateCompositionInputSink.c)
 *     NtQueryCompositionInputSink @ 0x1C000C650 (NtQueryCompositionInputSink.c)
 *     ?SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z @ 0x1C000EC84 (-SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z.c)
 *     NtQueryCompositionInputQueueAndTransform @ 0x1C000FF20 (NtQueryCompositionInputQueueAndTransform.c)
 *     NtQueryCompositionInputIsImplicit @ 0x1C0084300 (NtQueryCompositionInputIsImplicit.c)
 *     NtQueryCompositionInputSinkLuid @ 0x1C0084510 (NtQueryCompositionInputSinkLuid.c)
 *     NtCompositionSetDropTarget @ 0x1C0087D80 (NtCompositionSetDropTarget.c)
 *     ?ResolveHitTestView@CSpatialProcessor@@AEAAKPEAPEAXI@Z @ 0x1C012E0E0 (-ResolveHitTestView@CSpatialProcessor@@AEAAKPEAPEAXI@Z.c)
 *     NtQueryCompositionInputSinkViewId @ 0x1C01508C0 (NtQueryCompositionInputSinkViewId.c)
 * Callees:
 *     ?ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z @ 0x1C0010C48 (-ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z.c)
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
  result = CompositionObject::ResolveHandle(a1, a2, a3, 3LL, &v6);
  if ( (int)result >= 0 )
    *a4 = v6;
  return result;
}
