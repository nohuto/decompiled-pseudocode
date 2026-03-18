/*
 * XREFs of DrawEdge @ 0x1C007EBC4
 * Callers:
 *     xxxDrawCaptionBar @ 0x1C007B6D0 (xxxDrawCaptionBar.c)
 *     xxxMenuDraw @ 0x1C007D26C (xxxMenuDraw.c)
 *     DrawPushButton @ 0x1C007EAF4 (DrawPushButton.c)
 *     ?DrawGroove@@YAXPEAUHDC__@@PEAUHBRUSH__@@PEAUtagRECT@@H@Z @ 0x1C0082608 (-DrawGroove@@YAXPEAUHDC__@@PEAUHBRUSH__@@PEAUtagRECT@@H@Z.c)
 *     xxxDrawWindowFrame @ 0x1C00931B4 (xxxDrawWindowFrame.c)
 *     ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C01CFD54 (-xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z.c)
 *     xxxMNDrawFullNC @ 0x1C0216BF0 (xxxMNDrawFullNC.c)
 * Callees:
 *     FillRect @ 0x1C007F7A4 (FillRect.c)
 *     GrePolyPatBlt @ 0x1C007F804 (GrePolyPatBlt.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?DrawDiagonal@@YAHPEAUHDC__@@PEAUtagRECT@@PEAUHBRUSH__@@2I@Z @ 0x1C023ABB4 (-DrawDiagonal@@YAHPEAUHDC__@@PEAUtagRECT@@PEAUHBRUSH__@@2I@Z.c)
 *     ?FillTriangle@@YAHPEAUHDC__@@PEAUtagRECT@@PEAUHBRUSH__@@I@Z @ 0x1C023AEC0 (-FillTriangle@@YAHPEAUHDC__@@PEAUtagRECT@@PEAUHBRUSH__@@I@Z.c)
 */

