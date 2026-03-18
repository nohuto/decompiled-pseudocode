/*
 * XREFs of ACPIFanEvent @ 0x1C004DB90
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001600 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C000F2AC (WPP_RECORDER_SF_Dqss.c)
 *     ACPIFanLoop @ 0x1C004DF94 (ACPIFanLoop.c)
 */

__int64 __fastcall ACPIFanEvent(ULONG_PTR a1, int a2)
{
  __int64 DeviceExtension; // rax
  __int64 v4; // rcx
  const char *v5; // r8
  __int64 v6; // rbx
  const char *v7; // r10
  __int64 v8; // rax
  __int64 result; // rax

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  LOBYTE(v4) = 0;
  v5 = byte_1C0066CD0;
  v6 = DeviceExtension;
  v7 = byte_1C0066CD0;
  if ( DeviceExtension )
  {
    v4 = DeviceExtension;
    v8 = *(_QWORD *)(DeviceExtension + 8);
    if ( (v8 & 0x200000000000LL) != 0 )
    {
      v5 = *(const char **)(v4 + 560);
      if ( (v8 & 0x400000000000LL) != 0 )
        v7 = *(const char **)(v4 + 568);
    }
  }
  result = WPP_RECORDER_SF_Dqss(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             4u,
             0x10u,
             0xEu,
             (__int64)&WPP_c4ce4549a8103c4f89a2f46d9050f7e8_Traceguids,
             a2,
             v4,
             v5,
             v7);
  if ( a2 == 128 )
    return ACPIFanLoop(v6, 1LL, 0LL);
  return result;
}
