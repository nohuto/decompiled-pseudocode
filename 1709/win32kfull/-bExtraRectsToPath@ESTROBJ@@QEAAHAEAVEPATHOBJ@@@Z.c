/*
 * XREFs of ?bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C0296098
 * Callers:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C002EA10 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 * Callees:
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C000750C (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     bFToL @ 0x1C00F1FA8 (bFToL.c)
 *     ??0CFixPred@Prediction@@QEAA@XZ @ 0x1C0126BA0 (--0CFixPred@Prediction@@QEAA@XZ.c)
 *     ?bLinkedGlyphs@ESTROBJ@@QEAAHXZ @ 0x1C01A0A48 (-bLinkedGlyphs@ESTROBJ@@QEAAHXZ.c)
 *     ?cGetGlyphData@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z @ 0x1C01A0C58 (-cGetGlyphData@RFONTOBJ@@QEAAKKPEAU_GLYPHPOS@@@Z.c)
 *     ?GetLinkedRfontOnIndex@ESTROBJ@@QEAAPEAVRFONT@@JAEAVRFONTOBJ@@@Z @ 0x1C0295E28 (-GetLinkedRfontOnIndex@ESTROBJ@@QEAAPEAVRFONT@@JAEAVRFONTOBJ@@@Z.c)
 *     ?bAddPgmToPath@@YAHAEAVEPATHOBJ@@JJJJJJ@Z @ 0x1C029600C (-bAddPgmToPath@@YAHAEAVEPATHOBJ@@JJJJJJ@Z.c)
 */

