/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioPolicyManager@@UISessionInternalEvents@@UIAudioPolicyNotificationManager@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000ADC0
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioPolicyManager@@UISessionInternalEvents@@UIAudioPolicyNotificationManager@@@Details@WRL@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000AD40 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioPol.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioPolicyManager@@UISessionInternalEvents@@UIAudioPolicyNotificationManager@@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000AD80 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_18000AD80.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioPolicyManager,ISessionInternalEvents,IAudioPolicyNotificationManager>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  unsigned int v3; // ebx
  int v4; // edi

  v3 = 0;
  *a3 = 0LL;
  if ( *a2
    || a2[1] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    || a2[2] != *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    || a2[3] != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    if ( *a2 == -1616455430
      && a2[1] == *(_DWORD *)&GUID_9fa6d8fa_baf7_4afd_88e9_0f41e079adbe.Data2
      && a2[2] == *(_DWORD *)GUID_9fa6d8fa_baf7_4afd_88e9_0f41e079adbe.Data4
      && a2[3] == *(_DWORD *)&GUID_9fa6d8fa_baf7_4afd_88e9_0f41e079adbe.Data4[4]
      || (a1 += 8LL, *a2 == -1500859031)
      && a2[1] == *(_DWORD *)&GUID_a68ab569_b923_4330_a258_1735412d392e.Data2
      && a2[2] == *(_DWORD *)GUID_a68ab569_b923_4330_a258_1735412d392e.Data4
      && a2[3] == *(_DWORD *)&GUID_a68ab569_b923_4330_a258_1735412d392e.Data4[4] )
    {
      *a3 = a1;
      v4 = 0;
    }
    else
    {
      if ( *a2 == 1303178085
        && a2[1] == *(_DWORD *)&GUID_4daceb65_66e6_401c_bbb5_03e1343d4a0c.Data2
        && a2[2] == *(_DWORD *)GUID_4daceb65_66e6_401c_bbb5_03e1343d4a0c.Data4
        && a2[3] == *(_DWORD *)&GUID_4daceb65_66e6_401c_bbb5_03e1343d4a0c.Data4[4] )
      {
        v4 = 0;
        *a3 = a1 + 8;
      }
      else
      {
        v4 = -2147467262;
      }
      if ( v4 < 0 )
        return (unsigned int)v4;
    }
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
    return (unsigned int)v4;
  }
  *a3 = a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return v3;
}
