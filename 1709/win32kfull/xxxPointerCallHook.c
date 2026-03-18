/*
 * XREFs of xxxPointerCallHook @ 0x1C000CA90
 * Callers:
 *     xxxReceiveMessage @ 0x1C00A4670 (xxxReceiveMessage.c)
 *     xxxCallHook @ 0x1C00A8930 (xxxCallHook.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00A8A60 (xxxSendTransformableMessageTimeout.c)
 * Callees:
 *     IsMiPPointerMessage @ 0x1C000CB10 (IsMiPPointerMessage.c)
 *     PhkFirstValid @ 0x1C0056078 (PhkFirstValid.c)
 *     xxxCallHook2 @ 0x1C00A9660 (xxxCallHook2.c)
 *     PrepareSentPointerMessageForClient @ 0x1C01BF194 (PrepareSentPointerMessageForClient.c)
 *     ?GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01CB58C (-GetThreadPointerData@@YA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z.c)
 *     ?IsPointerMsgRedirected@@YAH_KPEAH@Z @ 0x1C01CB7B8 (-IsPointerMsgRedirected@@YAH_KPEAH@Z.c)
 *     ?MakeThreadPointerHookData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C01CBB28 (-MakeThreadPointerHookData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@G@Z.c)
 *     ?RemoveThreadPointerHookData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@@Z @ 0x1C01CC0A8 (-RemoveThreadPointerHookData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@@Z.c)
 */

__int64 __fastcall xxxPointerCallHook(int a1, int a2, __int64 a3, unsigned int a4, unsigned int a5)
{
  _OWORD *v6; // rbx
  unsigned __int16 *v9; // rdi
  unsigned __int16 *v10; // rsi
  unsigned __int64 ThreadPointerData; // rax
  int ThreadPointerHookData; // eax
  unsigned __int16 *v14; // rcx
  unsigned __int16 *v15; // r8
  unsigned __int16 *v16; // rdx
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  unsigned int v19; // edi
  int Valid; // eax
  HWND *v21; // [rsp+20h] [rbp-68h]
  _OWORD v22[3]; // [rsp+30h] [rbp-58h] BYREF
  int v23; // [rsp+A8h] [rbp+20h] BYREF

  v23 = 0;
  v6 = (_OWORD *)a3;
  switch ( a4 )
  {
    case 3u:
      v9 = (unsigned __int16 *)(a3 + 16);
      v10 = (unsigned __int16 *)(a3 + 8);
      if ( (unsigned int)IsMiPPointerMessage(*(unsigned int *)(a3 + 8), *(_QWORD *)(a3 + 16)) )
        return a5;
      ThreadPointerData = GetThreadPointerData(
                            (struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 1056LL),
                            *v9,
                            0LL,
                            0LL,
                            v21);
      break;
    case 4u:
      v10 = (unsigned __int16 *)(a3 + 8);
      v9 = (unsigned __int16 *)(a3 + 16);
      if ( (unsigned int)IsMiPPointerMessage(*(unsigned int *)(a3 + 16), *(_QWORD *)(a3 + 8)) )
        return a5;
      ThreadPointerData = *(_QWORD *)v6;
      break;
    case 0xCu:
      v9 = (unsigned __int16 *)(a3 + 16);
      if ( (unsigned int)IsMiPPointerMessage(*(unsigned int *)(a3 + 24), *(_QWORD *)(a3 + 16)) )
        return a5;
      v10 = (unsigned __int16 *)v6 + 4;
      ThreadPointerData = *((_QWORD *)v6 + 1);
      break;
    default:
      return a5;
  }
  if ( !ThreadPointerData || (unsigned int)IsPointerMsgRedirected(ThreadPointerData, &v23) && !v23 )
    return a5;
  switch ( a4 )
  {
    case 3u:
      ThreadPointerHookData = MakeThreadPointerHookData((struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 1056LL), *v9);
      if ( ThreadPointerHookData )
      {
        v17 = v6[1];
        v22[0] = *v6;
        v18 = v6[2];
        v6 = v22;
        v22[1] = v17;
        v22[2] = v18;
      }
      goto LABEL_23;
    case 4u:
      v15 = (unsigned __int16 *)v6;
      v16 = v10;
      v14 = v9;
      goto LABEL_20;
    case 0xCu:
      v14 = (unsigned __int16 *)v6 + 12;
      v15 = v10;
      v16 = v9;
LABEL_20:
      ThreadPointerHookData = PrepareSentPointerMessageForClient(v14, v16, v15, 1LL);
      goto LABEL_23;
  }
  ThreadPointerHookData = 0;
LABEL_23:
  v19 = a5;
  if ( ThreadPointerHookData )
  {
    Valid = PhkFirstValid(gptiCurrent, a4);
    v19 = xxxCallHook2(Valid, a1, a2, (_DWORD)v6, 0LL);
    RemoveThreadPointerHookData((struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 1056LL));
  }
  return v19;
}
