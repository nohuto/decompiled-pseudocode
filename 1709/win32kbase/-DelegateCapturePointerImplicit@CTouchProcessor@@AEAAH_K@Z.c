/*
 * XREFs of ?DelegateCapturePointerImplicit@CTouchProcessor@@AEAAH_K@Z @ 0x1C011C164
 * Callers:
 *     ?DelegateImplictCaptureAndReleaseIfNeeded@CTouchProcessor@@QEAAX_K@Z @ 0x1C011C450 (-DelegateImplictCaptureAndReleaseIfNeeded@CTouchProcessor@@QEAAX_K@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0017384 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     ??0CInputDest@@QEAA@AEBV0@@Z @ 0x1C0017560 (--0CInputDest@@QEAA@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     ?DelegateCapture@CTouchProcessor@@AEAA?AUtagINPUTDEST@@_KHPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C011BCB8 (-DelegateCapture@CTouchProcessor@@AEAA-AUtagINPUTDEST@@_KHPEAUtagDELEGATEPOINTERMAP@@@Z.c)
 *     ApiSetEditionDelegateCapturePointers @ 0x1C0139760 (ApiSetEditionDelegateCapturePointers.c)
 */

__int64 __fastcall CTouchProcessor::DelegateCapturePointerImplicit(
        CTouchProcessor *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char v4; // bl
  __int64 v5; // rcx
  char v6; // di
  _WORD v8[2]; // [rsp+40h] [rbp-1B8h] BYREF
  int v9; // [rsp+44h] [rbp-1B4h]
  _BYTE v10[200]; // [rsp+48h] [rbp-1B0h] BYREF
  _OWORD v11[13]; // [rsp+110h] [rbp-E8h] BYREF

  v4 = 0;
  CTouchProcessor::DelegateCapture((__int64)this, v11, a2, a4, (__int64)v8);
  if ( !v8[0]
    || !v9
    || (v4 = 1, v6 = 0, !*(_DWORD *)CInputDest::CInputDest((CInputDest *)v11, (const struct CInputDest *)v10)) )
  {
    v6 = 1;
  }
  if ( (v4 & 1) != 0 )
    CInputDest::SetEmpty((CInputDest *)v11);
  if ( v6 )
    return 0LL;
  else
    return ApiSetEditionDelegateCapturePointers(v5, v8);
}
