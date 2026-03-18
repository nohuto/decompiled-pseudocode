/*
 * XREFs of NtUserGetTitleBarInfo @ 0x1C0041080
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C00412F0 (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C0054B50 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserGetTitleBarInfo(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r14
  _BYTE *v9; // rdx
  int v10; // ebx
  __int64 v11; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 *v16; // rax
  int v17; // r15d
  __int64 v18; // rdi
  __int64 *v19; // rax
  __int64 CurrentProcessWin32Process; // rax
  _QWORD v22[3]; // [rsp+50h] [rbp-68h] BYREF
  _OWORD v23[3]; // [rsp+68h] [rbp-50h] BYREF

  memset(v23, 0, 0x2CuLL);
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  v8 = ValidateHwnd(a1);
  if ( v8 )
  {
    v22[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v22;
    v22[1] = v8;
    ++*(_DWORD *)(v8 + 8);
    if ( ((PsGetCurrentProcessWow64Process(gptiCurrent, v4, v6, v7) != 0 ? 0 : 3) & (unsigned int)a2) != 0 )
      ExRaiseDatatypeMisalignment();
    v9 = (_BYTE *)a2;
    if ( a2 >= W32UserProbeAddress )
      v9 = (_BYTE *)W32UserProbeAddress;
    *v9 = *v9;
    v9[43] = v9[43];
    LODWORD(v23[0]) = *(_DWORD *)a2;
    if ( LODWORD(v23[0]) == 44 )
    {
      *(_QWORD *)((char *)&v23[1] + 4) = 0LL;
      *(_QWORD *)((char *)&v23[1] + 12) = 0LL;
      *(_QWORD *)((char *)&v23[2] + 4) = 0LL;
      xxxCommonGetTitleBarInfo((struct tagWND *)v8, (struct tagTITLEBARINFO *)v23);
      v10 = 1;
    }
    else
    {
      UserSetLastError(87LL);
      v10 = 0;
    }
    v11 = 0LL;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
      v11 = *ThreadWin32Thread;
    if ( (*(_BYTE *)(*(_QWORD *)(v11 + 432) + 224LL) & 1) == 0 )
    {
      v15 = 0LL;
      v16 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v16 )
        v15 = *v16;
      if ( (*(_BYTE *)(*(_QWORD *)(v15 + 432) + 224LL) & 0x20) == 0 )
      {
        LOBYTE(v17) = 18;
        v18 = 0LL;
        v19 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
        if ( v19 )
          v18 = *v19;
        if ( v18 )
        {
          if ( *(_QWORD *)(v18 + 352) )
            CaptureAndValidateUserModeDpiAwarenessContext(v18);
          if ( *(_DWORD *)(v18 + 340) )
          {
            v17 = *(_DWORD *)(v18 + 340);
          }
          else
          {
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v14, v13);
            if ( CurrentProcessWin32Process )
              v17 = *(_DWORD *)(CurrentProcessWin32Process + 280);
          }
        }
        if ( (((unsigned __int8)v17 ^ *(_BYTE *)(v8 + 368)) & 0xF) != 0 )
          TransformRectBetweenCoordinateSpaces((char *)v23 + 4, (char *)v23 + 4, 0LL, v8);
      }
    }
    if ( v10 )
    {
      *(_OWORD *)a2 = v23[0];
      *(_OWORD *)(a2 + 16) = v23[1];
      *(_QWORD *)(a2 + 32) = *(_QWORD *)&v23[2];
      *(_DWORD *)(a2 + 40) = DWORD2(v23[2]);
    }
    ThreadUnlock1(v14, v13);
  }
  else
  {
    v10 = 0;
  }
  UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  return v10;
}
