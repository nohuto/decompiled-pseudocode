/*
 * XREFs of NtUserQueryInputContext @ 0x1C00DCAA0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 */

HANDLE __fastcall NtUserQueryInputContext(__int64 a1, int a2)
{
  HANDLE v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // r9
  __int64 v8; // r14
  __int64 *v9; // r15
  __int64 v10; // r14
  __int64 *ThreadWin32Thread; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  HANDLE ThreadProcessId; // rax
  int v18; // edi
  int v19; // edi
  HANDLE *v20; // rax

  EnterSharedCrit(0LL, 1LL);
  if ( (*gpsi & 4) == 0 )
  {
    UserSetLastError(120LL);
    v4 = 0LL;
    goto LABEL_15;
  }
  v4 = 0LL;
  v5 = 0LL;
  PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( (unsigned __int64)(unsigned __int16)a1 < *(_QWORD *)(gpsi + 8LL) )
  {
    v8 = gSharedInfo[1] + (unsigned int)(unsigned __int16)a1 * LODWORD(gSharedInfo[2]);
    v9 = (__int64 *)(gpKernelHandleTable
                   + 16 * ((__int64)((unsigned int)(unsigned __int16)a1 * LODWORD(gSharedInfo[2])) >> 5));
    if ( (WORD1(a1) == *(_WORD *)(v8 + 26)
       || WORD1(a1) == 0xFFFF
       || !WORD1(a1) && PsGetCurrentProcessWow64Process(0xFFFFLL, v6, (unsigned __int16)a1, v7))
      && (*(_BYTE *)(v8 + 25) & 1) == 0
      && *(_BYTE *)(v8 + 24) == 17 )
    {
      v5 = *v9;
    }
  }
  v10 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v10 = *ThreadWin32Thread;
  if ( (*(_DWORD *)(v10 + 440) & 0x20000000) != 0 )
  {
    if ( !(unsigned int)ValidateHandleSecure(a1, 3LL) )
      v5 = 0LL;
  }
  else
  {
    v5 &= -(__int64)((unsigned int)ValidateHandleSecure(a1, 2LL) != 0);
  }
  if ( !v5 )
  {
    UserSetLastError(6LL);
    goto LABEL_15;
  }
  v15 = *(_QWORD *)(v5 + 16);
  if ( !a2 )
  {
    ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)v15);
LABEL_14:
    v4 = ThreadProcessId;
    goto LABEL_15;
  }
  v18 = a2 - 1;
  if ( !v18 )
  {
    ThreadProcessId = PsGetThreadId(*(PETHREAD *)v15);
    goto LABEL_14;
  }
  v19 = v18 - 1;
  if ( v19 )
  {
    if ( v19 != 1 )
    {
      UserSetLastError(87LL);
      goto LABEL_15;
    }
    v20 = *(HANDLE **)(v15 + 704);
  }
  else
  {
    v20 = *(HANDLE **)(v15 + 696);
  }
  if ( v20 )
    v4 = *v20;
LABEL_15:
  UserSessionSwitchLeaveCrit(v15, v12, v13, v14);
  return v4;
}
