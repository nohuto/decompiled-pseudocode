/*
 * XREFs of LdrLockLoaderLock @ 0x180047C20
 * Callers:
 *     sub_1800254A0 @ 0x1800254A0 (sub_1800254A0.c)
 *     sub_180025ACC @ 0x180025ACC (sub_180025ACC.c)
 * Callees:
 *     sub_180046FBC @ 0x180046FBC (sub_180046FBC.c)
 *     RtlRaiseStatus @ 0x18009A570 (RtlRaiseStatus.c)
 *     sub_1800CA644 @ 0x1800CA644 (sub_1800CA644.c)
 *     sub_1800D0B18 @ 0x1800D0B18 (sub_1800D0B18.c)
 */

__int64 __fastcall LdrLockLoaderLock(int a1, int *a2, unsigned __int64 *a3)
{
  unsigned int v5; // ebx
  int v7; // edi
  int v8; // eax
  __int16 v9; // cx
  __int16 v10; // ax
  int UniqueThread; // eax
  int v12; // [rsp+50h] [rbp+8h]
  int v13; // [rsp+58h] [rbp+10h]

  v5 = 0;
  if ( a2 )
    *a2 = 0;
  if ( a3 )
    *a3 = 0LL;
  if ( (a1 & 0xFFFFFFFC) != 0 )
  {
    if ( (a1 & 1) != 0 )
      RtlRaiseStatus(3221225711LL);
    return (unsigned int)-1073741585;
  }
  else if ( a3 )
  {
    if ( (a1 & 2) == 0 || a2 )
    {
      if ( dword_18015CFB8 == 3 )
      {
        v7 = 1;
        if ( (a1 & 1) != 0 )
        {
          if ( (a1 & 2) != 0 )
          {
            if ( (unsigned __int8)sub_1800CA644() )
            {
              UniqueThread = (int)NtCurrentTeb()->ClientId.UniqueThread;
              *a3 = ((unsigned __int64)(UniqueThread & 0xFFF) << 48) | (unsigned __int16)(_InterlockedExchangeAdd(
                                                                                            &dword_18015CA60,
                                                                                            1u)
                                                                                        + 1) & 0xFFFE | 1LL;
            }
            else
            {
              v7 = 2;
            }
            *a2 = v7;
          }
          else
          {
            sub_180046FBC();
            if ( a2 )
              *a2 = 1;
            v8 = (int)NtCurrentTeb()->ClientId.UniqueThread;
            *a3 = ((unsigned __int64)(v8 & 0xFFF) << 48) | (unsigned __int16)(_InterlockedExchangeAdd(
                                                                                &dword_18015CA60,
                                                                                1u)
                                                                            + 1) & 0xFFFE | 1LL;
          }
        }
        else
        {
          if ( (a1 & 2) != 0 )
          {
            if ( !(unsigned __int8)sub_1800CA644() )
            {
              *a2 = 2;
              return v5;
            }
            *a2 = 1;
            v12 = (int)NtCurrentTeb()->ClientId.UniqueThread;
            v9 = _InterlockedExchangeAdd(&dword_18015CA60, 1u);
            v10 = v12;
          }
          else
          {
            sub_180046FBC();
            if ( a2 )
              *a2 = 1;
            v13 = (int)NtCurrentTeb()->ClientId.UniqueThread;
            v9 = _InterlockedExchangeAdd(&dword_18015CA60, 1u);
            v10 = v13;
          }
          *a3 = ((unsigned __int64)(v10 & 0xFFF) << 48) | (unsigned __int16)(v9 + 1) & 0xFFFE | 1LL;
        }
      }
    }
    else
    {
      if ( (a1 & 1) != 0 )
        RtlRaiseStatus(3221225712LL);
      return (unsigned int)-1073741584;
    }
  }
  else
  {
    if ( (a1 & 1) != 0 )
      RtlRaiseStatus(3221225713LL);
    return (unsigned int)-1073741583;
  }
  return v5;
}
