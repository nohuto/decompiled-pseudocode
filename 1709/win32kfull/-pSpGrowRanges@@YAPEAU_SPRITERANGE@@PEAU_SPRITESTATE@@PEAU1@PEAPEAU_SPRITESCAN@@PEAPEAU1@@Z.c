/*
 * XREFs of ?pSpGrowRanges@@YAPEAU_SPRITERANGE@@PEAU_SPRITESTATE@@PEAU1@PEAPEAU_SPRITESCAN@@PEAPEAU1@@Z @ 0x1C00ED670
 * Callers:
 *     ?bSpComputeScan@@YAHPEAU_SPRITESTATE@@PEAVSPRITE@@JJPEAPEAU_SPRITESCAN@@PEA_K@Z @ 0x1C00ED580 (-bSpComputeScan@@YAHPEAU_SPRITESTATE@@PEAVSPRITE@@JJPEAPEAU_SPRITESCAN@@PEA_K@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00B22B0 (PALLOCMEM2.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 */

struct _SPRITERANGE *__fastcall pSpGrowRanges(
        struct _SPRITESTATE *a1,
        struct _SPRITERANGE *a2,
        struct _SPRITESCAN **a3,
        struct _SPRITERANGE **a4)
{
  __int64 v4; // rax
  __int64 v7; // rbp
  char *v9; // rsi
  char *v10; // r14
  void *v11; // rax
  void *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // r8
  struct _SPRITERANGE *result; // rax
  __int64 v16; // rcx
  int v17; // eax
  int v18; // eax

  v4 = *((_QWORD *)a1 + 18);
  v7 = *((_QWORD *)a1 + 19) - v4 + 360;
  v9 = (char *)a2 - v4;
  v10 = (char *)*a3 - v4;
  v11 = PALLOCMEM2((unsigned int)(*((_DWORD *)a1 + 38) - v4 + 360), 1919972167LL, 0);
  v12 = v11;
  if ( v11 )
  {
    memmove(v11, *((const void **)a1 + 18), (size_t)v9);
    Win32FreePool(*((_QWORD *)a1 + 18), v13, v14);
    *((_QWORD *)a1 + 18) = v12;
    *a3 = (struct _SPRITESCAN *)&v10[(_QWORD)v12];
    *((_QWORD *)a1 + 19) = (char *)v12 + v7;
    *a4 = (struct _SPRITERANGE *)((char *)v12 + v7 - 56);
    return (struct _SPRITERANGE *)&v9[(_QWORD)v12];
  }
  else
  {
    v16 = *((_QWORD *)a1 + 18);
    *(_DWORD *)v16 = *((_DWORD *)a1 + 13);
    v17 = *((_DWORD *)a1 + 15);
    *(_QWORD *)(v16 + 16) = 0LL;
    *(_DWORD *)(v16 + 4) = v17;
    *(_QWORD *)(v16 + 8) = 40LL;
    *(_DWORD *)(v16 + 24) = *((_DWORD *)a1 + 12);
    v18 = *((_DWORD *)a1 + 14);
    *(_QWORD *)(v16 + 32) = 0LL;
    *(_DWORD *)(v16 + 28) = v18;
    *((_QWORD *)a1 + 19) = v16 + 40;
    result = 0LL;
    *((_QWORD *)a1 + 18) = v16;
  }
  return result;
}
