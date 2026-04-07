/*
 * XREFs of ?_IsOwnedByVisibleAC@CTransitionVisualController@@IEAA_NPEBVCWindowData@@@Z @ 0x1800078D8
 * Callers:
 *     ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x1800084E8 (-_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ.c)
 * Callees:
 *     ?_IsAnimationComponentVisible@CTransitionVisualController@@IEAA_NPEAVCAnimationComponent@@@Z @ 0x18006FF84 (-_IsAnimationComponentVisible@CTransitionVisualController@@IEAA_NPEAVCAnimationComponent@@@Z.c)
 */

char __fastcall CTransitionVisualController::_IsOwnedByVisibleAC(
        CTransitionVisualController *this,
        const struct CWindowData *a2)
{
  char v4; // si
  __int64 v5; // rdi
  __int64 v6; // r8
  CTransitionVisualController *v7; // rcx

  v4 = 0;
  do
  {
    v5 = 0LL;
    if ( *((_DWORD *)this + 34) )
    {
      while ( 1 )
      {
        v6 = *((_QWORD *)this + 14);
        v7 = *(CTransitionVisualController **)(v6 + 8 * v5);
        if ( *((_QWORD *)v7 + 2) == *((_QWORD *)a2 + 5)
          && CTransitionVisualController::_IsAnimationComponentVisible(
               v7,
               *(struct CAnimationComponent **)(v6 + 8 * v5)) )
        {
          break;
        }
        v5 = (unsigned int)(v5 + 1);
        if ( (unsigned int)v5 >= *((_DWORD *)this + 34) )
          goto LABEL_5;
      }
      v4 = 1;
    }
LABEL_5:
    a2 = (const struct CWindowData *)*((_QWORD *)a2 + 68);
  }
  while ( a2
       && ((*((_DWORD *)a2 + 150) & 0xFFF) == 0xFFF || (*((_DWORD *)a2 + 150) & 0x10000000) != 0)
       && *((_QWORD *)a2 + 5) );
  return v4;
}
