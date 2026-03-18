/*
 * XREFs of RIMFindMonitorForDigitizer @ 0x1C0008644
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C000A11C (RIMCreatePointerDeviceInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C01098C8 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     rimFreeQDCActivePathsData @ 0x1C00086BC (rimFreeQDCActivePathsData.c)
 *     rimGetQDCActivePathsData @ 0x1C0009A20 (rimGetQDCActivePathsData.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C000B4AC (rimFindMonitorForDigitizerWithQDCData.c)
 */

__int64 __fastcall RIMFindMonitorForDigitizer(int a1, int a2, __int64 a3, __int64 a4)
{
  _BYTE *v7; // rbx
  _BYTE v9[40]; // [rsp+30h] [rbp-28h] BYREF

  v7 = v9;
  if ( (int)rimGetQDCActivePathsData(v9) < 0 )
    v7 = 0LL;
  rimFindMonitorForDigitizerWithQDCData(a1, a2, 0, (_DWORD)v7, a4);
  return rimFreeQDCActivePathsData(v7);
}
