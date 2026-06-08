/*
 * XREFs of PepNotifyQueryCapabilities @ 0x1C001DEE8
 * Callers:
 *     QueryPepCapabilites @ 0x1C001DD8C (QueryPepCapabilites.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0002EE4 (WPP_RECORDER_SF_D.c)
 *     __security_check_cookie @ 0x1C0003AE0 (__security_check_cookie.c)
 */

__int64 __fastcall PepNotifyQueryCapabilities(__int64 a1, _DWORD *a2, _DWORD *a3, _BYTE *a4, _BYTE *a5)
{
  int v9; // eax
  unsigned int v10; // esi
  int v12; // [rsp+28h] [rbp-60h]
  __int64 v13; // [rsp+30h] [rbp-58h] BYREF
  int v14; // [rsp+38h] [rbp-50h]

  v14 = 0;
  v13 = 0LL;
  BYTE2(v14) = *(_BYTE *)(a1 + 78);
  v9 = PoFxProcessorNotification(*(_QWORD *)(a1 + 1088), 1LL, &v13);
  v10 = v9;
  if ( v9 >= 0 )
  {
    *a2 = HIDWORD(v13);
    *a3 = v13;
    *a4 = v14;
    *a5 = BYTE1(v14);
    *a2 &= -((*(_QWORD *)(a1 + 264) & 0x300000300LL) != 0);
    if ( (*(_QWORD *)(a1 + 264) & 0x1000000000LL) == 0 )
    {
      *a3 = 0;
      *a4 = 0;
    }
    *a5 &= -((*(_DWORD *)(a1 + 264) & 0x400) != 0LL);
  }
  else
  {
    v12 = v9;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      2u,
      0x10u,
      (__int64)&WPP_6e91082c5c0e36b7f4cdd49e1436a0cc_Traceguids,
      v12);
  }
  return v10;
}
