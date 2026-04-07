/*
 * XREFs of ?_CreateAndAddCrossfadeAnimationComponent@CCrossFade@@MEAAJPEAVCWindowData@@_NPEAPEAVCAnimationComponent@@@Z @ 0x1800980C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@2H1PEAPEAVCAnimationComponent@@@Z @ 0x1800059B0 (-_CreateAndAddAnimationComponentControlReuse@CStoryboard@@IEAAJPEAVCWindowData@@_NHPEAUtagRECT@@.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCrossFade::_CreateAndAddCrossfadeAnimationComponent(
        CCrossFade *this,
        struct CWindowData *a2,
        __int64 a3,
        struct CAnimationComponent **a4)
{
  int v7; // eax

  v7 = (*(__int64 (__fastcall **)(CCrossFade *, _QWORD))(*(_QWORD *)this + 88LL))(this, *((unsigned int *)a2 + 150));
  return CStoryboard::_CreateAndAddAnimationComponentControlReuse(this, a2, 1, v7, 0LL, 0LL, -1, 1, a4);
}
