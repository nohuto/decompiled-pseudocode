/*
 * XREFs of StorpPutScatterGatherList @ 0x1C0033558
 * Callers:
 *     StorPortExtendedFunction @ 0x1C0002880 (StorPortExtendedFunction.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0017DD0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1C002BFFC (WPP_SF_.c)
 */

__int64 __fastcall StorpPutScatterGatherList(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx

  v2 = 0;
  if ( a1 )
  {
    if ( KeGetCurrentIrql() <= 2u )
    {
      v3 = *(_QWORD *)(**(_QWORD **)(a1 - 16) + 696LL);
      if ( v3 )
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(v3 + 8) + 96LL))(v3, a2);
      }
      else
      {
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        {
          WPP_SF_(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            0x36u,
            (__int64)&WPP_5e545f9713d1326d79f265bba4526f8b_Traceguids);
        }
        return (unsigned int)-1056964601;
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
          0x35u,
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
        0x34u,
        (__int64)&WPP_5e545f9713d1326d79f265bba4526f8b_Traceguids);
    }
    return (unsigned int)-1056964602;
  }
  return v2;
}
