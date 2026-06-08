/*
 * XREFs of PepNotifyQueryPerfCapabilities @ 0x1C002981C
 * Callers:
 *     InitPepPerfStates @ 0x1C002936C (InitPepPerfStates.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C00012FC (WPP_RECORDER_SF_D.c)
 *     __security_check_cookie @ 0x1C000BAE0 (__security_check_cookie.c)
 */

__int64 __fastcall PepNotifyQueryPerfCapabilities(
        __int64 a1,
        _DWORD *a2,
        _DWORD *a3,
        _DWORD *a4,
        _DWORD *a5,
        _DWORD *a6,
        _DWORD *a7)
{
  __int64 v7; // rcx
  int v11; // eax
  unsigned int v12; // ebx
  int v14; // [rsp+28h] [rbp-60h]
  __int64 v15; // [rsp+30h] [rbp-58h] BYREF
  __int64 v16; // [rsp+38h] [rbp-50h]
  __int64 v17; // [rsp+40h] [rbp-48h]

  v7 = *(_QWORD *)(a1 + 1088);
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v11 = PoFxProcessorNotification(v7, 11LL, &v15);
  v12 = v11;
  if ( v11 >= 0 )
  {
    *a2 = v15;
    *a3 = HIDWORD(v15);
    *a4 = v16;
    *a5 = HIDWORD(v16);
    *a6 = v17;
    *a7 = HIDWORD(v17);
  }
  else
  {
    v14 = v11;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      2u,
      0x14u,
      (__int64)&WPP_4b9e3f54236f3d61f5b3facb209ab545_Traceguids,
      v14);
  }
  return v12;
}
