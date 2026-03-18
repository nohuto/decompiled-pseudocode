/*
 * XREFs of ?xxxDrawSB2@@YAXPEAUtagWND@@PEAUtagSBCALC@@PEAUHDC__@@HI@Z @ 0x1C0082784
 * Callers:
 *     xxxDrawScrollBar @ 0x1C0082E30 (xxxDrawScrollBar.c)
 *     xxxSBWndProc @ 0x1C02110F0 (xxxSBWndProc.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C00774BC (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C0077ED4 (GetDpiForSystem.c)
 *     DrawFrameControl @ 0x1C007E640 (DrawFrameControl.c)
 *     DrawThumb2 @ 0x1C0082658 (DrawThumb2.c)
 *     BitBltSysBmp @ 0x1C0082AFC (BitBltSysBmp.c)
 *     ?xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z @ 0x1C0082D64 (-xxxGetColorObjects@@YAPEAUHBRUSH__@@PEAUtagWND@@PEAUHDC__@@@Z.c)
 *     GreGetTextColor @ 0x1C0082D98 (GreGetTextColor.c)
 *     GreGetBkColor @ 0x1C0082DE4 (GreGetBkColor.c)
 *     GreSetTextColor @ 0x1C009B5F0 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C009B688 (GreSetBkColor.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 */

void __fastcall xxxDrawSB2(struct tagWND *a1, struct tagSBCALC *a2, HDC a3, int a4, char a5)
{
  __int64 v7; // rdx
  int v8; // kr00_4
  int v10; // r14d
  int v12; // ebx
  unsigned int DpiForSystem; // edx
  __int64 v14; // rcx
  int DpiDependentMetric; // esi
  int *v16; // rdx
  int *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned int v20; // eax
  char v21; // si
  int v22; // edx
  int v23; // r8d
  __int64 v24; // rbx
  unsigned int v25; // eax
  __m128i v26; // xmm6
  int v27; // r9d
  __m128i v28; // xmm6
  __int64 v29; // [rsp+38h] [rbp-48h]
  HBRUSH ColorObjects; // [rsp+40h] [rbp-40h]
  int v31[4]; // [rsp+50h] [rbp-30h] BYREF

  v8 = *((_DWORD *)a2 + 5) - *((_DWORD *)a2 + 4);
  v7 = (unsigned int)(v8 >> 31);
  v10 = *((_DWORD *)a2 + 7) - *((_DWORD *)a2 + 6);
  v12 = v8 / 2;
  if ( v8 / 2 > 0 && v10 > 0 )
  {
    LODWORD(v7) = v8 % 2;
    DpiForSystem = GetDpiForSystem(2LL, v7);
    v14 = 10LL;
    if ( !a4 )
      v14 = 11LL;
    DpiDependentMetric = GetDpiDependentMetric(v14, DpiForSystem);
    GreGetBkColor(a3);
    GreGetTextColor(a3);
    ColorObjects = xxxGetColorObjects(a1, a3);
    v16 = v31;
    v17 = &v31[1];
    if ( v12 > DpiDependentMetric )
      v12 = DpiDependentMetric;
    if ( !a4 )
    {
      v16 = &v31[1];
      v17 = v31;
    }
    *v16 = *((_DWORD *)a2 + 6);
    *v17 = *((_DWORD *)a2 + 4);
    v16[2] = *((_DWORD *)a2 + 7);
    v17[2] = *((_DWORD *)a2 + 5);
    v29 = GreSelectBrush(a3, *(_QWORD *)(gpsi + 4824LL));
    if ( a4 )
    {
      if ( v12 == DpiDependentMetric )
      {
        v20 = GetDpiForSystem(v19, v18);
        if ( v10 == (unsigned int)GetDpiDependentMetric(0LL, v20) )
        {
          v21 = a5;
          BitBltSysBmp(a3, v31[0], v31[1]);
          v22 = v31[0];
          v23 = v31[3] - v12;
LABEL_13:
          BitBltSysBmp(a3, v22, v23);
LABEL_14:
          v24 = GreSelectBrush(a3, v29);
          DrawThumb2((__int64)a1, a2, a3, ColorObjects, a4, v21);
          GreSelectBrush(a3, v24);
          GreSetBkColor(a3);
          GreSetTextColor(a3);
          return;
        }
      }
      v26 = *(__m128i *)v31;
      v21 = a5;
      v31[3] = v12 + v31[1];
      DrawFrameControl(a3, (struct tagRECT *)v31, 3u, (a5 & 1) << 8);
      v31[3] = _mm_cvtsi128_si32(_mm_srli_si128(v26, 12));
      v31[1] = v31[3] - v12;
      v27 = ((a5 & 2) << 7) | 1;
    }
    else
    {
      if ( v12 == DpiDependentMetric )
      {
        v25 = GetDpiForSystem(v19, v18);
        if ( v10 == (unsigned int)GetDpiDependentMetric(1LL, v25) )
        {
          v21 = a5;
          BitBltSysBmp(a3, v31[0], v31[1]);
          v23 = v31[1];
          v22 = v31[2] - v12;
          goto LABEL_13;
        }
      }
      v28 = *(__m128i *)v31;
      v21 = a5;
      v31[2] = v12 + v31[0];
      DrawFrameControl(a3, (struct tagRECT *)v31, 3u, ((a5 & 1) << 8) | 2);
      v31[2] = _mm_cvtsi128_si32(_mm_srli_si128(v28, 8));
      v31[0] = v31[2] - v12;
      v27 = ((a5 & 2) << 7) | 3;
    }
    DrawFrameControl(a3, (struct tagRECT *)v31, 3u, v27);
    goto LABEL_14;
  }
}
