/*
 * XREFs of ?StartInactivityTimer@CProcess@@QEAAXXZ @ 0x18001552C
 * Callers:
 *     ?Invoke@CStreamStoppedWorkItem@@UEAAXXZ @ 0x180028680 (-Invoke@CStreamStoppedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     WPP_SF_D @ 0x18000818C (WPP_SF_D.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180008460 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001010C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CProcess::StartInactivityTimer(CProcess *this)
{
  signed int v2; // ebx
  __int64 v3; // rax
  signed int LastError; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+38h] [rbp-20h] BYREF
  char v6; // [rsp+40h] [rbp-18h]
  int v7; // [rsp+60h] [rbp+8h] BYREF
  int v8; // [rsp+64h] [rbp+Ch]

  v2 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 376);
  v6 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x2Bu,
      &WPP_16513b4b06ea364292c42252679a25cf_Traceguids,
      *((_DWORD *)this + 54));
  }
  if ( !*((_QWORD *)this + 52) )
  {
    v3 = (*(__int64 (__fastcall **)(struct CAudioThreadPool *, _QWORD, CProcess *))(*(_QWORD *)ThreadPool + 8LL))(
           ThreadPool,
           CProcess::InactivityTimerCallback,
           this);
    *((_QWORD *)this + 52) = v3;
    if ( v3 )
    {
      _InterlockedIncrement((volatile signed __int32 *)this + 2);
      v7 = -200000000;
      v8 = -1;
      (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD, int *, _QWORD, int))(*(_QWORD *)ThreadPool + 24LL))(
        ThreadPool,
        *((_QWORD *)this + 52),
        &v7,
        0LL,
        100);
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
        WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Cu, &WPP_16513b4b06ea364292c42252679a25cf_Traceguids, v2);
      }
      AudPolicyLogError("CProcess::StartInactivityTimer", 3453, v2);
    }
  }
  if ( v6 )
    LeaveCriticalSection(lpCriticalSection);
}
