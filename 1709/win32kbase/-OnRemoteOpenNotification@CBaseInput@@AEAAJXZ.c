/*
 * XREFs of ?OnRemoteOpenNotification@CBaseInput@@AEAAJXZ @ 0x1C00A5750
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C001802C (WPP_RECORDER_SF_d.c)
 *     ?RimInputTypeToDeviceInputType@CBaseInput@@AEBAIXZ @ 0x1C0019964 (-RimInputTypeToDeviceInputType@CBaseInput@@AEBAIXZ.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C0100D30 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 */

__int64 __fastcall CBaseInput::OnRemoteOpenNotification(CBaseInput *this)
{
  int v2; // eax
  __int64 v3; // r9
  unsigned int v4; // ebx
  unsigned __int16 v6; // r9
  __int64 v7; // [rsp+28h] [rbp-20h]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  RtlInitUnicodeString(&DestinationString, 0LL);
  v2 = CBaseInput::RimInputTypeToDeviceInputType(this);
  v3 = -1LL;
  if ( v2 )
  {
    if ( v2 == 1 )
      v3 = ghRemoteKeyboardChannel;
  }
  else
  {
    v3 = ghRemoteMouseChannel;
  }
  v4 = -1073741816;
  if ( v3 == -1 )
  {
    v6 = 11;
    goto LABEL_12;
  }
  if ( v3 )
  {
    v2 = RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle(
           *((_QWORD *)this + 1),
           (unsigned int)&DestinationString,
           v2,
           v3,
           0,
           0LL);
    v4 = v2;
    if ( v2 >= 0 )
      return v4;
    v6 = 13;
LABEL_12:
    LODWORD(v7) = v2;
    WPP_RECORDER_SF_d(gBaseLog, 2u, 2u, v6, (__int64)&WPP_3391509809d63fedf80dfe580f44325a_Traceguids, v7);
    return v4;
  }
  WPP_RECORDER_SF_(gBaseLog, 2u, 2u, 0xCu, (__int64)&WPP_3391509809d63fedf80dfe580f44325a_Traceguids);
  return 0;
}
