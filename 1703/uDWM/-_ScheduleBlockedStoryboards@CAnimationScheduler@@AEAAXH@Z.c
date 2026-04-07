/*
 * XREFs of ?_ScheduleBlockedStoryboards@CAnimationScheduler@@AEAAXH@Z @ 0x1800044A0
 * Callers:
 *     ?OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z @ 0x1800046F0 (-OnAnimationClockChanged@CAnimationScheduler@@UEAAXU_GUID@@W4AnimationClockState@@@Z.c)
 *     ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x180004A0C (-_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 * Callees:
 *     ?ShouldBlock@CStoryboard@@SA_NPEAV1@0@Z @ 0x180002E2C (-ShouldBlock@CStoryboard@@SA_NPEAV1@0@Z.c)
 *     ?_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z @ 0x180004540 (-_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z.c)
 *     ?Release@CStoryboard@@QEAAKXZ @ 0x180005218 (-Release@CStoryboard@@QEAAKXZ.c)
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x18000553C (-Abandon@CStoryboard@@QEAAXXZ.c)
 */

void __fastcall CAnimationScheduler::_ScheduleBlockedStoryboards(CAnimationScheduler *this, int a2)
{
  __int64 v2; // rbp
  CAnimationScheduler *i; // rdi
  __int64 v5; // rbx
  __int64 v6; // rsi

  v2 = 0LL;
  for ( i = this; (unsigned int)v2 < *((_DWORD *)i + 10); v2 = (unsigned int)(v2 + 1) )
  {
    v5 = *(_QWORD *)(*((_QWORD *)i + 2) + 8 * v2);
    if ( v5 )
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
    v6 = 0LL;
    if ( *((_DWORD *)i + 10) )
    {
      while ( 1 )
      {
        this = *(CAnimationScheduler **)(*((_QWORD *)i + 2) + 8 * v6);
        if ( *((_DWORD *)this + 6) != 4 )
        {
          if ( CStoryboard::ShouldBlock(this, (struct CStoryboard *)v5) )
            break;
        }
        v6 = (unsigned int)(v6 + 1);
        if ( (unsigned int)v6 >= *((_DWORD *)i + 10) )
          goto LABEL_8;
      }
      CStoryboard::Abandon((CStoryboard *)v5);
    }
LABEL_8:
    if ( *(_DWORD *)(v5 + 64) <= a2 && *(_DWORD *)(v5 + 24) == 1 )
      CAnimationScheduler::_ScheduleStoryboard(this, (struct CStoryboard *)v5);
    CStoryboard::Release((CStoryboard *)v5);
  }
}
