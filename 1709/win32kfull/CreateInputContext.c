/*
 * XREFs of CreateInputContext @ 0x1C00F8900
 * Callers:
 *     xxxCreateDefaultImeWindow @ 0x1C00CD8AC (xxxCreateDefaultImeWindow.c)
 *     NtUserCreateInputContext @ 0x1C01402B0 (NtUserCreateInputContext.c)
 * Callees:
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 */

__int64 __fastcall CreateInputContext(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v4; // rbx
  __int64 v5; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdi
  __int128 v11; // [rsp+20h] [rbp-28h]
  __int128 v12; // [rsp+30h] [rbp-18h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v4 = *ThreadWin32Thread;
  }
  if ( (*(_DWORD *)(v4 + 464) & 0x2000000) != 0 || (*gpsi & 4) == 0 || a1 && !*(_QWORD *)(v4 + 760) )
    return 0LL;
  v7 = *(_QWORD *)(v4 + 432);
  if ( !v7 )
    return 0LL;
  LOBYTE(v5) = 17;
  v8 = HMAllocObject(v4, v7, v5, 72LL);
  v9 = v8;
  if ( !v8 )
    return 0LL;
  if ( a1 )
  {
    *(_QWORD *)(v8 + 56) = *(_QWORD *)(*(_QWORD *)(v4 + 760) + 56LL);
    *(_QWORD *)(*(_QWORD *)(v4 + 760) + 56LL) = v8;
  }
  else
  {
    *((_QWORD *)&v11 + 1) = v8;
    *(_QWORD *)&v11 = v4 + 760;
    v12 = v11;
    HMAssignmentLock(&v12);
    *(_QWORD *)(v9 + 56) = 0LL;
  }
  *(_QWORD *)(*(_QWORD *)(v9 + 40) + 16LL) = a1;
  return v9;
}
