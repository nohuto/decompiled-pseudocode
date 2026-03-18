/*
 * XREFs of ?gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z @ 0x1C00337B4
 * Callers:
 *     ?vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEAH@Z @ 0x1C0024D08 (-vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEAH@Z.c)
 *     ?vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJVEFLOAT@@@Z @ 0x1C0025170 (-vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJVEFLOAT@@@Z.c)
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C0025620 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 *     ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z @ 0x1C00329AC (-bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z.c)
 *     ?pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1C0035370 (-pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C0035E18 (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C00361C8 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1C0282C84 (-pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

struct GPRUN *__fastcall RFONTOBJ::gprunFindRun(RFONTOBJ *this, unsigned __int16 a2)
{
  __int64 v2; // rax
  int v3; // ebx
  _DWORD *v4; // r11
  int v5; // r10d
  _DWORD *v6; // r8
  _DWORD *v7; // r9
  _DWORD *v8; // rcx
  struct GPRUN *result; // rax
  unsigned int v10; // r9d
  __int64 v11; // rcx
  int v12; // edx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // edx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // edx
  int v22; // edx
  int v23; // edx
  int v24; // edx
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // edx
  int v30; // edx
  int v31; // edx
  int v32; // edx
  int v33; // edx
  int v34; // edx
  int v35; // edx
  int v36; // edx
  int v37; // edx
  int v38; // eax
  int v39; // eax

  v2 = *(_QWORD *)this;
  v3 = 0;
  v4 = *(_DWORD **)(*(_QWORD *)this + 480LL);
  v5 = *(_DWORD *)(*(_QWORD *)this + 656LL);
  v6 = v4 + 4;
  if ( v5 )
  {
    v10 = a2;
    if ( (unsigned int)a2 < *v6 )
      return (struct GPRUN *)(v4 + 4);
    v11 = *(int *)(v2 + 660);
    v12 = *(_DWORD *)(v2 + 664);
    if ( v12 <= 9 )
    {
      if ( v12 == 9 )
      {
LABEL_11:
        if ( (int)v11 > v5 || (v13 = 128, v10 < v6[4 * (int)v11]) )
          v13 = -128;
        LODWORD(v11) = v13 + v11;
        goto LABEL_15;
      }
      v29 = v12 - 1;
      if ( !v29 )
        goto LABEL_42;
      v30 = v29 - 1;
      if ( !v30 )
      {
LABEL_38:
        if ( (int)v11 > v5 || v10 < v6[4 * (int)v11] )
          v20 = -1;
        else
          v20 = 1;
        LODWORD(v11) = v20 + v11;
LABEL_42:
        if ( (int)v11 > v5 || v10 < v6[4 * (int)v11] )
          v3 = -1;
        LODWORD(v11) = v3 + v11;
        goto LABEL_46;
      }
      v31 = v30 - 1;
      if ( !v31 )
      {
LABEL_34:
        if ( (int)v11 > v5 || (v19 = 2, v10 < v6[4 * (int)v11]) )
          v19 = -2;
        LODWORD(v11) = v19 + v11;
        goto LABEL_38;
      }
      v32 = v31 - 1;
      if ( !v32 )
      {
LABEL_31:
        if ( (int)v11 > v5 || (v18 = 4, v10 < v6[4 * (int)v11]) )
          v18 = -4;
        LODWORD(v11) = v18 + v11;
        goto LABEL_34;
      }
      v33 = v32 - 1;
      if ( !v33 )
      {
LABEL_27:
        if ( (int)v11 > v5 || (v17 = 8, v10 < v6[4 * (int)v11]) )
          v17 = -8;
        LODWORD(v11) = v17 + v11;
        goto LABEL_31;
      }
      v34 = v33 - 1;
      if ( !v34 )
      {
LABEL_23:
        if ( (int)v11 > v5 || v10 < v6[4 * (int)v11] )
          v16 = -16;
        else
          v16 = 16;
        LODWORD(v11) = v16 + v11;
        goto LABEL_27;
      }
      v35 = v34 - 1;
      if ( !v35 )
      {
LABEL_19:
        if ( (int)v11 > v5 || (v15 = 32, v10 < v6[4 * (int)v11]) )
          v15 = -32;
        LODWORD(v11) = v15 + v11;
        goto LABEL_23;
      }
      if ( v35 == 1 )
      {
LABEL_15:
        if ( (int)v11 > v5 || (v14 = 64, v10 < v6[4 * (int)v11]) )
          v14 = -64;
        LODWORD(v11) = v14 + v11;
        goto LABEL_19;
      }
LABEL_46:
      result = (struct GPRUN *)&v6[4 * (int)v11];
      if ( v10 - *(_DWORD *)result >= *((_DWORD *)result + 1) )
        return (struct GPRUN *)(v4 + 4);
      return result;
    }
    v21 = v12 - 10;
    if ( v21 )
    {
      v22 = v21 - 1;
      if ( v22 )
      {
        v23 = v22 - 1;
        if ( v23 )
        {
          v24 = v23 - 1;
          if ( v24 )
          {
            v36 = v24 - 1;
            if ( v36 )
            {
              v37 = v36 - 1;
              if ( v37 )
              {
                if ( v37 != 1 )
                  goto LABEL_46;
                LODWORD(v11) = *(_DWORD *)(v2 + 660) + (v10 < v6[4 * v11] ? -16384 : 0x4000);
              }
              if ( (int)v11 > v5 || (v38 = 0x2000, v10 < v6[4 * (int)v11]) )
                v38 = -8192;
              LODWORD(v11) = v38 + v11;
            }
            if ( (int)v11 > v5 || (v39 = 4096, v10 < v6[4 * (int)v11]) )
              v39 = -4096;
            LODWORD(v11) = v39 + v11;
          }
          if ( (int)v11 > v5 || (v25 = 2048, v10 < v6[4 * (int)v11]) )
            v25 = -2048;
          LODWORD(v11) = v25 + v11;
        }
        if ( (int)v11 > v5 || (v26 = 1024, v10 < v6[4 * (int)v11]) )
          v26 = -1024;
        LODWORD(v11) = v26 + v11;
      }
      if ( (int)v11 > v5 || (v27 = 512, v10 < v6[4 * (int)v11]) )
        v27 = -512;
      LODWORD(v11) = v27 + v11;
    }
    if ( (int)v11 > v5 || (v28 = 256, v10 < v6[4 * (int)v11]) )
      v28 = -256;
    LODWORD(v11) = v28 + v11;
    goto LABEL_11;
  }
  v7 = &v4[4 * (*v4 - 1) + 4];
  if ( a2 > (unsigned int)(*v7 + v7[1] - 1) )
    return (struct GPRUN *)(v4 + 4);
  v8 = v4 + 4;
  if ( v6 > v7 )
    return (struct GPRUN *)(v4 + 4);
  while ( (unsigned int)a2 - *v8 >= v8[1] )
  {
    v8 += 4;
    if ( v8 > v7 )
      return (struct GPRUN *)(v4 + 4);
  }
  return (struct GPRUN *)v8;
}
