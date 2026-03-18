/*
 * XREFs of ?MakeThreadPointerHookData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C01C6E90
 * Callers:
 *     xxxPointerCallHook @ 0x1C00071B4 (xxxPointerCallHook.c)
 * Callees:
 *     ?FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z @ 0x1C0007AAC (-FindThreadPointerData@@YAPEAUtagTHREADPOINTERDATA@@PEAU_LIST_ENTRY@@G@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     INPUTDEST_FROM_PWND @ 0x1C0133004 (INPUTDEST_FROM_PWND.c)
 *     ?AddThreadPointerHookData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIPEAUHWND__@@@Z @ 0x1C01C5310 (-AddThreadPointerHookData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIPEAUHWND__@@@Z.c)
 */

struct _LIST_ENTRY *__fastcall MakeThreadPointerHookData(struct _LIST_ENTRY *a1, unsigned __int16 a2)
{
  struct _LIST_ENTRY *result; // rax
  struct _LIST_ENTRY *v5; // rbx
  __int64 v6; // rax
  _OWORD *v7; // rax
  __int64 Flink_high; // r9
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm0
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  struct _LIST_ENTRY *Blink; // rax
  int v20; // [rsp+28h] [rbp-1A0h]
  _OWORD v21[12]; // [rsp+40h] [rbp-188h] BYREF
  _DWORD v22[48]; // [rsp+100h] [rbp-C8h] BYREF

  result = FindThreadPointerData(a1, a2);
  v5 = result;
  if ( result )
  {
    if ( (gdwMitConfig & 4) != 0 )
    {
      v6 = HMValidateHandleNoSecure((unsigned __int64)result[2].Blink, 1);
      v7 = INPUTDEST_FROM_PWND(v22, v6);
      Flink_high = HIDWORD(v5[1].Flink);
      v9 = v7[1];
      v21[0] = *v7;
      v10 = v7[2];
      v21[1] = v9;
      v11 = v7[3];
      v21[2] = v10;
      v12 = v7[4];
      v21[3] = v11;
      v13 = v7[5];
      v21[4] = v12;
      v14 = v7[6];
      v21[5] = v13;
      v21[6] = v14;
      v15 = v7[7];
      v7 += 8;
      v21[7] = v15;
      v16 = v7[1];
      v21[8] = *v7;
      v17 = v7[2];
      v21[9] = v16;
      v18 = v7[3];
      LODWORD(v7) = v5[2].Flink;
      v21[10] = v17;
      v20 = (int)v7;
      Blink = v5[1].Blink;
      v21[11] = v18;
      return (struct _LIST_ENTRY *)CTouchProcessor::AddThreadPointerHookData(
                                     gpTouchProcessor,
                                     a1,
                                     a2,
                                     Flink_high,
                                     Blink,
                                     v20,
                                     v21);
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
