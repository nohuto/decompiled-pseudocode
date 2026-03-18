/*
 * XREFs of fsc_BeginElement @ 0x1C02C7238
 * Callers:
 *     AddHorizOff @ 0x1C02C7B14 (AddHorizOff.c)
 *     AddHorizOn @ 0x1C02C7B74 (AddHorizOn.c)
 *     AddVertOff @ 0x1C02C7BD4 (AddVertOff.c)
 *     AddVertOn @ 0x1C02C7C34 (AddVertOn.c)
 *     fsc_CalcLine @ 0x1C02C7FE0 (fsc_CalcLine.c)
 *     fsc_CalcSpline @ 0x1C02C84A8 (fsc_CalcSpline.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall fsc_BeginElement(char a1, int a2, __int16 a3, int a4, __int64 a5, int *a6, _QWORD *a7, _QWORD *a8)
{
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // r8d
  int *v14; // r9
  int v15; // ecx
  __int64 v16; // rdx
  bool v17; // cc
  int v18; // ecx

  *a7 = qword_1C03342F8;
  *a8 = qword_1C0334300;
  if ( (unsigned int)(a2 - 1) <= 1 )
  {
    qword_1C03342A0 = qword_1C0334278;
    qword_1C03342A8 = qword_1C0334288;
    v10 = qword_1C0334280;
  }
  else
  {
    qword_1C03342A0 = qword_1C0334280;
    qword_1C03342A8 = qword_1C0334290;
    v10 = qword_1C0334298;
  }
  qword_1C03342B0 = v10;
  if ( (a1 & 2) != 0 )
    return 0LL;
  if ( (unsigned int)(a2 - 2) <= 1 )
  {
    qword_1C03342E0 = qword_1C03342B8;
    qword_1C03342E8 = qword_1C03342C8;
    v11 = qword_1C03342C0;
  }
  else
  {
    qword_1C03342E0 = qword_1C03342C0;
    qword_1C03342E8 = qword_1C03342D0;
    v11 = qword_1C03342D8;
  }
  qword_1C03342F0 = v11;
  if ( (a1 & 4) == 0 )
    return 0LL;
  v12 = dword_1C033434C;
  if ( dword_1C033434C - 1 > 0x3FFF )
    return 4869LL;
  word_1C0334350 = a3 | (4 * (dword_1C033434C - 1));
  if ( a4 <= 0 )
    return 0LL;
  v14 = a6;
  while ( 1 )
  {
    v15 = *(int *)((char *)v14 + a5 - (_QWORD)a6);
    --a4;
    v16 = v12++;
    v17 = v12 <= dword_1C0334348;
    dword_1C033434C = v12;
    *(_DWORD *)(qword_1C0334338 + 4 * v16) = v15;
    v18 = *v14++;
    *(_DWORD *)(qword_1C0334340 + 4 * v16) = v18;
    if ( !v17 )
      break;
    if ( a4 <= 0 )
      return 0LL;
  }
  return 6656LL;
}
