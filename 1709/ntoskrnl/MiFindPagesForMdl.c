/*
 * XREFs of MiFindPagesForMdl @ 0x1400CBBA0
 * Callers:
 *     MiAllocatePagesForMdl @ 0x1400CB9E8 (MiAllocatePagesForMdl.c)
 * Callees:
 *     MiFindContiguousPages @ 0x140078120 (MiFindContiguousPages.c)
 *     MiAllocateMdlPagesByLists @ 0x140128900 (MiAllocateMdlPagesByLists.c)
 */

__int64 __fastcall MiFindPagesForMdl(
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        __int64 a8,
        unsigned __int16 a9)
{
  unsigned int v9; // ebx
  unsigned __int16 *v11; // rax
  unsigned __int16 *v12; // rsi
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // r15
  unsigned __int16 *v15; // rdx
  int v16; // edi
  unsigned __int64 v17; // rbp
  unsigned __int64 v18; // r13
  int v19; // eax
  unsigned __int64 v20; // r14
  __int64 v21; // rdx
  int v22; // ecx
  int MdlPagesByLists; // eax
  unsigned __int64 v25; // r14
  int ContiguousPages; // eax
  bool v27; // cf
  unsigned __int64 v28; // rax
  unsigned __int16 v29; // [rsp+60h] [rbp-78h] BYREF
  unsigned __int64 v30; // [rsp+68h] [rbp-70h]
  __int64 v31; // [rsp+70h] [rbp-68h] BYREF
  unsigned __int64 v32; // [rsp+78h] [rbp-60h]
  unsigned __int64 v33; // [rsp+80h] [rbp-58h]

  v9 = 0;
  v32 = BugCheckParameter3;
  v11 = 0LL;
  if ( (unsigned __int16)KeNumberNodes <= 1u )
  {
    a3 &= ~2u;
    v29 = 0;
    goto LABEL_4;
  }
  if ( (a3 & 2) != 0 )
  {
    v29 = a9;
LABEL_4:
    v12 = &v29;
    goto LABEL_5;
  }
  v12 = (unsigned __int16 *)((char *)qword_140388508 + 2 * a9 * (unsigned __int16)KeNumberNodes);
  v11 = &v12[(unsigned __int16)KeNumberNodes];
LABEL_5:
  v13 = *(unsigned int *)(a2 + 40);
  v14 = a7;
  v15 = v12 + 1;
  if ( v12 != &v29 )
    v15 = v11;
  v16 = a3 | 0x4000000;
  v33 = (unsigned __int64)v15;
  if ( (a3 & 0x100) == 0 )
    v16 = a3;
  v17 = v13 >> 12;
  if ( (v16 & 0x10052) != 0x10000 )
    goto LABEL_10;
  MdlPagesByLists = MiAllocateMdlPagesByLists(a1, a2, v16, a4, a7, a5 - v17, a9);
  v17 = (unsigned __int64)*(unsigned int *)(a2 + 40) >> 12;
  if ( MdlPagesByLists != 1 )
  {
    v16 &= ~0x10000u;
LABEL_10:
    v18 = -1LL;
    v19 = v16 & 0x40;
    if ( (v16 & 0x40) != 0 )
    {
      if ( (KeFeatureBits & 0x2000000000LL) != 0 )
        v18 = 0x40000LL;
      v19 = v16 & 0x40;
    }
    v20 = a6;
    v21 = a8;
    v22 = v16 & 0x20;
    v30 = a6;
    while ( 1 )
    {
      while ( !v22 )
      {
        MiFindContiguousPages(a1, v20, v14, 0LL, a5 - v17, a4, *v12, 0x80000000, v16 | 0x60002000, a2, &v31);
        v17 = (unsigned __int64)*(unsigned int *)(a2 + 40) >> 12;
        if ( v17 == a5 )
          goto LABEL_14;
        v21 = a8;
        if ( a8 )
        {
          v28 = v20 + a8;
          if ( v20 + a8 > v20 && v28 <= v32 )
          {
            v20 += a8;
            v30 = v28;
            if ( v14 + a8 <= v14 || v14 + a8 > v32 )
              v14 = v32;
            else
              v14 += a8;
            goto LABEL_27;
          }
        }
LABEL_24:
        if ( (v16 & 2) != 0 )
          goto LABEL_14;
        if ( (unsigned __int64)++v12 >= v33 )
          goto LABEL_14;
        v20 = a6;
        v14 = a7;
        v30 = a6;
LABEL_27:
        v19 = v16 & 0x40;
        v22 = v16 & 0x20;
      }
      v31 = -1LL;
      if ( !v21 )
        break;
      v25 = v21;
      if ( !v19 || a5 - v17 < v18 )
        goto LABEL_42;
      ContiguousPages = MiFindContiguousPages(a1, v30, v14, v21, v18, a4, *v12, 0x80000000, v16 | 0x60000000u, a2, &v31);
      v21 = a8;
      if ( ContiguousPages < 0 )
      {
        if ( a8 == v18 )
          ContiguousPages = -1073741637;
      }
      else
      {
        v25 = v18;
      }
      if ( ContiguousPages < 0 )
      {
        if ( ContiguousPages != -1073741637 )
LABEL_42:
          ContiguousPages = MiFindContiguousPages(
                              a1,
                              v30,
                              v14,
                              v21,
                              v25,
                              a4,
                              *v12,
                              0x80000000,
                              v16 | 0x60000000u,
                              a2,
                              &v31);
        if ( ContiguousPages < 0 )
        {
          v21 = a8;
          goto LABEL_24;
        }
      }
      v17 += v25;
      if ( v17 == a5 )
        goto LABEL_14;
      v19 = v16 & 0x40;
      v21 = a8;
      v22 = v16 & 0x20;
      if ( (v16 & 0x40) != 0 )
      {
        v20 = v30;
      }
      else
      {
        v14 = v31 - 1;
        v27 = v31 - v30 < v25;
        v20 = v30;
        v19 = 0;
        if ( v27 )
          goto LABEL_24;
      }
    }
    v25 = a5 - v17;
    goto LABEL_42;
  }
LABEL_14:
  if ( *(_DWORD *)(a2 + 40) && *(_QWORD *)(a2 + 24) )
    return 1;
  return v9;
}
