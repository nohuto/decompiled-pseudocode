/*
 * XREFs of PbmSwitchSoftNonInteractiveAppsToHardNonInteractive @ 0x1800218A0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSoftNonInteractiveAppsSwitchToHardNonInteractive@CApplicationManager@@QEAAJK@Z @ 0x18001F1D0 (-OnSoftNonInteractiveAppsSwitchToHardNonInteractive@CApplicationManager@@QEAAJK@Z.c)
 *     ?RpcClientProcessSessionId@@YAJPEAXPEAK1@Z @ 0x1800248D4 (-RpcClientProcessSessionId@@YAJPEAXPEAK1@Z.c)
 */

__int64 __fastcall PbmSwitchSoftNonInteractiveAppsToHardNonInteractive(void *a1)
{
  __int64 result; // rax
  int v2; // eax
  int v3; // ecx
  unsigned int v4; // [rsp+38h] [rbp+10h] BYREF
  unsigned int v5; // [rsp+40h] [rbp+18h] BYREF

  result = 2147549183LL;
  if ( g_ApplicationManager )
  {
    v2 = RpcClientProcessSessionId(a1, &v5, &v4);
    v3 = v2;
    if ( v2 )
    {
      result = (unsigned __int16)v2 | 0x80070000;
      if ( v3 <= 0 )
        return (unsigned int)v3;
    }
    else
    {
      return CApplicationManager::OnSoftNonInteractiveAppsSwitchToHardNonInteractive(0LL, v4);
    }
  }
  return result;
}
