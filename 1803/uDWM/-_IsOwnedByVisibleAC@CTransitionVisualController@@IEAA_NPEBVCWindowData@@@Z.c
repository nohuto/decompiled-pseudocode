/*
 * XREFs of ?_IsOwnedByVisibleAC@CTransitionVisualController@@IEAA_NPEBVCWindowData@@@Z @ 0x180001C9C
 * Callers:
 *     ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x180007CFC (-_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ.c)
 * Callees:
 *     ?_IsAnimationComponentVisible@CTransitionVisualController@@IEAA_NPEAVCAnimationComponent@@@Z @ 0x18006C5C8 (-_IsAnimationComponentVisible@CTransitionVisualController@@IEAA_NPEAVCAnimationComponent@@@Z.c)
 */

char __fastcall CTransitionVisualController::_IsOwnedByVisibleAC(
        CTransitionVisualController *this,
        const struct CWindowData *a2)
{
  CTransitionVisualController *v3; // rbp
  char v4; // si
  __int64 v5; // rdi
  struct CAnimationComponent *v6; // rdx

  v3 = this;
  v4 = 0;
  do
  {
    v5 = 0LL;
    if ( *((_DWORD *)v3 + 34) )
    {
      while ( 1 )
      {
        v6 = *(struct CAnimationComponent **)(*((_QWORD *)v3 + 14) + 8 * v5);
        if ( *((_QWORD *)v6 + 2) == *((_QWORD *)a2 + 5)
          && CTransitionVisualController::_IsAnimationComponentVisible(this, v6) )
        {
          break;
        }
        v5 = (unsigned int)(v5 + 1);
        if ( (unsigned int)v5 >= *((_DWORD *)v3 + 34) )
          goto LABEL_5;
      }
      v4 = 1;
    }
LABEL_5:
    a2 = (const struct CWindowData *)*((_QWORD *)a2 + 68);
    if ( !a2 )
      break;
    this = (CTransitionVisualController *)(*((_DWORD *)a2 + 150) & 0xFFF);
    if ( (_DWORD)this != 4095 && (*((_DWORD *)a2 + 150) & 0x10000000) == 0 )
      break;
  }
  while ( *((_QWORD *)a2 + 5) );
  return v4;
}
