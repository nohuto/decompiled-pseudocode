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

__int64 (__fastcall *__fastcall sub_180058A44(
        __int64 a1,
        volatile signed __int64 *a2,
        unsigned int a3,
        unsigned int a4,
        __int64 (__fastcall *a5)(_QWORD, _QWORD, _QWORD, _QWORD),
        __int64 a6,
        int a7,
        _QWORD *a8))(_QWORD, _QWORD, _QWORD, _QWORD)
{
  int v12; // ecx
  char *v13; // rbx
  int v14; // r14d
  volatile signed __int64 *v15; // rcx
  int v16; // ecx
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD); // rax
  unsigned int v18; // eax

  sub_180058AF0(a1, a2);
  v13 = 0LL;
  if ( a8 )
    v14 = sub_180109E60(v12, (_DWORD)a2, a3, a4, a7);
  else
    v14 = 0;
  v15 = a2 + 1;
  if ( a7 )
    RtlSetBits(v15, a3, a4);
  else
    RtlClearBits(v15, a3, a4);
  if ( a8 )
  {
    if ( v14 )
      v18 = sub_180109E60(v16, (_DWORD)a2, a3, a4, a7);
    else
      v18 = a4;
    *a8 = v18 - v14;
  }
  result = a5;
  if ( a5 )
  {
    if ( *(_DWORD *)(a1 + 68) )
      v13 = (char *)a2 + *(unsigned int *)(a1 + 64);
    result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))a5(v13, a3, a4, a6);
  }
  if ( (*(_BYTE *)(a1 + 72) & 4) == 0 )
    return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))RtlReleaseSRWLockExclusive(a2);
  return result;
}
