/*
 * XREFs of BgkpTryEnableConsole @ 0x140140224
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x140140280 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkInitialize @ 0x14083795C (BgkInitialize.c)
 * Callees:
 *     <none>
 */

__int64 BgkpTryEnableConsole()
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_14036E478 )
  {
    if ( byte_14036E49D )
      return _InterlockedExchange64((volatile __int64 *)&stru_140340058, 0LL);
  }
  return result;
}
