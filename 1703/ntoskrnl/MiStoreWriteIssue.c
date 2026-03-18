/*
 * XREFs of MiStoreWriteIssue @ 0x140056248
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x14005630C (MiStoreWriteModifiedPages.c)
 * Callees:
 *     SmpPageWrite @ 0x1400560CC (SmpPageWrite.c)
 *     ?SmKeyConvert@@YAJPEAT_MM_STORE_KEY@@PEAT_SM_PAGE_KEY@@@Z @ 0x140056200 (-SmKeyConvert@@YAJPEAT_MM_STORE_KEY@@PEAT_SM_PAGE_KEY@@@Z.c)
 */

__int64 __fastcall MiStoreWriteIssue(
        __int64 a1,
        __int64 a2,
        union _MM_STORE_KEY *a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        int a8)
{
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  __int64 result; // rax
  __int64 v12; // r11

  *(_DWORD *)(a1 + 72) = 56;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 4096LL;
  *(_WORD *)(a1 + 74) |= 2u;
  v9 = (__int64)((unsigned __int128)((a2 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3;
  v10 = a7;
  *(_QWORD *)(a1 + 112) = (v9 >> 63) + v9;
  *(_QWORD *)(a1 + 56) = v10;
  result = SmKeyConvert(a3, (union _SM_PAGE_KEY *)&a7);
  if ( (int)result >= 0 )
    return SmpPageWrite((unsigned int *)&a7, a4, a6, v12 + 64, a5, (__int64 *)(v12 + 16), a8);
  return result;
}
