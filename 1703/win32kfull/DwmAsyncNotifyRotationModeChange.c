/*
 * XREFs of DwmAsyncNotifyRotationModeChange @ 0x1C024B9DC
 * Callers:
 *     ?xxxSmoothRotateScreen@CLegacyRotationMgr@@AEAAJPEAUDISPLAYCONFIG_PATH_INFO@@PEAUDISPLAYCONFIG_MODE_INFO@@HPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01A9F10 (-xxxSmoothRotateScreen@CLegacyRotationMgr@@AEAAJPEAUDISPLAYCONFIG_PATH_INFO@@PEAUDISPLAYCONFIG_M.c)
 * Callees:
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall DwmAsyncNotifyRotationModeChange(PVOID Object, int a2)
{
  unsigned int v4; // edi
  _DWORD v6[14]; // [rsp+20h] [rbp-38h] BYREF

  v4 = -1073741823;
  _InterlockedIncrement64(&g_cDWMWindowUniqueness);
  if ( Object )
  {
    memset((char *)v6 + 2, 0, 0x2EuLL);
    v6[0] = 3145736;
    LOWORD(v6[1]) = 0x8000;
    v6[10] = 1073741880;
    v6[11] = a2;
    v4 = LpcRequestPort(Object, v6);
    ObfDereferenceObject(Object);
  }
  return v4;
}