__int64 __fastcall DrawEdge(HDC a1, RECT *a2, char a3, int a4)
{
  RECT v5; // xmm0
  char v6; // r13
  unsigned int v7; // r10d
  LONG bottom; // r15d
  LONG right; // r14d
  LONG top; // edi
  int v11; // ecx
  LONG left; // esi
  unsigned int v13; // ebx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  HBRUSH v18; // r8
  HBRUSH v19; // rdx
  unsigned int v20; // r9d
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  unsigned int v26; // eax
  HBRUSH v28; // r8
  int v29; // eax
  HBRUSH v30; // r8
  RECT v31; // [rsp+30h] [rbp-69h] BYREF
  RECT *v32; // [rsp+40h] [rbp-59h]
  LONG v33; // [rsp+50h] [rbp-49h] BYREF
  LONG v34; // [rsp+54h] [rbp-45h]
  int v35; // [rsp+58h] [rbp-41h]
  int v36; // [rsp+5Ch] [rbp-3Dh]
  _QWORD v37[10]; // [rsp+60h] [rbp-39h]

  v5 = *a2;
  v6 = a3;
  v32 = a2;
  v7 = 1;
  v31 = v5;
  bottom = v5.bottom;
  right = v5.right;
  top = v5.top;
  v11 = a4 | 0x8000;
  left = v5.left;
  if ( *(_WORD *)(gpsi + 9972LL) != 1 )
    v11 = a4;
  v13 = v11 | 0x4000;
  if ( (v11 & 0x8000) == 0 )
    v13 = v11;
  v14 = a3 & 3;
  if ( (a3 & 3) == 0 )
    goto LABEL_24;
  while ( 1 )
  {
    if ( (v13 & 0x4000) != 0 )
    {
      if ( (v13 & 0x8000) != 0 )
        v19 = (v14 & 3) != 0 ? *(HBRUSH *)(gpsi + 4728LL) : *(HBRUSH *)(gpsi + 4720LL);
      else
        v19 = (v14 & 3) != 0 ? *(HBRUSH *)(gpsi + 4808LL) : *(HBRUSH *)(gpsi + 4800LL);
      v18 = v19;
    }
    else
    {
      v15 = v14 - 1;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( v16 )
        {
          v17 = v16 - 2;
          if ( v17 )
          {
            if ( v17 != 4 )
              return 0LL;
            v18 = (v13 & 0x1000) != 0 ? *(HBRUSH *)(gpsi + 4808LL) : *(HBRUSH *)(gpsi + 4848LL);
            v19 = *(HBRUSH *)(gpsi + 4856LL);
          }
          else
          {
            v18 = (v13 & 0x1000) != 0 ? *(HBRUSH *)(gpsi + 4856LL) : *(HBRUSH *)(gpsi + 4840LL);
            v19 = *(HBRUSH *)(gpsi + 4808LL);
          }
        }
        else
        {
          v18 = (v13 & 0x1000) != 0 ? *(HBRUSH *)(gpsi + 4848LL) : *(HBRUSH *)(gpsi + 4808LL);
          v19 = *(HBRUSH *)(gpsi + 4840LL);
        }
      }
      else
      {
        v18 = (v13 & 0x1000) != 0 ? *(HBRUSH *)(gpsi + 4840LL) : *(HBRUSH *)(gpsi + 4856LL);
        v19 = *(HBRUSH *)(gpsi + 4848LL);
      }
    }
    if ( (v13 & 0x10) != 0 )
    {
      v26 = DrawDiagonal(a1, &v31, v18, v19, v13);
      bottom = v31.bottom;
      right = v31.right;
      top = v31.top;
      left = v31.left;
    }
    else
    {
      v20 = 0;
      if ( (v13 & 4) != 0 )
      {
        --right;
        v34 = top;
        v31.right = right;
        v33 = right;
        v36 = bottom - top;
        v20 = 1;
        v35 = 1;
        v37[0] = v19;
      }
      if ( (v13 & 8) != 0 )
      {
        v31.bottom = --bottom;
        v21 = 3LL * v20;
        *(&v33 + 2 * v21) = left;
        *(&v35 + 2 * v21) = right - left;
        ++v20;
        *(&v34 + 2 * v21) = bottom;
        *(&v36 + 2 * v21) = 1;
        v37[v21] = v19;
      }
      if ( (v13 & 1) != 0 )
      {
        v22 = v20++;
        v23 = 3 * v22;
        *(&v33 + 2 * v23) = left++;
        *(&v34 + 2 * v23) = top;
        v31.left = left;
        *(&v35 + 2 * v23) = 1;
        *(&v36 + 2 * v23) = bottom - top;
        v37[v23] = v18;
      }
      if ( (v13 & 2) != 0 )
      {
        v24 = v20++;
        v25 = 3 * v24;
        *(&v34 + 2 * v25) = top++;
        *(&v33 + 2 * v25) = left;
        v31.top = top;
        *(&v35 + 2 * v25) = right - left;
        *(&v36 + 2 * v25) = 1;
        v37[v25] = v18;
      }
      v26 = GrePolyPatBlt(a1, 0xF00021u, (struct _POLYPATBLT *)&v33, v20);
    }
    v7 = v26;
LABEL_24:
    v14 = v6 & 0xC;
    if ( (v6 & 0xC) == 0 )
      break;
    v6 &= 0xF3u;
  }
  if ( (v13 & 0x800) != 0 )
  {
    if ( (v13 & 0x10) != 0 )
    {
      if ( (v13 & 0x8000) != 0 )
        v28 = *(HBRUSH *)(gpsi + 4720LL);
      else
        v28 = *(HBRUSH *)(gpsi + 4800LL);
      v29 = FillTriangle(a1, &v31, v28, v13);
    }
    else
    {
      if ( (v13 & 0x8000) != 0 )
        v30 = *(HBRUSH *)(gpsi + 4720LL);
      else
        v30 = *(HBRUSH *)(gpsi + 4800LL);
      v29 = FillRect(a1, &v31, v30);
    }
    v7 = v29;
  }
  if ( (v13 & 0x2000) != 0 )
    *v32 = v31;
  return v7;
}
