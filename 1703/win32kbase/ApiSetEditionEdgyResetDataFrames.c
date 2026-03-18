/*
 * XREFs of ApiSetEditionEdgyResetDataFrames @ 0x1C013A850
 * Callers:
 *     ?UnreferenceUndispatchedFrame@CTouchProcessor@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0128610 (-UnreferenceUndispatchedFrame@CTouchProcessor@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall ApiSetEditionEdgyResetDataFrames(__int64 a1)
{
  __int64 result; // rax

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      14,
      160,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  result = IsEditionEdgyResetDataFramesSupported();
  if ( (int)result >= 0 )
    result = EditionEdgyResetDataFrames(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    return WPP_RECORDER_SF_(
             WPP_GLOBAL_Control->DeviceExtension,
             5,
             14,
             161,
             (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  return result;
}
