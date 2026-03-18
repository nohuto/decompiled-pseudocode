/*
 * XREFs of ?Create@CCompositionFrame@DirectComposition@@SAJAEBUCOMPOSITION_FRAME_INFO@@PEAPEAV12@@Z @ 0x1C0013520
 * Callers:
 *     ?BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z @ 0x1C0015964 (-BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z.c)
 * Callees:
 *     ??0CCompositionFrame@DirectComposition@@IEAA@AEBUCOMPOSITION_FRAME_INFO@@@Z @ 0x1C001357C (--0CCompositionFrame@DirectComposition@@IEAA@AEBUCOMPOSITION_FRAME_INFO@@@Z.c)
 *     Win32AllocPool @ 0x1C003F850 (Win32AllocPool.c)
 */

__int64 __fastcall DirectComposition::CCompositionFrame::Create(
        const struct COMPOSITION_FRAME_INFO *a1,
        struct DirectComposition::CCompositionFrame **a2)
{
  DirectComposition::CCompositionFrame *v4; // rax

  *a2 = 0LL;
  v4 = (DirectComposition::CCompositionFrame *)Win32AllocPool(176LL, 1717781316LL);
  if ( v4 )
    v4 = (DirectComposition::CCompositionFrame *)DirectComposition::CCompositionFrame::CCompositionFrame(v4, a1);
  if ( v4 )
    *a2 = v4;
  return v4 == 0LL ? 0xC0000017 : 0;
}
