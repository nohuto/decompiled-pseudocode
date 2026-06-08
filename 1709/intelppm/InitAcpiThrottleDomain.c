/*
 * XREFs of InitAcpiThrottleDomain @ 0x1C002DF08
 * Callers:
 *     InitAcpiProcessorDomains @ 0x1C001EF9C (InitAcpiProcessorDomains.c)
 * Callees:
 *     Display_xSD @ 0x1C0002508 (Display_xSD.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002A20 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0002CD8 (WPP_RECORDER_SF_D.c)
 *     ValidateAcpi_PSD_TSD @ 0x1C001F188 (ValidateAcpi_PSD_TSD.c)
 *     AcpiEval_PSD_TSD @ 0x1C001F9C0 (AcpiEval_PSD_TSD.c)
 */

__int64 __fastcall InitAcpiThrottleDomain(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  unsigned int *v4; // rdi
  int v5; // eax
  int v7; // [rsp+28h] [rbp-10h]
  int v8; // [rsp+28h] [rbp-10h]
  unsigned int *v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = AcpiEval_PSD_TSD(a1, 1146311775, &v9);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v4 = v9;
    v5 = ValidateAcpi_PSD_TSD(v9, 0);
    v3 = v5;
    if ( v5 >= 0 )
    {
      v3 = 0;
      Display_xSD(v4, "_TSD");
    }
    else
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 1080), 0x2000u);
      v8 = v5;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0x12u,
        (__int64)&WPP_cc52f8a0dbbf3193fc6eb4b3e7a25b90_Traceguids,
        v8);
      v4 = v9;
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
      v7 = v2;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0x11u,
        (__int64)&WPP_cc52f8a0dbbf3193fc6eb4b3e7a25b90_Traceguids,
        v7);
    }
  }
  *(_QWORD *)(a1 + 488) = v4;
  return v3;
}
