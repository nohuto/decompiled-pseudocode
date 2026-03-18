/*
 * XREFs of ?CallDCompHitTestHelper@@YAPEAUtagWND@@KAEBW4DIT_HITTESTATTRIBUTES@@_KAEBUtagPOINT@@AEAPEAU1@AEAPEAUHWND__@@PEAUtagINPUTDEST@@PEAHPEAI6@Z @ 0x1C01D3488
 * Callers:
 *     ?xxxClassicChildTreeSpeedHitTestWithDComp@@YAPEAUtagWND@@PEAU1@KW4DIT_HITTESTATTRIBUTES@@_KUtagPOINT@@3PEAHPEAIPEAUtagINPUTDEST@@@Z @ 0x1C01D4498 (-xxxClassicChildTreeSpeedHitTestWithDComp@@YAPEAUtagWND@@PEAU1@KW4DIT_HITTESTATTRIBUTES@@_KUtagP.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 */

struct tagWND *__fastcall CallDCompHitTestHelper(
        unsigned int a1,
        const enum DIT_HITTESTATTRIBUTES *a2,
        __int64 a3,
        const struct tagPOINT *a4,
        struct tagWND **a5,
        HWND *a6,
        struct tagINPUTDEST *a7,
        int *a8,
        unsigned int *a9,
        int *a10)
{
  __int64 v10; // rbx
  __int128 *v11; // rax
  __int64 v12; // rdx
  __int128 v13; // xmm0
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  int v17; // eax
  unsigned __int64 v19; // rcx
  __int128 v20; // [rsp+50h] [rbp-188h]
  __int128 v21; // [rsp+60h] [rbp-178h]
  __int128 v22; // [rsp+70h] [rbp-168h]
  __int128 v23; // [rsp+80h] [rbp-158h]
  __int128 v24; // [rsp+90h] [rbp-148h]
  __int128 v25; // [rsp+A0h] [rbp-138h]
  __int128 v26; // [rsp+B0h] [rbp-128h]
  __int128 v27; // [rsp+D0h] [rbp-108h]
  __int128 v28; // [rsp+E0h] [rbp-F8h]
  __int128 v29; // [rsp+F0h] [rbp-E8h]
  __int128 v30; // [rsp+100h] [rbp-D8h]
  _BYTE v31[192]; // [rsp+110h] [rbp-C8h] BYREF

  v10 = 0LL;
  v11 = (__int128 *)DCompHitTest(v31, a1, *(unsigned int *)a2, *a4, a3, 0, 0, a8, a9);
  LOBYTE(v12) = 1;
  v20 = *v11;
  v21 = v11[1];
  v22 = v11[2];
  v23 = v11[3];
  v24 = v11[4];
  v25 = v11[5];
  v26 = v11[6];
  v13 = v11[7];
  v11 += 8;
  v27 = *v11;
  v28 = v11[1];
  v29 = v11[2];
  v30 = v11[3];
  v16 = HMValidateHandleNoSecure((unsigned __int64)*a6, v12, v14, v15);
  *a5 = (struct tagWND *)v16;
  if ( !v16 || *(char *)(v16 + 59) < 0 )
  {
    v19 = (unsigned __int64)*a6;
    *a10 = 1;
    EtwTraceDITSpeedHitTestFailedRevalidation(v19);
    return 0LL;
  }
  if ( HIDWORD(v25) == 2 )
    v17 = -(BYTE8(v25) & 1);
  else
    v17 = 0;
  if ( v17 )
  {
    *a10 = 0;
    return 0LL;
  }
  *a10 = 1;
  if ( a7 )
  {
    *(_OWORD *)a7 = v20;
    *((_OWORD *)a7 + 1) = v21;
    *((_OWORD *)a7 + 2) = v22;
    *((_OWORD *)a7 + 3) = v23;
    *((_OWORD *)a7 + 4) = v24;
    *((_OWORD *)a7 + 5) = v25;
    *((_OWORD *)a7 + 6) = v26;
    *((_OWORD *)a7 + 7) = v13;
    *((_OWORD *)a7 + 8) = v27;
    *((_OWORD *)a7 + 9) = v28;
    *((_OWORD *)a7 + 10) = v29;
    *((_OWORD *)a7 + 11) = v30;
  }
  if ( HIDWORD(v25) == 2 )
    return (struct tagWND *)v25;
  return (struct tagWND *)v10;
}
