/*
 * XREFs of ACPIDeviceIrpForwardRequest @ 0x1C00491B0
 * Callers:
 *     ACPIDeviceIrpSystemRequest @ 0x1C00492A8 (ACPIDeviceIrpSystemRequest.c)
 * Callees:
 *     WPP_RECORDER_SF_qLqss @ 0x1C000DCF4 (WPP_RECORDER_SF_qLqss.c)
 *     ACPIDispatchForwardPowerIrp @ 0x1C004BD70 (ACPIDispatchForwardPowerIrp.c)
 */

LONG __fastcall ACPIDeviceIrpForwardRequest(__int64 a1, IRP *a2, int a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  const char *v6; // rcx
  char v7; // r8
  const char *v9; // rdx
  __int64 v10; // rax

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v6 = byte_1C0066CD0;
  v7 = 0;
  v9 = byte_1C0066CD0;
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
    0x1Fu,
    (__int64)&WPP_32a24c5e9860357aa59cb74721ebb774_Traceguids,
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
