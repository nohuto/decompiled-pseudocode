/*
 * XREFs of xxxPointerWindowHitTest @ 0x1C01D6B30
 * Callers:
 *     ?xxxDeterminePointerTargetWindow@@YAPEAUtagWND@@PEAUtagTHREADINFO@@PEBUtagPOINTERINFONODE@@PEAUtagQ@@HPEAHPEAUtagPOINT@@@Z @ 0x1C01CC4D4 (-xxxDeterminePointerTargetWindow@@YAPEAUtagWND@@PEAUtagTHREADINFO@@PEBUtagPOINTERINFONODE@@PEAUt.c)
 *     EditionPointerWindowHitTest @ 0x1C01D5C10 (EditionPointerWindowHitTest.c)
 * Callees:
 *     IsThreadDesktopComposed @ 0x1C0065D74 (IsThreadDesktopComposed.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00756A0 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?TTSqm@@YAXUtagPOINT@@PEBUtagTOUCHTARGETINGCONTACT@@@Z @ 0x1C01D3B80 (-TTSqm@@YAXUtagPOINT@@PEBUtagTOUCHTARGETINGCONTACT@@@Z.c)
 *     ?TopLevelTouchTarget@@YAPEAUtagWND@@PEAU1@PEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@2H_KPEAHPEAIPEAUtagINPUTDEST@@@Z @ 0x1C01D3CDC (-TopLevelTouchTarget@@YAPEAUtagWND@@PEAU1@PEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@2H_KPEAHPE.c)
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C01D57E4 (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 *     ?xxxWindowHitTestWithoutTargeting@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHKPEBUtagPOINTEREVENTINT@@PEAU4@@Z @ 0x1C01D5B50 (-xxxWindowHitTestWithoutTargeting@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@.c)
 *     TouchTargetingCreateContact @ 0x1C023C7AC (TouchTargetingCreateContact.c)
 */

__int64 __fastcall xxxPointerWindowHitTest(
        struct tagTHREADINFO *a1,
        struct tagWND *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        struct tagPOINT a6,
        int *a7,
        int a8,
        __int64 a9,
        __int64 a10,
        struct tagPOINT *a11)
{
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rsi
  __int64 v20; // rdx
  __int64 v21; // rdi
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r9
  __int64 v25; // r8
  struct tagRECT *v26; // rcx
  __int128 v27; // xmm0
  int v28; // eax
  __int64 v29; // r8
  __int64 v30; // rax
  _OWORD *v31; // rcx
  __int128 v32; // xmm0
  struct tagRECT *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  struct tagPOINT v46[2]; // [rsp+70h] [rbp-90h] BYREF
  struct tagRECT v47; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v48[4]; // [rsp+90h] [rbp-70h] BYREF
  struct tagPOINT v49; // [rsp+94h] [rbp-6Ch]
  __int128 v50; // [rsp+9Ch] [rbp-64h]
  __int128 v51; // [rsp+ACh] [rbp-54h]
  int v52; // [rsp+BCh] [rbp-44h]
  _QWORD v53[3]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v54[3]; // [rsp+D8h] [rbp-28h] BYREF
  struct tagRECT v55; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v56; // [rsp+100h] [rbp+0h] BYREF

