/*
 * XREFs of ?Create@CDecodeBitmap@@SAJU_LUID@@PEAPEAV1@@Z @ 0x180076D18
 * Callers:
 *     ?CreateAndAddSwapChainBuffers@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@@Z @ 0x1800763B4 (-CreateAndAddSwapChainBuffers@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??0CDecodeBitmap@@IEAA@U_LUID@@@Z @ 0x180076DC0 (--0CDecodeBitmap@@IEAA@U_LUID@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDecodeBitmap::Create(struct _LUID a1, struct CDecodeBitmap **a2)
{
  unsigned int v4; // edi
  CDecodeBitmap *v5; // rax
  struct CDecodeBitmap *v6; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = 0;
  v5 = (CDecodeBitmap *)HeapAlloc(WPF::g_processHeap, 0, 0xD0uLL);
  if ( !v5 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v6 = CDecodeBitmap::CDecodeBitmap(v5, a1);
  *a2 = v6;
  if ( v6 )
  {
    (*(void (__fastcall **)(struct CDecodeBitmap *))(*(_QWORD *)v6 + 8LL))(v6);
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x16u);
  }
  return v4;
}
