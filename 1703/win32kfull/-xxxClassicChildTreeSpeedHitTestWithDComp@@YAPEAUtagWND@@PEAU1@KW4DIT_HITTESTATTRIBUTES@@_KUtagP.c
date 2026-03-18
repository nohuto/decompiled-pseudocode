/*
 * XREFs of ?xxxClassicChildTreeSpeedHitTestWithDComp@@YAPEAUtagWND@@PEAU1@KW4DIT_HITTESTATTRIBUTES@@_KUtagPOINT@@3PEAHPEAI@Z @ 0x1C01CFDC0
 * Callers:
 *     ?xxxClassicChildTreeSpeedHitTestWithDComp@@YAPEAUtagWND@@PEAU1@KW4DIT_HITTESTATTRIBUTES@@_KUtagPOINT@@3PEAHPEAI@Z @ 0x1C01CFDC0 (-xxxClassicChildTreeSpeedHitTestWithDComp@@YAPEAUtagWND@@PEAU1@KW4DIT_HITTESTATTRIBUTES@@_KUtagP.c)
 *     TouchTargetChildTree @ 0x1C01D1850 (TouchTargetChildTree.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     EditionTryDwmHitTest @ 0x1C005F960 (EditionTryDwmHitTest.c)
 *     PtInRect @ 0x1C0062B38 (PtInRect.c)
 *     ?ClassicIsWindowHit@@YAHPEAUtagWND@@UtagPOINT@@@Z @ 0x1C011A4FC (-ClassicIsWindowHit@@YAHPEAUtagWND@@UtagPOINT@@@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?xxxClassicChildTreeSpeedHitTestWithDComp@@YAPEAUtagWND@@PEAU1@KW4DIT_HITTESTATTRIBUTES@@_KUtagPOINT@@3PEAHPEAI@Z @ 0x1C01CFDC0 (-xxxClassicChildTreeSpeedHitTestWithDComp@@YAPEAUtagWND@@PEAU1@KW4DIT_HITTESTATTRIBUTES@@_KUtagP.c)
 */

__int64 __fastcall xxxClassicChildTreeSpeedHitTestWithDComp(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        unsigned __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // rsi
  __int64 v9; // rbp
  __int64 v12; // rax
  unsigned __int64 v16; // [rsp+58h] [rbp-1B0h]
  __int128 v18; // [rsp+C0h] [rbp-148h]
  _BYTE v19[192]; // [rsp+130h] [rbp-D8h] BYREF

  v8 = *(_QWORD *)(a1 + 112);
  v9 = 0LL;
  if ( !v8 )
    return a1;
  while ( 1 )
  {
    v16 = *(_QWORD *)v8;
    if ( ClassicIsWindowHit((struct tagWND *)v8, (struct tagPOINT)a5) )
      break;
    v8 = *(_QWORD *)(v8 + 88);
    if ( !v8 )
      return a1;
  }
  if ( !EditionTryDwmHitTest((struct tagWND *)v8) )
    goto LABEL_26;
  v18 = *(_OWORD *)(DCompHitTest(v19, a2, a3, a6, a4, 0, 0, a7, a8) + 80);
  v12 = HMValidateHandleNoSecure(v16, 1);
  v8 = v12;
  if ( !v12 || *(char *)(v12 + 59) < 0 )
  {
    EtwTraceDITSpeedHitTestFailedRevalidation(v16);
    return 0LL;
  }
  if ( HIDWORD(v18) == 2 ? -(BYTE8(v18) & 1) : 0 )
  {
LABEL_26:
    if ( *(_QWORD *)(v8 + 112) )
    {
      if ( PtInRect((_DWORD *)(v8 + 144), a5) )
      {
        v8 = xxxClassicChildTreeSpeedHitTestWithDComp(v8, a2, a3, a4, a5, a6, a7, a8);
        if ( !v8 )
          v8 = HMValidateHandleNoSecure(v16, 1);
      }
    }
    if ( v8 && *(char *)(v8 + 59) < 0 )
      return 0LL;
    return v8;
  }
  else
  {
    if ( HIDWORD(v18) == 2 )
      return v18;
    return v9;
  }
}
