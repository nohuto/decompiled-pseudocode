/*
 * XREFs of PopWnfAudioCallback @ 0x140575E70
 * Callers:
 *     <none>
 * Callees:
 *     PopGetDozeTimerSource @ 0x140131D84 (PopGetDozeTimerSource.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     PopReleasePolicyLock @ 0x1404046BC (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1404046F8 (PopAcquirePolicyLock.c)
 *     ExQueryWnfStateData @ 0x140457810 (ExQueryWnfStateData.c)
 *     PopAudioAccountingCallback @ 0x140575F18 (PopAudioAccountingCallback.c)
 *     PopUpdateSmartUserPresencePredictions @ 0x1406D4BCC (PopUpdateSmartUserPresencePredictions.c)
 */

__int64 __fastcall PopWnfAudioCallback(__int64 a1)
{
  int v1; // ebx
  unsigned int v3; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v4[8]; // [rsp+28h] [rbp-20h] BYREF
  _BYTE v5[8]; // [rsp+30h] [rbp-18h] BYREF

  v3 = 8;
  v1 = ExQueryWnfStateData(a1, (__int64)v4, (__int64)v5, &v3);
  if ( v1 >= 0 )
  {
    if ( v3 < 8 )
    {
      return 0;
    }
    else
    {
      PopAcquirePolicyLock();
      if ( (v5[0] & 2) != 0 )
      {
        byte_14034BB6D = 1;
        qword_14036E198 = MEMORY[0xFFFFF78000000008];
        if ( (unsigned int)PopGetDozeTimerSource() == 2 )
          PopUpdateSmartUserPresencePredictions(0LL, 5LL);
      }
      else
      {
        byte_14034BB6D = 0;
        PopAudioAccountingCallback(0LL);
      }
      PopReleasePolicyLock();
    }
  }
  return (unsigned int)v1;
}
