/*
 * XREFs of AcpiEval_TPC @ 0x1C002C8D8
 * Callers:
 *     EvtDeviceD0Entry @ 0x1C00035B0 (EvtDeviceD0Entry.c)
 *     ProcLibDeviceStart @ 0x1C0021204 (ProcLibDeviceStart.c)
 *     AcpiTStateNotifyWorker @ 0x1C002DB80 (AcpiTStateNotifyWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002A20 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0002CD8 (WPP_RECORDER_SF_D.c)
 *     AcpiEvaluateMethod @ 0x1C0020CD4 (AcpiEvaluateMethod.c)
 */

__int64 __fastcall AcpiEval_TPC(__int64 a1, unsigned int *a2)
{
  int v4; // ebx
  PVOID v5; // rdi
  unsigned __int16 v6; // r9
  unsigned int v7; // ecx
  unsigned int v8; // edx
  int v10; // [rsp+50h] [rbp+8h] BYREF
  PVOID P; // [rsp+60h] [rbp+18h] BYREF

  P = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1076), 0x1000u);
  v4 = AcpiEvaluateMethod(a1, 1129337951, 0LL, (unsigned int **)&P, &v10);
  if ( v4 < 0 )
    goto LABEL_15;
  v5 = P;
  if ( v10 )
  {
    if ( *((_DWORD *)P + 2) != 1 )
    {
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0x28u,
        (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
        *((_DWORD *)P + 2));
      goto LABEL_5;
    }
    if ( !*((_WORD *)P + 6) )
    {
      v7 = *((_DWORD *)P + 4);
      v8 = **(_DWORD **)(a1 + 472);
      if ( v7 >= v8 )
        v7 = v8 - 1;
      *a2 = v7;
      v4 = 0;
      goto LABEL_13;
    }
    v6 = 41;
  }
  else
  {
    v6 = 39;
  }
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    2u,
    1u,
    v6,
    (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
LABEL_5:
  v4 = -1073741275;
LABEL_13:
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
LABEL_15:
  if ( v4 < 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1080), 0x1000u);
  return (unsigned int)v4;
}
