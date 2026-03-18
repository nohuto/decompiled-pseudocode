/*
 * XREFs of xxxSendPointerMessageWorker @ 0x1C01BC354
 * Callers:
 *     xxxSendPointerMessage @ 0x1C01BC2D4 (xxxSendPointerMessage.c)
 *     ?xxxNotifyCaptureChangeIfCaptured@@YAH_KPEAUtagWND@@H@Z @ 0x1C01C8968 (-xxxNotifyCaptureChangeIfCaptured@@YAH_KPEAUtagWND@@H@Z.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@HF_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01C8A90 (-xxxPointerActivateInternal@@YAXPEAUtagWND@@HF_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     ?xxxPointerParentNotify@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@@Z @ 0x1C01C8D10 (-xxxPointerParentNotify@@YAXPEAUtagWND@@PEBUtagPOINTERINFONODE@@@Z.c)
 *     EditionPointerParentNotify @ 0x1C01C9F50 (EditionPointerParentNotify.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall xxxSendPointerMessageWorker(_BYTE *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v8; // r8

  if ( (char)a1[60] < 0 || (char)a1[59] < 0 || (a1[58] & 4) != 0 )
    return 0LL;
  if ( (_DWORD)a2 == 528 )
    v8 = 582LL;
  else
    v8 = a4;
  return ((__int64 (__fastcall *)(_BYTE *, __int64, __int64, __int64, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
           a1,
           a2,
           v8,
           a3,
           a5);
}
