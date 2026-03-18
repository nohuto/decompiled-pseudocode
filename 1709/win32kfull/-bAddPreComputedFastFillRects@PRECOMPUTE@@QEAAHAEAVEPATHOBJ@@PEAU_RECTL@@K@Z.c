/*
 * XREFs of ?bAddPreComputedFastFillRects@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@PEAU_RECTL@@K@Z @ 0x1C02A78B4
 * Callers:
 *     ?bPreComputeFast@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@0PEAU_RECTL@@K@Z @ 0x1C02A7C84 (-bPreComputeFast@PRECOMPUTE@@QEAAHAEAVEPATHOBJ@@0PEAU_RECTL@@K@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00B22B0 (PALLOCMEM2.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 */

__int64 __fastcall PRECOMPUTE::bAddPreComputedFastFillRects(
        PRECOMPUTE *this,
        __int64 a2,
        struct _RECTL *a3,
        unsigned int a4)
{
  unsigned int v4; // eax
  __int64 v6; // rbp
  __int64 v7; // rbx
  unsigned __int64 v8; // rax
  char *v9; // rax
  char *v10; // rsi
  const void *v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 result; // rax
  __int64 v15; // rcx

  v4 = *(_DWORD *)(a2 + 48);
  v6 = a4;
  v7 = a2;
  if ( v4 + a4 <= v4 )
  {
    if ( v4 )
    {
      *(_DWORD *)(a2 + 48) = 0;
      v15 = *(_QWORD *)(a2 + 56);
      goto LABEL_13;
    }
    return 0LL;
  }
  a2 = 0xFFFFFFFFLL;
  v8 = 16LL * (v4 + a4);
  if ( v8 > 0xFFFFFFFF || (v9 = (char *)PALLOCMEM2((unsigned int)v8, 1734632775LL, 0), (v10 = v9) == 0LL) )
  {
    if ( *(_DWORD *)(v7 + 48) )
    {
      *(_DWORD *)(v7 + 48) = 0;
      v15 = *(_QWORD *)(v7 + 56);
LABEL_13:
      Win32FreePool(v15, a2);
      *(_QWORD *)(v7 + 56) = 0LL;
      return 0LL;
    }
    return 0LL;
  }
  v11 = *(const void **)(v7 + 56);
  if ( v11 )
    memmove(v9, v11, 16LL * *(unsigned int *)(v7 + 48));
  memmove(&v10[16 * *(unsigned int *)(v7 + 48)], a3, 16 * v6);
  v13 = *(_QWORD *)(v7 + 56);
  if ( v13 )
    Win32FreePool(v13, v12);
  *(_DWORD *)(v7 + 48) += v6;
  result = 1LL;
  *(_QWORD *)(v7 + 56) = v10;
  return result;
}
