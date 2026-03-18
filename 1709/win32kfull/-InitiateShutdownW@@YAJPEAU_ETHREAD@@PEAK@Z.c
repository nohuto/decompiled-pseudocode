/*
 * XREFs of ?InitiateShutdownW@@YAJPEAU_ETHREAD@@PEAK@Z @ 0x1C0120CE0
 * Callers:
 *     xxxSetInformationThread @ 0x1C0047F90 (xxxSetInformationThread.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     IsPrivileged @ 0x1C010BDF0 (IsPrivileged.c)
 *     ?NotifyLogon@@YAHK@Z @ 0x1C0121030 (-NotifyLogon@@YAHK@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall InitiateShutdownW(PETHREAD Thread, unsigned int *a2)
{
  int v4; // ebx
  unsigned int v5; // ebx
  PEPROCESS ThreadProcess; // rax
  __int64 ProcessWin32Process; // rax
  __int64 v8; // rbp
  __int64 result; // rax
  __int64 v10; // rsi
  char v11; // di
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 ThreadWin32Thread; // rdi
  int v16; // ebx
  int v17; // ecx
  __int64 v18; // [rsp+48h] [rbp+10h] BYREF

  v18 = 0LL;
  GetProcessLuid(Thread, &v18);
  v4 = *a2;
  if ( v18 == __PAIR64__(luidSystem[1], luidSystem[0]) )
    v5 = v4 | 0x100;
  else
    v5 = v4 & 0xFFFFFEFF;
  ThreadProcess = PsGetThreadProcess(Thread);
  ProcessWin32Process = PsGetProcessWin32Process(ThreadProcess);
  v8 = ProcessWin32Process;
  if ( !ProcessWin32Process )
    return 3221225480LL;
  v10 = *(_QWORD *)(ProcessWin32Process + 640);
  if ( PsGetThreadProcessId(Thread) != (HANDLE)gpidLogon )
  {
    v5 &= ~0x200u;
    *a2 = v5;
    if ( !v10 )
      return 3221225480LL;
    if ( !RtlAreAllAccessesGranted(*(_DWORD *)(v8 + 656), 0x40u) )
      return 3221225506LL;
    if ( (v5 & 1) != 0 )
    {
      if ( !(unsigned int)IsPrivileged(&RequiredPrivileges) )
        return 3221225569LL;
    }
    else if ( (*(_DWORD *)(v10 + 32) & 4) != 0 )
    {
      return 3221225488LL;
    }
  }
  if ( !gdwThreadEndSession )
  {
    if ( PsGetThreadProcessId(Thread) != (HANDLE)gpidLogon )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)Thread, v12, v13, v14);
      if ( (v5 & 0x8000) != 0 )
      {
        v5 &= ~0x8000u;
        *a2 = v5;
      }
      if ( (unsigned int)NotifyLogon(v5) )
        return 259LL;
      if ( ThreadWin32Thread && *(_DWORD *)(ThreadWin32Thread + 868) )
        return 3221225688LL;
    }
    v16 = v5 | 0x200;
    *a2 = v16;
    gdwShutdownFlags = v16;
    gdwThreadEndSession = (unsigned int)PsGetCurrentThreadId();
    *(_DWORD *)(gpsi + 2220LL) |= 1u;
    gpidEndSession = (void *)PsGetCurrentThreadProcessId();
    LockObjectAssignment(grpwinstaLogoff, v10);
    v17 = *(_DWORD *)(v10 + 32);
    *(_QWORD *)(v10 + 144) = v18;
    gdwLocks = v17 & 3;
    result = 0LL;
    *(_DWORD *)(v10 + 32) = v17 | 0xA;
    return result;
  }
  if ( v18 != *(_QWORD *)(grpwinstaLogoff + 144LL) && gpidEndSession != (void *)gpidLogon )
    return 3221226029LL;
  v11 = v5 & ~(_BYTE)gdwShutdownFlags & 7;
  if ( !v11 || (unsigned int)PsGetCurrentThreadId() == gdwThreadEndSession )
    return 259LL;
  if ( (v5 & 1) != 0 || v10 == grpwinstaLogoff )
    return (v11 & 4) != 0 ? -1073741267 : 259;
  else
    return 2147483665LL;
}
