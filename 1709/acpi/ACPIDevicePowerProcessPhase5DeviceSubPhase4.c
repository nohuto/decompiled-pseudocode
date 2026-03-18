/*
 * XREFs of ACPIDevicePowerProcessPhase5DeviceSubPhase4 @ 0x1C0003120
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qLqss @ 0x1C000544C (WPP_RECORDER_SF_qLqss.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C0006240 (ACPIDeviceCompleteGenericPhase.c)
 *     ACPIGet @ 0x1C0006FE0 (ACPIGet.c)
 *     memset @ 0x1C002C4C0 (memset.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase5DeviceSubPhase4(__int64 a1)
{
  _QWORD *v1; // rdi
  __int64 v2; // rbx
  char v4; // bp
  unsigned int v5; // ebx
  void *v6; // rax
  void *v7; // rdx
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // [rsp+48h] [rbp-10h]

  v1 = *(_QWORD **)(a1 + 40);
  v2 = a1 + 216;
  *(_DWORD *)(a1 + 212) = 7;
  memset((void *)(a1 + 216), 0, 0x28uLL);
  v4 = 0;
  v5 = ACPIGet((_DWORD)v1, 1096045407, -1610344446, 0, 0, (__int64)ACPIDeviceCompleteGenericPhase, a1, v2 + 16, v2 + 24);
  v6 = &unk_1C0067B08;
  v7 = &unk_1C0067B08;
  if ( v1 )
  {
    v8 = v1[1];
    v4 = (char)v1;
    if ( (v8 & 0x200000000000LL) != 0 )
    {
      v6 = (void *)v1[70];
      if ( (v8 & 0x400000000000LL) != 0 )
        v7 = (void *)v1[71];
    }
  }
  v10 = (__int64)v7;
  LOBYTE(v7) = 4;
  WPP_RECORDER_SF_qLqss(
    WPP_GLOBAL_Control->DeviceExtension,
    (_DWORD)v7,
    10,
    78,
    (__int64)&WPP_865309cb09b9397d2632e54924735df7_Traceguids,
    a1,
    v5,
    v4,
    (__int64)v6,
    v10);
  result = 259LL;
  if ( v5 != 259 )
  {
    ACPIDeviceCompleteGenericPhase(0LL, v5, 0LL, a1);
    return 0LL;
  }
  return result;
}
