/*
 * XREFs of ACPIDevicePowerProcessPhase5DeviceSubPhase4 @ 0x1C001E0A0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIGet @ 0x1C0001D30 (ACPIGet.c)
 *     memset @ 0x1C0004540 (memset.c)
 *     WPP_RECORDER_SF_qLqss @ 0x1C0015708 (WPP_RECORDER_SF_qLqss.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C0019CA0 (ACPIDeviceCompleteGenericPhase.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase5DeviceSubPhase4(__int64 a1)
{
  _QWORD *v1; // rdi
  __int64 v2; // rbx
  char v4; // bp
  int v5; // ebx
  const char *v6; // rax
  const char *v7; // rdx
  __int64 v8; // rcx
  __int64 result; // rax

  v1 = *(_QWORD **)(a1 + 40);
  v2 = a1 + 216;
  *(_DWORD *)(a1 + 212) = 7;
  memset((void *)(a1 + 216), 0, 0x28uLL);
  v4 = 0;
  v5 = ACPIGet(
         (__int64)v1,
         0x4154535Fu,
         -1610344446,
         0LL,
         0,
         (__int64)ACPIDeviceCompleteGenericPhase,
         a1,
         v2 + 16,
         v2 + 24);
  v6 = (const char *)&unk_1C005B1F0;
  v7 = (const char *)&unk_1C005B1F0;
  if ( v1 )
  {
    v8 = v1[1];
    v4 = (char)v1;
    if ( (v8 & 0x200000000000LL) != 0 )
    {
      v6 = (const char *)v1[70];
      if ( (v8 & 0x400000000000LL) != 0 )
        v7 = (const char *)v1[71];
    }
  }
  WPP_RECORDER_SF_qLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    0xAu,
    0x4Eu,
    (__int64)&WPP_ebbf6b4b528633821945452aad9f1fdf_Traceguids,
    a1,
    v5,
    v4,
    v6,
    v7);
  result = 259LL;
  if ( v5 != 259 )
  {
    ACPIDeviceCompleteGenericPhase(0LL, v5, 0LL, a1);
    return 0LL;
  }
  return result;
}
