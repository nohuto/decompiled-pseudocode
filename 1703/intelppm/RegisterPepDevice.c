/*
 * XREFs of RegisterPepDevice @ 0x1C001FC60
 * Callers:
 *     InitPep @ 0x1C001FAD0 (InitPep.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0002EE4 (WPP_RECORDER_SF_D.c)
 *     __security_check_cookie @ 0x1C0003AE0 (__security_check_cookie.c)
 *     memset @ 0x1C0004EC0 (memset.c)
 */

__int64 __fastcall RegisterPepDevice(__int64 *a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rdi
  int v4; // ebx
  _QWORD v6[12]; // [rsp+30h] [rbp-29h] BYREF
  _QWORD v7[2]; // [rsp+90h] [rbp+37h] BYREF
  __int64 v8; // [rsp+A0h] [rbp+47h]

  v7[0] = 0LL;
  v7[1] = 0LL;
  v8 = 0LL;
  memset(v6, 0, sizeof(v6));
  v2 = *a1;
  v3 = a1 + 136;
  LODWORD(v8) = -1;
  v6[7] = a1;
  v6[0] = 0x100000001LL;
  LODWORD(v6[10]) = 1;
  v6[11] = v7;
  v6[6] = PepDevicePowerControlCallback;
  v4 = PoFxRegisterDevice(v2, v6, a1 + 136);
  if ( v4 < 0 )
  {
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      4u,
      0xFu,
      (__int64)&WPP_6e91082c5c0e36b7f4cdd49e1436a0cc_Traceguids,
      v4);
    *v3 = 0LL;
  }
  else
  {
    PoFxActivateComponent(*v3, 0LL, 0LL);
    PoFxStartDevicePowerManagement(*v3);
  }
  return (unsigned int)v4;
}
