/*
 * XREFs of DpiIndirectCbForceDisplaySwitch @ 0x1C02068A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     DxgkRequestAsyncDisplaySwitchCallout @ 0x1C01A1F70 (DxgkRequestAsyncDisplaySwitchCallout.c)
 */

__int64 DpiIndirectCbForceDisplaySwitch()
{
  _QWORD v1[10]; // [rsp+20h] [rbp-68h] BYREF

  memset(v1, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v1[1]);
  v1[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v1[3]) = 56;
  LOBYTE(v1[6]) = -1;
  return DxgkRequestAsyncDisplaySwitchCallout(0LL, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v1);
}
