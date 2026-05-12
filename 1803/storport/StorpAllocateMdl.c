/*
 * XREFs of StorpAllocateMdl @ 0x1C0031F4C
 * Callers:
 *     StorPortExtendedFunction @ 0x1C0002880 (StorPortExtendedFunction.c)
 * Callees:
 *     WPP_SF_ @ 0x1C002BFFC (WPP_SF_.c)
 */

__int64 __fastcall StorpAllocateMdl(__int64 a1, void *a2, ULONG a3, PMDL *a4)
{
  unsigned int v4; // ebx
  PDEVICE_OBJECT v6; // rcx
  unsigned __int16 v7; // dx
  PMDL Mdl; // rax

  v4 = 0;
  if ( !a2 )
  {
    v6 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      return (unsigned int)-1056964602;
    }
    v7 = 31;
LABEL_6:
    WPP_SF_((__int64)v6->AttachedDevice, v7, (__int64)&WPP_5e545f9713d1326d79f265bba4526f8b_Traceguids);
    return (unsigned int)-1056964602;
  }
  if ( !a4 )
  {
    v6 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      return (unsigned int)-1056964602;
    }
    v7 = 32;
    goto LABEL_6;
  }
  *a4 = 0LL;
  if ( KeGetCurrentIrql() <= 2u )
  {
    Mdl = IoAllocateMdl(a2, a3, 0, 0, 0LL);
    *a4 = Mdl;
    if ( !Mdl )
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      {
        WPP_SF_(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x22u,
          (__int64)&WPP_5e545f9713d1326d79f265bba4526f8b_Traceguids);
      }
      return (unsigned int)-1056964605;
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
        0x21u,
        (__int64)&WPP_5e545f9713d1326d79f265bba4526f8b_Traceguids);
    }
    return (unsigned int)-1056964600;
  }
  return v4;
}
