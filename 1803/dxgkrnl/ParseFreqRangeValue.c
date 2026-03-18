/*
 * XREFs of ParseFreqRangeValue @ 0x1C0231F10
 * Callers:
 *     ?_ProcessMonitorResolutionKey@DXGMONITOR@@AEAAJPEAXPEAU_KEY_BASIC_INFORMATION@@@Z @ 0x1C0232768 (-_ProcessMonitorResolutionKey@DXGMONITOR@@AEAAJPEAXPEAU_KEY_BASIC_INFORMATION@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ParseModeCap @ 0x1C0231FC0 (ParseModeCap.c)
 */

char __fastcall ParseFreqRangeValue(_DWORD *a1, int a2, int a3, __int64 a4, __int64 a5)
{
  unsigned int v10; // eax
  size_t v11; // r8
  int v12; // edx
  _BYTE v13[528]; // [rsp+30h] [rbp-248h] BYREF

  if ( a1[1] != 1 )
    return 0;
  memset(v13, 0, 0x208uLL);
  v10 = a1[2];
  v11 = 518LL;
  if ( v10 <= 0x206 )
    v11 = v10;
  memmove(v13, a1 + 3, v11);
  LOBYTE(v12) = 1;
  return ParseModeCap((unsigned int)v13, v12, a2, a3, a4, a5);
}
