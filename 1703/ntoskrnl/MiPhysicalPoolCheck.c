/*
 * XREFs of MiPhysicalPoolCheck @ 0x140134638
 * Callers:
 *     MiFindContiguousMemoryInPool @ 0x1401241D8 (MiFindContiguousMemoryInPool.c)
 *     MiCheckPoolForContiguousPages @ 0x1401344EC (MiCheckPoolForContiguousPages.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiPhysicalPoolCheck(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        __int64 a7,
        unsigned int a8)
{
  __int64 v8; // r13
  unsigned __int64 v10; // rbx
  __int64 v13; // r11
  __int64 v14; // r14
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  __int64 v18; // r10
  unsigned __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rdx
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  __int64 v27; // [rsp+50h] [rbp+8h] BYREF
  __int64 v28; // [rsp+58h] [rbp+10h]

  v8 = 0LL;
  v10 = 0LL;
  v28 = a7 - 1;
  v13 = -1LL;
  v14 = ~(a7 - 1);
  v15 = qword_14036C1C8[25 * a8 + 20].Alignment + ((a1 + a2) << 12);
  if ( a3 )
  {
    while ( 1 )
    {
      if ( v13 == -1 )
        v16 = a3 - v10;
      else
        v16 = a3 - v13;
      if ( v16 < a4 )
        return -1LL;
      v27 = MI_READ_PTE_LOCK_FREE(((v15 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
      v17 = MI_READ_PTE_LOCK_FREE(&v27);
      v20 = 48 * (((v19 >> 3) & 0x1FF) + ((v17 >> 12) & 0xFFFFFFFFFLL));
      v21 = v20 - 0x58000000000LL;
      if ( *(_QWORD *)(v20 - 0x58000000000LL + 40) >> 58 != a8 )
      {
        v22 = 1LL;
LABEL_26:
        v13 = -1LL;
        goto LABEL_27;
      }
      if ( v13 != -1 )
        break;
      v23 = (unsigned __int128)(v20 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
      v22 = v18;
      v24 = ((unsigned __int64)v23 >> 63) + (v23 >> 3);
      if ( v24 > a5 )
        goto LABEL_27;
      if ( v24 >= a6 )
      {
        if ( v24 + a4 <= v24 || v24 + a4 - 1 > a5 )
          goto LABEL_27;
        if ( a7 && ((v24 ^ (v24 + a4 - 1)) & v14) != 0 )
        {
          if ( v18 + v24 <= (v14 & (v24 + v28)) )
            goto LABEL_27;
          v25 = v14 & (v24 + v28);
          goto LABEL_13;
        }
        v13 = v10;
        goto LABEL_22;
      }
      if ( v18 + v24 > a6 )
      {
        v25 = a6;
LABEL_13:
        v22 = v25 - v24;
      }
LABEL_27:
      v10 += v22;
      v15 += v22 << 12;
      if ( v10 >= a3 )
        return -1LL;
    }
    if ( v21 != v8 + 48 )
    {
      v22 = 0LL;
      goto LABEL_26;
    }
LABEL_22:
    if ( v13 != -1 && v10 - v13 + 1 >= a4 )
      return v13 + a1;
    v22 = 1LL;
    v8 = v21;
    goto LABEL_27;
  }
  return -1LL;
}
