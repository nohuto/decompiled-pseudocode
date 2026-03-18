/*
 * XREFs of PrepareSentPointerMessageForClient @ 0x1C01BB47C
 * Callers:
 *     xxxPointerCallHook @ 0x1C00071B4 (xxxPointerCallHook.c)
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1C00535C0 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     INPUTDEST_FROM_PWND @ 0x1C0133004 (INPUTDEST_FROM_PWND.c)
 *     ?AddThreadPointerData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIPEAUHWND__@@H@Z @ 0x1C01C51E0 (-AddThreadPointerData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIPEAUHWND__@@H@Z.c)
 *     ?AddThreadPointerHookData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIPEAUHWND__@@@Z @ 0x1C01C5310 (-AddThreadPointerHookData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIPEAUHWND__@@@Z.c)
 *     ?MakePointerMessage@@YAH_KIPEAXPEA_KPEA_JPEAGPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01C6BC4 (-MakePointerMessage@@YAH_KIPEAXPEA_KPEA_JPEAGPEAKPEAHPEAPEAUHWND__@@@Z.c)
 */

__int64 __fastcall PrepareSentPointerMessageForClient(unsigned int *a1, void **a2, unsigned __int64 *a3, int a4)
{
  unsigned __int64 v4; // rdi
  unsigned int v5; // ebx
  __int64 result; // rax
  HWND v11; // rsi
  __int64 v12; // rax
  __int128 *v13; // rax
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm0
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  int v24; // eax
  unsigned __int64 v25; // rcx
  HWND v26; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v27; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v29; // [rsp+70h] [rbp-90h] BYREF
  __int128 v30; // [rsp+80h] [rbp-80h]
  __int128 v31; // [rsp+90h] [rbp-70h]
  __int128 v32; // [rsp+A0h] [rbp-60h]
  __int128 v33; // [rsp+B0h] [rbp-50h]
  __int128 v34; // [rsp+C0h] [rbp-40h]
  __int128 v35; // [rsp+D0h] [rbp-30h]
  __int128 v36; // [rsp+E0h] [rbp-20h]
  __int128 v37; // [rsp+F0h] [rbp-10h]
  __int128 v38; // [rsp+100h] [rbp+0h]
  __int128 v39; // [rsp+110h] [rbp+10h]
  __int128 v40; // [rsp+120h] [rbp+20h]
  __int128 v41; // [rsp+130h] [rbp+30h]
  __int128 v42; // [rsp+140h] [rbp+40h]
  __int128 v43; // [rsp+150h] [rbp+50h]
  __int128 v44; // [rsp+160h] [rbp+60h]
  __int128 v45; // [rsp+170h] [rbp+70h]
  __int128 v46; // [rsp+180h] [rbp+80h]
  __int128 v47; // [rsp+190h] [rbp+90h]
  __int128 v48; // [rsp+1A0h] [rbp+A0h]
  __int128 v49; // [rsp+1B0h] [rbp+B0h]
  __int128 v50; // [rsp+1C0h] [rbp+C0h]
  __int128 v51; // [rsp+1D0h] [rbp+D0h]
  __int128 v52; // [rsp+1E0h] [rbp+E0h]
  _DWORD v53[60]; // [rsp+1F0h] [rbp+F0h] BYREF
  unsigned __int16 v54; // [rsp+2F0h] [rbp+1F0h] BYREF
  unsigned int v55; // [rsp+2F8h] [rbp+1F8h] BYREF
  int v56; // [rsp+300h] [rbp+200h] BYREF

  v4 = *a3;
  v5 = *a1;
  if ( !MakePointerMessage(*a3, *a1, *a2, &v27, &v28, &v54, &v55, &v56, &v26) )
    return 0LL;
  v11 = v26;
  v12 = HMValidateHandleNoSecure((unsigned __int64)v26, 1);
  v13 = (__int128 *)INPUTDEST_FROM_PWND(v53, v12);
  v14 = v13[1];
  v41 = *v13;
  v15 = v13[2];
  v42 = v14;
  v16 = v13[3];
  v43 = v15;
  v17 = v13[4];
  v44 = v16;
  v18 = v13[5];
  v45 = v17;
  v19 = v13[6];
  v46 = v18;
  v47 = v19;
  v20 = v13[7];
  v13 += 8;
  v48 = v20;
  v21 = v13[1];
  v49 = *v13;
  v22 = v13[2];
  v50 = v21;
  v23 = v13[3];
  v51 = v22;
  v52 = v23;
  if ( a4 )
  {
    if ( (gdwMitConfig & 4) != 0 )
    {
      v29 = v41;
      v30 = v42;
      v31 = v43;
      v32 = v44;
      v33 = v45;
      v34 = v46;
      v35 = v47;
      v36 = v48;
      v37 = v49;
      v38 = v50;
      v39 = v51;
      v40 = v52;
      v24 = CTouchProcessor::AddThreadPointerHookData(gpTouchProcessor, gptiCurrent + 968LL, v54, v55, v4, v5, &v29);
    }
    else
    {
      v24 = AddThreadPointerHookData((struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 968LL), v54, v55, v4, v5, v11);
    }
  }
  else if ( (gdwMitConfig & 4) != 0 )
  {
    v29 = v41;
    v30 = v42;
    v31 = v43;
    v32 = v44;
    v33 = v45;
    v34 = v46;
    v35 = v47;
    v36 = v48;
    v37 = v49;
    v38 = v50;
    v39 = v51;
    v40 = v52;
    v24 = CTouchProcessor::AddThreadPointerData(gpTouchProcessor, gptiCurrent + 968LL, v54, v55, v4, v5, &v29, 0);
  }
  else
  {
    v24 = AddThreadPointerData((struct _LIST_ENTRY *)(gptiCurrent + 968LL), v54, v55, v4, v5, v11, 0);
  }
  if ( !v24 )
    return 0LL;
  v25 = v27;
  result = 1LL;
  *a1 = v5;
  *a2 = (void *)v25;
  *a3 = v28;
  return result;
}
