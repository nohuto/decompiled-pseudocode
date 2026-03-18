/*
 * XREFs of ?ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z @ 0x1C0003464
 * Callers:
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C008E7C0 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1C028606C (-bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C028630C (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z @ 0x1C0030910 (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750D4 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?bIsZero@EFLOAT@@QEAAHXZ @ 0x1C007DA54 (-bIsZero@EFLOAT@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C0089C50 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008F468 (--1RFONTOBJ@@QEAA@XZ.c)
 *     bFToL @ 0x1C00DF104 (bFToL.c)
 */

void __fastcall RFONTOBJ::ComputeEUDCLogfont(RFONTOBJ *this, struct _EUDCLOGFONT *a2, struct XDCOBJ *a3)
{
  struct XDCOBJ *v4; // r14
  struct HLFONT__ *v6; // rdx
  HDC *v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rbx
  __int64 v10; // rdx
  int v11; // r13d
  bool v12; // zf
  __int64 v13; // rcx
  int v14; // r14d
  _DWORD *v15; // r15
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // r12d
  int v19; // eax
  int v20; // eax
  __int64 v21; // rax
  int v22; // ecx
  float v23; // xmm2_4
  float v24; // xmm1_4
  __int64 v25; // rdx
  unsigned int v26; // r8d
  unsigned int v27; // eax
  __int64 v28; // rcx
  int v29; // r8d
  int v30; // r9d
  _BYTE v31[16]; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v32[5]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v33; // [rsp+B0h] [rbp+40h] BYREF
  struct XDCOBJ *v34; // [rsp+C0h] [rbp+50h] BYREF
  __int64 v35; // [rsp+C8h] [rbp+58h] BYREF

  v34 = a3;
  v4 = a3;
  v6 = *(struct HLFONT__ **)(*(_QWORD *)a3 + 2176LL);
  v33 = *(_QWORD *)(*(_QWORD *)a3 + 48LL);
  LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v35, v6, (struct PDEVOBJ *)&v33);
  v7 = *(HDC **)v4;
  v33 = *(_QWORD *)this;
  v8 = *(_QWORD *)(v33 + 112);
  DCOBJ::DCOBJ((DCOBJ *)v31, *v7);
  IFIOBJR::IFIOBJR(
    (IFIOBJR *)v32,
    *(const struct _IFIMETRICS **)(v8 + 32),
    (struct RFONTOBJ *)&v33,
    (struct DCOBJ *)v31);
  v9 = v35;
  if ( !v35 )
    goto LABEL_15;
  v10 = v32[0];
  *(_DWORD *)a2 = *(unsigned __int16 *)(v32[0] + 52LL);
  *((_DWORD *)a2 + 1) = *(_DWORD *)(*(_QWORD *)this + 12LL);
  *((_DWORD *)a2 + 3) = *(_DWORD *)(v9 + 276);
  *((_DWORD *)a2 + 2) = *(_DWORD *)(v9 + 280);
  *((_DWORD *)a2 + 4) = *(_DWORD *)(v9 + 284);
  *((_DWORD *)a2 + 5) = *(_DWORD *)(v9 + 288);
  *((_DWORD *)a2 + 7) = 1065353216;
  v11 = *(_DWORD *)(v10 + 48) & 0x401000;
  v12 = (*(_DWORD *)(v10 + 48) & 0x3000010) == 0;
  *((_DWORD *)a2 + 6) = *(_DWORD *)(v10 + 48) & 0x3000010;
  v13 = 2050LL;
  if ( v12 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 80LL) + 352LL) & 0x802) == 0x802 )
    {
      if ( v11 )
        *((_DWORD *)a2 + 2) = *(__int16 *)(v10 + 76);
      if ( _wcsicmp((const wchar_t *)(v10 + *(int *)(v10 + 16)), L"Ms Sans Serif") )
      {
        v21 = *(_QWORD *)this;
        if ( (ulFontLinkControl & 0x4000) != 0 )
          v22 = *(_DWORD *)(v21 + 316);
        else
          v22 = *(_DWORD *)(v21 + 308);
        *((_DWORD *)a2 + 3) = (v22 + 8) >> 4;
      }
      else if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)this + 316LL) - 193) > 0x4E )
      {
        *((_DWORD *)a2 + 3) = (*(_DWORD *)(*(_QWORD *)this + 308LL) + 8) >> 4;
      }
      else
      {
        *((_DWORD *)a2 + 3) = 12;
      }
    }
    else
    {
      if ( v11 )
      {
        LODWORD(v34) = 0;
        bFToL(2050LL, &v34, 0LL);
        *((_DWORD *)a2 + 2) = (_DWORD)v34;
      }
      LODWORD(v34) = 0;
      bFToL(v13, &v34, 0LL);
      *((_DWORD *)a2 + 3) = (_DWORD)v34;
    }
    if ( v11 )
      *((_DWORD *)a2 + 2) *= *(_DWORD *)(*(_QWORD *)this + 672LL);
    goto LABEL_14;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 80LL) + 352LL) & 0x802) == 0x802 )
  {
    v14 = (*(_DWORD *)(*(_QWORD *)this + 316LL) + 8) >> 4;
  }
  else
  {
    LODWORD(v33) = 0;
    bFToL(2050LL, &v33, 0LL);
    v14 = v33;
  }
  v15 = *(_DWORD **)this;
  LODWORD(v33) = 0;
  if ( v15[94] == 0x80000000 )
  {
    LODWORD(v35) = v15[52];
    bFToL(v13, &v33, 0LL);
    v18 = v14 - v33;
    if ( v11 && gbJpn98FixPitch == (_DWORD)v17 )
    {
      LODWORD(v35) = v15[51];
LABEL_39:
      LODWORD(v33) = v17 & v33;
      bFToL(v16, &v33, v17);
      *((_DWORD *)a2 + 2) = v33;
    }
  }
  else
  {
    bFToL(v13, &v33, 0LL);
    v18 = v33;
    if ( v11 && gbJpn98FixPitch == (_DWORD)v17 )
      goto LABEL_39;
  }
  if ( v18 < 0 )
    v19 = v14 + v18;
  else
    v19 = v14 - v18;
  *((_DWORD *)a2 + 3) = v19;
  if ( v19 <= 13 )
  {
    if ( v19 == 11 && v14 >= 12 )
    {
      *((_DWORD *)a2 + 3) = 12;
    }
    else if ( v19 == 13 )
    {
      if ( v14 >= 15 )
        v19 = 15;
      *((_DWORD *)a2 + 3) = v19;
    }
  }
  if ( *(_DWORD *)(v9 + 280) && !v11 )
  {
    *((_DWORD *)a2 + 2) = 0;
    v23 = *(float *)(*(_QWORD *)this + 144LL);
    v24 = *(float *)(*(_QWORD *)this + 128LL);
    *(float *)&v33 = v23;
    if ( (unsigned int)EFLOAT::bIsZero((EFLOAT *)&v33) )
    {
      v24 = *(float *)(v25 + 132);
      v23 = *(float *)(v25 + 148);
    }
    *((float *)a2 + 7) = v24 / v23;
  }
  v4 = v34;
LABEL_14:
  v20 = *(_DWORD *)(v32[0] + 48LL);
  if ( (v20 & 0x10) == 0 )
  {
    if ( (v20 & 0x200000) != 0 )
    {
      if ( *((_DWORD *)a2 + 5) )
      {
        v26 = ((__int64 (*)(void))lNormAngle)();
        v27 = 900 * (v26 / 0x384);
        *((_DWORD *)a2 + 5) = v27;
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 80LL) + 352LL) & 0x40) != 0 && v26 != v27 )
          *((_DWORD *)a2 + 5) = lNormAngle(v27 + 900);
      }
      v28 = *((unsigned int *)a2 + 4);
      if ( (_DWORD)v28 )
      {
        v29 = lNormAngle(v28);
        v30 = 900 * (v29 / 900);
        *((_DWORD *)a2 + 4) = v30;
        if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 80LL) + 352LL) & 0x40) != 0 && v29 != v30 )
          *((_DWORD *)a2 + 4) = lNormAngle((unsigned int)(v30 + 900));
      }
    }
    else
    {
      *((_QWORD *)a2 + 2) = 0LL;
    }
  }
LABEL_15:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v31);
  v33 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v33);
  if ( v9 )
    DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT((struct LFONT *)v9);
}
