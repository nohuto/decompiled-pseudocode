/*
 * XREFs of NtUserGetTitleBarInfo @ 0x1C0077520
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     ?xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z @ 0x1C00777C0 (-xxxCommonGetTitleBarInfo@@YAXPEAUtagWND@@PEAUtagTITLEBARINFO@@@Z.c)
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C00AA600 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserGetTitleBarInfo(__int64 a1, ULONG64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r15
  int v7; // ebx
  _BYTE *v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 *ThreadWin32Thread; // rax
  struct _KTHREAD *v20; // rsi
  __int64 v21; // rdi
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 *v24; // rax
  unsigned int v25; // esi
  struct _KTHREAD *v26; // r12
  __int64 v27; // rdi
  __int64 v28; // rcx
  __int64 *v29; // rax
  __int64 CurrentProcessWin32Process; // rax
  _QWORD v32[3]; // [rsp+50h] [rbp-78h] BYREF
  _OWORD v33[3]; // [rsp+68h] [rbp-60h] BYREF

  memset(v33, 0, 0x2CuLL);
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  v6 = ValidateHwnd(a1);
  if ( v6 )
  {
    v32[0] = *(_QWORD *)(gptiCurrent + 392LL);
    *(_QWORD *)(gptiCurrent + 392LL) = v32;
    v32[1] = v6;
    _InterlockedAdd((volatile signed __int32 *)(v6 + 8), 1u);
    if ( ((PsGetCurrentProcessWow64Process(gptiCurrent) != 0 ? 0 : 3) & (unsigned int)a2) != 0 )
      ExRaiseDatatypeMisalignment();
    v8 = (_BYTE *)a2;
    if ( a2 >= MmUserProbeAddress )
      v8 = (_BYTE *)MmUserProbeAddress;
    *v8 = *v8;
    v8[43] = v8[43];
    LODWORD(v33[0]) = *(_DWORD *)a2;
    if ( LODWORD(v33[0]) == 44 )
    {
      *(_QWORD *)((char *)&v33[1] + 4) = 0LL;
      *(_QWORD *)((char *)&v33[1] + 12) = 0LL;
      *(_QWORD *)((char *)&v33[2] + 4) = 0LL;
      xxxCommonGetTitleBarInfo((struct tagWND *)v6, (struct tagTITLEBARINFO *)v33);
      v7 = 1;
    }
    else
    {
      UserSetLastError(87LL, (__int64)v8);
      v7 = 0;
    }
    CurrentThread = KeGetCurrentThread();
    v14 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v10, v9, v11, v12) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v14 = *ThreadWin32Thread;
    }
    if ( (*(_BYTE *)(*(_QWORD *)(v14 + 456) + 224LL) & 1) == 0 )
    {
      v20 = KeGetCurrentThread();
      v21 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v16, v15, v17, v18) )
      {
        v24 = (__int64 *)PsGetThreadWin32Thread(v20);
        if ( v24 )
          v21 = *v24;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(v21 + 456) + 224LL) & 0x20) == 0 )
      {
        v25 = 18;
        v26 = KeGetCurrentThread();
        v27 = 0LL;
        if ( !(unsigned int)IsThreadCrossSessionAttached(v16, v15, v22, v23) )
        {
          v29 = (__int64 *)PsGetThreadWin32Thread(v26);
          if ( v29 )
            v27 = *v29;
        }
        if ( v27 )
        {
          if ( *(_QWORD *)(v27 + 352) )
            CaptureAndValidateUserModeDpiAwarenessContext(v27);
          if ( *(_DWORD *)(v27 + 340) )
          {
            v25 = *(_DWORD *)(v27 + 340);
          }
          else
          {
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v28);
            if ( CurrentProcessWin32Process )
              v25 = *(_DWORD *)(CurrentProcessWin32Process + 280);
          }
        }
        v16 = 511LL;
        if ( (((unsigned __int16)(v25 >> 8) ^ (unsigned __int16)(*(_DWORD *)(v6 + 368) >> 8)) & 0x1FF) != 0 )
          TransformRectBetweenCoordinateSpaces((char *)v33 + 4, (char *)v33 + 4, 0LL, v6);
      }
    }
    if ( v7 )
    {
      *(_OWORD *)a2 = v33[0];
      *(_OWORD *)(a2 + 16) = v33[1];
      *(_QWORD *)(a2 + 32) = *(_QWORD *)&v33[2];
      *(_DWORD *)(a2 + 40) = DWORD2(v33[2]);
    }
    ThreadUnlock1(v16, v15);
  }
  else
  {
    v7 = 0;
  }
  UserSessionSwitchLeaveCrit(v5, v4);
  return v7;
}
