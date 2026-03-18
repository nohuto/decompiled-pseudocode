/*
 * XREFs of MNDrawEdge @ 0x1C0215A64
 * Callers:
 *     xxxMNDrawFullNC @ 0x1C013E3E8 (xxxMNDrawFullNC.c)
 *     xxxMenuWindowProc @ 0x1C0207D70 (xxxMenuWindowProc.c)
 * Callees:
 *     ?DrawOutline@@YAXPEAUHDC__@@HHHHHPEAUHBRUSH__@@@Z @ 0x1C0214EE4 (-DrawOutline@@YAXPEAUHDC__@@HHHHHPEAUHBRUSH__@@@Z.c)
 */

void __fastcall MNDrawEdge(__int64 a1, HDC a2, _DWORD *a3, int a4)
{
  int v7; // esi
  int v9; // ebp
  HBRUSH v10; // rcx

  v7 = a3[2] - *a3;
  v9 = a3[3] - a3[1];
  DrawOutline(a2, 0, 0, v7, v9, 1, *(HBRUSH *)(gpsi + 5216LL));
  v10 = *(HBRUSH *)(a1 + 128);
  if ( !v10 )
    v10 = *(HBRUSH *)(gpsi + 5120LL);
  DrawOutline(a2, 1, 1, v7 - 2, v9 - 2, 2, v10);
  if ( a4 == 0x2000 )
  {
    *a3 += 3;
    a3[2] -= 3;
    a3[1] += 3;
    a3[3] -= 3;
  }
}
