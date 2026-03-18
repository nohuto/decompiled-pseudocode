/*
 * XREFs of ?xxxClassicChildTreeSpeedHitTestWithDComp@@YAPEAUtagWND@@PEAU1@KW4DIT_HITTESTATTRIBUTES@@_KUtagPOINT@@3PEAHPEAIPEAUtagINPUTDEST@@@Z @ 0x1C01D4498
 * Callers:
 *     ?xxxClassicChildTreeSpeedHitTestWithDComp@@YAPEAUtagWND@@PEAU1@KW4DIT_HITTESTATTRIBUTES@@_KUtagPOINT@@3PEAHPEAIPEAUtagINPUTDEST@@@Z @ 0x1C01D4498 (-xxxClassicChildTreeSpeedHitTestWithDComp@@YAPEAUtagWND@@PEAU1@KW4DIT_HITTESTATTRIBUTES@@_KUtagP.c)
 *     TouchTargetChildTree @ 0x1C01D5E48 (TouchTargetChildTree.c)
 * Callees:
 *     EditionTryDwmHitTest @ 0x1C005DF50 (EditionTryDwmHitTest.c)
 *     PtInRect @ 0x1C005E678 (PtInRect.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     ?ClassicIsWindowHit@@YAHPEAUtagWND@@UtagPOINT@@@Z @ 0x1C0113DE8 (-ClassicIsWindowHit@@YAHPEAUtagWND@@UtagPOINT@@@Z.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?CallDCompHitTestHelper@@YAPEAUtagWND@@KAEBW4DIT_HITTESTATTRIBUTES@@_KAEBUtagPOINT@@AEAPEAU1@AEAPEAUHWND__@@PEAUtagINPUTDEST@@PEAHPEAI6@Z @ 0x1C01D3488 (-CallDCompHitTestHelper@@YAPEAUtagWND@@KAEBW4DIT_HITTESTATTRIBUTES@@_KAEBUtagPOINT@@AEAPEAU1@AEA.c)
 *     ?xxxClassicChildTreeSpeedHitTestWithDComp@@YAPEAUtagWND@@PEAU1@KW4DIT_HITTESTATTRIBUTES@@_KUtagPOINT@@3PEAHPEAIPEAUtagINPUTDEST@@@Z @ 0x1C01D4498 (-xxxClassicChildTreeSpeedHitTestWithDComp@@YAPEAUtagWND@@PEAU1@KW4DIT_HITTESTATTRIBUTES@@_KUtagP.c)
 */

struct tagWND *__fastcall xxxClassicChildTreeSpeedHitTestWithDComp(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int64 a4,
        struct tagPOINT a5,
        struct tagPOINT a6,
        int *a7,
        unsigned int *a8,
        struct tagINPUTDEST *a9)
{
  __int64 v9; // rdi
  unsigned __int64 v11; // rbx
  struct tagWND *result; // rax
  BOOL v13; // eax
  struct tagINPUTDEST *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  _OWORD *v24; // rsi
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  unsigned int v28[2]; // [rsp+58h] [rbp-B0h] BYREF
  struct tagWND *v29; // [rsp+60h] [rbp-A8h] BYREF
  HWND v30; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v31; // [rsp+70h] [rbp-98h]
  _OWORD v32[12]; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v33; // [rsp+168h] [rbp+60h] BYREF

  v33 = a3;
  v9 = *(_QWORD *)(a1 + 112);
  v31 = a4;
  v28[1] = a2;
  v29 = (struct tagWND *)v9;
  if ( !v9 )
    return (struct tagWND *)a1;
  v11 = (unsigned __int64)a5;
  while ( 1 )
  {
    v30 = *(HWND *)v9;
    if ( ClassicIsWindowHit((struct tagWND *)v9, (struct tagPOINT)v11) )
      break;
    v9 = *(_QWORD *)(v9 + 88);
    v29 = (struct tagWND *)v9;
    if ( !v9 )
      return (struct tagWND *)a1;
  }
  v13 = EditionTryDwmHitTest((struct tagWND *)v9);
  v14 = a9;
  if ( v13 )
  {
    v28[0] = 0;
    result = CallDCompHitTestHelper(
               v28[1],
               (const enum DIT_HITTESTATTRIBUTES *)&v33,
               v31,
               &a6,
               &v29,
               &v30,
               a9,
               a7,
               a8,
               (int *)v28);
    if ( v28[0] )
      return result;
    v9 = (__int64)v29;
  }
  if ( *(_QWORD *)(v9 + 112) )
  {
    if ( PtInRect((_DWORD *)(v9 + 144), v11) )
    {
      v9 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))xxxClassicChildTreeSpeedHitTestWithDComp)(
             v9,
             v28[1],
             v33,
             v31,
             v11,
             a6,
             a7,
             a8,
             v14);
      if ( !v9 )
      {
        LOBYTE(v15) = 1;
        v9 = HMValidateHandleNoSecure((unsigned __int64)v30, v15, v16, v17);
      }
    }
  }
  if ( v9 && *(char *)(v9 + 59) < 0 )
  {
    if ( v14 )
    {
      memset(v32, 0, sizeof(v32));
      v18 = v32[1];
      *(_OWORD *)v14 = v32[0];
      v19 = v32[2];
      *((_OWORD *)v14 + 1) = v18;
      v20 = v32[3];
      *((_OWORD *)v14 + 2) = v19;
      v21 = v32[4];
      *((_OWORD *)v14 + 3) = v20;
      v22 = v32[5];
      *((_OWORD *)v14 + 4) = v21;
      v23 = v32[6];
      *((_OWORD *)v14 + 5) = v22;
      *((_OWORD *)v14 + 6) = v23;
      v24 = (_OWORD *)((char *)v14 + 128);
      *(v24 - 1) = v32[7];
      v25 = v32[9];
      *v24 = v32[8];
      v26 = v32[10];
      v24[1] = v25;
      v27 = v32[11];
      v24[2] = v26;
      v24[3] = v27;
    }
    return 0LL;
  }
  return (struct tagWND *)v9;
}
