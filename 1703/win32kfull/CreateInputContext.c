/*
 * XREFs of CreateInputContext @ 0x1C00E7A90
 * Callers:
 *     xxxCreateDefaultImeWindow @ 0x1C00C9E70 (xxxCreateDefaultImeWindow.c)
 *     NtUserCreateInputContext @ 0x1C01396C0 (NtUserCreateInputContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CreateInputContext(__int64 a1)
{
  __int64 v2; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rdi
  __int128 v9; // [rsp+20h] [rbp-28h]
  __int128 v10; // [rsp+30h] [rbp-18h] BYREF

  v2 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v2 = *ThreadWin32Thread;
  if ( (*(_DWORD *)(v2 + 440) & 0x2000000) != 0 || (*gpsi & 4) == 0 || a1 && !*(_QWORD *)(v2 + 704) )
    return 0LL;
  v5 = *(_QWORD *)(v2 + 408);
  if ( !v5 )
    return 0LL;
  LOBYTE(v4) = 17;
  v6 = HMAllocObject(v2, v5, v4, 72LL);
  v7 = v6;
  if ( !v6 )
    return 0LL;
  if ( a1 )
  {
    *(_QWORD *)(v6 + 56) = *(_QWORD *)(*(_QWORD *)(v2 + 704) + 56LL);
    *(_QWORD *)(*(_QWORD *)(v2 + 704) + 56LL) = v6;
  }
  else
  {
    *((_QWORD *)&v9 + 1) = v6;
    *(_QWORD *)&v9 = v2 + 704;
    v10 = v9;
    HMAssignmentLock(&v10);
    *(_QWORD *)(v7 + 56) = 0LL;
  }
  *(_QWORD *)(*(_QWORD *)(v7 + 40) + 16LL) = a1;
  return v7;
}
