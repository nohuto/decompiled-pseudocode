/*
 * XREFs of _anonymous_namespace_::CancelCoolSwitchWithForegroundCheck @ 0x1C0088F98
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C00464F0 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     ApiSetEditionForegroundQAccessibleToMouseProducer @ 0x1C008849C (ApiSetEditionForegroundQAccessibleToMouseProducer.c)
 */

char __fastcall anonymous_namespace_::CancelCoolSwitchWithForegroundCheck(char a1, char a2, __int64 *a3)
{
  char v5; // bl
  __int64 v6; // rdx
  int v8; // eax
  __int64 v9; // [rsp+30h] [rbp-18h] BYREF
  int v10; // [rsp+38h] [rbp-10h]
  int v11; // [rsp+50h] [rbp+8h] BYREF

  LOBYTE(v11) = a1;
  v5 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      14,
      20,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  v11 = 0;
  if ( (int)IsEditionCancelCoolSwitchSupported() >= 0 )
    EditionCancelCoolSwitch(&v11);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      14,
      21,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  if ( !v11 )
    return 1;
  if ( a2 )
    return 1;
  v8 = *((_DWORD *)a3 + 2);
  v9 = *a3;
  v10 = v8;
  if ( (unsigned int)ApiSetEditionForegroundQAccessibleToMouseProducer(&v9, v6, 0) )
    return 1;
  return v5;
}
