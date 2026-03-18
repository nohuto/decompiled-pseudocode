/*
 * XREFs of ACPIDeviceIrpForwardRequest @ 0x1C0048590
 * Callers:
 *     ACPIDeviceIrpSystemRequest @ 0x1C004868C (ACPIDeviceIrpSystemRequest.c)
 * Callees:
 *     ACPIInternalDecrementIrpReferenceCount @ 0x1C0003FF4 (ACPIInternalDecrementIrpReferenceCount.c)
 *     WPP_RECORDER_SF_qLqss @ 0x1C000544C (WPP_RECORDER_SF_qLqss.c)
 *     ACPIDispatchForwardPowerIrp @ 0x1C004B170 (ACPIDispatchForwardPowerIrp.c)
 */

LONG __fastcall ACPIDeviceIrpForwardRequest(__int64 a1, IRP *a2, int a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  const char *v6; // rcx
  char v7; // r8
  const char *v9; // rdx
  __int64 v10; // rax

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v6 = (const char *)&unk_1C0067B08;
  v7 = 0;
  v9 = (const char *)&unk_1C0067B08;
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
    (__int64)&WPP_865309cb09b9397d2632e54924735df7_Traceguids,
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
