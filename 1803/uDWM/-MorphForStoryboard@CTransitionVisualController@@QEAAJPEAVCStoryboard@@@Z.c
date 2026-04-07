/*
 * XREFs of ?MorphForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@@Z @ 0x1800078A0
 * Callers:
 *     ?_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z @ 0x18000B56C (-_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z.c)
 * Callees:
 *     ?_CanMorph@CTransitionVisualController@@IEAA_NPEAVCAnimationComponent@@@Z @ 0x180007994 (-_CanMorph@CTransitionVisualController@@IEAA_NPEAVCAnimationComponent@@@Z.c)
 *     ?_UpdateClipping@CTransitionVisualController@@IEAAXPEAVCAnimationComponent@@@Z @ 0x1800080E8 (-_UpdateClipping@CTransitionVisualController@@IEAAXPEAVCAnimationComponent@@@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CopyVisual@CAnimatedTransitionVisual@@QEAAJPEAV1@@Z @ 0x180093210 (-CopyVisual@CAnimatedTransitionVisual@@QEAAJPEAV1@@Z.c)
 *     ?Morph@CAnimationComponent@@QEAAXXZ @ 0x1800A3234 (-Morph@CAnimationComponent@@QEAAXXZ.c)
 */

__int64 __fastcall CTransitionVisualController::MorphForStoryboard(
        CTransitionVisualController *this,
        struct CStoryboard *a2)
{
  unsigned int v2; // r15d
  __int64 v3; // rbp
  CTransitionVisualController *i; // r12
  __int64 v6; // rsi
  __int64 j; // r14
  __int64 v8; // rax
  __int64 v9; // rdi
  RECT v11; // xmm1
  HMONITOR v12; // rbx
  int v13; // eax
  CTransitionVisualController *v14; // rcx
  RECT rc; // [rsp+30h] [rbp-68h] BYREF
  RECT v16; // [rsp+40h] [rbp-58h] BYREF

  v2 = 0;
  v3 = 0LL;
  for ( i = this; (unsigned int)v3 < *((_DWORD *)a2 + 28); v3 = (unsigned int)(v3 + 1) )
  {
    v6 = *(_QWORD *)(*((_QWORD *)a2 + 11) + 8 * v3);
    if ( CTransitionVisualController::_CanMorph(this, (struct CAnimationComponent *)v6) )
    {
      for ( j = 0LL; (unsigned int)j < *((_DWORD *)i + 34); j = (unsigned int)(j + 1) )
      {
        v8 = *((_QWORD *)i + 14);
        v9 = *(_QWORD *)(v8 + 8 * j);
        if ( v6 != v9
          && CTransitionVisualController::_CanMorph(this, *(struct CAnimationComponent **)(v8 + 8 * j))
          && (*(_BYTE *)(*(_QWORD *)(v9 + 40) + 975LL) || !*(_BYTE *)(*(_QWORD *)(v6 + 40) + 975LL)) )
        {
          this = *(CTransitionVisualController **)(v9 + 16);
          if ( (unsigned __int64)this + 1 > 1
            && this == *(CTransitionVisualController **)(v6 + 16)
            && *(_QWORD *)(v9 + 128) != *(_QWORD *)(v6 + 128)
            && *(_BYTE *)(v9 + 74) == *(_BYTE *)(v6 + 74) )
          {
            v11 = *(RECT *)(v6 + 88);
            v16 = *(RECT *)(v9 + 88);
            rc = v11;
            v12 = MonitorFromRect(&rc, 2u);
            if ( MonitorFromRect(&v16, 2u) == v12 && !*(_BYTE *)(v9 + 72) && !*(_BYTE *)(v6 + 72) )
            {
              v13 = CAnimatedTransitionVisual::CopyVisual(
                      *(CAnimatedTransitionVisual **)(v6 + 40),
                      *(struct CAnimatedTransitionVisual **)(v9 + 40));
              v2 = v13;
              if ( v13 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(
                  0x14u,
                  &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
                  2u,
                  v13,
                  0xA50u);
                return v2;
              }
              CTransitionVisualController::_UpdateClipping(v14, (struct CAnimationComponent *)v6);
              CAnimationComponent::Morph((CAnimationComponent *)v9);
            }
          }
        }
      }
    }
  }
  return v2;
}
