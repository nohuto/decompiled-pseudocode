/*
 * XREFs of ?GetInputDestFromForegroundCapture@QHelper@@YA?AUtagINPUTDEST@@XZ @ 0x1C008C9E0
 * Callers:
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x1C00463B4 (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 * Callees:
 *     INPUTDEST_FROM_PWND @ 0x1C004C08C (INPUTDEST_FROM_PWND.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

_OWORD *__fastcall QHelper::GetInputDestFromForegroundCapture(_OWORD *a1)
{
  __int64 v2; // rdx
  _OWORD *v4; // rax
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm0
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  _DWORD v15[50]; // [rsp+20h] [rbp-C8h] BYREF

  memset(a1, 0, 0xC0uLL);
  v2 = gpqForeground;
  if ( gpqForeground )
    v2 = *(_QWORD *)(gpqForeground + 72);
  if ( v2 )
  {
    v4 = INPUTDEST_FROM_PWND(v15, v2);
    v5 = v4[1];
    *a1 = *v4;
    v6 = v4[2];
    a1[1] = v5;
    v7 = v4[3];
    a1[2] = v6;
    v8 = v4[4];
    a1[3] = v7;
    v9 = v4[5];
    a1[4] = v8;
    v10 = v4[6];
    a1[5] = v9;
    a1[6] = v10;
    v11 = v4[7];
    v4 += 8;
    a1[7] = v11;
    v12 = v4[1];
    a1[8] = *v4;
    v13 = v4[2];
    a1[9] = v12;
    v14 = v4[3];
    a1[10] = v13;
    a1[11] = v14;
  }
  return a1;
}
