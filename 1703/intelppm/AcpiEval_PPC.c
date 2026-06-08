/*
 * XREFs of AcpiEval_PPC @ 0x1C001D7B8
 * Callers:
 *     EvtDeviceD0Entry @ 0x1C0001CD0 (EvtDeviceD0Entry.c)
 *     ProcLibDeviceStart @ 0x1C001DF9C (ProcLibDeviceStart.c)
 *     AcpiPStateNotifyWorker @ 0x1C0029750 (AcpiPStateNotifyWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002C2C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0002EE4 (WPP_RECORDER_SF_D.c)
 *     AcpiEvaluateMethod @ 0x1C001DA64 (AcpiEvaluateMethod.c)
 */

__int64 __fastcall AcpiEval_PPC(__int64 a1, unsigned int *a2)
{
  int v4; // eax
  PVOID v5; // rsi
  int v6; // ebx
  unsigned int v7; // ecx
  unsigned int *v8; // rax
  unsigned __int16 v10; // r9
  int v11; // [rsp+50h] [rbp+8h] BYREF
  PVOID P; // [rsp+60h] [rbp+18h] BYREF

  P = 0LL;
  _InterlockedOr((volatile signed __int32 *)(a1 + 1076), 0x100u);
  v4 = AcpiEvaluateMethod(a1, 1129336927, 0, (unsigned int)&P, (__int64)&v11);
  v5 = P;
  v6 = v4;
  if ( v4 < 0 )
    goto LABEL_10;
  if ( !v11 )
  {
    v10 = 33;
LABEL_18:
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      v10,
      (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids);
LABEL_20:
    v6 = -1073741275;
    goto LABEL_10;
  }
  if ( *((_DWORD *)P + 2) != 1 )
  {
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      0x22u,
      (__int64)&WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
      *((_DWORD *)P + 2));
    goto LABEL_20;
  }
  if ( *((_WORD *)P + 6) )
  {
    v10 = 35;
    goto LABEL_18;
  }
  v7 = *((_DWORD *)P + 4);
  if ( (*(_DWORD *)(a1 + 264) & 0x40000000) != 0 )
    v8 = *(unsigned int **)(a1 + 424);
  else
    v8 = *(unsigned int **)(a1 + 416);
  if ( v7 >= *v8 )
    v7 = *v8 - 1;
  *a2 = v7;
  v6 = 0;
LABEL_10:
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  if ( v6 < 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1080), 0x100u);
  return (unsigned int)v6;
}
