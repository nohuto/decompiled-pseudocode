/*
 * XREFs of AlignRects @ 0x1C0092384
 * Callers:
 *     ?DxgkEngAdjustMonitorPosition@@YAHPEAUtagRECT@@II@Z @ 0x1C0092370 (-DxgkEngAdjustMonitorPosition@@YAHPEAUtagRECT@@II@Z.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00F63C4 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 * Callees:
 *     ?RemoveGaps@@YAXPEAUtagRECT@@I@Z @ 0x1C013DA6C (-RemoveGaps@@YAXPEAUtagRECT@@I@Z.c)
 *     ?RemoveOverlaps@@YAXPEAUtagRECT@@I@Z @ 0x1C013DD7C (-RemoveOverlaps@@YAXPEAUtagRECT@@I@Z.c)
 */

__int64 __fastcall AlignRects(struct tagRECT *a1, unsigned int a2, unsigned int a3)
{
  struct tagRECT *v4; // rsi
  __int64 v5; // rbp
  int v7; // r8d
  int v8; // r9d
  LONG *p_bottom; // rdx

  v4 = &a1[a2];
  v5 = a3;
  if ( a2 > 0x10 )
    return 0LL;
  if ( a2 > 1 )
  {
    RemoveOverlaps(a1, a2);
    RemoveGaps(a1, a2);
  }
  v7 = -a1[v5].left;
  v8 = -a1[v5].top;
  if ( a1 < v4 )
  {
    p_bottom = &a1->bottom;
    do
    {
      *(p_bottom - 3) += v7;
      *(p_bottom - 1) += v7;
      *p_bottom += v8;
      *(p_bottom - 2) += v8;
      p_bottom += 4;
    }
    while ( p_bottom - 3 < (LONG *)v4 );
  }
  return 1LL;
}
