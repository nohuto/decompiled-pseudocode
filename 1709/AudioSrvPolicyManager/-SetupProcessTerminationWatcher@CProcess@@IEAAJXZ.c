/*
 * XREFs of ?SetupProcessTerminationWatcher@CProcess@@IEAAJXZ @ 0x1800103D8
 * Callers:
 *     ?Initialize@CProcess@@IEAAJPEAXKKPEBG11H1HHHHHHHH@Z @ 0x18000E7A4 (-Initialize@CProcess@@IEAAJPEAXKKPEBG11H1HHHHHHHH@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180003DB4 (WPP_SF_D.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800046C0 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180027AD0 (_guard_dispatch_icall_nop.c)
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
  *((_QWORD *)this + 57) = v3;
  if ( v3 )
  {
    _InterlockedIncrement((volatile signed __int32 *)this + 2);
    (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)ThreadPool + 88LL))(
      ThreadPool,
      *((_QWORD *)this + 57),
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
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x32u, &WPP_9c3c8450e3c737dcda82a54556fbcbcb_Traceguids, v2);
    }
    AudPolicyLogError("CProcess::SetupProcessTerminationWatcher", 3693, v2);
  }
  return (unsigned int)v2;
}
