/*
 * XREFs of NtUserGetHimetricScaleFactorFromPixelLocation @ 0x1C01D8F20
 * Callers:
 *     <none>
 * Callees:
 *     _MonitorFromPoint @ 0x1C0020750 (_MonitorFromPoint.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     _GetPointerDeviceRects @ 0x1C010493C (_GetPointerDeviceRects.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     GetHimetricScaleForMonitor @ 0x1C01C02C8 (GetHimetricScaleForMonitor.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserGetHimetricScaleFactorFromPixelLocation(
        struct _LIST_ENTRY *a1,
        __int64 a2,
        _DWORD *a3,
        _DWORD *a4)
{
  int v8; // esi
  __int64 v9; // r9
  _QWORD *v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  unsigned int v17; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v18; // [rsp+24h] [rbp-64h] BYREF
  int v19; // [rsp+28h] [rbp-60h]
  _BYTE v20[24]; // [rsp+38h] [rbp-50h] BYREF
  __int128 v21; // [rsp+50h] [rbp-38h] BYREF

  v19 = 0;
  v8 = 1;
  EnterCrit(0LL, 1LL);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v20);
  v18 = 0;
  v17 = 0;
  if ( a1 && a3 && a4 && (unsigned int)GetPointerDeviceRects(a1, 0LL, &v21) )
  {
    if ( *(_DWORD *)*gpDispInfo <= 1u )
      goto LABEL_19;
    if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0
      && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                    + 52LL) & 1) != 0 )
    {
      v10 = (_QWORD *)(*gpDispInfo + 40LL);
    }
    else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
           && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
           && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 52LL) & 1) != 0 )
    {
      v10 = (_QWORD *)(*gpDispInfo + 56LL);
    }
    else
    {
      v10 = (_QWORD *)(*gpDispInfo + 24LL);
    }
    v11 = v21 - *v10;
    if ( (_QWORD)v21 == *v10 )
      v11 = *((_QWORD *)&v21 + 1) - v10[1];
    if ( v11 )
    {
LABEL_19:
      v14 = 1LL;
      v17 = 1;
      v13 = 1LL;
      v18 = 1;
    }
    else
    {
      v12 = MonitorFromPoint(a2, 2u);
      GetHimetricScaleForMonitor(v12, &v18, &v17);
      v13 = v18;
      v14 = v17;
    }
    v15 = W32UserProbeAddress;
    if ( (unsigned __int64)a3 >= W32UserProbeAddress )
      a3 = (_DWORD *)W32UserProbeAddress;
    *a3 = v13;
    if ( (unsigned __int64)a4 >= W32UserProbeAddress )
      a4 = (_DWORD *)W32UserProbeAddress;
    *a4 = v14;
    v19 = 1;
  }
  else
  {
    v8 = 0;
    UserSetLastError(87LL);
  }
  if ( !v20[0] )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)v20);
  }
  UserSessionSwitchLeaveCrit(v15, v13, v14, v9);
  return v8;
}
