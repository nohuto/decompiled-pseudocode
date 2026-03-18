/*
 * XREFs of GreGetCharABCWidthsW @ 0x1C00E1F64
 * Callers:
 *     NtGdiGetCharABCWidthsW @ 0x1C00E1E10 (NtGdiGetCharABCWidthsW.c)
 * Callees:
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750D4 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vFixUpGlyphIndices@RFONTOBJ@@QEAAXPEAGI@Z @ 0x1C008A800 (-vFixUpGlyphIndices@RFONTOBJ@@QEAAXPEAGI@Z.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C008A828 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C008B1D0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008F468 (--1RFONTOBJ@@QEAA@XZ.c)
 *     bFToL @ 0x1C00DF104 (bFToL.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall GreGetCharABCWidthsW(HDC a1, int a2, unsigned int a3, unsigned __int16 *a4, char a5, __int64 a6)
{
  int v6; // r12d
  unsigned int v8; // esi
  unsigned int v9; // edi
  int v10; // eax
  struct _FD_XFORM *v11; // rbx
  float eYY; // xmm6_4
  struct _GLYPHPOS *v13; // r13
  __int64 v14; // r14
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rcx
  unsigned __int16 *v17; // rdx
  unsigned __int16 *v18; // r9
  struct _GLYPHPOS *v19; // r8
  float *v20; // r9
  GLYPHDEF *v21; // rdx
  _DWORD *v23; // rsi
  struct _GLYPHPOS *v24; // r14
  int *pgdf; // rbx
  float v26; // xmm0_4
  char v27; // r8
  float v28; // xmm0_4
  char v29; // r8
  int v30; // eax
  unsigned __int16 v31[4]; // [rsp+38h] [rbp-D0h] BYREF
  struct _FD_XFORM *v32; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v33; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v34; // [rsp+50h] [rbp-B8h]
  int v35; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v36; // [rsp+60h] [rbp-A8h]
  __int64 v37; // [rsp+68h] [rbp-A0h]
  _QWORD v38[3]; // [rsp+70h] [rbp-98h] BYREF
  struct _GLYPHPOS v39[32]; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int16 v40[32]; // [rsp+388h] [rbp+280h] BYREF

  v6 = a2;
  *(_DWORD *)v31 = a2;
  v34 = a3;
  v33 = a6;
  v8 = a3;
  v37 = a6;
  DCOBJ::DCOBJ((DCOBJ *)v38, a1);
  v9 = 0;
  if ( v38[0] )
  {
    if ( v8 )
    {
      v32 = 0LL;
      v10 = RFONTOBJ::bInit(&v32, (struct XDCOBJ *)v38, 0, (a5 & 2) != 0 ? 4 : 2);
      v11 = v32;
      if ( v10 )
        GreAcquireSemaphore(*(_QWORD *)&v32[33].eXX);
      if ( v11 )
      {
        if ( (LODWORD(v11[4].eXY) & 4) != 0 )
        {
          if ( a4 )
          {
            RFONTOBJ::vFixUpGlyphIndices((RFONTOBJ *)&v32, a4, v8);
          }
          else
          {
            RFONTOBJ::vFixUpGlyphIndices((RFONTOBJ *)&v32, v31, 1u);
            v6 = *(_DWORD *)v31;
          }
        }
        eYY = v11[42].eYY;
        if ( (a5 & 3) != 1 || *(_QWORD *)(*(_QWORD *)&v11[5].eXX + 3096LL) )
        {
          while ( 1 )
          {
            v13 = v39;
            v14 = v8;
            if ( v8 > 0x20 )
              v14 = 32LL;
            LODWORD(v36) = v14;
            if ( a4 )
            {
              v18 = a4;
              a4 += v14;
            }
            else
            {
              v15 = 0LL;
              v16 = (unsigned __int64)(2 * v14 + 1) >> 1;
              v17 = v40;
              if ( v40 > &v40[v14] )
                v16 = 0LL;
              if ( v16 )
              {
                do
                {
                  *v17 = v6;
                  ++v15;
                  ++v6;
                  ++v17;
                }
                while ( v15 < v16 );
              }
              v18 = v40;
            }
            if ( !(unsigned int)RFONTOBJ::bGetGlyphMetrics(
                                  (RFONTOBJ *)&v32,
                                  (struct RFONTOBJ *)(unsigned int)v14,
                                  v39,
                                  v18,
                                  (struct XDCOBJ *)v38,
                                  0LL) )
              break;
            if ( (a5 & 1) != 0 )
            {
              if ( v39 < &v39[(unsigned int)v14] )
              {
                v23 = (_DWORD *)v33;
                v24 = &v39[(unsigned int)v14];
                do
                {
                  pgdf = (int *)v13->pgdf;
                  v35 = 0;
                  bFToL((float)pgdf[4] * eYY, &v35, 0);
                  v26 = (float)pgdf[5];
                  *(_DWORD *)v31 = 0;
                  bFToL(v26 * eYY, (int *)v31, v27);
                  v28 = (float)pgdf[3];
                  LODWORD(v33) = 0;
                  bFToL(v28 * eYY, (int *)&v33, v29);
                  ++v13;
                  v30 = *(_DWORD *)v31 - v35;
                  *v23 = v35;
                  v23[1] = v30;
                  v23[2] = v33 - *(_DWORD *)v31;
                  v23 += 3;
                }
                while ( v13 < v24 );
                LODWORD(v14) = v36;
                v33 = (__int64)v23;
                v8 = v34;
              }
            }
            else
            {
              v19 = &v39[(unsigned int)v14];
              if ( v39 < v19 )
              {
                v20 = (float *)v37;
                do
                {
                  v21 = v13->pgdf;
                  ++v13;
                  *v20 = (float)SLODWORD(v21[2].pgb) * eYY;
                  v20[1] = (float)(HIDWORD(v21[2].ppo) - LODWORD(v21[2].pgb)) * eYY;
                  v20[2] = (float)(HIDWORD(v21[1].ppo) - HIDWORD(v21[2].ppo)) * eYY;
                  v20 += 3;
                }
                while ( v13 < v19 );
                v37 = (__int64)v20;
              }
            }
            v8 -= v14;
            v34 = v8;
            if ( !v8 )
            {
              v9 = 1;
              break;
            }
          }
        }
      }
      else
      {
        EngSetLastError(6u);
      }
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v32);
    }
    else
    {
      v9 = 1;
    }
  }
  else
  {
    EngSetLastError(6u);
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v38);
  return v9;
}
