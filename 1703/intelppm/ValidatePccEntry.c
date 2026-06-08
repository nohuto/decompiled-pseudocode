/*
 * XREFs of ValidatePccEntry @ 0x1C0026C60
 * Callers:
 *     InitAcpiLegacyPcc @ 0x1C001C474 (InitAcpiLegacyPcc.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002C2C (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0008350 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall ValidatePccEntry(_DWORD *a1)
{
  unsigned int v1; // ebx
  unsigned __int16 v2; // r9

  v1 = -1073741811;
  if ( qword_1C0016260 )
  {
    if ( *a1 <= (unsigned int)(dword_1C0016268 - 4) )
    {
      if ( a1[1] <= (unsigned int)(dword_1C0016268 - 4) )
        return 0;
      v2 = 50;
    }
    else
    {
      v2 = 49;
    }
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      v2,
      (__int64)&WPP_49e36dc7a5aa3035bdc422dc35e9613b_Traceguids,
      KeGetPcr()->Prcb.Number);
  }
  else
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      0x30u,
      (__int64)&WPP_49e36dc7a5aa3035bdc422dc35e9613b_Traceguids);
  }
  return v1;
}
