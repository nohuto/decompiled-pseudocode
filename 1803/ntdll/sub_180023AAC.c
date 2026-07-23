/*
 * XREFs of sub_180023AAC @ 0x180023AAC
 * Callers:
 *     sub_180011AE0 @ 0x180011AE0 (sub_180011AE0.c)
 *     sub_180011EF8 @ 0x180011EF8 (sub_180011EF8.c)
 *     sub_180016A80 @ 0x180016A80 (sub_180016A80.c)
 *     sub_180017F70 @ 0x180017F70 (sub_180017F70.c)
 *     sub_180022F0C @ 0x180022F0C (sub_180022F0C.c)
 * Callees:
 *     sub_18001F734 @ 0x18001F734 (sub_18001F734.c)
 *     sub_180023C10 @ 0x180023C10 (sub_180023C10.c)
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_180062960 @ 0x180062960 (sub_180062960.c)
 *     sub_18009A63C @ 0x18009A63C (sub_18009A63C.c)
 */

void __fastcall sub_180023AAC(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  int v4; // r10d
  unsigned int v5; // r14d
  __int64 v7; // rdi
  _BYTE *v10; // rcx
  __int64 v11; // rdx
  int v12; // r15d
  unsigned int v13; // eax
  char v14; // cl
  int v15; // esi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rbx
  char v19; // [rsp+80h] [rbp+18h] BYREF
  int v20; // [rsp+88h] [rbp+20h]

  v20 = a4;
  v4 = a4;
  v5 = *(unsigned __int8 *)(a2 + 31) - a3;
  v7 = a2 + 32LL * a3;
  if ( v5 - 1 > 1 )
  {
    v10 = (_BYTE *)(v7 + 56);
    v11 = v5 - 2;
    do
    {
      *v10 &= ~1u;
      v10 += 32;
      --v11;
    }
    while ( v11 );
  }
  v12 = a4 & 1;
  if ( (a4 & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 24));
    v4 = v20;
  }
  v13 = *(_DWORD *)(a2 + 28);
  v19 = -1;
  if ( HIBYTE(v13) == v5 )
  {
    LOWORD(v15) = 0;
  }
  else
  {
    *(_BYTE *)(a2 + 31) = a3;
    v14 = *(_BYTE *)(a1 + 9);
    *(_DWORD *)(a2 + 28) &= 0xFF0000FF;
    v15 = a3 << v14;
    *(_DWORD *)(a2 + 28) |= (unsigned __int16)~(_WORD)v15 << 8;
  }
  *(_BYTE *)(v7 + 24) |= 2u;
  *(_BYTE *)(32LL * (v5 - 1) + v7 + 31) = v5 - 1;
  *(_BYTE *)(v7 + 31) = v5;
  *(_DWORD *)(v7 + 28) &= 0xFF0000FF;
  *(_DWORD *)(v7 + 28) |= (unsigned __int16)~(~(unsigned __int16)(v13 >> 8) - v15) << 8;
  *(_DWORD *)v7 = -857879331;
  *(_BYTE *)(v7 + 24) &= 0xF3u;
  v16 = sub_180023C10(a1, v7, v4, 0, (__int64)&v19);
  v17 = sub_18001F734(a1, v16, 0);
  v18 = v17;
  if ( v17 )
    sub_18009A63C(a1, v17);
  if ( !v12 )
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 24));
  if ( v18 )
    sub_180062960(a1, v18, 1LL);
}
