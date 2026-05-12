/*
 * XREFs of StorpBuildMdlForNonPagedPool @ 0x1C0032080
 * Callers:
 *     StorPortExtendedFunction @ 0x1C0002880 (StorPortExtendedFunction.c)
 * Callees:
 *     WPP_SF_ @ 0x1C002BFFC (WPP_SF_.c)
 */

__int64 __fastcall StorpBuildMdlForNonPagedPool(__int64 a1, struct _MDL *a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( a2 )
  {
    if ( KeGetCurrentIrql() <= 2u )
    {
      MmBuildMdlForNonPagedPool(a2);
    }
    else
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      {
        WPP_SF_(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x26u,
          (__int64)&WPP_5e545f9713d1326d79f265bba4526f8b_Traceguids);
      }
      return (unsigned int)-1056964600;
    }
  }
  else
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x25u,
        (__int64)&WPP_5e545f9713d1326d79f265bba4526f8b_Traceguids);
    }
    return (unsigned int)-1056964602;
  }
  return v2;
}
