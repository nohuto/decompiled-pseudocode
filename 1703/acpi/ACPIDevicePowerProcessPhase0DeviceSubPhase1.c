/*
 * XREFs of ACPIDevicePowerProcessPhase0DeviceSubPhase1 @ 0x1C000A7B0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIGet @ 0x1C0002C00 (ACPIGet.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C000BD60 (ACPIDeviceCompleteGenericPhase.c)
 *     WPP_RECORDER_SF_qLqss @ 0x1C000DCF4 (WPP_RECORDER_SF_qLqss.c)
 *     memset @ 0x1C002CB80 (memset.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase0DeviceSubPhase1(__int64 a1)
{
  __int64 *v1; // rbx
  __int64 v2; // r14
  char v4; // bp
  int v5; // edx
  unsigned int v6; // esi
  void *v7; // rax
  void *v8; // r8
  __int64 v9; // rcx
  __int64 result; // rax

  v1 = *(__int64 **)(a1 + 40);
  v2 = a1 + 216;
  *(_DWORD *)(a1 + 212) = 4;
  memset((void *)(a1 + 216), 0, 0x28uLL);
  *(_DWORD *)(a1 + 56) |= 0x1000000u;
  v4 = 0;
  v6 = ACPIGet(v1, 1096045407, -1610344446, 0LL, 0, (__int64)ACPIDeviceCompleteGenericPhase, a1, v2 + 16, v2 + 24);
  v7 = &unk_1C0066CD0;
  v8 = &unk_1C0066CD0;
  if ( v1 )
  {
    v9 = v1[1];
    v5 = 0;
    v4 = (char)v1;
    if ( (v9 & 0x200000000000LL) != 0 )
    {
      v7 = (void *)v1[70];
      v5 = 0;
      if ( (v9 & 0x400000000000LL) != 0 )
        v8 = (void *)v1[71];
    }
  }
  LOBYTE(v5) = 4;
  WPP_RECORDER_SF_qLqss(
    WPP_GLOBAL_Control->DeviceExtension,
    v5,
    10,
    51,
    (__int64)&WPP_32a24c5e9860357aa59cb74721ebb774_Traceguids,
    a1,
    v6,
    v4,
    (__int64)v7,
    (__int64)v8);
  result = 259LL;
  if ( v6 != 259 )
  {
    ACPIDeviceCompleteGenericPhase(0LL, v6, v2, a1);
    return 0LL;
  }
  return result;
}
