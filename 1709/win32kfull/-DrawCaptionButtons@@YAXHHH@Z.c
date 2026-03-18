/*
 * XREFs of ?DrawCaptionButtons@@YAXHHH@Z @ 0x1C00829DC
 * Callers:
 *     ?CreateDPIBitmapStrip@@YAHH@Z @ 0x1C007DEFC (-CreateDPIBitmapStrip@@YAHH@Z.c)
 * Callees:
 *     GetDpiDependentMetric @ 0x1C00774BC (GetDpiDependentMetric.c)
 *     BitBltSysBmp @ 0x1C0082AFC (BitBltSysBmp.c)
 */

void __fastcall DrawCaptionButtons(int a1, int a2, int a3)
{
  int v3; // esi
  unsigned int v6; // edi
  unsigned int v7; // edx
  int v8; // ebx
  unsigned int v9; // edx
  int v10; // ebx
  int DpiDependentMetric; // eax

  v3 = a2 + 2;
  BitBltSysBmp(*(HDC *)(gpDispInfo + 56LL), a1 + 2, a2 + 2);
  v6 = 96;
  if ( a3 )
    v7 = 96;
  else
    v7 = *(unsigned __int16 *)(gpsi + 9974LL);
  v8 = GetDpiDependentMetric(12LL, v7) + a1;
  BitBltSysBmp(*(HDC *)(gpDispInfo + 56LL), v8, v3);
  if ( a3 )
    v9 = 96;
  else
    v9 = *(unsigned __int16 *)(gpsi + 9974LL);
  v10 = GetDpiDependentMetric(12LL, v9) + v8;
  BitBltSysBmp(*(HDC *)(gpDispInfo + 56LL), v10, v3);
  if ( !a3 )
    v6 = *(unsigned __int16 *)(gpsi + 9974LL);
  DpiDependentMetric = GetDpiDependentMetric(12LL, v6);
  BitBltSysBmp(*(HDC *)(gpDispInfo + 56LL), DpiDependentMetric + v10, v3);
}
