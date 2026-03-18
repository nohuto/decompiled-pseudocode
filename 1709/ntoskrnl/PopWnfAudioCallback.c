/*
 * XREFs of PopWnfAudioCallback @ 0x140451960
 * Callers:
 *     <none>
 * Callees:
 *     PopPowerRequestNotifyAudioStateChanged @ 0x14000EF00 (PopPowerRequestNotifyAudioStateChanged.c)
 *     PopGetDozeTimerSource @ 0x14000EF34 (PopGetDozeTimerSource.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     PopReleasePolicyLock @ 0x1404242E4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140424608 (PopAcquirePolicyLock.c)
 *     PopAudioAccountingCallback @ 0x140451A08 (PopAudioAccountingCallback.c)
 *     ExQueryWnfStateData @ 0x140597570 (ExQueryWnfStateData.c)
 *     PopUpdateSmartUserPresencePredictions @ 0x14070A4AC (PopUpdateSmartUserPresencePredictions.c)
 */

__int64 __fastcall PopWnfAudioCallback(__int64 a1)
{
  int v1; // ebx
  __int64 v2; // rcx
  unsigned int v4; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v5[8]; // [rsp+28h] [rbp-20h] BYREF
  _BYTE v6[8]; // [rsp+30h] [rbp-18h] BYREF

  v4 = 8;
  v1 = ((__int64 (__fastcall *)(__int64, _BYTE *, _BYTE *, unsigned int *))ExQueryWnfStateData)(a1, v5, v6, &v4);
  if ( v1 >= 0 )
  {
    if ( v4 < 8 )
    {
      return 0;
    }
    else
    {
      PopAcquirePolicyLock();
      if ( (v6[0] & 2) != 0 )
      {
        byte_1403661ED = 1;
        qword_140389C18 = MEMORY[0xFFFFF78000000008];
        if ( (unsigned int)PopGetDozeTimerSource() == 2 )
          PopUpdateSmartUserPresencePredictions(0LL, 5LL);
      }
      else
      {
        byte_1403661ED = 0;
        PopAudioAccountingCallback(0LL);
      }
      LOBYTE(v2) = byte_1403661ED;
      PopPowerRequestNotifyAudioStateChanged(v2);
      PopReleasePolicyLock();
    }
  }
  return (unsigned int)v1;
}
