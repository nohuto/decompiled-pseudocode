/*
 * XREFs of ?bRoundRect@@YAHAEAVEPATHOBJ@@AEAVEBOX@@JJ@Z @ 0x1C00B303C
 * Callers:
 *     NtGdiCreateRoundRectRgn @ 0x1C00B5E20 (NtGdiCreateRoundRectRgn.c)
 *     NtGdiRoundRect @ 0x1C027BB70 (NtGdiRoundRect.c)
 * Callees:
 *     ?bToPOINTL@EPOINTFL@@QEAAHAEAU_POINTL@@@Z @ 0x1C00B3434 (-bToPOINTL@EPOINTFL@@QEAAHAEAU_POINTL@@@Z.c)
 *     ?bIsZero@EFLOAT@@QEAAHXZ @ 0x1C00B348C (-bIsZero@EFLOAT@@QEAAHXZ.c)
 *     ?vAbs@EFLOAT@@QEAAXXZ @ 0x1C00B353C (-vAbs@EFLOAT@@QEAAXXZ.c)
 *     ?efHalfDiff@@YA?AVEFLOAT@@JJ@Z @ 0x1C00B357C (-efHalfDiff@@YA-AVEFLOAT@@JJ@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
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
  int v25; // ecx
  __int64 v26; // rax
  int v27; // ecx
  struct _POINTL v28; // rax
  int v29; // ecx
  __int64 v30; // rax
  struct _POINTL v32; // [rsp+20h] [rbp-58h] BYREF
  struct _POINTL v33; // [rsp+28h] [rbp-50h] BYREF
  __int64 v34; // [rsp+30h] [rbp-48h] BYREF
  __int64 v35; // [rsp+38h] [rbp-40h] BYREF
  struct _POINTL v36; // [rsp+40h] [rbp-38h] BYREF
  struct _POINTL v37; // [rsp+48h] [rbp-30h] BYREF
  __int64 v38; // [rsp+50h] [rbp-28h]
  int v39; // [rsp+58h] [rbp-20h]
  int v40; // [rsp+5Ch] [rbp-1Ch]

  v5 = efHalfDiff(*((unsigned int *)a2 + 16), *((unsigned int *)a2 + 18), a3, (unsigned int)a3);
  v6 = *((unsigned int *)a2 + 19);
  v7 = *((unsigned int *)a2 + 17);
  v33.x = v5;
  v32.x = efHalfDiff(v7, v6, v8, v9);
  v10 = 0;
  if ( (unsigned int)EFLOAT::bIsZero((EFLOAT *)&v33) || (unsigned int)EFLOAT::bIsZero((EFLOAT *)&v32) )
  {
    v13 = FP_0_0;
    v14 = FP_0_0;
  }
  else
  {
    EFLOAT::vAbs((EFLOAT *)&v33);
    EFLOAT::vAbs((EFLOAT *)&v32);
    v13 = (float)(int)abs32(v11) / *(float *)&v33.x;
    v14 = (float)(int)abs32(v12) / *(float *)&v32.x;
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
  *(float *)&v35 = (float)*((int *)a2 + 12) * v15;
  *((float *)&v35 + 1) = v17;
  v34 = __PAIR64__(v19, v18);
  EPOINTFL::bToPOINTL((EPOINTFL *)&v35, &v33);
  EPOINTFL::bToPOINTL((EPOINTFL *)&v34, &v36);
  x = v36.x;
  v21 = v33.x;
  v32.x = *((_DWORD *)a2 + 2);
  v22 = (1922922357LL * v33.x) >> 32;
  v34 = (1922922357LL * v36.x) >> 32;
  v23 = (1922922357LL * v33.y) >> 32;
  v35 = (1922922357LL * v36.y) >> 32;
  v32.y = *((_DWORD *)a2 + 3);
  v32.y -= v36.y;
  v32.x -= v36.x;
  if ( EPATHOBJ::bMoveTo(a1, 0LL, &v32) )
  {
    v37 = (struct _POINTL)*((_QWORD *)a2 + 1);
    v24 = v37;
    v37.x -= v34;
    v37.y -= v35;
    LODWORD(v38) = v24.x - v22;
    HIDWORD(v38) = v24.y - v23;
    v39 = v24.x - v21;
    v40 = v24.y - v33.y;
    if ( EPATHOBJ::bPolyBezierTo(a1, 0LL, &v37, 3u) )
    {
      v25 = *((_DWORD *)a2 + 4);
      v32.y = *((_DWORD *)a2 + 5);
      v32.x = v21 + v25;
      v32.y += v33.y;
      if ( EPATHOBJ::bPolyLineTo(a1, 0LL, &v32, 1u) )
      {
        v38 = *((_QWORD *)a2 + 2);
        v26 = v38;
        LODWORD(v38) = v38 - v34;
        HIDWORD(v38) -= v35;
        v37.x = v22 + v26;
        v37.y = v23 + HIDWORD(v26);
        v39 = v26 - x;
        v40 = HIDWORD(v26) - v36.y;
        if ( EPATHOBJ::bPolyBezierTo(a1, 0LL, &v37, 3u) )
        {
          v27 = *((_DWORD *)a2 + 6);
          v32.y = *((_DWORD *)a2 + 7);
          v32.x = x + v27;
          v32.y += v36.y;
          if ( EPATHOBJ::bPolyLineTo(a1, 0LL, &v32, 1u) )
          {
            v37 = (struct _POINTL)*((_QWORD *)a2 + 3);
            v28 = v37;
            v37.x += v34;
            v37.y += v35;
            LODWORD(v38) = v22 + v28.x;
            HIDWORD(v38) = v23 + v28.y;
            v39 = v21 + v28.x;
            v40 = v33.y + v28.y;
            if ( EPATHOBJ::bPolyBezierTo(a1, 0LL, &v37, 3u) )
            {
              v29 = *((_DWORD *)a2 + 8);
              v32.y = *((_DWORD *)a2 + 9);
              v32.y -= v33.y;
              v32.x = v29 - v21;
              if ( EPATHOBJ::bPolyLineTo(a1, 0LL, &v32, 1u) )
              {
                v38 = *((_QWORD *)a2 + 4);
                v30 = v38;
                LODWORD(v38) = v34 + v38;
                HIDWORD(v38) += v35;
                v37.x = v30 - v22;
                v37.y = HIDWORD(v30) - v23;
                v39 = x + v30;
                v40 = v36.y + HIDWORD(v30);
                if ( EPATHOBJ::bPolyBezierTo(a1, 0LL, &v37, 3u) )
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
