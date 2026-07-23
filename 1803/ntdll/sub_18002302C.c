/*
 * XREFs of sub_18002302C @ 0x18002302C
 * Callers:
 *     sub_180022F0C @ 0x180022F0C (sub_180022F0C.c)
 * Callees:
 *     sub_18001F734 @ 0x18001F734 (sub_18001F734.c)
 *     sub_180022300 @ 0x180022300 (sub_180022300.c)
 *     sub_1800231DC @ 0x1800231DC (sub_1800231DC.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_18005E3B4 @ 0x18005E3B4 (sub_18005E3B4.c)
 *     sub_18005E3F8 @ 0x18005E3F8 (sub_18005E3F8.c)
 *     sub_18005EC0C @ 0x18005EC0C (sub_18005EC0C.c)
 */

__int64 __fastcall sub_18002302C(__int64 a1, int a2, int a3)
{
  char v4; // cl
  char v5; // r14d^3
  unsigned int v6; // r13d
  int v7; // ebx
  int v8; // r15d
  unsigned int v9; // r8d
  __int64 v10; // rax
  __int64 v11; // rbx
  int v12; // ecx
  __int64 v13; // rdx
  __int64 v14; // rax
  _RTL_SRWLOCK *v15; // rbp
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rax
  unsigned int v20; // edi
  unsigned int v21; // edx
  _BYTE *v22; // rax
  unsigned __int8 v24; // [rsp+58h] [rbp+10h]

  v4 = *(_BYTE *)(a1 + 9);
  v5 = HIBYTE(a3);
  v6 = (unsigned int)((1 << v4) + a2 - 1) >> v4;
  v7 = v24 | (((v6 << 16) | (unsigned __int16)~((_WORD)v6 << v4)) << 8);
  v8 = a3 & 1;
  if ( (a3 & 1) == 0 )
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 24));
  v9 = v7;
  v10 = *(_QWORD *)(a1 + 64);
  v11 = *(_QWORD *)(a1 + 56);
  if ( (v10 & 1) != 0 && v11 )
    v11 ^= a1 + 56;
  v12 = v10 & 1;
  v13 = 0LL;
  while ( v11 )
  {
    if ( v9 < *(_DWORD *)(v11 + 28) )
    {
      v14 = *(_QWORD *)v11;
      v13 = v11;
    }
    else
    {
      if ( v9 <= *(_DWORD *)(v11 + 28) )
        goto LABEL_17;
      v14 = *(_QWORD *)(v11 + 8);
    }
    if ( v12 && v14 )
      v11 ^= v14;
    else
      v11 = v14;
  }
  v11 = v13;
LABEL_17:
  v15 = (_RTL_SRWLOCK *)(a1 + 24);
  if ( v11 )
  {
    sub_180022300(a1, v11);
  }
  else
  {
    if ( !v8 )
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 24));
    v17 = sub_18005EC0C(a1, 0LL);
    v18 = v17;
    if ( !v17 )
      return 0LL;
    sub_18005E3F8(a1, v17, 0LL);
    v11 = v18 + 32LL * *(unsigned __int8 *)(a1 + 10);
    if ( !v8 )
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 24));
    sub_18005E3B4(a1, v18);
  }
  v19 = sub_1800231DC(v16, v11, v6);
  if ( v19 )
    sub_18001F734(a1, v19, 0);
  v20 = v6 - 1;
  *(_BYTE *)(v11 + 24) |= v5 & 0xC | 1;
  *(_BYTE *)(32LL * (v6 - 1) + v11 + 24) |= 1u;
  if ( !v8 )
    RtlReleaseSRWLockExclusive(v15);
  v21 = 1;
  if ( v20 > 1 )
  {
    v22 = (_BYTE *)(v11 + 56);
    do
    {
      v22[7] = v21++;
      *v22 |= 1u;
      v22 += 32;
    }
    while ( v21 < v20 );
  }
  return v11;
}
