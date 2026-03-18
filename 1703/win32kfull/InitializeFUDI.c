/*
 * XREFs of InitializeFUDI @ 0x1C00A27B8
 * Callers:
 *     AAHalftoneBitmap @ 0x1C0033238 (AAHalftoneBitmap.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C01401C0 (memmove.c)
 */

void *__fastcall InitializeFUDI(__int64 a1)
{
  int v2; // eax
  const void **v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // rbp
  __int64 v6; // r15
  __int64 *v7; // r12
  __int64 v8; // rbx
  __int64 v10; // r12
  _BYTE **v11; // r15
  _BYTE *v12; // rbx

  if ( (*(_DWORD *)a1 & 0x400) != 0 )
    v2 = *(_DWORD *)(a1 + 148);
  else
    v2 = *(_DWORD *)(a1 + 60);
  *(_DWORD *)(a1 + 532) = v2;
  v3 = (const void **)(a1 + 496);
  v4 = *(unsigned int *)(a1 + 56);
  v5 = 2LL;
  if ( (*(_BYTE *)(a1 + 8) & 4) != 0 )
  {
    v10 = v4;
    v11 = (_BYTE **)(a1 + 496);
    do
    {
      v12 = *v11;
      (*(void (__fastcall **)(__int64, _BYTE *))(a1 + 24))(a1 + 8, *v11++ + 1);
      *v12 = v12[2];
      v12[v10 + 1] = v12[v10 - 1];
      --v5;
    }
    while ( v5 );
  }
  else
  {
    v6 = 3 * v4;
    v7 = (__int64 *)(a1 + 496);
    do
    {
      v8 = *v7;
      (*(void (__fastcall **)(__int64, __int64))(a1 + 24))(a1 + 8, *v7++ + 3);
      *(_WORD *)v8 = *(_WORD *)(v8 + 6);
      *(_BYTE *)(v8 + 2) = *(_BYTE *)(v8 + 8);
      *(_WORD *)(v6 + v8 + 3) = *(_WORD *)(v6 + v8 - 3);
      *(_BYTE *)(v6 + v8 + 5) = *(_BYTE *)(v6 + v8 - 1);
      --v5;
    }
    while ( v5 );
  }
  memmove(*(void **)(a1 + 520), *v3, *(unsigned int *)(a1 + 528));
  return memmove(*(void **)(a1 + 488), *(const void **)(a1 + 504), *(unsigned int *)(a1 + 528));
}
