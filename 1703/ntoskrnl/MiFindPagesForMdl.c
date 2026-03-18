/*
 * XREFs of MiFindPagesForMdl @ 0x14007AE64
 * Callers:
 *     MiAllocatePagesForMdl @ 0x14007A5D8 (MiAllocatePagesForMdl.c)
 * Callees:
 *     MiPfnZeroingNeeded @ 0x14007AE20 (MiPfnZeroingNeeded.c)
 *     MiFindContiguousPages @ 0x1400B65D0 (MiFindContiguousPages.c)
 *     MiAllocateMostlyContiguous @ 0x1400B8420 (MiAllocateMostlyContiguous.c)
 *     MiAllocateMdlPagesByLists @ 0x140133DC0 (MiAllocateMdlPagesByLists.c)
 */

__int64 __fastcall MiFindPagesForMdl(
        int a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        __int64 a8,
        unsigned __int16 a9)
{
  __int64 v9; // rbp
  unsigned int v10; // esi
  _WORD *v11; // rax
  _WORD *v12; // r14
  _WORD *v13; // rdx
  int v14; // edi
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r12
  unsigned __int64 v17; // r13
  unsigned __int64 v18; // r15
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rdx
  int v23; // eax
  unsigned __int64 v24; // rbx
  int MdlPagesByLists; // eax
  unsigned __int64 v27; // rbx
  int ContiguousPages; // eax
  unsigned __int64 v29; // r8
  __int64 v30; // r9
  unsigned __int64 v31; // r11
  unsigned __int64 v32; // r10
  unsigned __int64 *v33; // rax
  bool v34; // zf
  bool v35; // cf
  _WORD v36[2]; // [rsp+50h] [rbp-78h] BYREF
  int v37; // [rsp+54h] [rbp-74h]
  unsigned __int64 v38; // [rsp+58h] [rbp-70h]
  unsigned __int64 v39; // [rsp+60h] [rbp-68h] BYREF
  unsigned __int64 *v40; // [rsp+68h] [rbp-60h]
  unsigned __int64 v41; // [rsp+70h] [rbp-58h]
  unsigned __int64 v42; // [rsp+78h] [rbp-50h]
  int v45; // [rsp+E0h] [rbp+18h]
  int v46; // [rsp+E8h] [rbp+20h]

  v46 = a4;
  v9 = a2;
  v10 = 0;
  v41 = BugCheckParameter3;
  v11 = 0LL;
  if ( (unsigned __int16)KeNumberNodes <= 1u )
  {
    a3 &= ~2u;
    v36[0] = 0;
LABEL_3:
    v12 = v36;
    goto LABEL_4;
  }
  if ( (a3 & 2) != 0 )
  {
    v36[0] = a9;
    goto LABEL_3;
  }
  v12 = (char *)qword_14036C1C0 + 2 * a9 * (unsigned __int16)KeNumberNodes;
  v11 = &v12[(unsigned __int16)KeNumberNodes];
LABEL_4:
  v13 = v12 + 1;
  if ( v12 != v36 )
    v13 = v11;
  v14 = a3 | 0x4000000;
  v42 = (unsigned __int64)v13;
  if ( (a3 & 0x100) == 0 )
    v14 = a3;
  v15 = (unsigned __int64)*(unsigned int *)(v9 + 40) >> 12;
  v37 = v14;
  v16 = v15;
  if ( (v14 & 0x10052) != 0x10000 )
    goto LABEL_9;
  MdlPagesByLists = MiAllocateMdlPagesByLists(a1, v9, v14, a4, a7, a5 - v15, a9);
  v15 = (unsigned __int64)*(unsigned int *)(v9 + 40) >> 12;
  v16 = v15;
  if ( v15 && *(_QWORD *)(v9 + 24) )
    v10 = 1;
  if ( MdlPagesByLists != 1 )
  {
    a4 = v46;
    v14 &= ~0x10000u;
    v37 = v14;
LABEL_9:
    v17 = a6;
    v18 = a7;
    v19 = v15 + 6;
    v20 = -1LL;
    if ( (_bittest64((const signed __int64 *)&KeFeatureBits, 0x25u) & ((v14 & 0x40) != 0)) != 0 )
      v20 = 0x40000LL;
    v21 = 8 * v19;
    v22 = a8;
    v40 = (unsigned __int64 *)(v9 + v21);
    v23 = v14 & 0x20;
    v38 = v20;
    v45 = v23;
    while ( 1 )
    {
      if ( !v23 )
      {
        v24 = (unsigned __int64)*(unsigned int *)(v9 + 40) >> 12;
        MiAllocateMostlyContiguous(a1, v9, v14, a4, a5 - v16, (unsigned __int16)*v12, v17, v18);
        v16 += ((unsigned __int64)*(unsigned int *)(v9 + 40) >> 12) - v24;
        if ( *(_QWORD *)(v9 + 24) )
          v10 = 1;
        if ( v16 == a5 )
          return v10;
        v22 = a8;
        if ( a8 && a8 + v17 > v17 && a8 + v17 <= v41 )
        {
          v17 += a8;
          if ( v18 + a8 <= v18 || v18 + a8 > v41 )
            v18 = v41;
          else
            v18 += a8;
        }
        else
        {
LABEL_41:
          if ( (v14 & 2) != 0 )
            return v10;
          if ( (unsigned __int64)++v12 >= v42 )
            return v10;
          v17 = a6;
          v18 = a7;
        }
        a4 = v46;
        v23 = v45;
        goto LABEL_27;
      }
      v39 = -1LL;
      if ( !v22 )
        break;
      v27 = v22;
      if ( (v14 & 0x40) == 0 || a5 - v16 < v20 )
        goto LABEL_38;
      ContiguousPages = MiFindContiguousPages(
                          a1,
                          v17,
                          v18,
                          v22,
                          v20,
                          a4,
                          (unsigned __int16)*v12,
                          0x80000000,
                          v14 | 0x60000000u,
                          (__int64)&v39);
      LODWORD(v22) = a8;
      if ( ContiguousPages < 0 )
      {
        if ( a8 == v38 )
          ContiguousPages = -1073741637;
      }
      else
      {
        v27 = v38;
      }
      if ( ContiguousPages >= 0 )
        goto LABEL_45;
      if ( ContiguousPages != -1073741637 )
        goto LABEL_38;
LABEL_39:
      if ( ContiguousPages < 0 )
      {
        v22 = a8;
        goto LABEL_41;
      }
LABEL_45:
      v29 = v39;
      v16 += v27;
      v30 = 48 * v39 - 0x58000000000LL;
      v31 = v27 + v39;
      v32 = v39;
      if ( v39 < v27 + v39 )
      {
        v33 = v40;
        do
        {
          *v33++ = v32;
          v40 = v33;
          if ( v10 != 1 )
          {
            v34 = !MiPfnZeroingNeeded();
            v33 = v40;
            if ( !v34 )
              v10 = 1;
          }
          v30 += 48LL;
          ++v32;
        }
        while ( v32 < v31 );
        v14 = v37;
        v9 = a2;
      }
      *(_DWORD *)(v9 + 40) += (_DWORD)v27 << 12;
      if ( v16 == a5 )
        return v10;
      v22 = a8;
      a4 = v46;
      v23 = v45;
      if ( (v14 & 0x40) != 0 )
      {
LABEL_27:
        v20 = v38;
      }
      else
      {
        a4 = v46;
        v18 = v29 - 1;
        v35 = v29 - v17 < v27;
        v20 = v38;
        if ( v35 )
          goto LABEL_41;
      }
    }
    v27 = a5 - v16;
LABEL_38:
    ContiguousPages = MiFindContiguousPages(
                        a1,
                        v17,
                        v18,
                        v22,
                        v27,
                        v46,
                        (unsigned __int16)*v12,
                        0x80000000,
                        v14 | 0x60000000u,
                        (__int64)&v39);
    goto LABEL_39;
  }
  return v10;
}
