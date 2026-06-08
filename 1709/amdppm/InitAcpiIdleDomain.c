/*
 * XREFs of InitAcpiIdleDomain @ 0x1C00241A0
 * Callers:
 *     AcpiCStateNotifyWorker @ 0x1C001E370 (AcpiCStateNotifyWorker.c)
 *     InitAcpiProcessorDomains @ 0x1C00243CC (InitAcpiProcessorDomains.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000127C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C000134C (WPP_RECORDER_SF_D.c)
 *     Display_CSD @ 0x1C0003FB0 (Display_CSD.c)
 *     AcpiEval_CSD @ 0x1C001C4F8 (AcpiEval_CSD.c)
 *     ValidateAcpiIdleDomain @ 0x1C002B000 (ValidateAcpiIdleDomain.c)
 */

__int64 __fastcall InitAcpiIdleDomain(__int64 a1, unsigned int **a2, __int64 a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  unsigned int *v9; // rdi
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned int *v13; // rcx
  int v15; // [rsp+28h] [rbp-10h]
  int v16; // [rsp+28h] [rbp-10h]
  unsigned int *v17; // [rsp+58h] [rbp+20h] BYREF

  v6 = AcpiEval_CSD(a1, &v17);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v8 = a3;
    v9 = v17;
    v10 = ValidateAcpiIdleDomain(v17, v8);
    v7 = v10;
    if ( v10 >= 0 )
    {
      v7 = 0;
      Display_CSD(v9, v11, v12);
      v13 = 0LL;
      *a2 = v9;
    }
    else
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 1080), 0x10u);
      v16 = v10;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        0xCu,
        (__int64)&WPP_cc52f8a0dbbf3193fc6eb4b3e7a25b90_Traceguids,
        v16);
      v13 = v17;
    }
    if ( v13 )
      ExFreePoolWithTag(v13, 0);
  }
  else if ( v6 == -1073741772 )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      2u,
      0xAu,
      (__int64)&WPP_cc52f8a0dbbf3193fc6eb4b3e7a25b90_Traceguids);
  }
  else
  {
    v15 = v6;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      0xBu,
      (__int64)&WPP_cc52f8a0dbbf3193fc6eb4b3e7a25b90_Traceguids,
      v15);
  }
  return v7;
}
