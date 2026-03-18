/*
 * XREFs of LogQMsg @ 0x1C01B2438
 * Callers:
 *     StoreQMessage @ 0x1C0055990 (StoreQMessage.c)
 *     IPostQuitMessage @ 0x1C00FE028 (IPostQuitMessage.c)
 * Callees:
 *     ?EnsureQMsgLog@@YAHXZ @ 0x1C01B1F80 (-EnsureQMsgLog@@YAHXZ.c)
 *     InitLogQMsgEntry @ 0x1C01B2324 (InitLogQMsgEntry.c)
 */

__int64 __fastcall LogQMsg(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx

  result = *(unsigned int *)(a1 + 24);
  if ( (unsigned int)result >= dword_1C032A814 && (unsigned int)result <= dword_1C032A818 )
  {
    result = EnsureQMsgLog();
    if ( (_DWORD)result )
    {
      v3 = qword_1C032A830 + 688LL * (unsigned int)dword_1C032A81C++;
      InitLogQMsgEntry((_OWORD *)a1, v3);
      result = (unsigned int)dword_1C032A820;
      if ( dword_1C032A81C >= (unsigned int)dword_1C032A820 )
        dword_1C032A81C = 0;
      if ( dword_1C032A82C )
        __debugbreak();
    }
  }
  return result;
}
