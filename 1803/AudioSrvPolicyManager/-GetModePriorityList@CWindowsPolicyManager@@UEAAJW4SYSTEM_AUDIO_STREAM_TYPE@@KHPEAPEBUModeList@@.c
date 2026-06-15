/*
 * XREFs of ?GetModePriorityList@CWindowsPolicyManager@@UEAAJW4SYSTEM_AUDIO_STREAM_TYPE@@KHPEAPEBUModeList@@@Z @ 0x180009660
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CWindowsPolicyManager::GetModePriorityList(
        __int64 a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        _QWORD *a5)
{
  __int64 result; // rax
  __int64 v6; // rdx

  result = 0LL;
  if ( a2 )
  {
    if ( a2 != 1 )
      return 2147942487LL;
  }
  else if ( a3 >= 0x15 )
  {
    return 2147942487LL;
  }
  if ( a2 == 1 && a3 >= 0x15 )
    return 2147942487LL;
  if ( !a5 )
    return 2147500035LL;
  if ( a2 )
    v6 = (__int64)*(&off_18003A3E0 + a3);
  else
    v6 = (__int64)*(&off_18003A5E0 + a3);
  *a5 = v6;
  return result;
}
