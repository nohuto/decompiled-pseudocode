/*
 * XREFs of sub_1801050FC @ 0x1801050FC
 * Callers:
 *     sub_180104F5C @ 0x180104F5C (sub_180104F5C.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     sub_180060A50 @ 0x180060A50 (sub_180060A50.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 *     sub_180105258 @ 0x180105258 (sub_180105258.c)
 */

__int64 __fastcall sub_1801050FC(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  int v6; // r14d
  int v7; // esi
  int v8; // r14d
  int v9; // ebp
  unsigned int v10; // eax
  __int64 v11; // r15
  int v12; // edi
  unsigned __int64 v13; // rdx
  _WORD *v14; // r8
  unsigned __int64 v15; // rcx
  unsigned int v17; // [rsp+88h] [rbp+10h] BYREF
  int v18; // [rsp+98h] [rbp+20h] BYREF

  v6 = *(unsigned __int16 *)(a2 + 40) ^ (unsigned __int16)((unsigned int)a2 >> 12);
  v7 = 0;
  v18 = 0;
  v8 = (unsigned __int16)qword_18015A448 ^ v6;
  v9 = 0;
  v10 = sub_180105258(a2, a3, v8, (unsigned int)&v17, (__int64)&v18);
  v11 = v10;
  if ( v10 != -1 )
  {
    v7 = 1;
    v9 = 1;
    v12 = ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD))(a1 ^ qword_18015A440 ^ *(_QWORD *)(a1 + 24)))(
            *(_QWORD *)a1,
            a2 + (v10 << *(_BYTE *)(a2 + 44)),
            v17 << *(_BYTE *)(a2 + 44));
    if ( v12 < 0 )
      goto LABEL_11;
    v13 = 0LL;
    v14 = (_WORD *)(a2 + *(unsigned __int16 *)(a2 + 46) + 2 * v11);
    v15 = v17;
    if ( v14 > &v14[v17] )
      v15 = 0LL;
    if ( v15 )
    {
      do
      {
        if ( !*v14 )
          *v14 = 1;
        ++v14;
        ++v13;
      }
      while ( v13 < v15 );
    }
    v9 = 0;
  }
  v12 = 0;
LABEL_11:
  if ( v18 )
    _InterlockedExchangeAdd64(
      (volatile signed __int64 *)(*(_QWORD *)(a1 + 72) + 24LL),
      -(__int64)((unsigned __int64)(unsigned int)(v18 << *(_BYTE *)(a2 + 44)) >> 12));
  if ( v9 )
    sub_180060A50(a2, a3, v8, 2, 0LL);
  if ( v7 )
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a2 + 24));
  return (unsigned int)v12;
}
