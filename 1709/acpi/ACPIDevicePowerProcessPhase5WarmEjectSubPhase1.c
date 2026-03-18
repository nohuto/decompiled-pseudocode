/*
 * XREFs of ACPIDevicePowerProcessPhase5WarmEjectSubPhase1 @ 0x1C0049830
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qLqss @ 0x1C000544C (WPP_RECORDER_SF_qLqss.c)
 *     AMLIIsNamedChildPresent @ 0x1C00058A0 (AMLIIsNamedChildPresent.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C0006240 (ACPIDeviceCompleteGenericPhase.c)
 *     ACPIGet @ 0x1C0006FE0 (ACPIGet.c)
 *     __security_check_cookie @ 0x1C002BC10 (__security_check_cookie.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase5WarmEjectSubPhase1(__int64 a1)
{
  unsigned int v1; // eax
  __int64 *v3; // rdi
  __int64 v4; // rax
  __int64 *v5; // rcx
  int v6; // esi
  int v7; // eax
  __int64 v8; // rdx
  int v9; // esi
  const char *v10; // rax
  const char *v11; // rcx
  __int64 result; // rax
  _DWORD v13[3]; // [rsp+50h] [rbp-38h]
  _DWORD v14[5]; // [rsp+5Ch] [rbp-2Ch] BYREF

  v1 = *(_DWORD *)(a1 + 56);
  v3 = *(__int64 **)(a1 + 40);
  v13[0] = 0;
  v13[1] = 0;
  v14[3] = 0;
  v13[2] = 826951007;
  *(_DWORD *)(a1 + 212) = (v1 >> 5) & 4;
  v4 = *(int *)(a1 + 104);
  v5 = (__int64 *)v3[89];
  qmemcpy(v14, "_EJ2_EJ3_EJ4", 12);
  v6 = v13[v4];
  if ( !AMLIIsNamedChildPresent(v5, v6) )
    KeBugCheckEx(0xA3u, 1uLL, 0xC2614uLL, 0LL, 0LL);
  v7 = ACPIGet(v3, v6, 546308096, 1LL, 4, (__int64)ACPIDeviceCompleteGenericPhase, a1, 0LL, 0LL);
  v8 = v3[1];
  v9 = v7;
  v10 = (const char *)&unk_1C0067B08;
  v11 = (const char *)&unk_1C0067B08;
  if ( (v8 & 0x200000000000LL) != 0 )
  {
    v10 = (const char *)v3[70];
    if ( (v8 & 0x400000000000LL) != 0 )
      v11 = (const char *)v3[71];
  }
  WPP_RECORDER_SF_qLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    0xAu,
    0x57u,
    (__int64)&WPP_865309cb09b9397d2632e54924735df7_Traceguids,
    a1,
    v9,
    (char)v3,
    v10,
    v11);
  result = 259LL;
  if ( v9 != 259 )
  {
    ACPIDeviceCompleteGenericPhase(0LL, v9, 0LL, a1);
    return 0LL;
  }
  return result;
}
