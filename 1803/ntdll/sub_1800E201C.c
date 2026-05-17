/*
 * XREFs of sub_1800E201C @ 0x1800E201C
 * Callers:
 *     sub_180024910 @ 0x180024910 (sub_180024910.c)
 * Callees:
 *     DbgPrintEx @ 0x180006B80 (DbgPrintEx.c)
 */

__int64 __fastcall sub_1800E201C(_QWORD *a1, __int64 *a2, int a3)
{
  struct _TEB *v3; // rdi
  unsigned __int64 v5; // rdx
  int v6; // eax
  int v9; // [rsp+38h] [rbp-10h]

  v3 = NtCurrentTeb();
  v5 = (__int64)(((unsigned __int128)(*a2 * (__int128)0x29406B2A1A85BD43LL) >> 64) - *a2) >> 23;
  DbgPrintEx(101, 1, (int)"RTL: Enter CriticalSection Timeout (%I64u secs) %d\n", v5 + (v5 >> 63), a3);
  if ( *a1 == -1LL )
    v6 = 0;
  else
    v6 = *(_DWORD *)(*a1 + 36LL);
  v9 = v6;
  return DbgPrintEx(
           101,
           0,
           (int)"RTL: Pid.Tid %p.%p, owner tid %p Critical Section %p - ContentionCount == %u\n",
           v3->ClientId.UniqueProcess,
           v3->ClientId.UniqueThread,
           a1[2],
           a1,
           v9);
}
