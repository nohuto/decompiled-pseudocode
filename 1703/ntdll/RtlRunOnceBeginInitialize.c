/*
 * XREFs of RtlRunOnceBeginInitialize @ 0x180028CF0
 * Callers:
 *     sub_180028C10 @ 0x180028C10 (sub_180028C10.c)
 *     sub_1800FE028 @ 0x1800FE028 (sub_1800FE028.c)
 *     sub_1800FEC74 @ 0x1800FEC74 (sub_1800FEC74.c)
 * Callees:
 *     sub_180088C98 @ 0x180088C98 (sub_180088C98.c)
 */

NTSTATUS __cdecl RtlRunOnceBeginInitialize(PRTL_RUN_ONCE RunOnce, ULONG Flags, PVOID *Context)
{
  signed __int64 Ptr; // rax
  NTSTATUS v6; // edi
  BOOL v8; // ebp
  signed __int64 v9; // rcx
  signed __int64 v10; // rtt
  NTSTATUS v11; // eax

  if ( ((Flags - 1) & Flags) != 0 || (Flags & 0xFFFFFFFC) != 0 )
    return -1073741584;
  Ptr = (signed __int64)RunOnce->Ptr;
  v6 = 0;
  if ( ((__int64)RunOnce->Ptr & 3) == 2 )
  {
LABEL_3:
    if ( Context )
      *Context = (PVOID)(Ptr & 0xFFFFFFFFFFFFFFFCuLL);
    return v6;
  }
  if ( (Flags & 1) == 0 )
  {
    v8 = (Flags & 2) == 0;
    while ( 1 )
    {
      while ( (Ptr & 3) == 0 )
      {
        if ( v8 )
          v9 = 1LL;
        else
          v9 = 3LL;
        v10 = Ptr;
        Ptr = _InterlockedCompareExchange64((volatile signed __int64 *)RunOnce, v9, Ptr);
        if ( v10 == Ptr )
          return 259;
      }
      if ( (Ptr & 3) != 1 )
        break;
      if ( !v8 )
        return -1073741584;
      Ptr = sub_180088C98(Ptr, RunOnce);
    }
    if ( (Ptr & 3) != 3 )
      goto LABEL_3;
    v11 = 259;
    if ( v8 )
      return -1073741584;
    return v11;
  }
  return -1073741823;
}
