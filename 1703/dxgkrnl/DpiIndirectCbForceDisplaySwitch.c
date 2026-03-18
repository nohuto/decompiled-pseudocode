/*
 * XREFs of DpiIndirectCbForceDisplaySwitch @ 0x1C01CB910
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     DxgkRequestAsyncDisplaySwitchCallout @ 0x1C01976A0 (DxgkRequestAsyncDisplaySwitchCallout.c)
 */

__int64 DpiIndirectCbForceDisplaySwitch()
{
  _QWORD v1[8]; // [rsp+20h] [rbp-58h] BYREF

  memset(v1, 0, sizeof(v1));
  EtwActivityIdControl(3u, (LPGUID)&v1[1]);
  v1[7] = MEMORY[0xFFFFF78000000014];
  LODWORD(v1[3]) = 56;
  return DxgkRequestAsyncDisplaySwitchCallout(0LL, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v1);
}
