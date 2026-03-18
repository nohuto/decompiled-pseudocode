/*
 * XREFs of PrepareSentPointerMessageForClient @ 0x1C01BF194
 * Callers:
 *     xxxPointerCallHook @ 0x1C000CA90 (xxxPointerCallHook.c)
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x1C00A9040 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     INPUTDEST_FROM_PWND @ 0x1C01350C4 (INPUTDEST_FROM_PWND.c)
 *     ?AddThreadPointerData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIPEAUHWND__@@H@Z @ 0x1C01CAB78 (-AddThreadPointerData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIPEAUHWND__@@H@Z.c)
 *     ?AddThreadPointerHookData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIPEAUHWND__@@@Z @ 0x1C01CACA4 (-AddThreadPointerHookData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIPEAUHWND__@@@Z.c)
 *     ?MakePointerMessage@@YAH_KIPEAXPEA_KPEA_JPEAGPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C01CB868 (-MakePointerMessage@@YAH_KIPEAXPEA_KPEA_JPEAGPEAKPEAHPEAPEAUHWND__@@@Z.c)
 */

__int64 __fastcall PrepareSentPointerMessageForClient(unsigned int *a1, void **a2, unsigned __int64 *a3, int a4)
{
  unsigned __int64 v4; // rdi
  unsigned int v5; // ebx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 result; // rax
  HWND v14; // rsi
  __int64 v15; // rax
  __int128 *v16; // rax
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm0
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  int v27; // eax
  unsigned __int64 v28; // rcx
  HWND v29; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v30; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v31; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v32; // [rsp+70h] [rbp-90h] BYREF
  __int128 v33; // [rsp+80h] [rbp-80h]
  __int128 v34; // [rsp+90h] [rbp-70h]
  __int128 v35; // [rsp+A0h] [rbp-60h]
  __int128 v36; // [rsp+B0h] [rbp-50h]
  __int128 v37; // [rsp+C0h] [rbp-40h]
  __int128 v38; // [rsp+D0h] [rbp-30h]
  __int128 v39; // [rsp+E0h] [rbp-20h]
  __int128 v40; // [rsp+F0h] [rbp-10h]
  __int128 v41; // [rsp+100h] [rbp+0h]
  __int128 v42; // [rsp+110h] [rbp+10h]
  __int128 v43; // [rsp+120h] [rbp+20h]
  __int128 v44; // [rsp+130h] [rbp+30h]
  __int128 v45; // [rsp+140h] [rbp+40h]
  __int128 v46; // [rsp+150h] [rbp+50h]
  __int128 v47; // [rsp+160h] [rbp+60h]
  __int128 v48; // [rsp+170h] [rbp+70h]
  __int128 v49; // [rsp+180h] [rbp+80h]
  __int128 v50; // [rsp+190h] [rbp+90h]
  __int128 v51; // [rsp+1A0h] [rbp+A0h]
  __int128 v52; // [rsp+1B0h] [rbp+B0h]
  __int128 v53; // [rsp+1C0h] [rbp+C0h]
  __int128 v54; // [rsp+1D0h] [rbp+D0h]
  __int128 v55; // [rsp+1E0h] [rbp+E0h]
  _DWORD v56[60]; // [rsp+1F0h] [rbp+F0h] BYREF
  unsigned __int16 v57; // [rsp+2F0h] [rbp+1F0h] BYREF
  unsigned int v58; // [rsp+2F8h] [rbp+1F8h] BYREF
  int v59; // [rsp+300h] [rbp+200h] BYREF

  v4 = *a3;
  v5 = *a1;
  if ( !MakePointerMessage(*a3, *a1, *a2, &v30, &v31, &v57, &v58, &v59, &v29) )
    return 0LL;
  v14 = v29;
  LOBYTE(v10) = 1;
  v15 = HMValidateHandleNoSecure((unsigned __int64)v29, v10, v11, v12);
  v16 = (__int128 *)INPUTDEST_FROM_PWND(v56, v15);
  v17 = v16[1];
  v44 = *v16;
  v18 = v16[2];
  v45 = v17;
  v19 = v16[3];
  v46 = v18;
  v20 = v16[4];
  v47 = v19;
  v21 = v16[5];
  v48 = v20;
  v22 = v16[6];
  v49 = v21;
  v50 = v22;
  v23 = v16[7];
  v16 += 8;
  v51 = v23;
  v24 = v16[1];
  v52 = *v16;
  v25 = v16[2];
  v53 = v24;
  v26 = v16[3];
  v54 = v25;
  v55 = v26;
  if ( a4 )
  {
    if ( (gdwMitConfig & 4) != 0 )
    {
      v32 = v44;
      v33 = v45;
      v34 = v46;
      v35 = v47;
      v36 = v48;
      v37 = v49;
      v38 = v50;
      v39 = v51;
      v40 = v52;
      v41 = v53;
      v42 = v54;
      v43 = v55;
      v27 = CTouchProcessor::AddThreadPointerHookData(gpTouchProcessor, gptiCurrent + 1056LL, v57, v58, v4, v5, &v32);
    }
    else
    {
      v27 = AddThreadPointerHookData((struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 1056LL), v57, v58, v4, v5, v14);
    }
  }
  else if ( (gdwMitConfig & 4) != 0 )
  {
    v32 = v44;
    v33 = v45;
    v34 = v46;
    v35 = v47;
    v36 = v48;
    v37 = v49;
    v38 = v50;
    v39 = v51;
    v40 = v52;
    v41 = v53;
    v42 = v54;
    v43 = v55;
    v27 = CTouchProcessor::AddThreadPointerData(gpTouchProcessor, gptiCurrent + 1056LL, v57, v58, v4, v5, &v32, 0);
  }
  else
  {
    v27 = AddThreadPointerData((struct tagTHREADINPUTPOINTERLIST *)(gptiCurrent + 1056LL), v57, v58, v4, v5, v14, 0);
  }
  if ( !v27 )
    return 0LL;
  v28 = v30;
  result = 1LL;
  *a1 = v5;
  *a2 = (void *)v28;
  *a3 = v31;
  return result;
}
