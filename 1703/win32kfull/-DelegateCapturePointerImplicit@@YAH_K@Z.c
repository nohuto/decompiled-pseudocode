/*
 * XREFs of ?DelegateCapturePointerImplicit@@YAH_K@Z @ 0x1C01BAAF4
 * Callers:
 *     DelegateReleasePointerMessage @ 0x1C01BAD90 (DelegateReleasePointerMessage.c)
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _DelegateCapturePointers @ 0x1C01BB90C (_DelegateCapturePointers.c)
 *     ?DelegateCapture@PointerList@@YAPEAUtagWND@@_KHPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C01E9BF8 (-DelegateCapture@PointerList@@YAPEAUtagWND@@_KHPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 */

__int64 __fastcall DelegateCapturePointerImplicit(
        PointerList *a1,
        unsigned __int64 a2,
        __int64 a3,
        struct tagDELEGATEPOINTERMAP *a4)
{
  __int64 v4; // rax
  int v6[22]; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v7; // [rsp+78h] [rbp-90h]
  int v8; // [rsp+84h] [rbp-84h]

  PointerList::DelegateCapture(a1, a2, (int)v6, a4);
  if ( !LOWORD(v6[0]) || !v6[1] )
    return 0LL;
  v4 = 0LL;
  if ( v8 == 2 )
    v4 = v7;
  if ( v4 )
    return DelegateCapturePointers(1LL, v6);
  else
    return 0LL;
}
