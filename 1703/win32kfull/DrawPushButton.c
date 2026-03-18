/*
 * XREFs of DrawPushButton @ 0x1C002898C
 * Callers:
 *     DrawFrameControl @ 0x1C002B024 (DrawFrameControl.c)
 *     DrawThumb2 @ 0x1C00D66F0 (DrawThumb2.c)
 * Callees:
 *     DrawEdge @ 0x1C0028C10 (DrawEdge.c)
 *     FillRect @ 0x1C0029210 (FillRect.c)
 *     GreSetTextColor @ 0x1C0044A54 (GreSetTextColor.c)
 *     GreSetBkColor @ 0x1C0044AD0 (GreSetBkColor.c)
 */

int __fastcall DrawPushButton(HDC a1, RECT *a2, __int16 a3, __int16 a4)
{
  int v8; // r14d
  HBRUSH v9; // rbx
  int result; // eax
  RECT v11; // [rsp+20h] [rbp-28h] BYREF

  v11 = *a2;
  DrawEdge(a1);
  v8 = 0;
  if ( (a3 & 0x400) != 0 )
  {
    if ( *(_WORD *)(gpsi + 8676LL) < 8u || *(_DWORD *)(gpsi + 5040LL) == 0xFFFFFF )
    {
      v9 = *(HBRUSH *)(gpsi + 5336LL);
      GreSetBkColor(a1);
      GreSetTextColor(a1);
      v8 = 1;
    }
    else
    {
      v9 = *(HBRUSH *)(gpsi + 5248LL);
    }
  }
  else
  {
    v9 = *(HBRUSH *)(gpsi + 5208LL);
  }
  result = FillRect(a1, &v11, v9);
  if ( v8 )
  {
    GreSetBkColor(a1);
    result = GreSetTextColor(a1);
  }
  if ( (a4 & 0x2000) != 0 )
    *a2 = v11;
  return result;
}
