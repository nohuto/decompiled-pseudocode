/*
 * XREFs of ACPIFilterIrpQueryResourceRequirements @ 0x1C007BFE0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDispatchForwardIrp @ 0x1C0001340 (ACPIDispatchForwardIrp.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C000169C (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qLqss @ 0x1C0015708 (WPP_RECORDER_SF_qLqss.c)
 *     ACPIInternalSetProximityDomain @ 0x1C007DC08 (ACPIInternalSetProximityDomain.c)
 *     ACPIInternalSetSpare @ 0x1C007DCB0 (ACPIInternalSetSpare.c)
 *     PnpBiosGetDeviceResourceList @ 0x1C0082F34 (PnpBiosGetDeviceResourceList.c)
 */

__int64 __fastcall ACPIFilterIrpQueryResourceRequirements(ULONG_PTR BugCheckParameter3, PIRP Irp)
{
  _QWORD *DeviceExtension; // rbx
  __int64 v5; // rdx
  int DeviceResourceList; // eax
  char v7; // r10
  const char *v8; // rcx
  const char *v9; // rdx
  __int64 v10; // r8
  PVOID P; // [rsp+70h] [rbp+18h] BYREF

  DeviceExtension = (_QWORD *)ACPIInternalGetDeviceExtension(BugCheckParameter3);
  ACPIInternalSetProximityDomain(DeviceExtension);
  ACPIInternalSetSpare(DeviceExtension);
  P = 0LL;
  LOBYTE(v5) = 1;
  DeviceResourceList = PnpBiosGetDeviceResourceList(BugCheckParameter3, v5, &P);
  if ( DeviceResourceList < 0 )
  {
    v7 = 0;
    v8 = byte_1C005B1F0;
    v9 = byte_1C005B1F0;
    if ( DeviceExtension )
    {
      v10 = DeviceExtension[1];
      v7 = (char)DeviceExtension;
      if ( (v10 & 0x200000000000LL) != 0 )
      {
        v8 = (const char *)DeviceExtension[70];
        if ( (v10 & 0x400000000000LL) != 0 )
          v9 = (const char *)DeviceExtension[71];
      }
    }
    WPP_RECORDER_SF_qLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      5u,
      0xFu,
      (__int64)&WPP_c218966fe9323718d778ead212d6cca7_Traceguids,
      BugCheckParameter3,
      DeviceResourceList,
      v7,
      v8,
      v9);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  return ACPIDispatchForwardIrp(BugCheckParameter3, Irp);
}
