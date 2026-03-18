/*
 * XREFs of ?GetInputDestFromForegroundFocus@QHelper@@YA?AUtagINPUTDEST@@XZ @ 0x1C00A12D0
 * Callers:
 *     ?ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z @ 0x1C0131DC4 (-ProcessMouseWheel@CMouseProcessor@@AEAAXAEBVCWheelEvent@1@@Z.c)
 * Callees:
 *     INPUTDEST_FROM_PWND @ 0x1C004C08C (INPUTDEST_FROM_PWND.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

_OWORD *__fastcall QHelper::GetInputDestFromForegroundFocus(_OWORD *a1)
{
  __int64 v2; // rdx
  _OWORD *v3; // rax
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm0
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  _DWORD v15[50]; // [rsp+20h] [rbp-C8h] BYREF

  memset(a1, 0, 0xC0uLL);
  v2 = gpqForeground;
  if ( gpqForeground )
    v2 = *(_QWORD *)(gpqForeground + 80);
  if ( v2 )
  {
    v3 = INPUTDEST_FROM_PWND(v15, v2);
    v4 = v3[1];
    *a1 = *v3;
    v5 = v3[2];
    a1[1] = v4;
    v6 = v3[3];
    a1[2] = v5;
    v7 = v3[4];
    a1[3] = v6;
    v8 = v3[5];
    a1[4] = v7;
    v9 = v3[6];
    a1[5] = v8;
    a1[6] = v9;
    v10 = v3[7];
    v3 += 8;
    a1[7] = v10;
    v11 = v3[1];
    a1[8] = *v3;
    v12 = v3[2];
    a1[9] = v11;
    v13 = v3[3];
    a1[10] = v12;
    a1[11] = v13;
  }
  return a1;
}
