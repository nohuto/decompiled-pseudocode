/*
 * XREFs of ?GetCurrentFrameId@@YA_KXZ @ 0x1800BE2A8
 * Callers:
 *     ?UnusedNotification@CD3DDeviceManager@@UEAAXPEAVCMILPoolResource@@@Z @ 0x180019FE0 (-UnusedNotification@CD3DDeviceManager@@UEAAXPEAVCMILPoolResource@@@Z.c)
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z @ 0x18001A6C0 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z.c)
 *     ?DeleteUnusedDevice@CD3DDeviceManager@@AEAA_NI@Z @ 0x18011DBD8 (-DeleteUnusedDevice@CD3DDeviceManager@@AEAA_NI@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 GetCurrentFrameId(void)
{
  unsigned __int64 result; // rax

  result = 0LL;
  if ( g_pComposition )
    return *((_QWORD *)g_pComposition + 45);
  return result;
}
