/*
 * XREFs of ?OnDeviceRemoval@SpatialInputControllerCollection@@MEAAJK@Z @ 0x180093690
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800367C4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DoDeviceRemoval@SpatialInputControllerCollection@@IEAAJK@Z @ 0x1800936F8 (-DoDeviceRemoval@SpatialInputControllerCollection@@IEAAJK@Z.c)
 *     ?OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z @ 0x18009CE20 (-OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z.c)
 */

__int64 __fastcall SpatialInputControllerCollection::OnDeviceRemoval(
        SpatialInputControllerCollection *this,
        unsigned int a2)
{
  int v4; // eax
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = SpatialInputControllerCollection::DoDeviceRemoval(this, a2);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x437,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
      (const char *)(unsigned int)v4);
  v5 = HIDDeviceCollection::OnDeviceRemoval(this, a2);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x43A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
      (const char *)(unsigned int)v5);
  return 0LL;
}
