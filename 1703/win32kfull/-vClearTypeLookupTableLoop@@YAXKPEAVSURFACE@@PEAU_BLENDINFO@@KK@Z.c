/*
 * XREFs of ?vClearTypeLookupTableLoop@@YAXKPEAVSURFACE@@PEAU_BLENDINFO@@KK@Z @ 0x1C00A4000
 * Callers:
 *     ?pvFillOpaqTableCT@@YAPEAXKKKPEAVSURFACE@@PEAU_BLENDINFO@@H@Z @ 0x1C00A3D3C (-pvFillOpaqTableCT@@YAPEAXKKKPEAVSURFACE@@PEAU_BLENDINFO@@H@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vClearTypeLookupTableLoop(int a1, void **a2, struct _BLENDINFO *a3, int a4, unsigned int a5)
{
  _WORD *v5; // r11
  __int64 v8; // rbx
  __int64 v9; // rdx
  int v10; // ebp
  int v11; // r14d
  int v12; // r15d
  int v13; // ecx
  __int64 v14; // rax
  int v15; // r12d
  int v16; // ebp
  int v17; // r13d
  int v18; // r14d
  int v19; // r15d
  int *v20; // r9
  unsigned int *v21; // rax
  __int64 v22; // r8
  unsigned int v23; // r10d
  int v24; // [rsp+38h] [rbp+8h]

  v5 = (_WORD *)&aulCacheCT + 1;
  uGammaCacheCT = gulGamma;
  v8 = 113LL;
  hCacheCT = *a2;
  v9 = *((_QWORD *)a3 + 6);
  v10 = *((_DWORD *)a3 + 9);
  v11 = *((_DWORD *)a3 + 10);
  v12 = *((_DWORD *)a3 + 11);
  v13 = *((_DWORD *)a3 + 2);
  v14 = (unsigned __int8)((unsigned __int64)((a5 & *((_DWORD *)a3 + 6)) << *(_DWORD *)a3) >> *((_BYTE *)a3 + 4));
  uFCacheCT = a4;
  uBCacheCT = a5;
  v15 = *(unsigned __int8 *)(v14 + v9);
  v16 = v10 - v15;
  v17 = *(unsigned __int8 *)((unsigned __int8)((unsigned __int64)((a5 & *((_DWORD *)a3 + 7)) << v13) >> *((_BYTE *)a3 + 12))
                           + v9);
  v18 = v11 - v17;
  v19 = v12
      - *(unsigned __int8 *)((unsigned __int8)((unsigned __int64)((a5 & *((_DWORD *)a3 + 8)) << *((_DWORD *)a3 + 4)) >> *((_BYTE *)a3 + 20))
                           + v9);
  v24 = *(unsigned __int8 *)((unsigned __int8)((unsigned __int64)((a5 & *((_DWORD *)a3 + 8)) << *((_DWORD *)a3 + 4)) >> *((_BYTE *)a3 + 20))
                           + v9);
  v20 = off_1C0324100 + 1;
  v21 = (unsigned int *)&unk_1C03300E4;
  do
  {
    v22 = *((_QWORD *)a3 + 7);
    v23 = *((_DWORD *)a3 + 6) & ((unsigned int)(*(unsigned __int8 *)((unsigned int)(v15
                                                                                  + ((v16
                                                                                    * alAlpha[*(unsigned __int8 *)v20]
                                                                                    + 0x80000) >> 20))
                                                                   + v22) << *((_DWORD *)a3 + 1)) >> *(_DWORD *)a3) | *((_DWORD *)a3 + 8) & ((unsigned int)(*(unsigned __int8 *)((unsigned int)(v24 + ((v19 * alAlpha[*((unsigned __int8 *)v20 + 2)] + 0x80000) >> 20)) + v22) << *((_DWORD *)a3 + 5)) >> *((_DWORD *)a3 + 4)) | *((_DWORD *)a3 + 7) & ((unsigned int)(*(unsigned __int8 *)((unsigned int)(v17 + ((v18 * alAlpha[*((unsigned __int8 *)v20 + 1)] + 0x80000) >> 20)) + v22) << *((_DWORD *)a3 + 3)) >> *((_DWORD *)a3 + 2));
    if ( a1 == 2 )
      *v5 = v23;
    else
      *v21 = v23;
    ++v5;
    ++v21;
    ++v20;
    --v8;
  }
  while ( v8 );
  if ( a1 == 2 )
  {
    LOWORD(aulCacheCT) = a5;
    word_1C03301C4 = a4;
  }
  else
  {
    LODWORD(aulCacheCT) = a5;
    dword_1C03302A8 = a4;
  }
}
