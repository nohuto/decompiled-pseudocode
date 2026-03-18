/*
 * XREFs of Usbh_SetPdo_SELECTIVESUSPENDED_INSTALLED @ 0x1C0029240
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x1C001B570 (PdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C003D1DC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C00463AC (WPP_RECORDER_SF_S.c)
 */

_DWORD *__fastcall Usbh_SetPdo_SELECTIVESUSPENDED_INSTALLED(__int64 a1, __int64 a2, _DWORD *a3, int a4)
{
  _DWORD *result; // rax
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    result = (_DWORD *)WPP_RECORDER_SF_S(
                         WPP_GLOBAL_Control->DeviceExtension,
                         0,
                         (_DWORD)a3,
                         24,
                         (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids,
                         a2);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    result = (_DWORD *)WPP_RECORDER_SF_d(
                         WPP_GLOBAL_Control->DeviceExtension,
                         0,
                         1,
                         25,
                         (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids,
                         a4);
  if ( a4 == 4 )
  {
    if ( *a3 )
    {
      result = PdoExt(a1);
      *((_BYTE *)result + 2725) = 1;
    }
  }
  return result;
}
