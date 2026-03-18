/*
 * XREFs of UserScreenAccessCheck @ 0x1C00778A0
 * Callers:
 *     NtGdiDdDDICreateOutputDupl @ 0x1C00F0DA0 (NtGdiDdDDICreateOutputDupl.c)
 * Callees:
 *     <none>
 */

__int64 UserScreenAccessCheck()
{
  unsigned int v0; // ebx
  __int64 v1; // rsi
  __int64 v2; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v4; // rdx
  _QWORD *v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax
  _QWORD *v8; // rax

  v0 = 0;
  v1 = 0LL;
  if ( grpdeskRitInput )
    v1 = ***((_QWORD ***)grpdeskRitInput + 1);
  v2 = 0LL;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( ThreadWin32Thread )
    v2 = *ThreadWin32Thread;
  if ( !v1
    || (v7 = *(_QWORD *)(v2 + 408)) != 0 && (v8 = *(_QWORD **)(v7 + 8), v5 = (_QWORD *)*v8, *(_QWORD *)*v8 == v1)
    || (*(_DWORD *)(v2 + 440) & 8) != 0
    || (*(_DWORD *)(v2 + 1096) & 4) != 0 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v5, v4, v6) + 12) & 0x40010) == 0x40010 )
      return 1;
  }
  return v0;
}
