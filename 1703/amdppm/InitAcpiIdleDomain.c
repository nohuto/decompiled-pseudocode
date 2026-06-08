/*
 * XREFs of InitAcpiIdleDomain @ 0x1C0021130
 * Callers:
 *     AcpiCStateNotifyWorker @ 0x1C001B370 (AcpiCStateNotifyWorker.c)
 *     InitAcpiProcessorDomains @ 0x1C002135C (InitAcpiProcessorDomains.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000122C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C00012FC (WPP_RECORDER_SF_D.c)
 *     Display_CSD @ 0x1C0003F44 (Display_CSD.c)
 *     AcpiEval_CSD @ 0x1C0019508 (AcpiEval_CSD.c)
 *     ValidateAcpiIdleDomain @ 0x1C0027DD0 (ValidateAcpiIdleDomain.c)
 */

__int64 __fastcall InitAcpiIdleDomain(__int64 a1, int **a2, __int64 a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  int *v9; // rdi
  int v10; // eax
  int *v11; // rcx
  int v13; // [rsp+28h] [rbp-10h]
  int v14; // [rsp+28h] [rbp-10h]
  int *v15; // [rsp+58h] [rbp+20h] BYREF

  v6 = AcpiEval_CSD(a1, &v15);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v8 = a3;
    v9 = v15;
    v10 = ValidateAcpiIdleDomain(v15, v8);
    v7 = v10;
    if ( v10 >= 0 )
    {
      v7 = 0;
      Display_CSD(v9);
      v11 = 0LL;
      *a2 = v9;
    }
    else
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 1080), 0x10u);
      v14 = v10;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        3u,
        0xCu,
        (__int64)&WPP_735373a28c6b3c2202f6b7fd0ad43d76_Traceguids,
        v14);
      v11 = v15;
    }
    if ( v11 )
      ExFreePoolWithTag(v11, 0);
  }
  else if ( v6 == -1073741772 )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      2u,
      0xAu,
      (__int64)&WPP_735373a28c6b3c2202f6b7fd0ad43d76_Traceguids);
  }
  else
  {
    v13 = v6;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      0xBu,
      (__int64)&WPP_735373a28c6b3c2202f6b7fd0ad43d76_Traceguids,
      v13);
  }
  return v7;
}
