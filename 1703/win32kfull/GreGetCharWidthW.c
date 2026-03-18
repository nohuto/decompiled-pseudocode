/*
 * XREFs of GreGetCharWidthW @ 0x1C00F5BE4
 * Callers:
 *     NtGdiGetCharWidthW @ 0x1C00F5A30 (NtGdiGetCharWidthW.c)
 * Callees:
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750D4 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vFixUpGlyphIndices@RFONTOBJ@@QEAAXPEAGI@Z @ 0x1C008A800 (-vFixUpGlyphIndices@RFONTOBJ@@QEAAXPEAGI@Z.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C008A828 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?lOverhang@RFONTOBJ@@QEAAJXZ @ 0x1C008AC28 (-lOverhang@RFONTOBJ@@QEAAJXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C008B1D0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008F468 (--1RFONTOBJ@@QEAA@XZ.c)
 *     bFToL @ 0x1C00DF104 (bFToL.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall GreGetCharWidthW(HDC a1, unsigned int a2, unsigned int a3, unsigned __int16 *a4, char a5, float *a6)
{
  float *v6; // r15
  unsigned int v7; // r13d
  unsigned __int16 *v8; // rsi
  unsigned int v9; // r12d
  unsigned int v10; // edi
  int v11; // eax
  struct _FD_XFORM *v12; // rbx
  float eYY; // xmm6_4
  unsigned int v14; // r14d
  __int64 v15; // r13
  unsigned int v16; // eax
  int v17; // ebx
  unsigned int v18; // eax
  unsigned __int16 *v19; // rcx
  unsigned __int16 *v20; // r9
  unsigned int v21; // esi
  GLYPHDEF **p_pgdf; // r15
  _DWORD *v23; // r14
  __int64 v24; // r12
  GLYPHDEF *v25; // rax
  __int64 v27; // rcx
  GLYPHDEF **v28; // rcx
  __int64 v29; // rdx
  GLYPHDEF *v30; // rax
  unsigned __int16 v31[4]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v32; // [rsp+40h] [rbp-C8h] BYREF
  struct _FD_XFORM *v33; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v34; // [rsp+50h] [rbp-B8h]
  unsigned int v35; // [rsp+54h] [rbp-B4h]
  __int64 v36; // [rsp+58h] [rbp-B0h]
  __int64 v37; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int16 *v38; // [rsp+70h] [rbp-98h]
  struct _GLYPHPOS v39; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int16 v40[32]; // [rsp+378h] [rbp+270h] BYREF

  v6 = a6;
  v7 = a2;
  v34 = a2;
  v8 = a4;
  *(_DWORD *)v31 = a2;
  v9 = a3;
  v38 = a4;
  LODWORD(v36) = a3;
  v32 = (__int64)a6;
  v10 = 0;
  DCOBJ::DCOBJ((DCOBJ *)&v37, a1);
  if ( v37 )
  {
    if ( a6 )
    {
      v33 = 0LL;
      v11 = RFONTOBJ::bInit(&v33, (struct XDCOBJ *)&v37, 0, (a5 & 8) != 0 ? 4 : 2);
      v12 = v33;
      if ( v11 )
        GreAcquireSemaphore(*(_QWORD *)&v33[33].eXX);
      if ( v12 )
      {
        if ( (LODWORD(v12[4].eXY) & 4) != 0 )
        {
          if ( v8 )
          {
            RFONTOBJ::vFixUpGlyphIndices((RFONTOBJ *)&v33, v8, v9);
          }
          else
          {
            RFONTOBJ::vFixUpGlyphIndices((RFONTOBJ *)&v33, v31, 1u);
            v7 = *(_DWORD *)v31;
            v34 = *(_DWORD *)v31;
          }
        }
        eYY = v12[42].eYY;
        *(_DWORD *)v31 = 0;
        if ( (a5 & 1) != 0 )
          *(_DWORD *)v31 = 16 * RFONTOBJ::lOverhang((RFONTOBJ *)&v33);
        v14 = 0;
        if ( !v8 )
          v14 = v7;
        v15 = (unsigned __int64)v8 & -(__int64)(v8 != 0LL);
LABEL_12:
        v35 = v14;
        while ( 1 )
        {
          v16 = v9 - 1;
          if ( v8 )
          {
            v27 = (v15 - (__int64)v8) >> 1;
            if ( (unsigned int)v27 > v16 )
            {
LABEL_28:
              v10 = 1;
              goto LABEL_29;
            }
            v17 = 32;
            v20 = (unsigned __int16 *)v15;
            if ( v9 - (unsigned int)v27 < 0x20 )
              v17 = v9 - v27;
          }
          else
          {
            if ( v14 - v34 > v16 )
              goto LABEL_28;
            v17 = 32;
            v18 = v14;
            if ( v34 + v9 - v14 < 0x20 )
              v17 = v34 + v9 - v14;
            v19 = v40;
            if ( v14 < v17 + v14 )
            {
              do
                *v19++ = v18++;
              while ( v18 < v17 + v14 );
            }
            v20 = v40;
          }
          if ( !(unsigned int)RFONTOBJ::bGetGlyphMetrics(
                                (RFONTOBJ *)&v33,
                                (struct RFONTOBJ *)(unsigned int)v17,
                                &v39,
                                v20,
                                (struct XDCOBJ *)&v37,
                                0LL) )
            goto LABEL_29;
          if ( (a5 & 2) != 0 )
          {
            if ( v17 > 0 )
            {
              v21 = *(_DWORD *)v31;
              p_pgdf = &v39.pgdf;
              v23 = (_DWORD *)v32;
              v24 = (unsigned int)v17;
              do
              {
                v25 = *p_pgdf;
                LODWORD(v32) = 0;
                bFToL((float)(int)(v21 + HIDWORD(v25[1].ppo)) * eYY, (int *)&v32, 0);
                p_pgdf += 3;
                *v23++ = v32;
                --v24;
              }
              while ( v24 );
              v8 = v38;
              v9 = v36;
              v32 = (__int64)v23;
              v14 = v35;
              v6 = (float *)v32;
            }
          }
          else if ( v17 > 0 )
          {
            v28 = &v39.pgdf;
            v29 = (unsigned int)v17;
            do
            {
              v30 = *v28;
              v28 += 3;
              *v6++ = (float)((float)SHIDWORD(v30[1].ppo) * 0.0625) * eYY;
              --v29;
            }
            while ( v29 );
            v32 = (__int64)v6;
          }
          if ( !v8 )
          {
            v14 += v17;
            goto LABEL_12;
          }
          v15 += 2LL * (unsigned __int16)v17;
        }
      }
      EngSetLastError(6u);
LABEL_29:
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v33);
    }
  }
  else
  {
    EngSetLastError(6u);
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)&v37);
  return v10;
}
