/*
 * XREFs of ?_LogStoryboardEvent@CStoryboard@@IEAAXXZ @ 0x180005680
 * Callers:
 *     ?_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z @ 0x180004540 (-_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z.c)
 *     ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x180004A0C (-_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 *     ?ScheduleStartAnimation@CStoryboard@@QEAAJXZ @ 0x180005354 (-ScheduleStartAnimation@CStoryboard@@QEAAJXZ.c)
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x180005D7C (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 *     ?Initialize@CStoryboard@@MEAAJXZ @ 0x180005F40 (-Initialize@CStoryboard@@MEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     Template_qd @ 0x18009C44C (Template_qd.c)
 */

void __fastcall CStoryboard::_LogStoryboardEvent(unsigned __int64 this, __int64 a2)
{
  int v3; // ecx
  __int64 v4; // rax
  unsigned __int64 v5; // r8
  bool v6; // zf
  __int64 *v7; // rcx
  __int64 v8; // rax
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF

  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    Template_qd(this, a2, *(unsigned int *)(this + 24), *(unsigned int *)(this + 28));
  if ( *(_DWORD *)(this + 28) != -1 )
  {
    v3 = *(_DWORD *)(this + 24);
    if ( (unsigned int)(v3 - 3) <= 1 )
    {
      v9 = *(_OWORD *)(this + 32);
      v4 = v9;
      if ( !(_QWORD)v9 )
        v4 = *((_QWORD *)&v9 + 1);
      if ( v4 )
      {
        v5 = this | 0xD100000000000000uLL;
        v6 = v3 == 3;
        v7 = (__int64 *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4);
        v8 = *v7;
        if ( v6 )
          (*(void (__fastcall **)(__int64 *, __int128 *, unsigned __int64))(v8 + 224))(v7, &v9, v5);
        else
          (*(void (__fastcall **)(__int64 *, __int128 *, unsigned __int64))(v8 + 232))(v7, &v9, v5);
      }
    }
  }
}
