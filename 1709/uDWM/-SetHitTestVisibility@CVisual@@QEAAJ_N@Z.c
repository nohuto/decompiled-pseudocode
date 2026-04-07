/*
 * XREFs of ?SetHitTestVisibility@CVisual@@QEAAJ_N@Z @ 0x180009FE8
 * Callers:
 *     ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222PEA_N@Z @ 0x1800071EC (-_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222P.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVisual::SetHitTestVisibility(CVisual *this)
{
  __int64 v1; // rax
  unsigned int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // rdx
  int v5; // eax

  v1 = *((_QWORD *)this + 2);
  v2 = 0;
  v3 = *(_QWORD *)(v1 + 16);
  if ( v3 )
  {
    if ( v1 )
      v4 = *(unsigned int *)(v1 + 24);
    else
      v4 = 0LL;
    v5 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v3 + 400LL))(v3, v4, 1LL);
    v2 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x67Eu);
  }
  return v2;
}
