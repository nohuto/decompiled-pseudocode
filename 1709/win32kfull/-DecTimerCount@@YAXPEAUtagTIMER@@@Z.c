/*
 * XREFs of ?DecTimerCount@@YAXPEAUtagTIMER@@@Z @ 0x1C008A208
 * Callers:
 *     NtUserKillTimer @ 0x1C0086FC0 (NtUserKillTimer.c)
 *     InternalSetTimer @ 0x1C0087850 (InternalSetTimer.c)
 *     FreeTimer @ 0x1C00D7A70 (FreeTimer.c)
 * Callees:
 *     <none>
 */

void __fastcall DecTimerCount(struct tagTIMER *a1)
{
  __int64 v1; // rdx
  _QWORD *v2; // rcx
  __int64 v3; // r8
  _QWORD *v4; // rax

  v1 = *((_QWORD *)a1 + 3);
  v2 = (_QWORD *)((char *)a1 + 56);
  v3 = *v2;
  if ( *(_QWORD **)(*v2 + 8LL) != v2 || (v4 = (_QWORD *)v2[1], (_QWORD *)*v4 != v2) )
    __fastfail(3u);
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  if ( (*(_DWORD *)(v1 + 580))-- == 1 )
    *(_WORD *)(*(_QWORD *)(v1 + 424) + 6LL) &= ~0x10u;
}
