/*
 * XREFs of LdrLockLoaderLock @ 0x1800803F0
 * Callers:
 *     sub_180016810 @ 0x180016810 (sub_180016810.c)
 *     sub_180016D48 @ 0x180016D48 (sub_180016D48.c)
 * Callees:
 *     RtlRaiseStatus @ 0x180004BD0 (RtlRaiseStatus.c)
 *     sub_180004D78 @ 0x180004D78 (sub_180004D78.c)
 *     sub_180019FC0 @ 0x180019FC0 (sub_180019FC0.c)
 *     sub_1800D5364 @ 0x1800D5364 (sub_1800D5364.c)
 */

__int64 __fastcall LdrLockLoaderLock(__int64 a1, _DWORD *a2, unsigned __int64 *a3, __int64 a4)
{
  unsigned int v6; // ebx
  int v8; // eax
  __int16 v9; // cx
  __int16 v10; // ax
  int UniqueThread; // eax
  int v12; // [rsp+40h] [rbp+8h]
  int v13; // [rsp+48h] [rbp+10h]

  v6 = 0;
  if ( a2 )
    *a2 = 0;
  if ( a3 )
    *a3 = 0LL;
  if ( (a1 & 0xFFFFFFFC) != 0 )
  {
    if ( (a1 & 1) != 0 )
      RtlRaiseStatus(-1073741585);
    return (unsigned int)-1073741585;
  }
  else if ( a3 )
  {
    if ( (a1 & 2) == 0 || a2 )
    {
      if ( dword_18015C018 == 3 )
      {
        if ( (a1 & 1) != 0 )
        {
          if ( (a1 & 2) != 0 )
          {
            if ( (unsigned __int8)sub_1800D5364() )
            {
              UniqueThread = (int)NtCurrentTeb()->ClientId.UniqueThread;
              *a3 = ((unsigned __int64)(UniqueThread & 0xFFF) << 48) | (unsigned __int16)(_InterlockedExchangeAdd(
                                                                                            &dword_18015BA40,
                                                                                            1u)
                                                                                        + 1) & 0xFFFE | 1LL;
              *a2 = 1;
            }
            else
            {
              *a2 = 2;
            }
          }
          else
          {
            sub_180019FC0(a1, (__int64)a2, (__int64)a3, a4);
            if ( a2 )
              *a2 = 1;
            v8 = (int)NtCurrentTeb()->ClientId.UniqueThread;
            *a3 = ((unsigned __int64)(v8 & 0xFFF) << 48) | (unsigned __int16)(_InterlockedExchangeAdd(
                                                                                &dword_18015BA40,
                                                                                1u)
                                                                            + 1) & 0xFFFE | 1LL;
          }
        }
        else
        {
          if ( (a1 & 2) != 0 )
          {
            if ( !(unsigned __int8)sub_1800D5364() )
            {
              *a2 = 2;
              return v6;
            }
            *a2 = 1;
            v12 = (int)NtCurrentTeb()->ClientId.UniqueThread;
            v9 = _InterlockedExchangeAdd(&dword_18015BA40, 1u);
            v10 = v12;
          }
          else
          {
            sub_180019FC0(a1, (__int64)a2, (__int64)a3, a4);
            if ( a2 )
              *a2 = 1;
            v13 = (int)NtCurrentTeb()->ClientId.UniqueThread;
            v9 = _InterlockedExchangeAdd(&dword_18015BA40, 1u);
            v10 = v13;
          }
          *a3 = ((unsigned __int64)(v10 & 0xFFF) << 48) | (unsigned __int16)(v9 + 1) & 0xFFFE | 1LL;
        }
      }
    }
    else
    {
      if ( (a1 & 1) != 0 )
        RtlRaiseStatus(-1073741584);
      return (unsigned int)-1073741584;
    }
  }
  else
  {
    if ( (a1 & 1) != 0 )
      RtlRaiseStatus(-1073741583);
    return (unsigned int)-1073741583;
  }
  return v6;
}
