/*
 * XREFs of DrawEdge @ 0x1C0028C10
 * Callers:
 *     xxxMenuDraw @ 0x1C000D438 (xxxMenuDraw.c)
 *     DrawPushButton @ 0x1C002898C (DrawPushButton.c)
 *     xxxDrawWindowFrame @ 0x1C003E31C (xxxDrawWindowFrame.c)
 *     xxxDrawCaptionBar @ 0x1C00C22F8 (xxxDrawCaptionBar.c)
 *     ?DrawGroove@@YAXPEAUHDC__@@PEAUHBRUSH__@@PEAUtagRECT@@H@Z @ 0x1C00D681C (-DrawGroove@@YAXPEAUHDC__@@PEAUHBRUSH__@@PEAUtagRECT@@H@Z.c)
 *     xxxMNDrawFullNC @ 0x1C013E3E8 (xxxMNDrawFullNC.c)
 *     ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C01CB990 (-xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     FillRect @ 0x1C0029210 (FillRect.c)
 *     GrePolyPatBlt @ 0x1C0029270 (GrePolyPatBlt.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     DrawDiagonal @ 0x1C02396A0 (DrawDiagonal.c)
 *     FillTriangle @ 0x1C02399A4 (FillTriangle.c)
 */

__int64 __fastcall DrawEdge(HDC a1, RECT *a2, unsigned int a3, int a4)
{
  RECT v4; // xmm0
  _QWORD *v5; // r11
  unsigned int v6; // edi
  LONG bottom; // r12d
  int v8; // r10d
  LONG right; // r15d
  LONG top; // esi
  LONG left; // r14d
  bool v13; // zf
  int v14; // ebx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  _QWORD *v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rdx
  unsigned int v22; // r9d
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rcx
  unsigned int v27; // eax
  _QWORD *v29; // rdx
  _QWORD *v30; // rdx
  _QWORD *v31; // rdx
  _QWORD *v32; // rax
  _QWORD *v33; // rax
  _QWORD *v34; // rax
  int v35; // eax
  HBRUSH v36; // r8
  RECT v37; // [rsp+30h] [rbp-69h] BYREF
  unsigned int v38; // [rsp+40h] [rbp-59h]
  RECT *v39; // [rsp+48h] [rbp-51h]
  LONG v40; // [rsp+50h] [rbp-49h]
  LONG v41; // [rsp+54h] [rbp-45h]
  int v42; // [rsp+58h] [rbp-41h]
  int v43; // [rsp+5Ch] [rbp-3Dh]
  _QWORD v44[10]; // [rsp+60h] [rbp-39h]

  v4 = *a2;
  v5 = (_QWORD *)gpsi;
  v6 = 1;
  v39 = a2;
  v37 = v4;
  bottom = v4.bottom;
  v8 = a4 | 0x8000;
  right = v4.right;
  top = v4.top;
  left = v4.left;
  v13 = *(_WORD *)(gpsi + 8676LL) == 1;
  v38 = a3;
  if ( !v13 )
    v8 = a4;
  v14 = v8 | 0x4000;
  if ( (v8 & 0x8000) == 0 )
    v14 = v8;
  v15 = a3 & 3;
  if ( (a3 & 3) == 0 )
    goto LABEL_24;
  while ( 1 )
  {
    if ( (v14 & 0x4000) != 0 )
    {
      if ( (v14 & 0x8000) != 0 )
      {
        v13 = (v15 & 3) == 0;
        v33 = (_QWORD *)*v5;
        v21 = v13 ? v33[641] : v33[642];
      }
      else
      {
        v13 = (v15 & 3) == 0;
        v32 = (_QWORD *)*v5;
        v21 = v13 ? v32[651] : v32[652];
      }
      v20 = v21;
    }
    else
    {
      v16 = v15 - 1;
      if ( v16 )
      {
        v17 = v16 - 1;
        if ( v17 )
        {
          v18 = v17 - 2;
          if ( v18 )
          {
            if ( v18 != 4 )
              return 0LL;
            v31 = (_QWORD *)*v5;
            v20 = (v14 & 0x1000) != 0 ? v31[652] : v31[657];
            v21 = v31[658];
          }
          else
          {
            v19 = (_QWORD *)*v5;
            v20 = (v14 & 0x1000) != 0 ? v19[658] : v19[656];
            v21 = v19[652];
          }
        }
        else
        {
          v30 = (_QWORD *)*v5;
          v20 = (v14 & 0x1000) != 0 ? v30[657] : v30[652];
          v21 = v30[656];
        }
      }
      else
      {
        v29 = (_QWORD *)*v5;
        v20 = (v14 & 0x1000) != 0 ? v29[656] : v29[658];
        v21 = v29[657];
      }
    }
    if ( (v14 & 0x10) != 0 )
    {
      v27 = DrawDiagonal(a1, v14);
      bottom = v37.bottom;
      right = v37.right;
      top = v37.top;
      left = v37.left;
    }
    else
    {
      v22 = 0;
      if ( (v14 & 4) != 0 )
      {
        --right;
        v41 = top;
        v37.right = right;
        v40 = right;
        v43 = bottom - top;
        v22 = 1;
        v42 = 1;
        v44[0] = v21;
      }
      if ( (v14 & 8) != 0 )
      {
        v37.bottom = --bottom;
        v23 = 3LL * v22;
        *(&v40 + 2 * v23) = left;
        *(&v42 + 2 * v23) = right - left;
        ++v22;
        *(&v41 + 2 * v23) = bottom;
        *(&v43 + 2 * v23) = 1;
        v44[v23] = v21;
      }
      if ( (v14 & 1) != 0 )
      {
        v24 = v22++;
        v25 = 3 * v24;
        *(&v40 + 2 * v25) = left++;
        *(&v41 + 2 * v25) = top;
        v37.left = left;
        *(&v42 + 2 * v25) = 1;
        *(&v43 + 2 * v25) = bottom - top;
        v44[v25] = v20;
      }
      if ( (v14 & 2) != 0 )
      {
        v26 = 3LL * v22;
        *(&v41 + 2 * v26) = top++;
        *(&v40 + 2 * v26) = left;
        v37.top = top;
        *(&v42 + 2 * v26) = right - left;
        *(&v43 + 2 * v26) = 1;
        v44[v26] = v20;
      }
      v27 = GrePolyPatBlt(a1);
    }
    v5 = (_QWORD *)gpsi;
    v6 = v27;
    a3 = v38;
LABEL_24:
    v15 = a3 & 0xC;
    if ( (a3 & 0xC) == 0 )
      break;
    v38 = a3 & 0xFFFFFFF3;
  }
  if ( (v14 & 0x800) != 0 )
  {
    v34 = (_QWORD *)*v5;
    if ( (v14 & 0x10) != 0 )
    {
      v35 = FillTriangle(a1);
    }
    else
    {
      if ( (v14 & 0x8000) != 0 )
        v36 = (HBRUSH)v34[641];
      else
        v36 = (HBRUSH)v34[651];
      v35 = FillRect(a1, &v37, v36);
    }
    v6 = v35;
  }
  if ( (v14 & 0x2000) != 0 )
    *v39 = v37;
  return v6;
}
