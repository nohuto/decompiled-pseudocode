/*
 * XREFs of RtlRunOnceBeginInitialize @ 0x18001ECD0
 * Callers:
 *     sub_18001EBF0 @ 0x18001EBF0 (sub_18001EBF0.c)
 *     sub_1800FC6F0 @ 0x1800FC6F0 (sub_1800FC6F0.c)
 *     sub_1800FD4A4 @ 0x1800FD4A4 (sub_1800FD4A4.c)
 * Callees:
 *     sub_180082E7C @ 0x180082E7C (sub_180082E7C.c)
 */

NTSTATUS __cdecl RtlRunOnceBeginInitialize(PRTL_RUN_ONCE RunOnce, ULONG Flags, PVOID *Context)
{
  signed __int64 Ptr; // rax
  NTSTATUS v6; // ebp
  ULONG v8; // ebx
  signed __int64 v9; // rcx
  signed __int64 v10; // rcx
  signed __int64 v11; // rtt
  NTSTATUS v12; // eax

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
    v8 = Flags & 2;
    while ( 1 )
    {
      while ( 1 )
      {
        v9 = Ptr & 3;
        if ( (Ptr & 3) != 0 )
          break;
        v10 = 1LL;
        if ( v8 )
          v10 = 3LL;
        v11 = Ptr;
        Ptr = _InterlockedCompareExchange64((volatile signed __int64 *)RunOnce, v10, Ptr);
        if ( v11 == Ptr )
          return 259;
      }
      if ( v9 != 1 )
        break;
      if ( v8 )
        return -1073741584;
      Ptr = sub_180082E7C(Ptr, RunOnce);
    }
    if ( v9 != 3 )
      goto LABEL_3;
    v12 = 259;
    if ( !v8 )
      return -1073741584;
    return v12;
  }
  return -1073741823;
}
