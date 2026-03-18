/*
 * XREFs of fsc_BeginElement @ 0x1C02CD440
 * Callers:
 *     AddHorizOff @ 0x1C02CDD40 (AddHorizOff.c)
 *     AddHorizOn @ 0x1C02CDDA0 (AddHorizOn.c)
 *     AddVertOff @ 0x1C02CDE00 (AddVertOff.c)
 *     AddVertOn @ 0x1C02CDE60 (AddVertOn.c)
 *     fsc_CalcLine @ 0x1C02CE210 (fsc_CalcLine.c)
 *     fsc_CalcSpline @ 0x1C02CE6F4 (fsc_CalcSpline.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall fsc_BeginElement(char a1, int a2, __int16 a3, int a4, __int64 a5, int *a6, _QWORD *a7, _QWORD *a8)
{
  int v8; // r11d
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // edx
  int *v13; // r8
  int v14; // r10d
  __int64 v15; // rbx
  __int64 v16; // rdi
  int v17; // eax
  __int64 v18; // rcx
  int v19; // eax

  v8 = a4;
  *a7 = qword_1C0338BD8;
  *a8 = qword_1C0338BE0;
  if ( (unsigned int)(a2 - 1) <= 1 )
  {
    qword_1C0338B80 = qword_1C0338B58;
    qword_1C0338B88 = qword_1C0338B68;
    v9 = qword_1C0338B60;
  }
  else
  {
    qword_1C0338B80 = qword_1C0338B60;
    qword_1C0338B88 = qword_1C0338B70;
    v9 = qword_1C0338B78;
  }
  qword_1C0338B90 = v9;
  if ( (a1 & 2) != 0 )
    return 0LL;
  if ( (unsigned int)(a2 - 2) <= 1 )
  {
    qword_1C0338BC0 = qword_1C0338B98;
    qword_1C0338BC8 = qword_1C0338BA8;
    v10 = qword_1C0338BA0;
  }
  else
  {
    qword_1C0338BC0 = qword_1C0338BA0;
    qword_1C0338BC8 = qword_1C0338BB0;
    v10 = qword_1C0338BB8;
  }
  qword_1C0338BD0 = v10;
  if ( (a1 & 4) == 0 )
    return 0LL;
  v11 = dword_1C0338C2C;
  if ( dword_1C0338C2C - 1 > 0x3FFF )
    return 4869LL;
  word_1C0338C30 = a3 | (4 * (dword_1C0338C2C - 1));
  if ( a4 <= 0 )
    return 0LL;
  v13 = a6;
  v14 = dword_1C0338C28;
  v15 = qword_1C0338C20;
  v16 = qword_1C0338C18;
  while ( 1 )
  {
    v17 = *(int *)((char *)v13 + a5 - (_QWORD)a6);
    --v8;
    v18 = v11++;
    dword_1C0338C2C = v11;
    *(_DWORD *)(v16 + 4 * v18) = v17;
    v19 = *v13++;
    *(_DWORD *)(v15 + 4 * v18) = v19;
    if ( v11 > v14 )
      break;
    if ( v8 <= 0 )
      return 0LL;
  }
  return 6656LL;
}
