/*
 * XREFs of ?DrawGroove@@YAXPEAUHDC__@@PEAUHBRUSH__@@PEAUtagRECT@@H@Z @ 0x1C00D681C
 * Callers:
 *     DrawThumb2 @ 0x1C00D66F0 (DrawThumb2.c)
 * Callees:
 *     DrawEdge @ 0x1C0028C10 (DrawEdge.c)
 *     FillRect @ 0x1C0029210 (FillRect.c)
 */

void __fastcall DrawGroove(HDC a1, HBRUSH a2, struct tagRECT *a3, int a4)
{
  HDC v5; // rdi
  const RECT *v6; // rdx
  RECT v7; // [rsp+20h] [rbp-18h] BYREF

  v5 = a1;
  if ( a2 == *(HBRUSH *)(gpsi + 5248LL) || a2 == *(HBRUSH *)(gpsi + 5336LL) )
  {
    v6 = a3;
  }
  else
  {
    v7 = *a3;
    DrawEdge(a1, &v7, 0xAu, a4 != 0 ? 24581 : 24586);
    v6 = &v7;
    a1 = v5;
  }
  FillRect(a1, v6, a2);
}
