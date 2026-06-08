/*
 * XREFs of InitAcpi2CStates @ 0x1C001C020
 * Callers:
 *     InitAcpiCStates @ 0x1C001BF78 (InitAcpiCStates.c)
 *     AcpiCStateNotifyWorker @ 0x1C0028B60 (AcpiCStateNotifyWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002C2C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0002EE4 (WPP_RECORDER_SF_D.c)
 *     ValidateAcpiCStates @ 0x1C001C098 (ValidateAcpiCStates.c)
 *     AcpiEval_CST @ 0x1C001C9A8 (AcpiEval_CST.c)
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
  if ( v4 < 0 )
  {
    if ( v4 == -1073741772 )
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        2u,
        0xAu,
        (__int64)&WPP_8474da2f7cee3ef5b100a604c511d315_Traceguids);
    }
    else
    {
      v10 = v4;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0xBu,
        (__int64)&WPP_8474da2f7cee3ef5b100a604c511d315_Traceguids,
        v10);
    }
  }
  else
  {
    v6 = v12;
    v7 = ValidateAcpiCStates(v12);
    v5 = v7;
    if ( v7 < 0 )
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 1080), 8u);
      v11 = v7;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        0xCu,
        (__int64)&WPP_8474da2f7cee3ef5b100a604c511d315_Traceguids,
        v11);
      v8 = v12;
    }
    else
    {
      v8 = 0LL;
      *a2 = v6;
      v5 = 0;
    }
    if ( v8 )
      ExFreePoolWithTag(v8, 0);
  }
  return v5;
}
