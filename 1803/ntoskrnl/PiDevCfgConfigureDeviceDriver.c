/*
 * XREFs of PiDevCfgConfigureDeviceDriver @ 0x1405DA67C
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x1405CF9D8 (PiDevCfgConfigureDevice.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x1407310F0 (PpDevCfgProcessDeviceExtensions.c)
 * Callees:
 *     PiDevCfgConfigureDeviceDriverConfiguration @ 0x1405DA708 (PiDevCfgConfigureDeviceDriverConfiguration.c)
 */

__int64 __fastcall PiDevCfgConfigureDeviceDriver(int a1, int a2, __int64 a3, _DWORD *a4, _DWORD *a5)
{
  _DWORD *v5; // rbp
  __int64 v8; // r8
  int v11; // ecx
  __int64 *i; // rbx
  _DWORD v14[4]; // [rsp+40h] [rbp-38h] BYREF
  int v15; // [rsp+90h] [rbp+18h] BYREF

  v5 = a5;
  v15 = 0;
  v8 = *(_QWORD *)(a3 + 32);
  v14[0] = 0;
  v11 = PiDevCfgConfigureDeviceDriverConfiguration(a1, a2, v8, -1, 0LL, 0LL, a4, (__int64)a5);
  if ( v11 >= 0 )
  {
    for ( i = *(__int64 **)(a3 + 352); i != (__int64 *)(a3 + 352); i = (__int64 *)*i )
    {
      v11 = PiDevCfgConfigureDeviceDriverConfiguration(
              a1,
              a2,
              i[4],
              *((_DWORD *)i + 26),
              (__int64)PiDevCfgConfigurePropertyMatchCallback,
              a3,
              &v15,
              (__int64)v14);
      if ( v11 < 0 )
        break;
      if ( a4 )
        *a4 |= v15;
      if ( v5 )
        *v5 |= v14[0];
    }
  }
  return (unsigned int)v11;
}
