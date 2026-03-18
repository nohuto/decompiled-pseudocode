/*
 * XREFs of LogQMsg @ 0x1C01B54C0
 * Callers:
 *     StoreQMessage @ 0x1C00ABB30 (StoreQMessage.c)
 *     IPostQuitMessage @ 0x1C00D7230 (IPostQuitMessage.c)
 * Callees:
 *     ?EnsureQMsgLog@@YAHXZ @ 0x1C01B5138 (-EnsureQMsgLog@@YAHXZ.c)
 *     InitLogQMsgEntry @ 0x1C01B53AC (InitLogQMsgEntry.c)
 */

__int64 __fastcall LogQMsg(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx

  result = *(unsigned int *)(a1 + 24);
  if ( (unsigned int)result >= dword_1C032680C && (unsigned int)result <= dword_1C0326810 )
  {
    result = EnsureQMsgLog();
    if ( (_DWORD)result )
    {
      v3 = qword_1C0326828 + 688LL * (unsigned int)dword_1C0326814++;
      InitLogQMsgEntry((_OWORD *)a1, v3);
      result = (unsigned int)dword_1C0326818;
      if ( dword_1C0326814 >= (unsigned int)dword_1C0326818 )
        dword_1C0326814 = 0;
      if ( dword_1C0326824 )
        __debugbreak();
    }
  }
  return result;
}
