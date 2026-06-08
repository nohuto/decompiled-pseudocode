/*
 * XREFs of ValidateAcpi_PSD_TSD @ 0x1C001BF18
 * Callers:
 *     InitAcpiPerfDomain @ 0x1C001BEA4 (InitAcpiPerfDomain.c)
 *     InitAcpiThrottleDomain @ 0x1C002A678 (InitAcpiThrottleDomain.c)
 * Callees:
 *     WPP_RECORDER_SF_DsD @ 0x1C0007FE0 (WPP_RECORDER_SF_DsD.c)
 */

__int64 __fastcall ValidateAcpi_PSD_TSD(unsigned int *a1, char a2)
{
  __int64 v2; // r8
  unsigned int v3; // ecx
  bool v5; // zf
  unsigned __int16 v6; // r9
  const char *v7; // rdx
  int v8; // [rsp+20h] [rbp-28h]

  v2 = *a1;
  if ( (_DWORD)v2 == 1 )
  {
    v2 = a1[1];
    if ( (_DWORD)v2 == 5 )
    {
      v2 = a1[4];
      if ( (unsigned int)(v2 - 252) <= 2 || (_DWORD)v2 == 1 )
      {
        v2 = a1[5];
        if ( (unsigned int)v2 > 0x280 )
        {
          v5 = a2 == 0;
          v6 = 32;
        }
        else
        {
          v3 = 0;
          if ( (_DWORD)v2 )
            return v3;
          v5 = a2 == 0;
          v6 = 33;
        }
      }
      else
      {
        v5 = a2 == 0;
        v6 = 31;
      }
    }
    else
    {
      v5 = a2 == 0;
      v6 = 30;
    }
  }
  else
  {
    v5 = a2 == 0;
    v6 = 29;
  }
  v7 = "_PSD";
  if ( v5 )
    v7 = "_TSD";
  WPP_RECORDER_SF_DsD(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    (__int64)v7,
    v2,
    v6,
    v8,
    KeGetPcr()->Prcb.Number,
    v7);
  return (unsigned int)-1073741823;
}
