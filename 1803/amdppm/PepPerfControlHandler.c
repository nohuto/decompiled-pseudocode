/*
 * XREFs of PepPerfControlHandler @ 0x1C0009A80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001374 (WPP_RECORDER_SF_D.c)
 *     PepPerformanceFromPercentage @ 0x1C0009F58 (PepPerformanceFromPercentage.c)
 *     __security_check_cookie @ 0x1C000C400 (__security_check_cookie.c)
 */

void __fastcall PepPerfControlHandler(__int64 a1, __int64 a2, char a3, char a4)
{
  int v4; // eax
  __int64 v5; // r11
  __int64 v6; // rdx
  __int64 v7; // r10
  int v8; // eax
  _DWORD *v9; // r11
  __int64 v10; // rdx
  __int64 v11; // r10
  int v12; // eax
  __int64 v13; // r10
  __int64 v14; // rcx
  int v15; // eax
  int v16; // [rsp+28h] [rbp-30h]
  __int64 v17; // [rsp+30h] [rbp-28h] BYREF
  __int64 v18; // [rsp+38h] [rbp-20h]
  int v19; // [rsp+40h] [rbp-18h]

  if ( a3 && !a4 )
  {
    v4 = PepPerformanceFromPercentage(a1, *(unsigned int *)(a2 + 16));
    v6 = *(unsigned int *)(v5 + 20);
    LODWORD(v17) = v4;
    v8 = PepPerformanceFromPercentage(v7, v6);
    v10 = (unsigned int)v9[6];
    HIDWORD(v17) = v8;
    LODWORD(v18) = *v9;
    v12 = PepPerformanceFromPercentage(v11, v10);
    v14 = *(_QWORD *)(v13 + 16);
    v19 = v12;
    HIDWORD(v18) = *(_DWORD *)(v13 + 36);
    v15 = PoFxProcessorNotification(v14, 13LL, &v17);
    if ( v15 < 0 )
    {
      v16 = v15;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        2u,
        0x25u,
        (__int64)&WPP_c5c7ce996b8d3bf3de21e73d0ef31f21_Traceguids,
        v16,
        v17,
        v18);
    }
  }
}
