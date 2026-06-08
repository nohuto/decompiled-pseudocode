/*
 * XREFs of InitAcpiThrottleDomain @ 0x1C00244F4
 * Callers:
 *     InitAcpiProcessorDomains @ 0x1C00243CC (InitAcpiProcessorDomains.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000127C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C000134C (WPP_RECORDER_SF_D.c)
 *     Display_xSD @ 0x1C0003B0C (Display_xSD.c)
 *     AcpiEval_PSD_TSD @ 0x1C001B5CC (AcpiEval_PSD_TSD.c)
 *     ValidateAcpi_PSD_TSD @ 0x1C002B2B4 (ValidateAcpi_PSD_TSD.c)
 */

__int64 __fastcall InitAcpiThrottleDomain(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  unsigned int *v4; // rdi
  int v5; // eax
  __int64 v6; // r8
  int v8; // [rsp+28h] [rbp-10h]
  int v9; // [rsp+28h] [rbp-10h]
  unsigned int *v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = AcpiEval_PSD_TSD(a1, 1146311775, &v10);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v4 = v10;
    v5 = ValidateAcpi_PSD_TSD(v10, 0LL);
    v3 = v5;
    if ( v5 >= 0 )
    {
      v3 = 0;
      Display_xSD(v4, "_TSD", v6);
    }
    else
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 1080), 0x2000u);
      v9 = v5;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0x12u,
        (__int64)&WPP_cc52f8a0dbbf3193fc6eb4b3e7a25b90_Traceguids,
        v9);
      v4 = v10;
    }
  }
  else
  {
    v4 = 0LL;
    if ( v2 == -1073741772 )
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        2u,
        0x10u,
        (__int64)&WPP_cc52f8a0dbbf3193fc6eb4b3e7a25b90_Traceguids);
    }
    else
    {
      v8 = v2;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0x11u,
        (__int64)&WPP_cc52f8a0dbbf3193fc6eb4b3e7a25b90_Traceguids,
        v8);
    }
  }
  *(_QWORD *)(a1 + 488) = v4;
  return v3;
}
