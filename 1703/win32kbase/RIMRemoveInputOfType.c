/*
 * XREFs of RIMRemoveInputOfType @ 0x1C0092F20
 * Callers:
 *     ?PreUninitialize@CHidInput@@EEAAXXZ @ 0x1C004ECF0 (-PreUninitialize@CHidInput@@EEAAXXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0051A08 (WPP_RECORDER_SF_D.c)
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0051DE0 (RawInputManagerObjectResolveHandle.c)
 *     RIMUnRegisterForInputDeviceTypeClassNotifications @ 0x1C0093B28 (RIMUnRegisterForInputDeviceTypeClassNotifications.c)
 *     RIMRemoveDevOfInputType @ 0x1C0094240 (RIMRemoveDevOfInputType.c)
 *     RimInputTypeToDeviceType @ 0x1C00953D0 (RimInputTypeToDeviceType.c)
 */

__int64 __fastcall RIMRemoveInputOfType(char *a1, unsigned int a2)
{
  unsigned int v2; // edi
  int v4; // esi
  _DWORD *v5; // rbx
  int v6; // edx
  unsigned int v7; // eax
  int v9; // r9d
  int v10; // [rsp+28h] [rbp-20h]
  PVOID Object; // [rsp+60h] [rbp+18h] BYREF

  v2 = a2;
  LOBYTE(a2) = 3;
  WPP_RECORDER_SF_(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    19,
    20,
    (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids);
  v4 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v4 >= 0 )
  {
    v5 = Object;
    RIMLockExclusive((__int64)Object + 96);
    if ( *((_BYTE *)v5 + 73) || *((_BYTE *)v5 + 75) )
    {
      v4 = -1073741637;
      v9 = 23;
    }
    else if ( v2 && ((v2 - 1) & v2) == 0 || (v2 & 0x1C) != 0 )
    {
      if ( (v2 & v5[19]) != 0 )
      {
        RIMRemoveDevOfInputType(v5, v2);
        v7 = RimInputTypeToDeviceType(v2);
        v4 = RIMUnRegisterForInputDeviceTypeClassNotifications(v5, v7);
        v5[19] &= ~v2;
LABEL_9:
        *((_QWORD *)v5 + 13) = 0LL;
        ExReleasePushLockExclusiveEx(v5 + 24, 0LL);
        KeLeaveCriticalRegion();
        ObfDereferenceObject(v5);
        goto LABEL_10;
      }
      v4 = -1073741637;
      v9 = 21;
    }
    else
    {
      v4 = -1073741811;
      v9 = 22;
    }
    LOBYTE(v6) = 3;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v6,
      18,
      v9,
      (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids);
    goto LABEL_9;
  }
LABEL_10:
  v10 = v4;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x13u,
    0x18u,
    (__int64)&WPP_e5398ad4ff56352cfa5f0c085337fff4_Traceguids,
    v10);
  return (unsigned int)v4;
}
