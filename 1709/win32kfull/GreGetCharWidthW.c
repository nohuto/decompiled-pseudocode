/*
 * XREFs of GreGetCharWidthW @ 0x1C0103D64
 * Callers:
 *     NtGdiGetCharWidthW @ 0x1C0103BB0 (NtGdiGetCharWidthW.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001726C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0030F20 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0035428 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vFixUpGlyphIndices@RFONTOBJ@@QEAAXPEAGI@Z @ 0x1C00361A8 (-vFixUpGlyphIndices@RFONTOBJ@@QEAAXPEAGI@Z.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C00361C8 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?lOverhang@RFONTOBJ@@QEAAJXZ @ 0x1C0036620 (-lOverhang@RFONTOBJ@@QEAAJXZ.c)
 *     bFToL @ 0x1C00F1FA8 (bFToL.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall GreGetCharWidthW(HDC a1, unsigned int a2, unsigned int a3, unsigned __int16 *a4, char a5, float *a6)
{
  float *v6; // r15
  unsigned int v7; // r13d
  unsigned __int16 *v8; // rsi
  unsigned int v9; // r12d
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  struct _FD_XFORM *v13; // rbx
  unsigned int v14; // edi
  float eYY; // xmm6_4
  unsigned int v16; // r14d
  __int64 v17; // r13
  unsigned int v18; // eax
  int v19; // ebx
  unsigned int v20; // eax
  unsigned __int16 *v21; // rcx
  unsigned __int16 *v22; // r9
  unsigned int v23; // esi
  GLYPHDEF **p_pgdf; // r15
  _DWORD *v25; // r14
  __int64 v26; // r12
  GLYPHDEF *v27; // rax
  __int64 v29; // rcx
  GLYPHDEF **v30; // rcx
  GLYPHDEF *v31; // rax
  unsigned __int16 v32[4]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v33; // [rsp+40h] [rbp-C8h] BYREF
  struct _FD_XFORM *v34; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v35; // [rsp+50h] [rbp-B8h]
  unsigned int v36; // [rsp+54h] [rbp-B4h]
  __int64 v37; // [rsp+58h] [rbp-B0h]
  __int64 v38; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int16 *v39; // [rsp+70h] [rbp-98h]
  struct _GLYPHPOS v40; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int16 v41[32]; // [rsp+378h] [rbp+270h] BYREF

  v6 = a6;
  v7 = a2;
  v35 = a2;
  v8 = a4;
  *(_DWORD *)v32 = a2;
  v9 = a3;
  v39 = a4;
  LODWORD(v37) = a3;
  v33 = (__int64)a6;
  DCOBJ::DCOBJ((DCOBJ *)&v38, a1);
  if ( !v38 )
  {
    EngSetLastError(6u);
    goto LABEL_37;
  }
  if ( !a6 )
  {
LABEL_37:
    v14 = 0;
    goto LABEL_29;
  }
  v34 = 0LL;
  v10 = RFONTOBJ::bInit(&v34, (struct XDCOBJ *)&v38, 0, (a5 & 8) != 0 ? 4 : 2);
  v13 = v34;
  if ( v10 )
    GreAcquireSemaphore(*(_QWORD *)&v34[33].eXX);
  if ( v13 )
  {
    v14 = 1;
    if ( (LODWORD(v13[4].eXY) & 4) != 0 )
    {
      if ( v8 )
      {
        RFONTOBJ::vFixUpGlyphIndices((RFONTOBJ *)&v34, v8, v9);
      }
      else
      {
        RFONTOBJ::vFixUpGlyphIndices((RFONTOBJ *)&v34, v32, 1u);
        v7 = *(_DWORD *)v32;
        v35 = *(_DWORD *)v32;
      }
    }
    *(_DWORD *)v32 = 0;
    eYY = v13[42].eYY;
    if ( (a5 & 1) != 0 )
      *(_DWORD *)v32 = 16 * RFONTOBJ::lOverhang((RFONTOBJ *)&v34);
    v16 = 0;
    if ( !v8 )
      v16 = v7;
    v17 = (unsigned __int64)v8 & -(__int64)(v8 != 0LL);
    while ( 1 )
    {
      v36 = v16;
      while ( 1 )
      {
        v18 = v9 - 1;
        if ( v8 )
        {
          v29 = (v17 - (__int64)v8) >> 1;
          if ( (unsigned int)v29 > v18 )
            goto LABEL_28;
          v19 = 32;
          v22 = (unsigned __int16 *)v17;
          if ( v9 - (unsigned int)v29 < 0x20 )
            v19 = v9 - v29;
        }
        else
        {
          v11 = v35;
          if ( v16 - v35 > v18 )
            goto LABEL_28;
          v19 = 32;
          v20 = v16;
          if ( v35 + v9 - v16 < 0x20 )
            v19 = v35 + v9 - v16;
          v21 = v41;
          if ( v16 < v19 + v16 )
          {
            do
              *v21++ = v20++;
            while ( v20 < v19 + v16 );
          }
          v22 = v41;
        }
        if ( !(unsigned int)RFONTOBJ::bGetGlyphMetrics(
                              (RFONTOBJ *)&v34,
                              (struct RFONTOBJ *)(unsigned int)v19,
                              &v40,
                              v22,
                              (struct XDCOBJ *)&v38,
                              0LL) )
          goto LABEL_40;
        if ( (a5 & 2) != 0 )
        {
          if ( v19 > 0 )
          {
            v23 = *(_DWORD *)v32;
            p_pgdf = &v40.pgdf;
            v25 = (_DWORD *)v33;
            v26 = (unsigned int)v19;
            do
            {
              v27 = *p_pgdf;
              LODWORD(v33) = 0;
              bFToL((float)(int)(v23 + HIDWORD(v27[1].ppo)) * eYY, (int *)&v33, 0);
              v12 = (unsigned int)v33;
              p_pgdf += 3;
              *v25++ = v33;
              --v26;
            }
            while ( v26 );
            v8 = v39;
            v9 = v37;
            v33 = (__int64)v25;
            v16 = v36;
            v6 = (float *)v33;
          }
        }
        else if ( v19 > 0 )
        {
          v30 = &v40.pgdf;
          v11 = (unsigned int)v19;
          do
          {
            v31 = *v30;
            v30 += 3;
            *v6++ = (float)((float)SHIDWORD(v31[1].ppo) * 0.0625) * eYY;
            --v11;
          }
          while ( v11 );
          v33 = (__int64)v6;
        }
        if ( !v8 )
          break;
        v17 += 2LL * (unsigned __int16)v19;
      }
      v16 += v19;
    }
  }
  EngSetLastError(6u);
LABEL_40:
  v14 = 0;
LABEL_28:
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v34, v11, v12);
LABEL_29:
  if ( v38 )
    XDCOBJ::vUnlockFast((XDCOBJ *)&v38);
  return v14;
}
