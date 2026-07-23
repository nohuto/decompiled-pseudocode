/*
 * XREFs of sub_180058A44 @ 0x180058A44
 * Callers:
 *     sub_180058688 @ 0x180058688 (sub_180058688.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     sub_180058AF0 @ 0x180058AF0 (sub_180058AF0.c)
 *     RtlSetBits @ 0x180059A60 (RtlSetBits.c)
 *     RtlClearBits @ 0x180059C40 (RtlClearBits.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 *     sub_180109E60 @ 0x180109E60 (sub_180109E60.c)
 */

void __fastcall sub_180058A44(
        __int64 a1,
        _RTL_SRWLOCK *a2,
        ULONG a3,
        ULONG a4,
        void (__fastcall *a5)(char *, _QWORD, _QWORD, __int64),
        __int64 a6,
        int a7,
        _QWORD *a8)
{
  int v12; // ecx
  char *v13; // rbx
  int v14; // r14d
  _RTL_BITMAP *v15; // rcx
  int v16; // ecx
  ULONG v17; // eax

  sub_180058AF0(a1, a2);
  v13 = 0LL;
  if ( a8 )
    v14 = sub_180109E60(v12, (_DWORD)a2, a3, a4, a7);
  else
    v14 = 0;
  v15 = (_RTL_BITMAP *)&a2[1];
  if ( a7 )
    RtlSetBits(v15, a3, a4);
  else
    RtlClearBits(v15, a3, a4);
  if ( a8 )
  {
    if ( v14 )
      v17 = sub_180109E60(v16, (_DWORD)a2, a3, a4, a7);
    else
      v17 = a4;
    *a8 = v17 - v14;
  }
  if ( a5 )
  {
    if ( *(_DWORD *)(a1 + 68) )
      v13 = (char *)a2 + *(unsigned int *)(a1 + 64);
    a5(v13, a3, a4, a6);
  }
  if ( (*(_BYTE *)(a1 + 72) & 4) == 0 )
    RtlReleaseSRWLockExclusive(a2);
}
