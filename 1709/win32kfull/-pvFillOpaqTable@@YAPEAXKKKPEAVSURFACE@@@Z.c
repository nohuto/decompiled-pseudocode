/*
 * XREFs of ?pvFillOpaqTable@@YAPEAXKKKPEAVSURFACE@@@Z @ 0x1C01086AC
 * Callers:
 *     vSrcOpaqCopyS4D32 @ 0x1C01084D0 (vSrcOpaqCopyS4D32.c)
 *     vSrcOpaqCopyS4D16 @ 0x1C0254290 (vSrcOpaqCopyS4D16.c)
 *     vSrcOpaqCopyS4D24 @ 0x1C0254470 (vSrcOpaqCopyS4D24.c)
 * Callees:
 *     <none>
 */

int *__fastcall pvFillOpaqTable(int a1, int a2, int a3, struct SURFACE *a4)
{
  __int64 v8; // rax
  int v9; // edx
  int v10; // ecx
  int v11; // r9d
  int v12; // esi
  int v13; // r10d
  int v14; // r11d
  int v15; // edi
  int v16; // ebx
  int v17; // r15d
  int v18; // r8d
  int v19; // r13d
  int v20; // eax
  int v21; // r13d
  int v22; // eax
  int v23; // r12d
  int v24; // edx
  unsigned int v25; // ebp
  int v26; // ecx
  unsigned int v27; // r13d
  unsigned __int64 v28; // rax
  unsigned int *v29; // r14
  int *v30; // rdx
  _WORD *v31; // r14
  int v32; // [rsp+0h] [rbp-48h]
  int v33; // [rsp+4h] [rbp-44h]
  int v34; // [rsp+8h] [rbp-40h]
  int v35; // [rsp+Ch] [rbp-3Ch]
  int v38; // [rsp+68h] [rbp+20h]

  if ( *(_QWORD *)a4 != qword_1C0327D18 || a3 != dword_1C0327D20 || a2 != dword_1C0327D24 )
  {
    qword_1C0327D18 = *(_QWORD *)a4;
    v8 = *((_QWORD *)a4 + 16);
    dword_1C0327D24 = a2;
    dword_1C0327D20 = a3;
    if ( !v8 )
      v8 = *(_QWORD *)(*((_QWORD *)a4 + 6) + 1824LL);
    v9 = *(_DWORD *)(v8 + 24);
    if ( (v9 & 2) != 0 )
    {
      v30 = *(int **)(v8 + 120);
      v16 = v30[9] + v30[6] - 8;
      v14 = v30[10] + v30[7] - 8;
      v12 = v30[11] + v30[8] - 8;
      v11 = *v30;
      v13 = v30[1];
      v15 = v30[2];
    }
    else
    {
      v10 = 5;
      v11 = 31;
      if ( a1 != 2 )
      {
        v11 = 255;
        v10 = 8;
      }
      if ( (v9 & 4) != 0 )
      {
        v16 = v10 - 8;
        v13 = v11 << v10;
        v14 = v10 + v10 - 8;
        v12 = v10 + v14;
        v15 = v11 << v10 << v10;
      }
      else if ( (v9 & 8) != 0 )
      {
        v12 = v10 - 8;
        v13 = v11 << v10;
        v14 = v10 + v10 - 8;
        v15 = v11;
        v16 = v10 + v14;
        v11 = v11 << v10 << v10;
      }
      else
      {
        v11 = 0;
        v13 = 0;
        v15 = 0;
        v16 = 0;
        v14 = 0;
        v12 = 0;
      }
    }
    LOBYTE(v17) = 0;
    if ( v16 < 0 )
    {
      v17 = -v16;
      LOBYTE(v16) = 0;
    }
    LOBYTE(v18) = 0;
    v19 = RFONTOBJ::gTables[(unsigned __int8)((unsigned __int64)((a3 & (unsigned int)v11) << v17) >> v16)];
    v20 = RFONTOBJ::gTables[(unsigned __int8)((unsigned __int64)((a2 & (unsigned int)v11) << v17) >> v16)] - v19;
    v21 = 16 * v19;
    v34 = v20;
    if ( v14 < 0 )
    {
      v18 = -v14;
      LOBYTE(v14) = 0;
    }
    v23 = RFONTOBJ::gTables[(unsigned __int8)((unsigned __int64)((a3 & (unsigned int)v13) << v18) >> v14)];
    v22 = RFONTOBJ::gTables[(unsigned __int8)((unsigned __int64)((a2 & (unsigned int)v13) << v18) >> v14)] - v23;
    v32 = 16 * v23;
    LOBYTE(v23) = 0;
    v35 = v22;
    if ( v12 < 0 )
    {
      v23 = -v12;
      LOBYTE(v12) = 0;
    }
    v38 = RFONTOBJ::gTables[(unsigned __int8)((unsigned __int64)((a3 & (unsigned int)v15) << v23) >> v12)];
    v28 = (a2 & (unsigned int)v15) << v23;
    v24 = v35;
    v25 = v35 + v32;
    v33 = RFONTOBJ::gTables[(unsigned __int8)(v28 >> v12)] - v38;
    v26 = v34;
    v27 = v34 + v21;
    LODWORD(v28) = v33 + 16 * v38;
    if ( a1 == 2 )
    {
      LOWORD(dword_1C032B880) = a3;
      v31 = (_WORD *)&dword_1C032B880 + 1;
      do
      {
        v28 = (unsigned int)(v33 + v28);
        v27 += v26;
        v25 += v24;
        v26 = v34;
        *v31++ = v11 & ((unsigned int)(RFONTOBJ::gTables[(unsigned __int8)((unsigned __int64)v27 >> 4) + 256] << v16) >> v17) | v13 & ((unsigned int)(RFONTOBJ::gTables[(unsigned __int8)((unsigned __int64)v25 >> 4) + 256] << v14) >> v18) | v15 & ((unsigned int)(RFONTOBJ::gTables[(unsigned __int8)(v28 >> 4) + 256] << v12) >> v23);
        v24 = v35;
      }
      while ( v31 < word_1C032B89E );
      *v31 = a2;
    }
    else
    {
      dword_1C032B880 = a3;
      v29 = (unsigned int *)&unk_1C032B884;
      do
      {
        v28 = (unsigned int)(v33 + v28);
        v27 += v26;
        v25 += v24;
        v26 = v34;
        *v29++ = v11 & ((unsigned int)(RFONTOBJ::gTables[(unsigned __int8)((unsigned __int64)v27 >> 4) + 256] << v16) >> v17) | v13 & ((unsigned int)(RFONTOBJ::gTables[(unsigned __int8)((unsigned __int64)v25 >> 4) + 256] << v14) >> v18) | v15 & ((unsigned int)(RFONTOBJ::gTables[(unsigned __int8)(v28 >> 4) + 256] << v12) >> v23);
        v24 = v35;
      }
      while ( v29 < &dword_1C032B8BC );
      *v29 = a2;
    }
  }
  return &dword_1C032B880;
}
