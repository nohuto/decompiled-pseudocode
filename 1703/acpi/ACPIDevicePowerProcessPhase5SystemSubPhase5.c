/*
 * XREFs of ACPIDevicePowerProcessPhase5SystemSubPhase5 @ 0x1C004A230
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDeviceCompleteGenericPhase @ 0x1C000BD60 (ACPIDeviceCompleteGenericPhase.c)
 *     WPP_RECORDER_SF_qqss @ 0x1C000DE58 (WPP_RECORDER_SF_qqss.c)
 *     AMLIPauseInterpreter @ 0x1C005AC7C (AMLIPauseInterpreter.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase5SystemSubPhase5(__int64 a1)
{
  _QWORD *v1; // rax
  const char *v2; // rdx
  const char *v4; // r10
  char v5; // cl
  __int64 v6; // r8
  bool v7; // zf

  v1 = *(_QWORD **)(a1 + 40);
  v2 = byte_1C0066CD0;
  v4 = byte_1C0066CD0;
  v5 = 0;
  if ( v1 )
  {
    v6 = v1[1];
    v5 = (char)v1;
    if ( (v6 & 0x200000000000LL) != 0 )
    {
      v2 = (const char *)v1[70];
      if ( (v6 & 0x400000000000LL) != 0 )
        v4 = (const char *)v1[71];
    }
  }
  WPP_RECORDER_SF_qqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    0xAu,
    0x54u,
    (__int64)&WPP_32a24c5e9860357aa59cb74721ebb774_Traceguids,
    a1,
    v5,
    v2,
    v4);
  v7 = *(_DWORD *)(a1 + 104) == 1;
  *(_DWORD *)(a1 + 212) = 8;
  if ( !v7 )
  {
    qword_1C0076F38 = a1;
    qword_1C0076F28 = (__int64)&AcpiPauseInterpreterEntry;
    qword_1C0076F30 = (__int64)ACPIDeviceCompleteInterpreterRequest;
    AcpiPauseInterpreterEntry = (__int64)&AcpiPauseInterpreterEntry;
    if ( (unsigned int)AMLIPauseInterpreter() == 259 )
      return 259LL;
  }
  ACPIDeviceCompleteGenericPhase(0LL, 0, 0LL, a1);
  return 0LL;
}
