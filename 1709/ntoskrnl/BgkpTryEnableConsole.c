/*
 * XREFs of BgkpTryEnableConsole @ 0x14013ED70
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14013EC50 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkInitialize @ 0x14086FB18 (BgkInitialize.c)
 * Callees:
 *     <none>
 */

__int64 BgkpTryEnableConsole()
{
  __int64 result; // rax

  result = 0LL;
  if ( byte_140389F22 )
  {
    if ( qword_140389F08 )
      return _InterlockedExchange64((volatile __int64 *)&stru_1403586B8, 0LL);
  }
  return result;
}
