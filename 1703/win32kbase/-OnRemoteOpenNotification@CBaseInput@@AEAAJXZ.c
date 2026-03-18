/*
 * XREFs of ?OnRemoteOpenNotification@CBaseInput@@AEAAJXZ @ 0x1C009A400
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     ?RimInputTypeToDeviceInputType@CBaseInput@@AEBAIXZ @ 0x1C004EFC0 (-RimInputTypeToDeviceInputType@CBaseInput@@AEBAIXZ.c)
 *     WPP_RECORDER_SF_D @ 0x1C0051A08 (WPP_RECORDER_SF_D.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C01008F0 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 */

__int64 __fastcall CBaseInput::OnRemoteOpenNotification(CBaseInput *this)
{
  int v2; // eax
  int v3; // edx
  __int64 v4; // r9
  unsigned int v5; // ebx
  unsigned __int16 v7; // r9
  __int64 v8; // [rsp+28h] [rbp-20h]
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  RtlInitUnicodeString(&DestinationString, 0LL);
  v2 = CBaseInput::RimInputTypeToDeviceInputType(this);
  v4 = -1LL;
  if ( v2 )
  {
    if ( v2 == 1 )
      v4 = ghRemoteKeyboardChannel;
  }
  else
  {
    v4 = ghRemoteMouseChannel;
  }
  v5 = -1073741816;
  if ( v4 == -1 )
  {
    v7 = 10;
    goto LABEL_12;
  }
  if ( v4 )
  {
    v2 = RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle(
           *((_QWORD *)this + 1),
           (unsigned int)&DestinationString,
           v2,
           v4,
           0,
           0LL);
    v5 = v2;
    if ( v2 >= 0 )
      return v5;
    v7 = 12;
LABEL_12:
    LODWORD(v8) = v2;
    WPP_RECORDER_SF_D(gBaseLog, 2u, 2u, v7, (__int64)&WPP_78a9c3fec3703cfbc35f8dcb850995ce_Traceguids, v8);
    return v5;
  }
  LOBYTE(v3) = 2;
  WPP_RECORDER_SF_(gBaseLog, v3, 2, 11, (__int64)&WPP_78a9c3fec3703cfbc35f8dcb850995ce_Traceguids);
  return 0;
}
