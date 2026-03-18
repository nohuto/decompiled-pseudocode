/*
 * XREFs of NtUserQueryInputContext @ 0x1C00EFA50
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 */

HANDLE __fastcall NtUserQueryInputContext(__int64 a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  HANDLE v8; // rbx
  struct _KTHREAD *CurrentThread; // r14
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r14
  __int64 v14; // r15
  struct _KTHREAD *v15; // r15
  __int64 v16; // r14
  __int64 *ThreadWin32Thread; // rax
  int v18; // edi
  int v19; // edi
  HANDLE *v20; // rax
  HANDLE ThreadProcessId; // rax

  EnterSharedCrit(0LL, 1LL);
  if ( (*gpsi & 4) == 0 )
  {
    UserSetLastError(120LL, v4);
    v8 = 0LL;
    goto LABEL_34;
  }
  CurrentThread = KeGetCurrentThread();
  v8 = 0LL;
  v10 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v5, v4) )
    PsGetThreadWin32Thread(CurrentThread);
  v12 = gpsi;
  if ( (unsigned __int64)(unsigned __int16)a1 < *(_QWORD *)(gpsi + 8LL) )
  {
    v11 = gSharedInfo[1];
    v13 = v11 + (unsigned int)(unsigned __int16)a1 * LODWORD(gSharedInfo[2]);
    v14 = 3 * ((__int64)((unsigned int)(unsigned __int16)a1 * LODWORD(gSharedInfo[2])) >> 5);
    if ( WORD1(a1) == *(_WORD *)(v13 + 26)
      || (v12 = 0xFFFFLL, WORD1(a1) == 0xFFFF)
      || !WORD1(a1) && PsGetCurrentProcessWow64Process(0xFFFFLL) )
    {
      if ( (*(_BYTE *)(v13 + 25) & 1) == 0 && *(_BYTE *)(v13 + 24) == 17 )
        v10 = *(_QWORD *)(gpKernelHandleTable + 8 * v14);
    }
  }
  v15 = KeGetCurrentThread();
  v16 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(v12, v11) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(v15);
    if ( ThreadWin32Thread )
      v16 = *ThreadWin32Thread;
  }
  if ( (*(_DWORD *)(v16 + 464) & 0x20000000) != 0 )
  {
    if ( !(unsigned int)ValidateHandleSecure(a1, 3LL) )
      v10 = 0LL;
  }
  else
  {
    v10 &= -(__int64)((unsigned int)ValidateHandleSecure(a1, 2LL) != 0);
  }
  if ( !v10 )
  {
    UserSetLastError(6LL, v6);
    goto LABEL_34;
  }
  v7 = *(_QWORD *)(v10 + 16);
  if ( !a2 )
  {
    ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)v7);
    goto LABEL_33;
  }
  v18 = a2 - 1;
  if ( !v18 )
  {
    ThreadProcessId = PsGetThreadId(*(PETHREAD *)v7);
LABEL_33:
    v8 = ThreadProcessId;
    goto LABEL_34;
  }
  v19 = v18 - 1;
  if ( v19 )
  {
    if ( v19 != 1 )
    {
      UserSetLastError(87LL, v6);
      goto LABEL_34;
    }
    v20 = *(HANDLE **)(v7 + 760);
  }
  else
  {
    v20 = *(HANDLE **)(v7 + 752);
  }
  if ( v20 )
    v8 = *v20;
LABEL_34:
  UserSessionSwitchLeaveCrit(v7, v6);
  return v8;
}
