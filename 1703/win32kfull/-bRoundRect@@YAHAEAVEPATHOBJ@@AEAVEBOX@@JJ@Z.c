/*
 * XREFs of ?bRoundRect@@YAHAEAVEPATHOBJ@@AEAVEBOX@@JJ@Z @ 0x1C011D00C
 * Callers:
 *     NtGdiCreateRoundRectRgn @ 0x1C011CEA0 (NtGdiCreateRoundRectRgn.c)
 *     NtGdiRoundRect @ 0x1C027F050 (NtGdiRoundRect.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEAAHXZ @ 0x1C007DA54 (-bIsZero@EFLOAT@@QEAAHXZ.c)
 *     ?vAbs@EFLOAT@@QEAAXXZ @ 0x1C007DA94 (-vAbs@EFLOAT@@QEAAXXZ.c)
 *     ?bToPOINTL@EPOINTFL@@QEAAHAEAU_POINTL@@@Z @ 0x1C011D3C0 (-bToPOINTL@EPOINTFL@@QEAAHAEAU_POINTL@@@Z.c)
 *     ?efHalfDiff@@YA?AVEFLOAT@@JJ@Z @ 0x1C011D418 (-efHalfDiff@@YA-AVEFLOAT@@JJ@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall bRoundRect(struct EPATHOBJ *a1, struct EBOX *a2, __int64 a3)
{
  LONG v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned int v10; // r14d
  int v11; // r9d
  int v12; // r10d
  float v13; // xmm5_4
  float v14; // xmm4_4
  float v15; // xmm5_4
  float v16; // xmm4_4
  float v17; // xmm1_4
  unsigned int v18; // xmm2_4
  unsigned int v19; // xmm3_4
  LONG x; // edi
  LONG v21; // ebx
  __int64 v22; // r12
  __int64 v23; // r13
  struct _POINTL v24; // rax
  __int64 v25; // rax
  struct _POINTL v26; // rax
  int v27; // eax
  __int64 v28; // rax
  struct _POINTL v30; // [rsp+20h] [rbp-58h] BYREF
  struct _POINTL v31; // [rsp+28h] [rbp-50h] BYREF
  __int64 v32; // [rsp+30h] [rbp-48h] BYREF
  __int64 v33; // [rsp+38h] [rbp-40h] BYREF
  struct _POINTL v34; // [rsp+40h] [rbp-38h] BYREF
  struct _POINTL v35; // [rsp+48h] [rbp-30h] BYREF
  __int64 v36; // [rsp+50h] [rbp-28h]
  int v37; // [rsp+58h] [rbp-20h]
  int v38; // [rsp+5Ch] [rbp-1Ch]

  v5 = efHalfDiff(*((unsigned int *)a2 + 16), *((unsigned int *)a2 + 18), a3, (unsigned int)a3);
  v6 = *((unsigned int *)a2 + 19);
  v7 = *((unsigned int *)a2 + 17);
  v31.x = v5;
  v30.x = efHalfDiff(v7, v6, v8, v9);
  v10 = 0;
  if ( EFLOAT::bIsZero((EFLOAT *)&v31) || EFLOAT::bIsZero((EFLOAT *)&v30) )
  {
    v13 = FP_0_0;
    v14 = FP_0_0;
  }
  else
  {
    EFLOAT::vAbs((EFLOAT *)&v31);
    EFLOAT::vAbs((EFLOAT *)&v30);
    v13 = (float)(int)abs32(v11) / *(float *)&v31.x;
    v14 = (float)(int)abs32(v12) / *(float *)&v30.x;
  }
  if ( v13 > FP_2_0 )
    v15 = FP_1_0;
  else
    v15 = v13 * 0.5;
  if ( v14 > FP_2_0 )
    v16 = FP_1_0;
  else
    v16 = v14 * 0.5;
  v17 = (float)*((int *)a2 + 13) * v15;
  *(float *)&v18 = (float)*((int *)a2 + 14) * v16;
  *(float *)&v19 = (float)*((int *)a2 + 15) * v16;
  *(float *)&v33 = (float)*((int *)a2 + 12) * v15;
  *((float *)&v33 + 1) = v17;
  v32 = __PAIR64__(v19, v18);
  EPOINTFL::bToPOINTL((EPOINTFL *)&v33, &v31);
  EPOINTFL::bToPOINTL((EPOINTFL *)&v32, &v34);
  x = v34.x;
  v21 = v31.x;
  v30.y = *((_DWORD *)a2 + 3) - v34.y;
  v32 = (1922922357LL * v34.x) >> 32;
  v22 = (1922922357LL * v31.x) >> 32;
  v33 = (1922922357LL * v34.y) >> 32;
  v23 = (1922922357LL * v31.y) >> 32;
  v30.x = *((_DWORD *)a2 + 2) - v34.x;
  if ( EPATHOBJ::bMoveTo(a1, 0LL, &v30) )
  {
    v35 = (struct _POINTL)*((_QWORD *)a2 + 1);
    v24 = v35;
    v35.x -= v32;
    v35.y -= v33;
    LODWORD(v36) = v24.x - v22;
    HIDWORD(v36) = v24.y - v23;
    v37 = v24.x - v21;
    v38 = v24.y - v31.y;
    if ( EPATHOBJ::bPolyBezierTo(a1, 0LL, &v35, 3u) )
    {
      v30.x = v21 + *((_DWORD *)a2 + 4);
      v30.y = *((_DWORD *)a2 + 5) + v31.y;
      if ( EPATHOBJ::bPolyLineTo(a1, 0LL, &v30, 1u) )
      {
        v36 = *((_QWORD *)a2 + 2);
        v25 = v36;
        LODWORD(v36) = v36 - v32;
        HIDWORD(v36) -= v33;
        v35.x = v22 + v25;
        v35.y = v23 + HIDWORD(v25);
        v37 = v25 - x;
        v38 = HIDWORD(v25) - v34.y;
        if ( EPATHOBJ::bPolyBezierTo(a1, 0LL, &v35, 3u) )
        {
          v30.x = x + *((_DWORD *)a2 + 6);
          v30.y = *((_DWORD *)a2 + 7) + v34.y;
          if ( EPATHOBJ::bPolyLineTo(a1, 0LL, &v30, 1u) )
          {
            v35 = (struct _POINTL)*((_QWORD *)a2 + 3);
            v26 = v35;
            v35.x += v32;
            v35.y += v33;
            LODWORD(v36) = v22 + v26.x;
            HIDWORD(v36) = v23 + v26.y;
            v37 = v21 + v26.x;
            v38 = v31.y + v26.y;
            if ( EPATHOBJ::bPolyBezierTo(a1, 0LL, &v35, 3u) )
            {
              v27 = *((_DWORD *)a2 + 8);
              v30.y = *((_DWORD *)a2 + 9) - v31.y;
              v30.x = v27 - v21;
              if ( EPATHOBJ::bPolyLineTo(a1, 0LL, &v30, 1u) )
              {
                v36 = *((_QWORD *)a2 + 4);
                v28 = v36;
                LODWORD(v36) = v32 + v36;
                HIDWORD(v36) += v33;
                v35.x = v28 - v22;
                v35.y = HIDWORD(v28) - v23;
                v37 = x + v28;
                v38 = v34.y + HIDWORD(v28);
                if ( EPATHOBJ::bPolyBezierTo(a1, 0LL, &v35, 3u) )
                  return (unsigned int)EPATHOBJ::bCloseFigure(a1);
              }
            }
          }
        }
      }
    }
  }
  return v10;
}
