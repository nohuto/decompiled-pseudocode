/*
 * XREFs of AUDIOSESSIONMANAGER_rundown @ 0x1800B3F10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qq @ 0x1800AE49C (WPP_SF_qq.c)
 */

CAudioSessionManagerProxy *__fastcall AUDIOSESSIONMANAGER_rundown(CAudioSessionManagerProxy *this)
{
  __int64 v2; // rbx
  unsigned int v3; // eax

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x3Bu,
      (__int64)&WPP_bc4145dd143a32c0713a8429d6f998aa_Traceguids,
      this,
      *(_QWORD *)this);
  }
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)this + 16LL))(*(_QWORD *)this);
  if ( g_DuckingManager )
  {
    v2 = *(_QWORD *)g_DuckingManager;
    v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 40LL))(*((_QWORD *)this + 1));
    (*(void (__fastcall **)(struct IAudioDuckingManager *, _QWORD, _QWORD))(v2 + 40))(g_DuckingManager, v3, 0LL);
  }
  return CAudioSessionManagerProxy::`scalar deleting destructor'(this);
}
