/*
 * XREFs of ?vXlatGlyphArray@RFONTOBJ@@QEAAXPEAGIPEAKKH@Z @ 0x1C008C0B0
 * Callers:
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C008A828 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?bInitCache@RFONTOBJ@@QEAAHK@Z @ 0x1C008C714 (-bInitCache@RFONTOBJ@@QEAAHK@Z.c)
 *     ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z @ 0x1C008CAB4 (-bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z.c)
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C008DD00 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 *     GreGetGlyphOutlineInternal @ 0x1C00E59A8 (GreGetGlyphOutlineInternal.c)
 *     xInsertMetricsPlusRFONTOBJ @ 0x1C00EA768 (xInsertMetricsPlusRFONTOBJ.c)
 *     xInsertMetricsRFONTOBJ @ 0x1C00EA994 (xInsertMetricsRFONTOBJ.c)
 *     GreGetGlyphIndicesW @ 0x1C00FA32C (GreGetGlyphIndicesW.c)
 *     ?bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z @ 0x1C0130728 (-bInsertMetricsPlusPath@RFONTOBJ@@QEAAHPEAPEAU_GLYPHDATA@@G@Z.c)
 *     ?DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z @ 0x1C0254BCC (-DoFontManagement@@YAKAEAVDCOBJ@@KKPEAXK1@Z.c)
 * Callees:
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x1C002FBE0 (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 *     ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x1C002FCB4 (-pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ.c)
 *     ?bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z @ 0x1C008E610 (-bIsLinkedGlyph@RFONTOBJ@@QEAAHG@Z.c)
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
  int v9; // ecx
  __int64 *v10; // r9
  struct _FD_GLYPHSET *v13; // rbx
  int v14; // r11d
  ULONG cRuns; // eax
  WCRUN *awcrun; // rdi
  int v17; // ebx
  unsigned int v18; // r8d
  __int64 v19; // r11
  __int64 v20; // r15
  __int64 v21; // r12
  __int64 v22; // r10
  unsigned __int16 v23; // r9
  int v24; // eax
  __int64 v25; // r8
  int v26; // ecx
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx
  int v32; // ecx
  BOOL v33; // ecx
  WCRUN *v34; // r8
  unsigned int v35; // edx
  int v36; // ecx
  int v37; // ecx
  int v38; // ecx
  int v39; // ecx
  int v40; // ecx
  unsigned __int16 v41; // cx
  struct _FD_GLYPHSET *v42; // rax
  unsigned __int16 wcLow; // dx
  int v44; // eax
  __int64 v45; // rcx
  bool v46; // cf
  __int64 v47; // rdx
  int v48; // ecx
  int v49; // ecx
  int v50; // edx
  char v51; // cl
  int v52; // ecx
  __int64 *v53; // [rsp+20h] [rbp-38h]
  __int64 *v54; // [rsp+28h] [rbp-30h] BYREF
  __int64 *v55; // [rsp+60h] [rbp+8h] BYREF

  v6 = *(_QWORD **)this;
  LODWORD(v55) = 0;
  v53 = 0LL;
  v9 = 0;
  v10 = 0LL;
  v13 = (struct _FD_GLYPHSET *)v6[59];
  v14 = *(_DWORD *)(v6[14] + 8LL);
  if ( a6 && v14 && (v14 & 1) == 0 )
  {
    v10 = *(__int64 **)(v6[15] + 8LL * ((v14 - 1) & 0xFFFFFFFE) + 224);
    v53 = v10;
    v54 = v10;
    if ( v10 && (v42 = PFEOBJ::pfdg(&v54), v10 = v53, v42) )
    {
      v9 = 1;
      v13 = v42;
      LODWORD(v55) = 1;
    }
    else
    {
      v9 = (int)v55;
    }
  }
  cRuns = v13->cRuns;
  if ( cRuns )
  {
    awcrun = v13->awcrun;
    v17 = cRuns - 1;
    if ( a5 == 1 )
      v18 = -1;
    else
      v18 = *(_DWORD *)(*(_QWORD *)this + 456LL);
    a6 = v18;
    if ( v17 > 0xFFFF )
      v17 = 0xFFFF;
    v19 = v17;
    if ( (v17 & 0xF000) != 0 )
    {
      v9 = (int)v55;
      v20 = (unsigned int)acBits[(unsigned __int8)((__int64)v17 >> 12)] + 12;
    }
    else if ( (v17 & 0xF00) != 0 )
    {
      v9 = (int)v55;
      v20 = (unsigned int)acBits[BYTE1(v17)] + 8;
    }
    else if ( (v17 & 0xF0) != 0 )
    {
      v9 = (int)v55;
      v20 = (unsigned int)acBits[(unsigned __int8)((__int64)v17 >> 4)] + 4;
    }
    else
    {
      v20 = acBits[v17];
    }
    v21 = *((int *)&aiStart + v20);
    if ( a3 )
    {
      v22 = *((int *)&aiStart + v20);
      while ( 1 )
      {
        v23 = *a2;
        if ( *a2 < awcrun->wcLow )
          break;
        v24 = v21;
        v25 = v22;
        if ( (_DWORD)v20 == 8 )
        {
LABEL_15:
          if ( v24 <= v17 && v23 >= awcrun[v24].wcLow )
            v26 = 128;
          else
            v26 = 0;
          v24 = v26 + v24 - 64;
        }
        else if ( (_DWORD)v20 != 7 )
        {
          switch ( (int)v20 )
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
            case 9:
              goto LABEL_88;
            case 10:
              goto LABEL_84;
            case 11:
              goto LABEL_80;
            case 12:
              goto LABEL_76;
            case 13:
              goto LABEL_72;
            case 14:
              goto LABEL_123;
            case 15:
              v47 = 0LL;
              goto LABEL_118;
            case 16:
              wcLow = awcrun[v22].wcLow;
              v44 = 0x8000;
              if ( v23 < wcLow )
                v44 = 0;
              v45 = 0x8000LL;
              v24 = v21 + v44 - 0x4000;
              v46 = v23 < wcLow;
              v47 = 0LL;
              if ( v46 )
                v45 = 0LL;
              v25 = v45 + v22 - 0x4000;
LABEL_118:
              if ( v25 > v19 || v23 < awcrun[v25].wcLow )
              {
                v48 = 0;
              }
              else
              {
                v48 = 0x4000;
                v47 = 0x4000LL;
              }
              v24 = v48 + v24 - 0x2000;
              v25 = v47 + v25 - 0x2000;
LABEL_123:
              if ( v25 > v19 || v23 < awcrun[v25].wcLow )
                v49 = 0;
              else
                v49 = 0x2000;
              v24 = v49 + v24 - 4096;
LABEL_72:
              if ( v24 <= v17 && v23 >= awcrun[v24].wcLow )
                v37 = 4096;
              else
                v37 = 0;
              v24 = v37 + v24 - 2048;
LABEL_76:
              if ( v24 <= v17 && v23 >= awcrun[v24].wcLow )
                v38 = 2048;
              else
                v38 = 0;
              v24 = v38 + v24 - 1024;
LABEL_80:
              if ( v24 <= v17 && v23 >= awcrun[v24].wcLow )
                v39 = 1024;
              else
                v39 = 0;
              v24 = v39 + v24 - 512;
LABEL_84:
              if ( v24 <= v17 && v23 >= awcrun[v24].wcLow )
                v40 = 512;
              else
                v40 = 0;
              v24 = v40 + v24 - 256;
LABEL_88:
              if ( v24 <= v17 && v23 >= awcrun[v24].wcLow )
                v24 = v24 - 128 + 256;
              else
                v24 -= 128;
              goto LABEL_15;
            default:
              goto LABEL_47;
          }
        }
        if ( v24 <= v17 && v23 >= awcrun[v24].wcLow )
          v27 = 64;
        else
          v27 = 0;
        v24 = v27 + v24 - 32;
LABEL_23:
        if ( v24 <= v17 && v23 >= awcrun[v24].wcLow )
          v28 = 32;
        else
          v28 = 0;
        v24 = v28 + v24 - 16;
LABEL_27:
        if ( v24 <= v17 && v23 >= awcrun[v24].wcLow )
          v29 = 16;
        else
          v29 = 0;
        v24 = v29 + v24 - 8;
LABEL_31:
        if ( v24 <= v17 && v23 >= awcrun[v24].wcLow )
          v30 = 8;
        else
          v30 = 0;
        v24 = v30 + v24 - 4;
LABEL_35:
        if ( v24 <= v17 && v23 >= awcrun[v24].wcLow )
          v31 = 4;
        else
          v31 = 0;
        v24 = v31 + v24 - 2;
LABEL_39:
        if ( v24 <= v17 && v23 >= awcrun[v24].wcLow )
          v32 = 2;
        else
          v32 = 0;
        v24 = v32 + v24 - 1;
LABEL_43:
        v33 = v24 <= v17 && v23 >= awcrun[v24].wcLow;
        v24 = v33 + v24 - 1;
LABEL_47:
        v34 = &awcrun[v24];
        v35 = v23;
        v36 = v23 - v34->wcLow;
        if ( v36 < v34->cGlyphs )
        {
          if ( v34->phg )
          {
            while ( 1 )
            {
              ++a2;
              *a4++ = v34->phg[v36];
              if ( !--a3 )
                break;
              v36 = *a2 - v34->wcLow;
              if ( v36 < 0 || v36 >= v34->cGlyphs )
                goto LABEL_52;
            }
          }
          else
          {
            while ( 1 )
            {
              *a4 = v35;
              ++a2;
              ++a4;
              if ( !--a3 )
                break;
              v35 = *a2;
              v52 = v35 - v34->wcLow;
              if ( v52 < 0 || v52 >= v34->cGlyphs )
              {
LABEL_52:
                v18 = a6;
                goto LABEL_56;
              }
            }
          }
          goto LABEL_57;
        }
        if ( a5 == 2 || (unsigned int)RFONTOBJ::bIsLinkedGlyph(this, v23) )
          goto LABEL_54;
        v41 = *a2;
        if ( *(_DWORD *)(*(_QWORD *)this + 716LL) && v41 >= gqlTTSystem && v41 <= (unsigned __int16)word_1C032C162 )
        {
          v50 = v41 - gqlTTSystem;
          v51 = (v41 - gqlTTSystem) & 0x1F;
          if ( v50 < 0 )
          {
            v50 += 31;
            v51 -= 32;
          }
          if ( ((0x80000000 >> v51) & *(_DWORD *)(qword_1C032C168 + 4LL * (v50 >> 5))) != 0 )
LABEL_54:
            *(_DWORD *)(*(_QWORD *)this + 720LL) |= 0x40u;
        }
        v18 = a6;
        ++a2;
        *a4 = a6;
        v22 = v21;
        ++a4;
        v19 = v17;
        --a3;
LABEL_56:
        if ( !a3 )
          goto LABEL_57;
      }
      while ( 1 )
      {
        *a4 = v18;
        ++a2;
        ++a4;
        if ( !--a3 )
          break;
        if ( *a2 >= awcrun->wcLow )
          goto LABEL_56;
      }
LABEL_57:
      v9 = (int)v55;
      v10 = v53;
    }
    if ( v9 )
    {
      v55 = v10;
      PFEOBJ::vFreepfdg(&v55);
    }
  }
  else
  {
    for ( ; a3; --a3 )
      *a4++ = *(_DWORD *)(*(_QWORD *)this + 456LL);
  }
}
