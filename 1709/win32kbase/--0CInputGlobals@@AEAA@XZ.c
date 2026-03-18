/*
 * XREFs of ??0CInputGlobals@@AEAA@XZ @ 0x1C00112C4
 * Callers:
 *     InputInitialize @ 0x1C000650C (InputInitialize.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

CInputGlobals *__fastcall CInputGlobals::CInputGlobals(CInputGlobals *this)
{
  int v2; // edx
  int WakeSourceInputTypeMask; // edi
  int v4; // edx
  int UndimSourceInputTypeMask; // edi
  int v6; // edx
  CInputGlobals *result; // rax

  *((_QWORD *)this + 2) = 0LL;
  memset((char *)this + 24, 0, 0x38uLL);
  *((_DWORD *)this + 20) = 0;
  *((_WORD *)this + 42) = 0;
  *((_QWORD *)this + 11) = 0LL;
  *((_WORD *)this + 48) = 0;
  *((_BYTE *)this + 98) = 0;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v2,
      14,
      310,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  }
  WakeSourceInputTypeMask = 0;
  if ( (int)IsGetWakeSourceInputTypeMaskSupported() >= 0 )
    WakeSourceInputTypeMask = GetWakeSourceInputTypeMask();
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v4) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v4,
      14,
      311,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  }
  *((_DWORD *)this + 25) = WakeSourceInputTypeMask;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v4) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v4,
      14,
      312,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  }
  UndimSourceInputTypeMask = 0;
  if ( (int)IsGetUndimSourceInputTypeMaskSupported() >= 0 )
    UndimSourceInputTypeMask = GetUndimSourceInputTypeMask();
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v6) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v6,
      14,
      313,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  }
  result = this;
  *((_DWORD *)this + 26) = UndimSourceInputTypeMask;
  return result;
}
