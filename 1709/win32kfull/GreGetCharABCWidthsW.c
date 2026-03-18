/*
 * XREFs of GreGetCharABCWidthsW @ 0x1C00F4284
 * Callers:
 *     NtGdiGetCharABCWidthsW @ 0x1C00F4130 (NtGdiGetCharABCWidthsW.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001726C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0030F20 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0035428 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vFixUpGlyphIndices@RFONTOBJ@@QEAAXPEAGI@Z @ 0x1C00361A8 (-vFixUpGlyphIndices@RFONTOBJ@@QEAAXPEAGI@Z.c)
 *     ?bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1C00361C8 (-bGetGlyphMetrics@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     bFToL @ 0x1C00F1FA8 (bFToL.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

__int64 __fastcall GreGetCharABCWidthsW(HDC a1, int a2, unsigned int a3, unsigned __int16 *a4, char a5, __int64 a6)
{
  int v6; // r12d
  unsigned int v8; // esi
  int v9; // eax
  GLYPHDEF *v10; // rdx
  unsigned __int64 v11; // r8
  struct _FD_XFORM *v12; // rbx
  unsigned int v13; // edi
  float eYY; // xmm6_4
  struct _GLYPHPOS *v15; // r13
  __int64 v16; // r14
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r8
  unsigned __int16 *v19; // rdx
  unsigned __int16 *v20; // r9
  float *v21; // r9
  struct _GLYPHPOS *v23; // rax
  struct _GLYPHPOS *v24; // rdi
  int *pgdf; // rbx
  float v26; // xmm0_4
  char v27; // r8
  float v28; // xmm0_4
  char v29; // r8
  unsigned int v30; // eax
  unsigned __int16 v31[4]; // [rsp+38h] [rbp-D0h] BYREF
  struct _FD_XFORM *v32; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v33; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v34; // [rsp+50h] [rbp-B8h]
  unsigned int v35; // [rsp+58h] [rbp-B0h] BYREF
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
  if ( v38[0] )
  {
    if ( v8 )
    {
      v32 = 0LL;
      v9 = RFONTOBJ::bInit(&v32, (struct XDCOBJ *)v38, 0, (a5 & 2) != 0 ? 4 : 2);
      v12 = v32;
      if ( v9 )
        GreAcquireSemaphore(*(_QWORD *)&v32[33].eXX);
      if ( v12 )
      {
        v13 = 1;
        if ( (LODWORD(v12[4].eXY) & 4) != 0 )
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
        eYY = v12[42].eYY;
        if ( (a5 & 3) != 1 || *(_QWORD *)(*(_QWORD *)&v12[5].eXX + 3096LL) )
        {
          while ( 1 )
          {
            v15 = v39;
            v16 = v8;
            if ( v8 > 0x20 )
              v16 = 32LL;
            LODWORD(v36) = v16;
            if ( a4 )
            {
              v20 = a4;
              a4 += v16;
            }
            else
            {
              v17 = (unsigned int)v16;
              v18 = 0LL;
              v19 = v40;
              if ( v40 > &v40[v16] )
                v17 = 0LL;
              if ( v17 )
              {
                do
                {
                  *v19 = v6;
                  ++v18;
                  ++v6;
                  ++v19;
                }
                while ( v18 < v17 );
              }
              v20 = v40;
            }
            if ( !(unsigned int)RFONTOBJ::bGetGlyphMetrics(
                                  (RFONTOBJ *)&v32,
                                  (struct RFONTOBJ *)(unsigned int)v16,
                                  v39,
                                  v20,
                                  (struct XDCOBJ *)v38,
                                  0LL) )
              break;
            if ( (a5 & 1) != 0 )
            {
              v23 = &v39[(unsigned int)v16];
              if ( v39 < v23 )
              {
                v16 = v33;
                v24 = v23;
                do
                {
                  pgdf = (int *)v15->pgdf;
                  v35 = 0;
                  bFToL((float)pgdf[4] * eYY, (int *)&v35, 0);
                  v26 = (float)pgdf[5];
                  *(_DWORD *)v31 = 0;
                  bFToL(v26 * eYY, (int *)v31, v27);
                  v28 = (float)pgdf[3];
                  LODWORD(v33) = 0;
                  bFToL(v28 * eYY, (int *)&v33, v29);
                  v11 = v35;
                  ++v15;
                  v30 = *(_DWORD *)v31 - v35;
                  *(_DWORD *)v16 = v35;
                  *(_DWORD *)(v16 + 4) = v30;
                  *(_DWORD *)(v16 + 8) = v33 - *(_DWORD *)v31;
                  v16 += 12LL;
                }
                while ( v15 < v24 );
                v8 = v34;
                v13 = 1;
                v33 = v16;
                LODWORD(v16) = v36;
              }
            }
            else
            {
              v11 = (unsigned __int64)&v39[(unsigned int)v16];
              if ( (unsigned __int64)v39 < v11 )
              {
                v21 = (float *)v37;
                do
                {
                  v10 = v15->pgdf;
                  ++v15;
                  *v21 = (float)SLODWORD(v10[2].pgb) * eYY;
                  v21[1] = (float)(HIDWORD(v10[2].ppo) - LODWORD(v10[2].pgb)) * eYY;
                  v21[2] = (float)(HIDWORD(v10[1].ppo) - HIDWORD(v10[2].ppo)) * eYY;
                  v21 += 3;
                }
                while ( (unsigned __int64)v15 < v11 );
                v37 = (__int64)v21;
              }
            }
            v8 -= v16;
            v34 = v8;
            if ( !v8 )
              goto LABEL_26;
          }
        }
      }
      else
      {
        EngSetLastError(6u);
      }
      v13 = 0;
LABEL_26:
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v32, (__int64)v10, v11);
    }
    else
    {
      v13 = 1;
    }
  }
  else
  {
    EngSetLastError(6u);
    v13 = 0;
  }
  if ( v38[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v38);
  return v13;
}
