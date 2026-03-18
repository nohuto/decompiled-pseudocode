/*
 * XREFs of KiIsProcessTerminationRequested @ 0x1400298F8
 * Callers:
 *     KiSchedulerApc @ 0x140111120 (KiSchedulerApc.c)
 *     KiSchedulerApcTerminate @ 0x140443330 (KiSchedulerApcTerminate.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

char __fastcall KiIsProcessTerminationRequested(__int64 a1, _DWORD *a2)
{
  int v2; // eax
  unsigned int v3; // eax
  __int64 v4; // rcx
  _DWORD v6[4]; // [rsp+0h] [rbp-28h]

  v2 = *(_DWORD *)(a1 + 120);
  v6[0] = -1073741523;
  v6[1] = -1073740280;
  v6[2] = -1073740279;
  v3 = v2 & 0x60000;
  if ( v3 )
  {
    v4 = (int)((v3 >> 17) - 1);
    LOBYTE(v3) = 1;
    *a2 = v6[v4];
  }
  return v3;
}
