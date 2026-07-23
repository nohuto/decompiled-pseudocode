/*
 * XREFs of RtlRunOnceBeginInitialize @ 0x180046EC0
 * Callers:
 *     RtlpHeapGenerateRandomValue32 @ 0x180046DE0 (RtlpHeapGenerateRandomValue32.c)
 *     RtlpHpPerHeapStackTraceCleanup @ 0x1800FFBD8 (RtlpHpPerHeapStackTraceCleanup.c)
 *     RtlpHpStackTraceHeapGetContext @ 0x18010080C (RtlpHpStackTraceHeapGetContext.c)
 * Callees:
 *     RtlpRunOnceWaitForInit @ 0x180087308 (RtlpRunOnceWaitForInit.c)
 */

NTSTATUS __cdecl RtlRunOnceBeginInitialize(PRTL_RUN_ONCE RunOnce, ULONG Flags, PVOID *Context)
{
  unsigned __int64 Value; // rax
  NTSTATUS v6; // ebp
  ULONG v8; // ebx
  unsigned __int64 v9; // rcx
  signed __int64 v10; // rcx
  unsigned __int64 v11; // rtt
  NTSTATUS v12; // eax

  if ( ((Flags - 1) & Flags) != 0 || (Flags & 0xFFFFFFFC) != 0 )
    return -1073741584;
  Value = RunOnce->Value;
  v6 = 0;
  if ( (RunOnce->Value & 3) == 2 )
  {
LABEL_6:
    if ( Context )
      *Context = (PVOID)(Value & 0xFFFFFFFFFFFFFFFCuLL);
  }
  else
  {
    if ( (Flags & 1) != 0 )
      return -1073741823;
    v8 = Flags & 2;
    while ( 1 )
    {
      while ( 1 )
      {
        v9 = Value & 3;
        if ( (Value & 3) != 0 )
          break;
        v10 = 1LL;
        if ( v8 )
          v10 = 3LL;
        v11 = Value;
        Value = _InterlockedCompareExchange64((volatile signed __int64 *)RunOnce, v10, Value);
        if ( v11 == Value )
          return 259;
      }
      if ( v9 != 1 )
        break;
      if ( v8 )
        return -1073741584;
      Value = RtlpRunOnceWaitForInit(Value, RunOnce);
    }
    if ( v9 != 3 )
      goto LABEL_6;
    v12 = 259;
    if ( !v8 )
      return -1073741584;
    return v12;
  }
  return v6;
}
