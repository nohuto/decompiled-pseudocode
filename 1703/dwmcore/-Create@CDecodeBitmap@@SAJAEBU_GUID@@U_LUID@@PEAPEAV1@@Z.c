/*
 * XREFs of ?Create@CDecodeBitmap@@SAJAEBU_GUID@@U_LUID@@PEAPEAV1@@Z @ 0x1800212C0
 * Callers:
 *     ?CreateAndAddSwapChainBuffers@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@@Z @ 0x18007616C (-CreateAndAddSwapChainBuffers@CBindInfo@CCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@.c)
 * Callees:
 *     ??0CDecodeBitmap@@IEAA@AEBU_GUID@@U_LUID@@@Z @ 0x180021344 (--0CDecodeBitmap@@IEAA@AEBU_GUID@@U_LUID@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDecodeBitmap::Create(const struct _GUID *a1, struct _LUID a2, struct CDecodeBitmap **a3)
{
  unsigned int v6; // edi
  CDecodeBitmap *v7; // rax
  struct CDecodeBitmap *v8; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v6 = 0;
  v7 = (CDecodeBitmap *)HeapAlloc(WPF::g_processHeap, 0, 0xE8uLL);
  if ( !v7 )
  {
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
    __debugbreak();
  }
  v8 = CDecodeBitmap::CDecodeBitmap(v7, a1, a2);
  *a3 = v8;
  if ( v8 )
  {
    (*(void (__fastcall **)(struct CDecodeBitmap *))(*(_QWORD *)v8 + 8LL))(v8);
  }
  else
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x17u);
  }
  return v6;
}
