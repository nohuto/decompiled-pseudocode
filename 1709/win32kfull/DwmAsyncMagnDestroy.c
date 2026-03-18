/*
 * XREFs of DwmAsyncMagnDestroy @ 0x1C024CA50
 * Callers:
 *     xxxFreeWindow @ 0x1C0060AD0 (xxxFreeWindow.c)
 *     MagpDecomposeDesktop @ 0x1C01230F0 (MagpDecomposeDesktop.c)
 *     MagContextThreadCallout @ 0x1C01A8010 (MagContextThreadCallout.c)
 *     MagSetLensContextInformation @ 0x1C01A89BC (MagSetLensContextInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

__int64 __fastcall DwmAsyncMagnDestroy(PVOID Object, __int64 a2, __int64 a3)
{
  unsigned int v6; // ebx
  _DWORD v8[16]; // [rsp+20h] [rbp-68h] BYREF

  v6 = -1073741823;
  if ( Object )
  {
    memset(v8, 0, 0x3CuLL);
    v8[0] = 3932180;
    LOWORD(v8[1]) = 0x8000;
    v8[10] = 1073741921;
    *(_QWORD *)&v8[11] = a2;
    *(_QWORD *)&v8[13] = a3;
    EtwUpdateEvent(a2, 1073741921LL);
    v6 = LpcRequestPort(Object, v8);
    ObfDereferenceObject(Object);
  }
  return v6;
}
