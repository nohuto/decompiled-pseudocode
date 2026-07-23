/*
 * XREFs of sub_1800FD70C @ 0x1800FD70C
 * Callers:
 *     sub_180013D40 @ 0x180013D40 (sub_180013D40.c)
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     sub_180017430 @ 0x180017430 (sub_180017430.c)
 *     sub_180017F70 @ 0x180017F70 (sub_180017F70.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180010A60 (RtlAcquireSRWLockShared.c)
 *     sub_1800FCFB0 @ 0x1800FCFB0 (sub_1800FCFB0.c)
 *     sub_1800FD4A4 @ 0x1800FD4A4 (sub_1800FD4A4.c)
 *     sub_18010D8A4 @ 0x18010D8A4 (sub_18010D8A4.c)
 */

void __fastcall sub_1800FD70C(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  RtlAcquireSRWLockShared(&stru_18015D2E0);
  if ( (dword_18015D2E8 & 1) != 0 && (dword_18015D2E8 & 2) != 0 && sub_1800FD4A4(a1, 0, (PVOID *)&v5) >= 0 )
  {
    v4 = sub_1800FCFB0(v5, a2);
    if ( v4 )
      sub_18010D8A4(&qword_18015D2F0, v4);
  }
  RtlReleaseSRWLockShared(&stru_18015D2E0);
}