  EtwTraceTouchTargetingWindowHitTestStart();
  if ( (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))TouchTargetingEnabledForInput)(a6, a9 + 8) )
  {
    v18 = Win32AllocPool(192LL, 1920103253LL);
    if ( v18 )
    {
      v21 = Win32AllocPool(184LL, 1920103253LL);
      if ( v21 )
      {
        PushW32ThreadLock(v18, v54, (__int64)Win32FreePool, v23);
        PushW32ThreadLock(v21, v53, (__int64)Win32FreePool, v24);
        if ( gSqmIsOptedIn )
          WinSqmAddToAverageDWORD(&SqmGlobalSessionGuid, 8633LL, 1000LL);
        *a11 = 0LL;
        *(_QWORD *)(v18 + 184) = 0LL;
        v55 = 0LL;
        v56 = 0LL;
        v46[0] = 0LL;
        if ( (unsigned int)_GetDeviceRects(a9 + 8, &v55, &v56) )
        {
          *(_OWORD *)&v46[0].x = v56;
          v47 = v55;
          _SetHimetricToPixelRatio(&v47, v46, v18);
          v26 = &v55;
        }
        else
        {
          v26 = (struct tagRECT *)v46[0];
        }
        v27 = *(_OWORD *)(a9 + 112);
        v28 = *(_DWORD *)(a9 + 108);
        v49 = a6;
        v50 = v27;
        v51 = v27;
        if ( (v28 & 2) != 0 )
          v52 = *(_DWORD *)(a9 + 144);
        else
          v52 = 0;
        TouchTargetingCreateContact(v48, v26, v25, v18);
        *(_DWORD *)v21 = a3;
        *(_QWORD *)(v21 + 8) = a4;
        *(_QWORD *)(v21 + 16) = a5;
        *(_QWORD *)(v21 + 24) = a10;
        *(_DWORD *)(v21 + 32) = *a7;
        *(_DWORD *)(v21 + 36) = a8;
        *(_QWORD *)(v21 + 40) = v18;
        *(struct tagPOINT *)(v21 + 48) = *a11;
        *(_QWORD *)(v21 + 56) = 0LL;
        *(_DWORD *)(v21 + 64) = 0;
        *(_DWORD *)(v21 + 84) = IsThreadDesktopComposed((__int64)a1);
        *(_DWORD *)(v21 + 88) = v29;
        *(_QWORD *)(v21 + 96) = v29;
        *(_QWORD *)(v21 + 168) = v29;
        *(_QWORD *)(v21 + 176) = v29;
        v46[0] = a6;
        v30 = Win32AllocPool(192LL, 1920103253LL);
        *(_QWORD *)&v55.left = v30;
        if ( v30 )
        {
          v31 = *(_OWORD **)(v21 + 40);
          *(_OWORD *)v30 = *v31;
          *(_OWORD *)(v30 + 16) = v31[1];
          *(_OWORD *)(v30 + 32) = v31[2];
          *(_OWORD *)(v30 + 48) = v31[3];
          *(_OWORD *)(v30 + 64) = v31[4];
          *(_OWORD *)(v30 + 80) = v31[5];
          *(_OWORD *)(v30 + 96) = v31[6];
          v32 = v31[7];
          v31 += 8;
          *(_OWORD *)(v30 + 112) = v32;
          *(_OWORD *)(v30 + 128) = *v31;
          *(_OWORD *)(v30 + 144) = v31[1];
          *(_OWORD *)(v30 + 160) = v31[2];
          *(_OWORD *)(v30 + 176) = v31[3];
          v33 = TopLevelTouchTarget(
                  a2,
                  (struct tagTOUCHTARGETINGCONTACT *)v30,
                  v46,
                  a11,
                  *(_DWORD *)(v21 + 84),
                  *(_QWORD *)(a9 + 88),
                  0LL,
                  0LL,
                  0LL);
          v34 = *(_QWORD *)&v55.left;
          *(_QWORD *)(v21 + 168) = v33;
          Win32FreePool(v34, v35, v36);
        }
        v47 = (struct tagRECT)*((_OWORD *)a2 + 8);
        xxxWindowHitTestWithTargeting((__int64)a2, a6, v21, &v47, 0);
        if ( *(_DWORD *)(v21 + 180) )
        {
          v15 = xxxWindowHitTestWithoutTargeting(a1, a2);
        }
        else
        {
          *a7 = *(_DWORD *)(v21 + 32);
          *a11 = *(struct tagPOINT *)(v21 + 48);
          v15 = *(_QWORD *)(v21 + 56);
          TTSqm(*(struct tagPOINT *)(v21 + 48), (const struct tagTOUCHTARGETINGCONTACT *)v18);
        }
        PopAndFreeAlwaysW32ThreadLock((__int64)v53, v37, v38, v39);
        PopAndFreeAlwaysW32ThreadLock((__int64)v54, v40, v41, v42);
        goto LABEL_25;
      }
      Win32FreePool(v18, v20, v22);
    }
    return 0LL;
  }
  if ( gSqmIsOptedIn && *(_DWORD *)(a9 + 8) == 2 && (*(_DWORD *)(a9 + 20) & 0x10000) != 0 )
    WinSqmAddToAverageDWORD(&SqmGlobalSessionGuid, 8633LL, 0LL);
  v15 = xxxWindowHitTestWithoutTargeting(a1, a2);
LABEL_25:
  EtwTraceTouchTargetingWindowHitTestStop(v14, v13, v16, v17);
  return v15;
}
