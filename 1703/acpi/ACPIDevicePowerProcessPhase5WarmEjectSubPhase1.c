/*
 * XREFs of ACPIDevicePowerProcessPhase5WarmEjectSubPhase1 @ 0x1C004A450
 * Callers:
 *     <none>
 * Callees:
 *     ACPIGet @ 0x1C0002C00 (ACPIGet.c)
 *     AMLIIsNamedChildPresent @ 0x1C000A900 (AMLIIsNamedChildPresent.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C000BD60 (ACPIDeviceCompleteGenericPhase.c)
 *     WPP_RECORDER_SF_qLqss @ 0x1C000DCF4 (WPP_RECORDER_SF_qLqss.c)
 *     __security_check_cookie @ 0x1C002BF40 (__security_check_cookie.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase5WarmEjectSubPhase1(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rcx
  unsigned int v4; // eax
  int v5; // esi
  int v6; // eax
  __int64 v7; // rdx
  int v8; // esi
  const char *v9; // rax
  const char *v10; // rcx
  __int64 result; // rax
  _DWORD v12[3]; // [rsp+50h] [rbp-38h]
  _DWORD v13[5]; // [rsp+5Ch] [rbp-2Ch] BYREF

  v1 = *(_QWORD *)(a1 + 40);
  v3 = *(int *)(a1 + 104);
  v12[0] = 0;
  v12[1] = 0;
  v4 = *(_DWORD *)(a1 + 56);
  v13[3] = 0;
  v12[2] = 826951007;
  *(_DWORD *)(a1 + 212) = (v4 >> 5) & 4;
  qmemcpy(v13, "_EJ2_EJ3_EJ4", 12);
  v5 = v12[v3];
  if ( !AMLIIsNamedChildPresent(*(__int64 **)(v1 + 712), v5) )
    KeBugCheckEx(0xA3u, 1uLL, 0xC25FEuLL, 0LL, 0LL);
  v6 = ACPIGet((__int64 *)v1, v5, 546308096, 1LL, 4, (__int64)ACPIDeviceCompleteGenericPhase, a1, 0LL, 0LL);
  v7 = *(_QWORD *)(v1 + 8);
  v8 = v6;
  v9 = byte_1C0066CD0;
  v10 = byte_1C0066CD0;
  if ( (v7 & 0x200000000000LL) != 0 )
  {
    v9 = *(const char **)(v1 + 560);
    if ( (v7 & 0x400000000000LL) != 0 )
      v10 = *(const char **)(v1 + 568);
  }
  WPP_RECORDER_SF_qLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    0xAu,
    0x56u,
    (__int64)&WPP_32a24c5e9860357aa59cb74721ebb774_Traceguids,
    a1,
    v8,
    v1,
    v9,
    v10);
  result = 259LL;
  if ( v8 != 259 )
  {
    ACPIDeviceCompleteGenericPhase(0LL, v8, 0LL, a1);
    return 0LL;
  }
  return result;
}
