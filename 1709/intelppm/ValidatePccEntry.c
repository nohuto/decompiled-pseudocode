/*
 * XREFs of ValidatePccEntry @ 0x1C002A410
 * Callers:
 *     InitAcpiLegacyPcc @ 0x1C001F6E4 (InitAcpiLegacyPcc.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0002A20 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0008840 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall ValidatePccEntry(_DWORD *a1)
{
  unsigned int v1; // ebx
  unsigned __int16 v2; // r9

  v1 = -1073741811;
  if ( qword_1C0019AA0 )
  {
    if ( *a1 <= (unsigned int)(dword_1C0019AA8 - 4) )
    {
      if ( a1[1] <= (unsigned int)(dword_1C0019AA8 - 4) )
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
      (__int64)&WPP_43c87aadc204398ca111f18064ed4edf_Traceguids,
      KeGetPcr()->Prcb.Number);
  }
  else
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      3u,
      0x30u,
      (__int64)&WPP_43c87aadc204398ca111f18064ed4edf_Traceguids);
  }
  return v1;
}
