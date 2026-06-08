/*
 * XREFs of InitAcpiPerfDomain @ 0x1C002124C
 * Callers:
 *     InitAcpiProcessorDomains @ 0x1C002135C (InitAcpiProcessorDomains.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000122C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C00012FC (WPP_RECORDER_SF_D.c)
 *     Display_xSD @ 0x1C0003A70 (Display_xSD.c)
 *     AcpiEval_PSD_TSD @ 0x1C00185DC (AcpiEval_PSD_TSD.c)
 *     ValidateAcpi_PSD_TSD @ 0x1C00280BC (ValidateAcpi_PSD_TSD.c)
 */

__int64 __fastcall InitAcpiPerfDomain(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rdx
  unsigned int v4; // ebx
  unsigned int *v5; // rdi
  int v6; // eax
  int v8; // [rsp+28h] [rbp-10h]
  int v9; // [rsp+28h] [rbp-10h]
  unsigned int *v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = AcpiEval_PSD_TSD(a1, 1146310751, &v10);
  v4 = v2;
  if ( v2 >= 0 )
  {
    v5 = v10;
    LOBYTE(v3) = 1;
    v6 = ValidateAcpi_PSD_TSD(v10, v3);
    v4 = v6;
    if ( v6 >= 0 )
    {
      v4 = 0;
      Display_xSD(v5, "_PSD");
    }
    else
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 1080), 0x200u);
      v9 = v6;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0xFu,
        (__int64)&WPP_735373a28c6b3c2202f6b7fd0ad43d76_Traceguids,
        v9);
      v5 = v10;
    }
  }
  else
  {
    v5 = 0LL;
    if ( v2 == -1073741772 )
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        2u,
        0xDu,
        (__int64)&WPP_735373a28c6b3c2202f6b7fd0ad43d76_Traceguids);
    }
    else
    {
      v8 = v2;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0xEu,
        (__int64)&WPP_735373a28c6b3c2202f6b7fd0ad43d76_Traceguids,
        v8);
    }
  }
  *(_QWORD *)(a1 + 440) = v5;
  return v4;
}
