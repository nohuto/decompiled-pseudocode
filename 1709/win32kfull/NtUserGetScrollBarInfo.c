/*
 * XREFs of NtUserGetScrollBarInfo @ 0x1C0076D50
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     xxxGetScrollBarInfo @ 0x1C0076FC0 (xxxGetScrollBarInfo.c)
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C00AA600 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall NtUserGetScrollBarInfo(__int64 a1, __int64 a2, ULONG64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  ULONG_PTR v7; // r15
  int ScrollBarInfo; // ebx
  _BYTE *v9; // rdx
  struct _KTHREAD *CurrentThread; // r14
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 *ThreadWin32Thread; // rax
  struct _KTHREAD *v21; // r14
  __int64 v22; // rdi
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 *v25; // rax
  unsigned int v26; // r14d
  struct _KTHREAD *v27; // r12
  __int64 v28; // rdi
  __int64 v29; // rcx
  __int64 *v30; // rax
  __int64 CurrentProcessWin32Process; // rax
  _QWORD v33[11]; // [rsp+50h] [rbp-88h] BYREF

  memset(&v33[3], 0, 0x3CuLL);
  EnterCrit(0LL, 1LL);
  v7 = ValidateHwnd(a1);
  if ( v7 )
  {
    v33[0] = *(_QWORD *)(gptiCurrent + 392LL);
    *(_QWORD *)(gptiCurrent + 392LL) = v33;
    v33[1] = v7;
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
    if ( ((PsGetCurrentProcessWow64Process(gptiCurrent) != 0 ? 0 : 3) & (unsigned int)a3) != 0 )
      ExRaiseDatatypeMisalignment();
    v9 = (_BYTE *)a3;
    if ( a3 >= MmUserProbeAddress )
      v9 = (_BYTE *)MmUserProbeAddress;
    *v9 = *v9;
    v9[59] = v9[59];
    LODWORD(v33[3]) = *(_DWORD *)a3;
    ScrollBarInfo = xxxGetScrollBarInfo(v7);
    CurrentThread = KeGetCurrentThread();
    v11 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v13, v12, v14, v15) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v11 = *ThreadWin32Thread;
    }
    if ( (*(_BYTE *)(*(_QWORD *)(v11 + 456) + 224LL) & 1) == 0 )
    {
      v21 = KeGetCurrentThread();
      v22 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v17, v16, v18, v19) )
      {
        v25 = (__int64 *)PsGetThreadWin32Thread(v21);
        if ( v25 )
          v22 = *v25;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(v22 + 456) + 224LL) & 0x20) == 0 )
      {
        v26 = 18;
        v27 = KeGetCurrentThread();
        v28 = 0LL;
        if ( !(unsigned int)IsThreadCrossSessionAttached(v17, v16, v23, v24) )
        {
          v30 = (__int64 *)PsGetThreadWin32Thread(v27);
          if ( v30 )
            v28 = *v30;
        }
        if ( v28 )
        {
          if ( *(_QWORD *)(v28 + 352) )
            CaptureAndValidateUserModeDpiAwarenessContext(v28);
          if ( *(_DWORD *)(v28 + 340) )
          {
            v26 = *(_DWORD *)(v28 + 340);
          }
          else
          {
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v29);
            if ( CurrentProcessWin32Process )
              v26 = *(_DWORD *)(CurrentProcessWin32Process + 280);
          }
        }
        v17 = 511LL;
        if ( (((unsigned __int16)(v26 >> 8) ^ (unsigned __int16)(*(_DWORD *)(v7 + 368) >> 8)) & 0x1FF) != 0 )
          TransformRectBetweenCoordinateSpaces((char *)&v33[3] + 4, (char *)&v33[3] + 4, 0LL, v7);
      }
    }
    if ( ScrollBarInfo )
    {
      *(_OWORD *)a3 = *(_OWORD *)&v33[3];
      *(_OWORD *)(a3 + 16) = *(_OWORD *)&v33[5];
      *(_OWORD *)(a3 + 32) = *(_OWORD *)&v33[7];
      *(_QWORD *)(a3 + 48) = v33[9];
      *(_DWORD *)(a3 + 56) = v33[10];
    }
    ThreadUnlock1(v17, v16);
  }
  else
  {
    ScrollBarInfo = 0;
  }
  UserSessionSwitchLeaveCrit(v6, v5);
  return ScrollBarInfo;
}
