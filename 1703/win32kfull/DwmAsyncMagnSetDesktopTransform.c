/*
 * XREFs of DwmAsyncMagnSetDesktopTransform @ 0x1C024B378
 * Callers:
 *     MagpDecomposeDesktop @ 0x1C00A22B4 (MagpDecomposeDesktop.c)
 *     MagContextThreadCallout @ 0x1C01EBC20 (MagContextThreadCallout.c)
 *     MagSetLensContextInformation @ 0x1C01EC5F4 (MagSetLensContextInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall DwmAsyncMagnSetDesktopTransform(PVOID Object, __int64 a2, _QWORD *a3, int a4, int a5)
{
  unsigned int v9; // ebx
  _DWORD v11[20]; // [rsp+20h] [rbp-88h] BYREF

  v9 = -1073741823;
  if ( Object )
  {
    memset((char *)v11 + 2, 0, 0x42uLL);
    v11[0] = 4456476;
    LOWORD(v11[1]) = 0x8000;
    *(_QWORD *)&v11[13] = *a3;
    v11[16] = a5;
    v11[10] = 1073741927;
    *(_QWORD *)&v11[11] = a2;
    v11[15] = a4;
    EtwUpdateEvent(0LL, 1073741927LL);
    v9 = LpcRequestPort(Object, v11);
    ObfDereferenceObject(Object);
  }
  return v9;
}
