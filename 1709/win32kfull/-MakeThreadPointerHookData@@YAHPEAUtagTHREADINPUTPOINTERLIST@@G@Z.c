/*
 * XREFs of ?MakeThreadPointerHookData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C01CBB28
 * Callers:
 *     xxxPointerCallHook @ 0x1C000CA90 (xxxPointerCallHook.c)
 * Callees:
 *     ?FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x1C000D004 (-FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     INPUTDEST_FROM_PWND @ 0x1C01350C4 (INPUTDEST_FROM_PWND.c)
 *     ?AddThreadPointerHookData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIPEAUHWND__@@@Z @ 0x1C01CACA4 (-AddThreadPointerHookData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIPEAUHWND__@@@Z.c)
 */

struct _LIST_ENTRY *__fastcall MakeThreadPointerHookData(struct _LIST_ENTRY *a1, unsigned __int16 a2)
{
  struct _LIST_ENTRY *result; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  struct _LIST_ENTRY *v8; // rbx
  __int64 v9; // rax
  _OWORD *v10; // rax
  __int64 Flink_high; // r9
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm0
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  struct _LIST_ENTRY *Blink; // rax
  int v23; // [rsp+28h] [rbp-1A0h]
  _OWORD v24[12]; // [rsp+40h] [rbp-188h] BYREF
  _DWORD v25[48]; // [rsp+100h] [rbp-C8h] BYREF

  result = FindThreadPointerData(a1, a2);
  v8 = result;
  if ( result )
  {
    if ( (gdwMitConfig & 4) != 0 )
    {
      LOBYTE(v5) = 1;
      v9 = HMValidateHandleNoSecure((unsigned __int64)result[2].Blink, v5, v6, v7);
      v10 = INPUTDEST_FROM_PWND(v25, v9);
      Flink_high = HIDWORD(v8[1].Flink);
      v12 = v10[1];
      v24[0] = *v10;
      v13 = v10[2];
      v24[1] = v12;
      v14 = v10[3];
      v24[2] = v13;
      v15 = v10[4];
      v24[3] = v14;
      v16 = v10[5];
      v24[4] = v15;
      v17 = v10[6];
      v24[5] = v16;
      v24[6] = v17;
      v18 = v10[7];
      v10 += 8;
      v24[7] = v18;
      v19 = v10[1];
      v24[8] = *v10;
      v20 = v10[2];
      v24[9] = v19;
      v21 = v10[3];
      LODWORD(v10) = v8[2].Flink;
      v24[10] = v20;
      v23 = (int)v10;
      Blink = v8[1].Blink;
      v24[11] = v21;
      return (struct _LIST_ENTRY *)CTouchProcessor::AddThreadPointerHookData(
                                     gpTouchProcessor,
                                     a1,
                                     a2,
                                     Flink_high,
                                     Blink,
                                     v23,
                                     v24);
    }
    else
    {
      return (struct _LIST_ENTRY *)AddThreadPointerHookData(
                                     (struct tagTHREADINPUTPOINTERLIST *)a1,
                                     a2,
                                     HIDWORD(result[1].Flink),
                                     (__int64)result[1].Blink,
                                     (unsigned int)result[2].Flink,
                                     (HWND)result[2].Blink);
    }
  }
  return result;
}
