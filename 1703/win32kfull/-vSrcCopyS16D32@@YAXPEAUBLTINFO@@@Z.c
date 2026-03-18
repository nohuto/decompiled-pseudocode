/*
 * XREFs of ?vSrcCopyS16D32@@YAXPEAUBLTINFO@@@Z @ 0x1C02A72E0
 * Callers:
 *     <none>
 * Callees:
 *     XLATEOBJ_iXlate @ 0x1C00A3750 (XLATEOBJ_iXlate.c)
 */

void __fastcall vSrcCopyS16D32(struct BLTINFO *a1)
{
  int v1; // r14d
  XLATEOBJ *v2; // r13
  int v3; // r12d
  int v4; // esi
  unsigned __int16 *v5; // rbx
  unsigned int *v6; // rdi
  int v7; // r15d
  __int64 v8; // rcx
  int v9; // r12d
  _DWORD *v10; // rdx
  int v11; // r8d
  unsigned int v12; // ecx
  int v13; // r8d
  unsigned int v14; // ecx
  int v15; // ebp

  v1 = *((_DWORD *)a1 + 7);
  v2 = *(XLATEOBJ **)a1;
  v3 = *((_DWORD *)a1 + 11);
  v4 = *((_DWORD *)a1 + 8);
  v5 = (unsigned __int16 *)(*((_QWORD *)a1 + 1) + 2 * *((_DWORD *)a1 + 12));
  v6 = (unsigned int *)(*((_QWORD *)a1 + 2) + 4 * *((_DWORD *)a1 + 14));
  v7 = *((_DWORD *)a1 + 10) - 2 * v1;
  v8 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
  v9 = v3 - 4 * v1;
  v10 = (_DWORD *)*((_QWORD *)v2[1].pulXlate + 15);
  if ( v10[2] != 31 )
    goto LABEL_22;
  if ( v10[1] == 2016 && *v10 == 63488 && (*(_DWORD *)(v8 + 24) & 8) != 0 )
  {
    while ( 1 )
    {
      v11 = v1;
      do
      {
        v12 = *v5++;
        *v6++ = ((v12 & 0x600 | (v12 >> 1) & 0xE) >> 1) | (8
                                                         * (v12 & 0xE01F | (4 * (v12 & 0x7E0 | (8 * (v12 & 0xF800))))));
        --v11;
      }
      while ( v11 );
      if ( !--v4 )
        break;
      v5 = (unsigned __int16 *)((char *)v5 + v7);
      v6 = (unsigned int *)((char *)v6 + v9);
    }
    return;
  }
  if ( v10[1] == 992 && *v10 == 31744 && (*(_DWORD *)(v8 + 24) & 8) != 0 )
  {
    while ( 1 )
    {
      v13 = v1;
      do
      {
        v14 = *v5++;
        *v6++ = (v14 >> 2) & 7 | (2
                                * (v14 & 0x380 | (4
                                                * (v14 & 0x1F | (2
                                                               * (v14 & 0x7000 | (4
                                                                                * (v14 & 0x3E0 | (8 * (v14 & 0x7C00))))))))));
        --v13;
      }
      while ( v13 );
      if ( !--v4 )
        break;
      v5 = (unsigned __int16 *)((char *)v5 + v7);
      v6 = (unsigned int *)((char *)v6 + v9);
    }
  }
  else
  {
LABEL_22:
    while ( 1 )
    {
      v15 = v1;
      do
      {
        *v6++ = XLATEOBJ_iXlate(v2, *v5++);
        --v15;
      }
      while ( v15 );
      if ( !--v4 )
        break;
      v5 = (unsigned __int16 *)((char *)v5 + v7);
      v6 = (unsigned int *)((char *)v6 + v9);
    }
  }
}
