/*
 * XREFs of ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z @ 0x1C0031EA0
 * Callers:
 *     ?bInitCache@RFONTOBJ@@QEAAHK@Z @ 0x1C003260C (-bInitCache@RFONTOBJ@@QEAAHK@Z.c)
 *     ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z @ 0x1C00329AC (-bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z.c)
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C0033BA4 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C00361C8 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     GreGetGlyphOutlineInternal @ 0x1C00B26C0 (GreGetGlyphOutlineInternal.c)
 *     xInsertMetricsRFONTOBJ @ 0x1C00F9028 (xInsertMetricsRFONTOBJ.c)
 *     xInsertMetricsPlusRFONTOBJ @ 0x1C00F9AB8 (xInsertMetricsPlusRFONTOBJ.c)
 *     GreGetGlyphIndicesW @ 0x1C0107B3C (GreGetGlyphIndicesW.c)
 *     ?bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C0135568 (-bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z @ 0x1C025669C (-DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z.c)
 * Callees:
 *     ?bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z @ 0x1C0034518 (-bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z.c)
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1C003C1B0 (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 *     ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x1C003C284 (-pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ.c)
 */

void __fastcall RFONTOBJ::vXlatGlyphArray(
        RFONTOBJ *this,
        unsigned __int16 *a2,
        int a3,
        unsigned int *a4,
        unsigned int a5,
        int a6)
{
  _QWORD *v6; // r10
  int v8; // ecx
  struct _FD_GLYPHSET *v12; // rbx
  ULONG cRuns; // eax
  unsigned int v14; // edx
  WCRUN *awcrun; // rsi
  int v16; // ebx
  unsigned int v17; // r8d
  __int64 v18; // r11
  __int64 v19; // r15
  __int64 v20; // r13
  __int64 v21; // rcx
  unsigned __int16 v22; // r10
  int v23; // eax
  __int64 v24; // r8
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx
  int v32; // ecx
  WCRUN *v33; // r8
  unsigned int v34; // r9d
  int v35; // ecx
  int v36; // ecx
  int v37; // ecx
  int v38; // ecx
  int v39; // r9d
  struct _FD_GLYPHSET *v40; // rax
  __int64 v41; // r8
  unsigned __int16 wcLow; // cx
  int v43; // eax
  int v44; // ecx
  __int64 v45; // rdx
  int v46; // ecx
  unsigned __int16 v47; // cx
  int v48; // edx
  char v49; // cl
  int v50; // ecx
  __int64 v51; // [rsp+20h] [rbp-38h]
  __int64 v52[6]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v53; // [rsp+60h] [rbp+8h] BYREF

  v6 = *(_QWORD **)this;
  v8 = 0;
  LODWORD(v53) = 0;
  v12 = (struct _FD_GLYPHSET *)v6[59];
  v51 = 0LL;
  if ( a6 )
  {
    v39 = *(_DWORD *)(v6[14] + 8LL);
    if ( v39 )
    {
      if ( (v39 & 1) == 0 )
      {
        v51 = *(_QWORD *)(v6[15] + 8LL * ((v39 - 1) & 0xFFFFFFFE) + 224);
        v52[0] = v51;
        if ( v51 && (v40 = PFEOBJ::pfdg((PFEOBJ *)v52)) != 0LL )
        {
          v8 = 1;
          v12 = v40;
          LODWORD(v53) = 1;
        }
        else
        {
          v8 = v53;
        }
      }
    }
  }
  cRuns = v12->cRuns;
  if ( cRuns )
  {
    v14 = a5;
    awcrun = v12->awcrun;
    v16 = cRuns - 1;
    if ( a5 == 1 )
      v17 = -1;
    else
      v17 = *(_DWORD *)(*(_QWORD *)this + 456LL);
    a6 = v17;
    if ( v16 > 0xFFFF )
      v16 = 0xFFFF;
    v18 = v16;
    if ( (v16 & 0xF000) != 0 )
    {
      v8 = v53;
      v19 = (unsigned int)acBits[(unsigned __int8)((__int64)v16 >> 12)] + 12;
    }
    else if ( (v16 & 0xF00) != 0 )
    {
      v8 = v53;
      v19 = (unsigned int)acBits[BYTE1(v16)] + 8;
    }
    else if ( (v16 & 0xF0) != 0 )
    {
      v8 = v53;
      v19 = (unsigned int)acBits[(unsigned __int8)((__int64)v16 >> 4)] + 4;
    }
    else
    {
      v19 = acBits[v16];
    }
    v20 = *((int *)&aiStart + v19);
    if ( a3 )
    {
      v21 = *((int *)&aiStart + v19);
      while ( 1 )
      {
        v22 = *a2;
        if ( *a2 < awcrun->wcLow )
          break;
        v23 = v20;
        v24 = v21;
        if ( (_DWORD)v19 == 8 )
        {
LABEL_15:
          if ( v23 <= v16 && v22 >= awcrun[v23].wcLow )
            v25 = 64;
          else
            v25 = -64;
          v23 += v25;
        }
        else if ( (_DWORD)v19 != 7 )
        {
          switch ( (int)v19 )
          {
            case 1:
              goto LABEL_43;
            case 2:
              goto LABEL_39;
            case 3:
              goto LABEL_35;
            case 4:
              goto LABEL_31;
            case 5:
              goto LABEL_27;
            case 6:
              goto LABEL_23;
            case 7:
            case 8:
              goto LABEL_47;
            case 9:
              goto LABEL_74;
            case 10:
              goto LABEL_95;
            case 11:
              goto LABEL_91;
            case 12:
              goto LABEL_87;
            case 13:
              goto LABEL_83;
            case 14:
              goto LABEL_123;
            case 15:
              goto LABEL_118;
            case 16:
              v41 = 0x4000LL;
              wcLow = awcrun[v20].wcLow;
              v43 = 0x4000;
              if ( v22 < wcLow )
                v43 = -16384;
              v23 = v20 + v43;
              if ( v22 < wcLow )
                v41 = -16384LL;
              v24 = v20 + v41;
LABEL_118:
              if ( v24 > v18 || v22 < awcrun[v24].wcLow )
              {
                v44 = -8192;
                v45 = -8192LL;
              }
              else
              {
                v44 = 0x2000;
                v45 = 0x2000LL;
              }
              v23 += v44;
              v24 += v45;
LABEL_123:
              if ( v24 > v18 || (v46 = 4096, v22 < awcrun[v24].wcLow) )
                v46 = -4096;
              v23 += v46;
LABEL_83:
              if ( v23 <= v16 && v22 >= awcrun[v23].wcLow )
                v36 = 2048;
              else
                v36 = -2048;
              v23 += v36;
LABEL_87:
              if ( v23 <= v16 && v22 >= awcrun[v23].wcLow )
                v37 = 1024;
              else
                v37 = -1024;
              v23 += v37;
LABEL_91:
              if ( v23 <= v16 && v22 >= awcrun[v23].wcLow )
                v38 = 512;
              else
                v38 = -512;
              v23 += v38;
LABEL_95:
              if ( v23 <= v16 && v22 >= awcrun[v23].wcLow )
                v23 += 256;
              else
                v23 -= 256;
LABEL_74:
              if ( v23 <= v16 && v22 >= awcrun[v23].wcLow )
                v23 += 128;
              else
                v23 -= 128;
              goto LABEL_15;
            default:
              goto LABEL_48;
          }
        }
        if ( v23 <= v16 && v22 >= awcrun[v23].wcLow )
          v26 = 32;
        else
          v26 = -32;
        v23 += v26;
LABEL_23:
        if ( v23 <= v16 && v22 >= awcrun[v23].wcLow )
          v27 = 16;
        else
          v27 = -16;
        v23 += v27;
LABEL_27:
        if ( v23 <= v16 && v22 >= awcrun[v23].wcLow )
          v28 = 8;
        else
          v28 = -8;
        v23 += v28;
LABEL_31:
        if ( v23 <= v16 && v22 >= awcrun[v23].wcLow )
          v29 = 4;
        else
          v29 = -4;
        v23 += v29;
LABEL_35:
        if ( v23 <= v16 && v22 >= awcrun[v23].wcLow )
          v30 = 2;
        else
          v30 = -2;
        v23 += v30;
LABEL_39:
        if ( v23 <= v16 && v22 >= awcrun[v23].wcLow )
          v31 = 1;
        else
          v31 = -1;
        v23 += v31;
LABEL_43:
        if ( v23 <= v16 && v22 >= awcrun[v23].wcLow )
          v32 = 0;
        else
          v32 = -1;
        v23 += v32;
LABEL_47:
        v14 = a5;
LABEL_48:
        v33 = &awcrun[v23];
        v34 = v22;
        v35 = v22 - v33->wcLow;
        if ( v35 < v33->cGlyphs )
        {
          if ( v33->phg )
          {
            while ( 1 )
            {
              ++a2;
              *a4++ = v33->phg[v35];
              if ( !--a3 )
                break;
              v35 = *a2 - v33->wcLow;
              if ( v35 < 0 || v35 >= v33->cGlyphs )
                goto LABEL_53;
            }
          }
          else
          {
            while ( 1 )
            {
              *a4 = v34;
              ++a2;
              ++a4;
              if ( !--a3 )
                break;
              v34 = *a2;
              v50 = v34 - v33->wcLow;
              if ( v50 < 0 || v50 >= v33->cGlyphs )
              {
LABEL_53:
                v17 = a6;
                goto LABEL_57;
              }
            }
          }
          goto LABEL_59;
        }
        if ( v14 == 2 || (unsigned int)RFONTOBJ::bIsLinkedGlyph(this, v22) )
          goto LABEL_55;
        if ( *(_DWORD *)(*(_QWORD *)this + 716LL) )
        {
          v47 = *a2;
          if ( *a2 >= gqlTTSystem && v47 <= (unsigned __int16)word_1C032F962 )
          {
            v48 = v47 - gqlTTSystem;
            v49 = (v47 - gqlTTSystem) & 0x1F;
            if ( v48 < 0 )
            {
              v48 += 31;
              v49 -= 32;
            }
            if ( ((0x80000000 >> v49) & *(_DWORD *)(qword_1C032F968 + 4LL * (v48 >> 5))) != 0 )
LABEL_55:
              *(_DWORD *)(*(_QWORD *)this + 720LL) |= 0x40u;
          }
        }
        v17 = a6;
        ++a2;
        *a4++ = a6;
        --a3;
        v18 = v16;
LABEL_57:
        v21 = v20;
LABEL_58:
        v14 = a5;
        if ( !a3 )
          goto LABEL_59;
      }
      while ( 1 )
      {
        *a4 = v17;
        ++a2;
        ++a4;
        if ( !--a3 )
          break;
        if ( *a2 >= awcrun->wcLow )
          goto LABEL_58;
      }
LABEL_59:
      v8 = v53;
    }
    if ( v8 )
    {
      v53 = v51;
      PFEOBJ::vFreepfdg((PFEOBJ *)&v53);
    }
  }
  else
  {
    for ( ; a3; --a3 )
      *a4++ = *(_DWORD *)(*(_QWORD *)this + 456LL);
  }
}
