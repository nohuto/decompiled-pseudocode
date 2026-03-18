/*
 * XREFs of BgkpTryEnableConsole @ 0x140165B6C
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x140164C40 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkInitialize @ 0x1408E447C (BgkInitialize.c)
 * Callees:
 *     <none>
 */

__int64 BgkpTryEnableConsole()
{
  __int64 result; // rax

  result = 0LL;
  if ( qword_1403CDD38 )
  {
    if ( byte_1403CDD5D )
      return _InterlockedExchange64((volatile __int64 *)&stru_14039BCA8, 0LL);
  }
  return result;
}