__int64 __fastcall ESTROBJ::bExtraRectsToPath(ESTROBJ *this, struct EPATHOBJ *a2)
{
  struct EPATHOBJ *v3; // r10
  _DWORD *v4; // r8
  int v5; // r15d
  int v6; // r12d
  int v7; // r13d
  int v8; // ecx
  int v9; // edx
  int v10; // r9d
  int v11; // r11d
  int v12; // eax
  unsigned int v13; // ebx
  unsigned int v14; // edi
  __int64 v16; // rbx
  __int64 v17; // r10
  unsigned int v18; // r13d
  unsigned int v19; // r14d
  unsigned int v20; // r15d
  unsigned int v21; // r12d
  RFONTOBJ *v22; // r9
  struct _GLYPHPOS *v23; // r10
  __int64 v24; // rcx
  __int64 v25; // rdx
  int v26; // r9d
  __int64 v27; // r15
  _DWORD *v28; // rcx
  struct RFONT *LinkedRfontOnIndex; // rax
  unsigned int GlyphData; // eax
  _QWORD *v31; // rax
  float *v32; // rdx
  int v33; // eax
  int v34; // ecx
  float v35; // xmm3_4
  __int64 v36; // rbx
  int v37; // edi
  float v38; // xmm2_4
  char v39; // r8
  int v40; // eax
  float v41; // xmm1_4
  char v42; // r8
  char v43; // r8
  struct EXFORMOBJ *v44; // [rsp+30h] [rbp-59h]
  int v45; // [rsp+40h] [rbp-49h] BYREF
  int v46; // [rsp+44h] [rbp-45h] BYREF
  int v47; // [rsp+48h] [rbp-41h] BYREF
  int v48; // [rsp+4Ch] [rbp-3Dh]
  int v49; // [rsp+50h] [rbp-39h]
  int v50; // [rsp+54h] [rbp-35h]
  int v51; // [rsp+58h] [rbp-31h]
  int v52; // [rsp+5Ch] [rbp-2Dh]
  unsigned int v53; // [rsp+60h] [rbp-29h]
  __int64 v54; // [rsp+68h] [rbp-21h]
  int v55; // [rsp+70h] [rbp-19h]
  int v56; // [rsp+74h] [rbp-15h]
  int v57; // [rsp+78h] [rbp-11h]
  int v58; // [rsp+7Ch] [rbp-Dh]
  struct RFONT *v59; // [rsp+80h] [rbp-9h] BYREF
  float *v60; // [rsp+88h] [rbp-1h]
  struct RFONT **v61; // [rsp+90h] [rbp+7h]
  __int64 v62; // [rsp+98h] [rbp+Fh]
  int v63; // [rsp+F0h] [rbp+67h]
  int v65; // [rsp+100h] [rbp+77h]
  int v66; // [rsp+108h] [rbp+7Fh] BYREF

  v3 = a2;
  v4 = (_DWORD *)**((_QWORD **)this + 7);
  v5 = 16 * v4[68];
  v6 = 16 * v4[69];
  v7 = 16 * v4[72];
  v8 = 16 * v4[70];
  v9 = 16 * v4[71];
  v10 = 16 * v4[74];
  v11 = 16 * v4[75];
  v48 = 16 * v4[73];
  v12 = *((_DWORD *)this + 16);
  v57 = v5;
  v56 = v6;
  v58 = v7;
  v50 = v8;
  v49 = v9;
  v52 = v10;
  v51 = v11;
  if ( (v12 & 8) != 0 )
  {
    v16 = *((_QWORD *)this + 5);
    v54 = *((_QWORD *)this + 9);
    Prediction::CFixPred::CFixPred((Prediction::CFixPred *)&v59);
    v18 = *(_DWORD *)this;
    v19 = 0;
    v61 = 0LL;
    v20 = 0;
    v21 = v18;
    if ( v18 )
    {
      while ( 1 )
      {
        if ( (*((_DWORD *)this + 16) & 2) == 0 )
        {
          if ( ESTROBJ::bLinkedGlyphs(this) )
          {
            if ( !v20 )
            {
              v24 = *((_QWORD *)this + 27);
              v25 = *(_DWORD *)this - v18;
              v26 = *(_DWORD *)(v24 + 4 * v25);
              v27 = (unsigned int)(v25 + 1);
              if ( (unsigned int)v27 < *(_DWORD *)this )
              {
                v28 = (_DWORD *)(v24 + 4 * v27);
                do
                {
                  if ( *v28 != v26 )
                    break;
                  LODWORD(v27) = v27 + 1;
                  ++v28;
                }
                while ( (unsigned int)v27 < *(_DWORD *)this );
              }
              v20 = v27 - v25;
              LinkedRfontOnIndex = ESTROBJ::GetLinkedRfontOnIndex(this, v25, *((struct RFONTOBJ **)this + 7));
              v22 = (RFONTOBJ *)&v59;
              v59 = LinkedRfontOnIndex;
              v61 = &v59;
            }
            GlyphData = RFONTOBJ::cGetGlyphData(v22, v20, v23);
            v21 = GlyphData;
            if ( !GlyphData )
              goto LABEL_33;
            v20 -= GlyphData;
          }
          else
          {
            v21 = RFONTOBJ::cGetGlyphData(*((RFONTOBJ **)this + 7), v18, v23);
            if ( !v21 )
              goto LABEL_33;
          }
          v17 = v54;
        }
        v53 = 0;
        v16 += 2LL * v21;
        v31 = (_QWORD *)*((_QWORD *)this + 7);
        v62 = v16;
        v32 = (float *)(*v31 + 392LL);
        v60 = v32;
        if ( v21 )
          break;
LABEL_31:
        v18 -= v21;
        if ( !v18 )
          goto LABEL_32;
      }
      while ( 1 )
      {
        v33 = *(_DWORD *)(v17 + 16);
        v34 = *(_DWORD *)(v17 + 20);
        v63 = v33;
        v65 = v34;
        v55 = *((_DWORD *)this + 16);
        if ( (v55 & 0x100) == 0 )
        {
          v65 = 16 * v34;
          v63 = 16 * v33;
        }
        v35 = *v32;
        v36 = *(_QWORD *)(v17 + 8);
        v45 = 0;
        v37 = *(_DWORD *)(v36 + 16);
        bFToL((float)v37 * v35, &v45, 0);
        v66 = 0;
        v38 = v60[1];
        bFToL((float)v37 * v38, &v66, v39);
        v40 = *(_DWORD *)(v36 + 20) - v37;
        v47 = 0;
        v41 = (float)v40;
        bFToL((float)v40 * v35, &v47, v42);
        v46 = 0;
        bFToL(v41 * v38, &v46, v43);
        if ( (v55 & 0x20) != 0 )
        {
          LODWORD(v44) = v48;
          if ( !(unsigned int)bAddPgmToPath(a2, v63 + v57 + v45, v65 + v66 + v56, v47, v46, v58, v44) )
            break;
        }
        if ( (*((_DWORD *)this + 16) & 0x80u) != 0 )
        {
          LODWORD(v44) = v51;
          if ( !(unsigned int)bAddPgmToPath(a2, v63 + v45 + v50, v65 + v66 + v49, v47, v46, v52, v44) )
            break;
        }
        v17 = v54 + 24;
        ++v53;
        v54 += 24LL;
        v32 = v60;
        if ( v53 >= v21 )
        {
          v16 = v62;
          goto LABEL_31;
        }
      }
    }
    else
    {
LABEL_32:
      v19 = 1;
    }
LABEL_33:
    RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v59);
    return v19;
  }
  else
  {
    v13 = (*((_DWORD *)this + 20) + 8) & 0xFFFFFFF0;
    v14 = (*((_DWORD *)this + 21) + 8) & 0xFFFFFFF0;
    if ( (v12 & 0x20) != 0 )
    {
      LODWORD(v44) = v48;
      if ( !(unsigned int)bAddPgmToPath(v3, v5 + v13, v6 + v14, *((_DWORD *)this + 24), *((_DWORD *)this + 25), v7, v44) )
        return 0LL;
      v3 = a2;
      v8 = v50;
      v9 = v49;
      v10 = v52;
      v11 = v51;
    }
    if ( (*((_DWORD *)this + 16) & 0x80u) != 0 )
    {
      LODWORD(v44) = v11;
      if ( !(unsigned int)bAddPgmToPath(
                            v3,
                            v8 + v13,
                            v9 + v14,
                            *((_DWORD *)this + 24),
                            *((_DWORD *)this + 25),
                            v10,
                            v44) )
        return 0LL;
    }
    return 1LL;
  }
}
