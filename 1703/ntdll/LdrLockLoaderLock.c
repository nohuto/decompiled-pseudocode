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

NTSTATUS __cdecl LdrLockLoaderLock(ULONG Flags, ULONG *Disposition, PVOID *Cookie)
{
  NTSTATUS v5; // ebx
  int v7; // eax
  __int16 v8; // cx
  __int16 v9; // ax
  int UniqueThread; // eax
  int v11; // [rsp+40h] [rbp+8h]
  int v12; // [rsp+48h] [rbp+10h]

  v5 = 0;
  if ( Disposition )
    *Disposition = 0;
  if ( Cookie )
    *Cookie = 0LL;
  if ( (Flags & 0xFFFFFFFC) != 0 )
  {
    if ( (Flags & 1) != 0 )
      RtlRaiseStatus(-1073741585);
    return -1073741585;
  }
  else if ( Cookie )
  {
    if ( (Flags & 2) == 0 || Disposition )
    {
      if ( dword_18015C018 == 3 )
      {
        if ( (Flags & 1) != 0 )
        {
          if ( (Flags & 2) != 0 )
          {
            if ( (unsigned __int8)sub_1800D5364() )
            {
              UniqueThread = (int)NtCurrentTeb()->ClientId.UniqueThread;
              *Cookie = (PVOID)(((unsigned __int64)(UniqueThread & 0xFFF) << 48) | (unsigned __int16)(_InterlockedExchangeAdd(&dword_18015BA40, 1u) + 1) & 0xFFFE | 1LL);
              *Disposition = 1;
            }
            else
            {
              *Disposition = 2;
            }
          }
          else
          {
            sub_180019FC0();
            if ( Disposition )
              *Disposition = 1;
            v7 = (int)NtCurrentTeb()->ClientId.UniqueThread;
            *Cookie = (PVOID)(((unsigned __int64)(v7 & 0xFFF) << 48) | (unsigned __int16)(_InterlockedExchangeAdd(
                                                                                            &dword_18015BA40,
                                                                                            1u)
                                                                                        + 1) & 0xFFFE | 1LL);
          }
        }
        else
        {
          if ( (Flags & 2) != 0 )
          {
            if ( !(unsigned __int8)sub_1800D5364() )
            {
              *Disposition = 2;
              return v5;
            }
            *Disposition = 1;
            v11 = (int)NtCurrentTeb()->ClientId.UniqueThread;
            v8 = _InterlockedExchangeAdd(&dword_18015BA40, 1u);
            v9 = v11;
          }
          else
          {
            sub_180019FC0();
            if ( Disposition )
              *Disposition = 1;
            v12 = (int)NtCurrentTeb()->ClientId.UniqueThread;
            v8 = _InterlockedExchangeAdd(&dword_18015BA40, 1u);
            v9 = v12;
          }
          *Cookie = (PVOID)(((unsigned __int64)(v9 & 0xFFF) << 48) | (unsigned __int16)(v8 + 1) & 0xFFFE | 1LL);
        }
      }
    }
    else
    {
      if ( (Flags & 1) != 0 )
        RtlRaiseStatus(-1073741584);
      return -1073741584;
    }
  }
  else
  {
    if ( (Flags & 1) != 0 )
      RtlRaiseStatus(-1073741583);
    return -1073741583;
  }
  return v5;
}
