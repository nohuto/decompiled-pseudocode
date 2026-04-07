/*
 * XREFs of ?IsWindowCurrentlyAnimating@CAnimationScheduler@@QEAA_NQEAUHWND__@@HK@Z @ 0x180010414
 * Callers:
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x180009E40 (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 *     ??1CAnimationComponent@@UEAA@XZ @ 0x18000AB28 (--1CAnimationComponent@@UEAA@XZ.c)
 *     _lambda_01b389546427082a9499a493e716ac63_::operator() @ 0x18000CC60 (_lambda_01b389546427082a9499a493e716ac63_--operator().c)
 *     ?ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x18000CDBC (-ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?IsWindowInSystemArrangementAnimation@CTopLevelWindow3D@@AEBA_NXZ @ 0x18002C96C (-IsWindowInSystemArrangementAnimation@CTopLevelWindow3D@@AEBA_NXZ.c)
 *     ?HasAnimatingOwnerWindow@CStoryboard@@QEAA_NPEAVCWindowData@@H@Z @ 0x180096BBC (-HasAnimatingOwnerWindow@CStoryboard@@QEAA_NPEAVCWindowData@@H@Z.c)
 * Callees:
 *     ?HasAnimationComponent@CStoryboard@@QEAA_NPEAUHWND__@@K@Z @ 0x18000530C (-HasAnimationComponent@CStoryboard@@QEAA_NPEAUHWND__@@K@Z.c)
 */

char __fastcall CAnimationScheduler::IsWindowCurrentlyAnimating(CAnimationScheduler *this, HWND a2, int a3, int a4)
{
  unsigned int v4; // esi
  char v5; // r10
  __int64 v6; // rbx
  __int64 v10; // r14
  CStoryboard *v11; // rcx

  v4 = *((_DWORD *)this + 10);
  v5 = 0;
  v6 = 0LL;
  if ( v4 )
  {
    v10 = *((_QWORD *)this + 2);
    do
    {
      v11 = *(CStoryboard **)(v10 + 8 * v6);
      if ( *((_DWORD *)v11 + 6) != 4 && (a3 == -1 || a3 == *((_DWORD *)v11 + 18)) )
      {
        v5 = a2 ? CStoryboard::HasAnimationComponent(v11, a2, a4) : 1;
        if ( v5 )
          break;
      }
      v6 = (unsigned int)(v6 + 1);
    }
    while ( (unsigned int)v6 < v4 );
  }
  return v5;
}
