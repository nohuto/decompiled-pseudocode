/*
 * XREFs of MiPhysicalPoolCheck @ 0x140162CAC
 * Callers:
 *     MiFindContiguousMemoryInPool @ 0x1400BE770 (MiFindContiguousMemoryInPool.c)
 *     MiCheckPoolForContiguousPages @ 0x140162B78 (MiCheckPoolForContiguousPages.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140015180 (MI_READ_PTE_LOCK_FREE.c)
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
  unsigned __int64 v11; // rbx
  __int64 v13; // r11
  __int64 v14; // r14
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rax
  __int64 v17; // r10
  unsigned __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v23; // r8
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // rax
  bool v26; // cc
  unsigned __int64 v27; // rax
  __int64 v28; // [rsp+50h] [rbp+8h] BYREF
  __int64 v29; // [rsp+58h] [rbp+10h]

  v8 = 0LL;
  v11 = 0LL;
  v29 = a7 - 1;
  v13 = -1LL;
  v14 = ~(a7 - 1);
  v15 = qword_1403CB6A8[25 * a8 + 20].Alignment + ((a1 + a2) << 12);
  if ( !a3 )
    return -1LL;
  while ( 1 )
  {
    if ( v13 == -1 )
    {
      if ( a3 - v11 < a4 )
        return -1LL;
    }
    else if ( a3 - v13 < a4 )
    {
      return -1LL;
    }
    v28 = MI_READ_PTE_LOCK_FREE(((v15 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
    v16 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v28);
    v19 = 48 * (((v18 >> 3) & 0x1FF) + ((v16 >> 12) & 0xFFFFFFFFFLL));
    v20 = v19 - 0x58000000000LL;
    if ( *(_QWORD *)(v19 - 0x58000000000LL + 40) >> 58 != a8 )
    {
      v21 = 1LL;
      goto LABEL_29;
    }
    if ( v13 != -1 )
    {
      if ( v20 == v8 + 48 )
        goto LABEL_7;
      v21 = 0LL;
LABEL_29:
      v13 = -1LL;
      goto LABEL_10;
    }
    v23 = (unsigned __int128)(v19 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
    v21 = v17;
    v24 = ((unsigned __int64)v23 >> 63) + (v23 >> 3);
    if ( v24 <= a5 )
    {
      if ( v24 < a6 )
      {
        v21 = a6 - v24;
        v26 = v17 + v24 <= a6;
        goto LABEL_25;
      }
      if ( v24 + a4 > v24 )
      {
        v25 = v24 + a4 - 1;
        if ( v25 <= a5 )
          break;
      }
    }
LABEL_10:
    v11 += v21;
    v15 += v21 << 12;
    if ( v11 >= a3 )
      return -1LL;
  }
  if ( a7 && ((v24 ^ v25) & v14) != 0 )
  {
    v27 = v14 & (v24 + v29);
    v21 = v27 - v24;
    v26 = v17 + v24 <= v27;
LABEL_25:
    if ( v26 )
      v21 = v17;
    goto LABEL_10;
  }
  v13 = v11;
LABEL_7:
  if ( v13 == -1 || v11 - v13 + 1 < a4 )
  {
    v21 = 1LL;
    v8 = v20;
    goto LABEL_10;
  }
  return v13 + a1;
}
