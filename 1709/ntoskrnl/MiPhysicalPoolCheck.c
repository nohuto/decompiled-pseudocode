/*
 * XREFs of MiPhysicalPoolCheck @ 0x140119F00
 * Callers:
 *     MiFindContiguousMemoryInPool @ 0x140119800 (MiFindContiguousMemoryInPool.c)
 *     MiCheckPoolForContiguousPages @ 0x140119DCC (MiCheckPoolForContiguousPages.c)
 * Callees:
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14022A184 (MI_GET_PAGE_FRAME_FROM_PTE.c)
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
  signed __int64 v8; // r13
  __int64 v9; // r10
  unsigned __int64 v11; // r11
  __int64 v14; // r14
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rax
  __int64 *v17; // r8
  __int64 PteShadow; // rax
  signed __int64 v19; // rcx
  __int64 v20; // r9
  __int64 v21; // r11
  __int64 v22; // rdx
  unsigned __int64 v23; // r8
  bool v24; // cc
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  __int64 v28; // [rsp+50h] [rbp+8h] BYREF
  __int64 v29; // [rsp+58h] [rbp+10h]

  v8 = 0LL;
  v9 = -1LL;
  v11 = 0LL;
  v29 = a7 - 1;
  v14 = ~(a7 - 1);
  v15 = qword_140388510[25 * a8 + 20].Alignment + ((a1 + a2) << 12);
  while ( v11 < a3 )
  {
    if ( v9 == -1 )
      v16 = a3 - v11;
    else
      v16 = a3 - v9;
    if ( v16 < a4 )
      return -1LL;
    v17 = (__int64 *)(((v15 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
    PteShadow = *v17;
    if ( (unsigned __int64)v17 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v17 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow(((v15 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL, *v17);
    v28 = PteShadow;
    v19 = 48 * ((((((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 3) & 0x1FF) + MI_GET_PAGE_FRAME_FROM_PTE(&v28));
    if ( *(_QWORD *)(v19 - 0x58000000000LL + 40) >> 58 != a8 )
    {
      v22 = 1LL;
LABEL_29:
      v9 = -1LL;
      goto LABEL_30;
    }
    if ( v9 == -1 )
    {
      v22 = v20;
      v23 = v19 / 48;
      if ( v19 / 48 > a5 )
        goto LABEL_30;
      if ( v23 < a6 )
      {
        v22 = a6 - v23;
        v24 = v20 + v23 <= a6;
        goto LABEL_15;
      }
      if ( v23 + a4 <= v23 )
        goto LABEL_30;
      v25 = v23 + a4 - 1;
      if ( v25 > a5 )
        goto LABEL_30;
      if ( a7 && ((v23 ^ v25) & v14) != 0 )
      {
        v26 = v14 & (v23 + v29);
        v22 = v26 - v23;
        v24 = v20 + v23 <= v26;
LABEL_15:
        if ( v24 )
          v22 = v20;
        goto LABEL_30;
      }
      v9 = v21;
    }
    else if ( v19 - 0x58000000000LL != v8 + 48 )
    {
      v22 = 0LL;
      goto LABEL_29;
    }
    if ( v9 != -1 && v21 - v9 + 1 >= a4 )
      return v9 + a1;
    v22 = 1LL;
    v8 = v19 - 0x58000000000LL;
LABEL_30:
    v11 = v22 + v21;
    v15 += v22 << 12;
  }
  return -1LL;
}
