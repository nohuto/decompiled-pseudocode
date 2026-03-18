/*
 * XREFs of NtUserGetScrollBarInfo @ 0x1C00D7260
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C0054B50 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     xxxGetScrollBarInfo @ 0x1C00D74A4 (xxxGetScrollBarInfo.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall NtUserGetScrollBarInfo(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r14
  _BYTE *v10; // rdx
  int ScrollBarInfo; // ebx
  __int64 v12; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 *v17; // rax
  int v18; // r15d
  __int64 v19; // rdi
  __int64 *v20; // rax
  __int64 CurrentProcessWin32Process; // rax
  _QWORD v23[11]; // [rsp+50h] [rbp-78h] BYREF

  memset(&v23[3], 0, 0x3CuLL);
  EnterCrit(0LL, 1LL);
  v9 = ValidateHwnd(a1);
  if ( v9 )
  {
    v23[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v23;
    v23[1] = v9;
    ++*(_DWORD *)(v9 + 8);
    if ( ((PsGetCurrentProcessWow64Process(gptiCurrent, v5, v7, v8) != 0 ? 0 : 3) & (unsigned int)a3) != 0 )
      ExRaiseDatatypeMisalignment();
    v10 = (_BYTE *)a3;
    if ( a3 >= W32UserProbeAddress )
      v10 = (_BYTE *)W32UserProbeAddress;
    *v10 = *v10;
    v10[59] = v10[59];
    LODWORD(v23[3]) = *(_DWORD *)a3;
    ScrollBarInfo = xxxGetScrollBarInfo(v9);
    v12 = 0LL;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
      v12 = *ThreadWin32Thread;
    v15 = *(_QWORD *)(v12 + 432);
    if ( (*(_BYTE *)(v15 + 224) & 1) == 0 )
    {
      v16 = 0LL;
      v17 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v17 )
        v16 = *v17;
      if ( (*(_BYTE *)(*(_QWORD *)(v16 + 432) + 224LL) & 0x20) == 0 )
      {
        LOBYTE(v18) = 18;
        v19 = 0LL;
        v20 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
        if ( v20 )
          v19 = *v20;
        if ( v19 )
        {
          if ( *(_QWORD *)(v19 + 352) )
            CaptureAndValidateUserModeDpiAwarenessContext(v19);
          if ( *(_DWORD *)(v19 + 340) )
          {
            v18 = *(_DWORD *)(v19 + 340);
          }
          else
          {
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v15, v14);
            if ( CurrentProcessWin32Process )
              v18 = *(_DWORD *)(CurrentProcessWin32Process + 280);
          }
        }
        if ( (((unsigned __int8)v18 ^ *(_BYTE *)(v9 + 368)) & 0xF) != 0 )
          TransformRectBetweenCoordinateSpaces((char *)&v23[3] + 4, (char *)&v23[3] + 4, 0LL, v9);
      }
    }
    if ( ScrollBarInfo )
    {
      *(_OWORD *)a3 = *(_OWORD *)&v23[3];
      *(_OWORD *)(a3 + 16) = *(_OWORD *)&v23[5];
      *(_OWORD *)(a3 + 32) = *(_OWORD *)&v23[7];
      *(_QWORD *)(a3 + 48) = v23[9];
      *(_DWORD *)(a3 + 56) = v23[10];
    }
    ThreadUnlock1(v15, v14);
  }
  else
  {
    ScrollBarInfo = 0;
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return ScrollBarInfo;
}
