/*
 * XREFs of ValidateAcpi_PSD_TSD @ 0x1C002EAF8
 * Callers:
 *     InitAcpiPerfDomain @ 0x1C00216BC (InitAcpiPerfDomain.c)
 *     InitAcpiThrottleDomain @ 0x1C00218F8 (InitAcpiThrottleDomain.c)
 * Callees:
 *     WPP_RECORDER_SF_DsD @ 0x1C000B38C (WPP_RECORDER_SF_DsD.c)
 */

__int64 __fastcall ValidateAcpi_PSD_TSD(unsigned int *a1, char a2)
{
  __int64 v2; // r8
  bool v3; // zf
  unsigned __int16 v4; // r9
  unsigned int v5; // ecx
  const char *v6; // rdx
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
        if ( (unsigned int)v2 <= 0x500 )
        {
          v5 = 0;
          if ( (_DWORD)v2 )
            return v5;
          v3 = a2 == 0;
          v4 = 33;
        }
        else
        {
          v3 = a2 == 0;
          v4 = 32;
        }
      }
      else
      {
        v3 = a2 == 0;
        v4 = 31;
      }
    }
    else
    {
      v3 = a2 == 0;
      v4 = 30;
    }
  }
  else
  {
    v3 = a2 == 0;
    v4 = 29;
  }
  v6 = "_TSD";
  if ( !v3 )
    v6 = "_PSD";
  WPP_RECORDER_SF_DsD(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    (__int64)v6,
    v2,
    v4,
    v8,
    KeGetPcr()->Prcb.Number,
    v6);
  return (unsigned int)-1073741823;
}
