/*
 * XREFs of InitAcpi2CStates @ 0x1C0022BD4
 * Callers:
 *     InitAcpiCStates @ 0x1C0022868 (InitAcpiCStates.c)
 *     AcpiCStateNotifyWorker @ 0x1C0026660 (AcpiCStateNotifyWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00010B0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0001374 (WPP_RECORDER_SF_D.c)
 *     AcpiEval_CST @ 0x1C00232B0 (AcpiEval_CST.c)
 *     ValidateAcpiCStates @ 0x1C002E98C (ValidateAcpiCStates.c)
 */

__int64 __fastcall InitAcpi2CStates(__int64 a1, _QWORD *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  void *v6; // rdi
  int v7; // eax
  void *v8; // rcx
  int v10; // [rsp+28h] [rbp-10h]
  int v11; // [rsp+28h] [rbp-10h]
  void *v12; // [rsp+50h] [rbp+18h] BYREF

  v12 = 0LL;
  v4 = AcpiEval_CST(a1, &v12);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v6 = v12;
    v7 = ValidateAcpiCStates(v12);
    v5 = v7;
    if ( v7 >= 0 )
    {
      v8 = 0LL;
      *a2 = v6;
      v5 = 0;
    }
    else
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 1080), 8u);
      v11 = v7;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        0xCu,
        (__int64)&WPP_59812b689cd0301398adc603ff5c4ec4_Traceguids,
        v11);
      v8 = v12;
    }
    if ( v8 )
      ExFreePoolWithTag(v8, 0);
  }
  else if ( v4 == -1073741772 )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      2u,
      0xAu,
      (__int64)&WPP_59812b689cd0301398adc603ff5c4ec4_Traceguids);
  }
  else
  {
    v10 = v4;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      0xBu,
      (__int64)&WPP_59812b689cd0301398adc603ff5c4ec4_Traceguids,
      v10);
  }
  return v5;
}
