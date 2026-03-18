/*
 * XREFs of ?vIFIMetricsToETM@@YAXPEAU_EXTTEXTMETRIC@@AEAVRFONTOBJ@@AEAVDCOBJ@@PEAU_IFIMETRICS@@@Z @ 0x1C0129E8C
 * Callers:
 *     NtGdiGetETM @ 0x1C012A0D0 (NtGdiGetETM.c)
 * Callees:
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z @ 0x1C0030910 (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C0031818 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     ?vSetNotionalToDevice@RFONTOBJ@@QEAAXAEAVEXFORMOBJ@@@Z @ 0x1C008F910 (-vSetNotionalToDevice@RFONTOBJ@@QEAAXAEAVEXFORMOBJ@@@Z.c)
 *     bFToL @ 0x1C00DF104 (bFToL.c)
 *     ??0EXFORMOBJ@@QEAA@PEAVMATRIX@@K@Z @ 0x1C012879C (--0EXFORMOBJ@@QEAA@PEAVMATRIX@@K@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

void __fastcall vIFIMetricsToETM(
        struct _EXTTEXTMETRIC *a1,
        struct RFONTOBJ *a2,
        struct DCOBJ *a3,
        struct _IFIMETRICS *a4)
{
  __int64 v8; // rdi
  int v9; // ebx
  int v10; // eax
  int v11; // eax
  int v12; // ebx
  int v13; // eax
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // eax
  int v18; // [rsp+20h] [rbp-69h] BYREF
  __int64 v19; // [rsp+28h] [rbp-61h] BYREF
  float v20; // [rsp+30h] [rbp-59h] BYREF
  _QWORD v21[3]; // [rsp+38h] [rbp-51h] BYREF
  _QWORD v22[5]; // [rsp+50h] [rbp-39h] BYREF
  int v23; // [rsp+7Ch] [rbp-Dh]

  IFIOBJR::IFIOBJR((IFIOBJR *)v22, a4, a2, a3);
  v8 = v22[0];
  *(_WORD *)a1 = 52;
  v9 = (*(_DWORD *)(*(_QWORD *)a2 + 316LL) + 8) >> 4;
  if ( (*(_DWORD *)(v8 + 48) & 0x3000010) != 0 )
  {
    v10 = *(_DWORD *)(*(_QWORD *)a2 + 376LL);
    if ( v10 == 0x80000000 )
    {
      EXFORMOBJ::EXFORMOBJ((EXFORMOBJ *)v21, (struct MATRIX *)v22, 8);
      RFONTOBJ::vSetNotionalToDevice(a2, (struct EXFORMOBJ *)v21);
      v11 = *(__int16 *)(v8 + 56);
      LODWORD(v19) = 0;
      *((float *)&v19 + 1) = (float)v11;
      if ( (*(_DWORD *)(v21[0] + 32LL) & 2) == 0 )
        EXFORMOBJ::bXform((EXFORMOBJ *)v21, (struct VECTORFL *)&v19, (struct VECTORFL *)&v19, 1uLL);
      EFLOAT::eqLength(&v20, &v18, &v19);
      v18 = 0;
      bFToL(v20, &v18, 0);
      v12 = v18;
    }
    else
    {
      v12 = v9 - v10;
    }
  }
  else
  {
    v12 = v9 - v23;
  }
  v19 = *(_QWORD *)(*(_QWORD *)a3 + 48LL);
  v13 = PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v19);
  v14 = v13;
  v15 = v13 / 2 + 72LL * v12;
  if ( v15 > 0x7FFFFFFF )
    v16 = v15 / v14;
  else
    LODWORD(v16) = (int)v15 / (int)v14;
  *((_WORD *)a1 + 2) = 0;
  *((_WORD *)a1 + 1) = 20 * v16;
  *((_WORD *)a1 + 3) = *(_WORD *)(v8 + 56);
  *((_WORD *)a1 + 4) = *(_WORD *)(v8 + 58);
  *((_WORD *)a1 + 5) = 0x4000;
  *((_WORD *)a1 + 6) = *(_WORD *)(v8 + 56);
  *((_WORD *)a1 + 7) = *(_WORD *)(v8 + 70);
  *((_WORD *)a1 + 8) = *(_WORD *)(v8 + 82);
  *((_WORD *)a1 + 9) = *(_WORD *)(v8 + 70);
  *((_WORD *)a1 + 10) = -*(_WORD *)(v8 + 72);
  *((_WORD *)a1 + 11) = -*(_WORD *)(v8 + 32);
  *((_WORD *)a1 + 12) = *(_WORD *)(v8 + 98);
  *((_WORD *)a1 + 13) = *(_WORD *)(v8 + 90);
  *((_WORD *)a1 + 14) = *(_WORD *)(v8 + 94);
  *((_WORD *)a1 + 15) = *(_WORD *)(v8 + 86);
  *((_WORD *)a1 + 16) = *(_WORD *)(v8 + 102);
  *((_WORD *)a1 + 17) = *(_WORD *)(v8 + 100);
  *((_WORD *)a1 + 18) = *(__int16 *)(v8 + 102) >> 1;
  *((_WORD *)a1 + 19) = *(_WORD *)(v8 + 102);
  v17 = *(__int16 *)(v8 + 100) >> 1;
  *((_WORD *)a1 + 21) = v17;
  *((_WORD *)a1 + 20) = v17;
  *((_WORD *)a1 + 22) = *(_WORD *)(v8 + 106);
  *((_WORD *)a1 + 23) = *(_WORD *)(v8 + 104);
  *((_DWORD *)a1 + 12) = LOWORD(a4->cKerningPairs);
}
