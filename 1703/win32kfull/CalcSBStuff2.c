/*
 * XREFs of CalcSBStuff2 @ 0x1C00D7834
 * Callers:
 *     xxxGetScrollBarInfo @ 0x1C00D74A4 (xxxGetScrollBarInfo.c)
 *     CalcSBStuff @ 0x1C00D7700 (CalcSBStuff.c)
 *     SBCtlSetup @ 0x1C020EED0 (SBCtlSetup.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

__int64 __fastcall CalcSBStuff2(int *a1, int *a2, int *a3, int a4)
{
  int v6; // eax
  int v7; // r9d
  int v8; // r14d
  int v9; // ecx
  int v10; // ebp
  int v11; // eax
  int v12; // edi
  INT v13; // edi
  int v14; // r9d
  INT v15; // edx
  INT v16; // ecx
  int v17; // ecx
  int v18; // edx
  INT v19; // edx
  INT v20; // edi
  int v21; // eax
  __int64 result; // rax

  if ( a4 )
  {
    a1[4] = a2[1];
    a1[5] = a2[3];
    a1[6] = *a2;
    a1[7] = a2[2];
    if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
      v6 = *(_DWORD *)(gpsi + 1960LL);
    else
      v6 = *(_DWORD *)(gpsi + 2348LL);
  }
  else
  {
    a1[4] = *a2;
    a1[5] = a2[2];
    a1[6] = a2[1];
    a1[7] = a2[3];
    if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
      v6 = *(_DWORD *)(gpsi + 1964LL);
    else
      v6 = *(_DWORD *)(gpsi + 2352LL);
  }
  v7 = a1[5];
  v8 = 1;
  v9 = a1[4];
  a1[8] = v6;
  v10 = a1[8];
  a1[3] = a3[3];
  a1[2] = a3[2];
  v11 = *a3;
  *a1 = *a3;
  v12 = a3[1];
  a1[1] = v12;
  v13 = v12 - v11 + 1;
  if ( (v7 - v9) / 2 < v10 )
    v10 = (v7 - v9) / 2;
  v14 = v7 - v10;
  a1[10] = v14;
  a1[9] = v9 + v10;
  v15 = a3[2];
  if ( v15 && v13 )
  {
    v16 = EngMulDiv(v14 - (v9 + v10), v15, v13);
    if ( a1[8] / 2 > v16 )
      v16 = a1[8] / 2;
    a1[8] = v16;
  }
  v17 = v10 + a1[4];
  v18 = a1[5] - a1[8] - v17;
  a1[15] = v17;
  v19 = v18 - v10;
  a1[14] = v19;
  if ( a3[2] )
    v8 = a3[2];
  v20 = v13 - v8;
  if ( v20 )
    v21 = a1[15] + EngMulDiv(a3[3] - *a3, v19, v20);
  else
    v21 = v17 - 1;
  a1[13] = v21;
  result = (unsigned int)(a1[8] + v21);
  a1[12] = result;
  return result;
}
