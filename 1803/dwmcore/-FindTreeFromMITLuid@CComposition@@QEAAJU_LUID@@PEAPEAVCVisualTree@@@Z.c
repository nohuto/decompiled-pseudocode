/*
 * XREFs of ?FindTreeFromMITLuid@CComposition@@QEAAJU_LUID@@PEAPEAVCVisualTree@@@Z @ 0x18014A240
 * Callers:
 *     ?s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x180025648 (-s_HitTestRequest@CInputManager@@SAHPEAUtagDITCALLBACKSTRUCT@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?FindDesktopRenderTarget@CUINTDesktopAssociation@@QEAAJIPEAPEAVCDesktopRenderTarget@@@Z @ 0x18015DF64 (-FindDesktopRenderTarget@CUINTDesktopAssociation@@QEAAJIPEAPEAVCDesktopRenderTarget@@@Z.c)
 */

__int64 __fastcall CComposition::FindTreeFromMITLuid(CComposition *this, struct _LUID a2, struct CVisualTree **a3)
{
  int DesktopRenderTarget; // eax
  unsigned int v5; // ebx
  volatile signed __int32 *v6; // rdx
  struct CDesktopRenderTarget *v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0LL;
  DesktopRenderTarget = CUINTDesktopAssociation::FindDesktopRenderTarget(
                          (CComposition *)((char *)this + 32),
                          a2.LowPart,
                          &v8);
  v5 = DesktopRenderTarget;
  if ( DesktopRenderTarget < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802ACDB0, 1u, DesktopRenderTarget, 0xF15u);
  }
  else
  {
    v6 = (volatile signed __int32 *)*((_QWORD *)v8 + 15);
    *a3 = (struct CVisualTree *)v6;
    _InterlockedIncrement(v6 + 2);
  }
  return v5;
}
