/*
 * XREFs of ?_CreateAndAddCrossfadeAnimationComponent@CSSCrossFade@@MEAAJPEAVCWindowData@@_NPEAPEAVCAnimationComponent@@@Z @ 0x18009D810
 * Callers:
 *     <none>
 * Callees:
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x180009A0C (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     ?GetClonableOwnedWindowCount@CTransitionVisualController@@SAHPEAVCWindowData@@@Z @ 0x180042144 (-GetClonableOwnedWindowCount@CTransitionVisualController@@SAHPEAVCWindowData@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSSCrossFade::_CreateAndAddCrossfadeAnimationComponent(
        CSSCrossFade *this,
        struct CWindowData *a2,
        __int64 a3,
        struct CAnimationComponent **a4)
{
  __int64 v7; // rdx
  char v8; // di
  int v9; // eax

  if ( (_BYTE)a3 )
  {
    *((_DWORD *)a2 + 150) |= 0x200000u;
  }
  else if ( (*((_DWORD *)a2 + 150) & 0x10000000) == 0
         || (int)CTransitionVisualController::GetClonableOwnedWindowCount(a2, (__int64)a2, a3) <= 0 )
  {
    v7 = *((unsigned int *)a2 + 150);
    if ( (v7 & 0x20000000) == 0 )
    {
      v8 = 1;
      goto LABEL_4;
    }
  }
  v7 = *((unsigned int *)a2 + 150);
  v8 = 0;
LABEL_4:
  v9 = (*(__int64 (__fastcall **)(CSSCrossFade *, __int64))(*(_QWORD *)this + 88LL))(this, v7);
  return CStoryboard::_CreateAndAddAnimationComponentControlReuse(this, a2, 1, v9, 0LL, 0LL, 0xFFFFFFFF, v8, a4);
}
