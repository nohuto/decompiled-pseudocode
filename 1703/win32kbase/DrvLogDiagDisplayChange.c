/*
 * XREFs of DrvLogDiagDisplayChange @ 0x1C0056D60
 * Callers:
 *     NtUserChangeDisplaySettings @ 0x1C0057D70 (NtUserChangeDisplaySettings.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D6B34 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     DrvDxgkWriteDiagEntry @ 0x1C0057C30 (DrvDxgkWriteDiagEntry.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

__int64 __fastcall DrvLogDiagDisplayChange(__int64 a1, int a2)
{
  _QWORD v5[10]; // [rsp+20h] [rbp-60h] BYREF

  memset(v5, 0, 0x48uLL);
  v5[0] = 0x4800000003LL;
  memset(&v5[1], 0, 36);
  if ( a1 )
  {
    LODWORD(v5[7]) = *(_DWORD *)a1;
    v5[8] = *(_QWORD *)(a1 + 16);
    HIDWORD(v5[7]) = *(_DWORD *)(a1 + 24);
    BYTE4(v5[6]) = 0;
  }
  else
  {
    BYTE4(v5[6]) = 1;
  }
  LODWORD(v5[6]) = a2;
  return DrvDxgkWriteDiagEntry(v5);
}
