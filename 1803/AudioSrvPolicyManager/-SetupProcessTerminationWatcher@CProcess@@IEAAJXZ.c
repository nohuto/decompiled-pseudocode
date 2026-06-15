/*
 * XREFs of ?SetupProcessTerminationWatcher@CProcess@@IEAAJXZ @ 0x180015DB8
 * Callers:
 *     ?Initialize@CProcess@@IEAAJPEAXKKPEBG1_K1H1HHHHHH_NHH@Z @ 0x180013E44 (-Initialize@CProcess@@IEAAJPEAXKKPEBG1_K1H1HHHHHH_NHH@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x18000818C (WPP_SF_D.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180008460 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CProcess::SetupProcessTerminationWatcher(CProcess *this)
{
  signed int v2; // ebx
  __int64 v3; // rax
  signed int LastError; // eax

  v2 = 0;
  v3 = (*(__int64 (__fastcall **)(struct CAudioThreadPool *, void (__fastcall *)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_WAIT *, int), CProcess *))(*(_QWORD *)ThreadPool + 80LL))(
         ThreadPool,
         CProcess::ProcessTerminationWatcherCallback,
         this);
  *((_QWORD *)this + 58) = v3;
  if ( v3 )
  {
    _InterlockedIncrement((volatile signed __int32 *)this + 2);
    (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)ThreadPool + 88LL))(
      ThreadPool,
      *((_QWORD *)this + 58),
      *((_QWORD *)this + 26),
      0LL);
  }
  else
  {
    LastError = GetLastError();
    v2 = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      v2 = LastError;
  }
  if ( v2 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x34u, &WPP_16513b4b06ea364292c42252679a25cf_Traceguids, v2);
    }
    AudPolicyLogError("CProcess::SetupProcessTerminationWatcher", 3765, v2);
  }
  return (unsigned int)v2;
}
