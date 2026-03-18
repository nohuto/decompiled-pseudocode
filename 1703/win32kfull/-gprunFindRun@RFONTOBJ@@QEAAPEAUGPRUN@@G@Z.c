/*
 * XREFs of ?gprunFindRun@RFONTOBJ@@QEAAPEAUGPRUN@@G@Z @ 0x1C008D8FC
 * Callers:
 *     ?vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEAH@Z @ 0x1C007C130 (-vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEAH@Z.c)
 *     ?vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJVEFLOAT@@@Z @ 0x1C007C5A0 (-vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJVEFLOAT@@@Z.c)
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C007CA50 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C008A828 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C008AE30 (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z @ 0x1C008CAB4 (-bGetWidthTable@RFONTOBJ@@QEAAHAEAVXDCOBJ@@KPEAGK1@Z.c)
 *     ?pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1C008F528 (-pgdGetEudcMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 *     ?pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z @ 0x1C0286134 (-pgdGetEudcMetrics@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@GPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

struct GPRUN *__fastcall RFONTOBJ::gprunFindRun(RFONTOBJ *this, unsigned __int16 a2)
{
  __int64 v2; // rax
  _DWORD *v3; // r11
  int v4; // r10d
  _DWORD *v5; // r8
  _DWORD *v6; // r9
  _DWORD *v7; // rcx
  struct GPRUN *result; // rax
  unsigned int v9; // r9d
  int v10; // edx
  __int64 v11; // rcx
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // edx
  int v16; // edx
  int v17; // edx
  int v18; // edx
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // edx
  int v23; // eax
  int v24; // eax
  int v25; // eax
  BOOL v26; // eax
  int v27; // edx
  int v28; // edx
  int v29; // edx
  int v30; // edx
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // edx
  int v37; // edx
  int v38; // eax
  int v39; // eax

  v2 = *(_QWORD *)this;
  v3 = *(_DWORD **)(*(_QWORD *)this + 480LL);
  v4 = *(_DWORD *)(*(_QWORD *)this + 656LL);
  v5 = v3 + 4;
  if ( v4 )
  {
    v9 = a2;
    if ( (unsigned int)a2 < *v5 )
      return (struct GPRUN *)(v3 + 4);
    v10 = *(_DWORD *)(v2 + 664);
    v11 = *(int *)(v2 + 660);
    if ( v10 > 9 )
    {
      v27 = v10 - 10;
      if ( v27 )
      {
        v28 = v27 - 1;
        if ( v28 )
        {
          v29 = v28 - 1;
          if ( v29 )
          {
            v30 = v29 - 1;
            if ( v30 )
            {
              v36 = v30 - 1;
              if ( v36 )
              {
                v37 = v36 - 1;
                if ( v37 )
                {
                  if ( v37 != 1 )
                    goto LABEL_51;
                  LODWORD(v11) = (v9 >= v5[4 * v11] ? 0x8000 : 0) + v11 - 0x4000;
                }
                if ( (int)v11 > v4 || v9 < v5[4 * (int)v11] )
                  v38 = 0;
                else
                  v38 = 0x4000;
                LODWORD(v11) = v38 + v11 - 0x2000;
              }
              if ( (int)v11 > v4 || v9 < v5[4 * (int)v11] )
                v39 = 0;
              else
                v39 = 0x2000;
              LODWORD(v11) = v39 + v11 - 4096;
            }
            if ( (int)v11 <= v4 && v9 >= v5[4 * (int)v11] )
              v31 = 4096;
            else
              v31 = 0;
            LODWORD(v11) = v31 + v11 - 2048;
          }
          if ( (int)v11 > v4 || v9 < v5[4 * (int)v11] )
            v32 = 0;
          else
            v32 = 2048;
          LODWORD(v11) = v32 + v11 - 1024;
        }
        if ( (int)v11 <= v4 && v9 >= v5[4 * (int)v11] )
          v33 = 1024;
        else
          v33 = 0;
        LODWORD(v11) = v33 + v11 - 512;
      }
      if ( (int)v11 <= v4 && v9 >= v5[4 * (int)v11] )
        v34 = 512;
      else
        v34 = 0;
      LODWORD(v11) = v34 + v11 - 256;
    }
    else if ( v10 != 9 )
    {
      v12 = v10 - 1;
      if ( !v12 )
      {
LABEL_47:
        v26 = (int)v11 <= v4 && v9 >= v5[4 * (int)v11];
        LODWORD(v11) = v26 + v11 - 1;
        goto LABEL_51;
      }
      v13 = v12 - 1;
      if ( !v13 )
      {
LABEL_43:
        if ( (int)v11 > v4 || v9 < v5[4 * (int)v11] )
          v25 = 0;
        else
          v25 = 2;
        LODWORD(v11) = v25 + v11 - 1;
        goto LABEL_47;
      }
      v14 = v13 - 1;
      if ( !v14 )
      {
LABEL_39:
        if ( (int)v11 <= v4 && v9 >= v5[4 * (int)v11] )
          v24 = 4;
        else
          v24 = 0;
        LODWORD(v11) = v24 + v11 - 2;
        goto LABEL_43;
      }
      v15 = v14 - 1;
      if ( !v15 )
      {
LABEL_35:
        if ( (int)v11 <= v4 && v9 >= v5[4 * (int)v11] )
          v23 = 8;
        else
          v23 = 0;
        LODWORD(v11) = v23 + v11 - 4;
        goto LABEL_39;
      }
      v16 = v15 - 1;
      if ( !v16 )
      {
LABEL_31:
        if ( (int)v11 <= v4 && v9 >= v5[4 * (int)v11] )
          v22 = 16;
        else
          v22 = 0;
        LODWORD(v11) = v22 + v11 - 8;
        goto LABEL_35;
      }
      v17 = v16 - 1;
      if ( !v17 )
      {
LABEL_27:
        if ( (int)v11 <= v4 && v9 >= v5[4 * (int)v11] )
          v21 = 32;
        else
          v21 = 0;
        LODWORD(v11) = v21 + v11 - 16;
        goto LABEL_31;
      }
      v18 = v17 - 1;
      if ( !v18 )
      {
LABEL_23:
        if ( (int)v11 <= v4 && v9 >= v5[4 * (int)v11] )
          v20 = 64;
        else
          v20 = 0;
        LODWORD(v11) = v20 + v11 - 32;
        goto LABEL_27;
      }
      if ( v18 == 1 )
      {
LABEL_19:
        if ( (int)v11 <= v4 && v9 >= v5[4 * (int)v11] )
          v19 = 128;
        else
          v19 = 0;
        LODWORD(v11) = v19 + v11 - 64;
        goto LABEL_23;
      }
LABEL_51:
      result = (struct GPRUN *)&v5[4 * (int)v11];
      if ( v9 - *(_DWORD *)result >= *((_DWORD *)result + 1) )
        return (struct GPRUN *)(v3 + 4);
      return result;
    }
    if ( (int)v11 > v4 || v9 < v5[4 * (int)v11] )
      v35 = 0;
    else
      v35 = 256;
    LODWORD(v11) = v35 + v11 - 128;
    goto LABEL_19;
  }
  v6 = &v3[4 * (*v3 - 1) + 4];
  if ( a2 > (unsigned int)(*v6 + v6[1] - 1) )
    return (struct GPRUN *)(v3 + 4);
  v7 = v3 + 4;
  if ( v5 > v6 )
    return (struct GPRUN *)(v3 + 4);
  while ( (unsigned int)a2 - *v7 >= v7[1] )
  {
    v7 += 4;
    if ( v7 > v6 )
      return (struct GPRUN *)(v3 + 4);
  }
  return (struct GPRUN *)v7;
}
