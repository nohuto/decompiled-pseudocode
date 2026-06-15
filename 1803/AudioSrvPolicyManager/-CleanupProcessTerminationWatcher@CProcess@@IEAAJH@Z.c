/*
 * XREFs of ?CleanupProcessTerminationWatcher@CProcess@@IEAAJH@Z @ 0x180015E90
 * Callers:
 *     ??1CProcess@@MEAA@XZ @ 0x180014BB8 (--1CProcess@@MEAA@XZ.c)
 *     ??_GCApplicationManager@@MEAAPEAXI@Z @ 0x18001A8D0 (--_GCApplicationManager@@MEAAPEAXI@Z.c)
 *     ?RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18001C550 (-RemoveProcess@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 *     ?ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18001D100 (-ProcessTerminated@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x18000818C (WPP_SF_D.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001010C (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProcess::CleanupProcessTerminationWatcher(CProcess *this, int a2)
{
  __int64 v4; // rdx
  char *v5; // rsi
  DWORD LastError; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-20h] BYREF
  char v9; // [rsp+30h] [rbp-18h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 424);
  v9 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  if ( *((_QWORD *)this + 58) )
  {
    v4 = *((_QWORD *)this + 58);
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x35u,
        &WPP_16513b4b06ea364292c42252679a25cf_Traceguids,
        *((_DWORD *)this + 54));
      v4 = *((_QWORD *)this + 58);
    }
    (*(void (__fastcall **)(struct CAudioThreadPool *, __int64, __int64))(*(_QWORD *)ThreadPool + 48LL))(
      ThreadPool,
      v4,
      1LL);
    (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD))(*(_QWORD *)ThreadPool + 96LL))(
      ThreadPool,
      *((_QWORD *)this + 58));
    *((_QWORD *)this + 58) = 0LL;
    if ( a2 )
    {
      v5 = (char *)*((_QWORD *)this + 26);
      if ( (unsigned __int64)(v5 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        LastError = GetLastError();
        CloseHandle(v5);
        SetLastError(LastError);
      }
      *((_QWORD *)this + 26) = 0LL;
    }
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(CProcess *))(*(_QWORD *)this + 32LL))(this);
      (*(void (__fastcall **)(CProcess *, __int64))(*(_QWORD *)this + 24LL))(this, 1LL);
    }
  }
  if ( v9 )
  {
    LeaveCriticalSection(lpCriticalSection);
    v9 = 0;
  }
  return 0LL;
}
