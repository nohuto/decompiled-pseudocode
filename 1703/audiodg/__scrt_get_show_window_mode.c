/*
 * XREFs of __scrt_get_show_window_mode @ 0x14001D7BC
 * Callers:
 *     __scrt_common_main_seh @ 0x14001CC9C (__scrt_common_main_seh.c)
 * Callees:
 *     memset @ 0x14001DC2C (memset.c)
 */

__int64 _scrt_get_show_window_mode()
{
  __int64 result; // rax
  _STARTUPINFOW StartupInfo; // [rsp+20h] [rbp-78h] BYREF

  memset(&StartupInfo, 0, sizeof(StartupInfo));
  GetStartupInfoW(&StartupInfo);
  result = 10LL;
  if ( (StartupInfo.dwFlags & 1) != 0 )
    return StartupInfo.wShowWindow;
  return result;
}
