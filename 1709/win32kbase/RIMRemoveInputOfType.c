/*
 * XREFs of RIMRemoveInputOfType @ 0x1C0008F10
 * Callers:
 *     ?PreUninitialize@CHidInput@@EEAAXXZ @ 0x1C00195F0 (-PreUninitialize@CHidInput@@EEAAXXZ.c)
 * Callees:
 *     RimInputTypeToDeviceType @ 0x1C0008EE0 (RimInputTypeToDeviceType.c)
 *     RIMUnRegisterForInputDeviceTypeClassNotifications @ 0x1C0009DB8 (RIMUnRegisterForInputDeviceTypeClassNotifications.c)
 *     RIMRemoveDevOfInputType @ 0x1C000C5D4 (RIMRemoveDevOfInputType.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C001802C (WPP_RECORDER_SF_d.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0019000 (RawInputManagerObjectResolveHandle.c)
 */

__int64 __fastcall RIMRemoveInputOfType(__int64 a1, unsigned int a2)
{
  unsigned int v2; // edi
  __int64 v4; // r8
  int v5; // edx
  int v6; // esi
  _DWORD *v7; // rbx
  int v8; // edx
  unsigned int v9; // eax
  int v11; // r9d
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  v2 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    19,
    20,
    (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids);
  LOBYTE(v4) = 1;
  v6 = RawInputManagerObjectResolveHandle(a1, 3LL, v4, &Object);
  if ( v6 >= 0 )
  {
    v7 = Object;
    RIMLockExclusive((char *)Object + 96);
    if ( *((_BYTE *)v7 + 73) || *((_BYTE *)v7 + 75) )
    {
      v6 = -1073741637;
      v11 = 23;
    }
    else if ( v2 && ((v2 - 1) & v2) == 0 || (v2 & 0x1C) != 0 )
    {
      if ( (v2 & v7[19]) != 0 )
      {
        RIMRemoveDevOfInputType(v7, v2);
        v9 = RimInputTypeToDeviceType(v2);
        v6 = RIMUnRegisterForInputDeviceTypeClassNotifications(v7, v9);
        v7[19] &= ~v2;
LABEL_9:
        *((_QWORD *)v7 + 13) = 0LL;
        ExReleasePushLockExclusiveEx(v7 + 24, 0LL);
        KeLeaveCriticalRegion();
        ObfDereferenceObject(v7);
        goto LABEL_10;
      }
      v6 = -1073741637;
      v11 = 21;
    }
    else
    {
      v6 = -1073741811;
      v11 = 22;
    }
    LOBYTE(v8) = 3;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v8,
      18,
      v11,
      (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids);
    goto LABEL_9;
  }
LABEL_10:
  LOBYTE(v5) = 3;
  WPP_RECORDER_SF_d(
    WPP_GLOBAL_Control->DeviceExtension,
    v5,
    19,
    24,
    (__int64)&WPP_a618b936d2643f4e5ddcd08b3be4955f_Traceguids,
    v6);
  return (unsigned int)v6;
}
