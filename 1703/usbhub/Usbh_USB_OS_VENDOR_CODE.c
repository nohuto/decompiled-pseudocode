/*
 * XREFs of Usbh_USB_OS_VENDOR_CODE @ 0x1C001B380
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C003BE5C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C00454FC (WPP_RECORDER_SF_S.c)
 */

void __fastcall Usbh_USB_OS_VENDOR_CODE(__int64 a1, __int64 a2, _BYTE *a3, unsigned int a4)
{
  _DWORD *v7; // rax
  _DWORD *v8; // rax
  _DWORD *v9; // rax

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_S(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      (_DWORD)a3,
      30,
      (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids,
      a2);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        31,
        (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids,
        a4);
  }
  if ( a4 >= 2 )
  {
    v7 = PdoExt(a1);
    v7[356] &= ~0x200u;
    if ( *a3 )
    {
      v9 = PdoExt(a1);
      v9[356] |= 0x400u;
      *((_BYTE *)PdoExt(a1) + 1424) = a3[1];
    }
    else
    {
      v8 = PdoExt(a1);
      v8[356] &= ~0x400u;
    }
  }
}
