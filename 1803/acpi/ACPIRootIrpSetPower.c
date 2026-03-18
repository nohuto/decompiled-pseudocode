/*
 * XREFs of ACPIRootIrpSetPower @ 0x1C0039730
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C000169C (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qdqss @ 0x1C0008814 (WPP_RECORDER_SF_qdqss.c)
 *     ACPIDeviceIrpSystemRequest @ 0x1C001B4FC (ACPIDeviceIrpSystemRequest.c)
 *     ACPIDispatchForwardPowerIrp @ 0x1C00210C0 (ACPIDispatchForwardPowerIrp.c)
 */

__int64 __fastcall ACPIRootIrpSetPower(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rax
  char v5; // cl
  __int64 v6; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  const char *v8; // r8
  const char *v9; // r10
  __int64 v10; // rax

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v5 = 0;
  v6 = DeviceExtension;
  a2->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  if ( (AcpiGlobalFlags & 1) == 0 )
    KeBugCheckEx(0xA3u, 1uLL, 0xD05D5uLL, 0LL, 0LL);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->Parameters.Create.Options || (CurrentStackLocation->Parameters.Read.Length & 0x200000) != 0 )
  {
    ACPIDispatchForwardPowerIrp(a1, a2);
  }
  else
  {
    a2->IoStatus.Status = 0;
    v8 = (const char *)&unk_1C005B1F0;
    v9 = (const char *)&unk_1C005B1F0;
    if ( DeviceExtension )
    {
      v10 = *(_QWORD *)(DeviceExtension + 8);
      v5 = v6;
      if ( (v10 & 0x200000000000LL) != 0 )
      {
        v8 = *(const char **)(v6 + 560);
        if ( (v10 & 0x400000000000LL) != 0 )
          v9 = *(const char **)(v6 + 568);
      }
    }
    WPP_RECORDER_SF_qdqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)CurrentStackLocation,
      5u,
      0x18u,
      (__int64)&WPP_07ea04bf8856319f8bf6d44d5c5f0bbf_Traceguids,
      (char)a2,
      CurrentStackLocation->Parameters.Read.ByteOffset.LowPart - 1,
      v5,
      v8,
      v9);
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 680));
    ACPIDeviceIrpSystemRequest(a1, a2);
  }
  return 259LL;
}
