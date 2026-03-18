/*
 * XREFs of ACPIDeviceIrpForwardRequest @ 0x1C001B400
 * Callers:
 *     ACPIDeviceIrpSystemRequest @ 0x1C001B4FC (ACPIDeviceIrpSystemRequest.c)
 * Callees:
 *     WPP_RECORDER_SF_qLqss @ 0x1C0015708 (WPP_RECORDER_SF_qLqss.c)
 *     ACPIDispatchForwardPowerIrp @ 0x1C00210C0 (ACPIDispatchForwardPowerIrp.c)
 *     ACPIInternalDecrementIrpReferenceCount @ 0x1C0029B28 (ACPIInternalDecrementIrpReferenceCount.c)
 */

__int64 __fastcall ACPIDeviceIrpForwardRequest(__int64 a1, IRP *a2, int a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  const char *v6; // rcx
  char v7; // r8
  const char *v9; // rdx
  __int64 v10; // rax

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v6 = (const char *)&unk_1C005B1F0;
  v7 = 0;
  v9 = (const char *)&unk_1C005B1F0;
  if ( a1 )
  {
    v10 = *(_QWORD *)(a1 + 8);
    v7 = a1;
    if ( (v10 & 0x200000000000LL) != 0 )
    {
      v6 = *(const char **)(a1 + 560);
      if ( (v10 & 0x400000000000LL) != 0 )
        v9 = *(const char **)(a1 + 568);
    }
  }
  WPP_RECORDER_SF_qLqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    0xAu,
    0x20u,
    (__int64)&WPP_ebbf6b4b528633821945452aad9f1fdf_Traceguids,
    (char)a2,
    a3,
    v7,
    v6,
    v9);
  if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 1 )
    *(_BYTE *)(a1 + 508) = 0;
  if ( a3 >= 0 )
  {
    ACPIDispatchForwardPowerIrp(CurrentStackLocation->DeviceObject, a2);
  }
  else
  {
    a2->IoStatus.Status = a3;
    IofCompleteRequest(a2, 0);
  }
  return ACPIInternalDecrementIrpReferenceCount(a1);
}
