/*
 * XREFs of PspCatchCriticalBreak @ 0x1406E2BD8
 * Callers:
 *     PspExitThread @ 0x1405401EC (PspExitThread.c)
 *     PspTerminateAllThreads @ 0x14054EDAC (PspTerminateAllThreads.c)
 *     PspTerminateThreadByPointer @ 0x14054F0D0 (PspTerminateThreadByPointer.c)
 * Callees:
 *     PsIsHostSilo @ 0x140050C00 (PsIsHostSilo.c)
 *     DbgPrintEx @ 0x1400680A0 (DbgPrintEx.c)
 *     PsGetServerSiloState @ 0x140143578 (PsGetServerSiloState.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     DbgPrompt @ 0x14023B0A0 (DbgPrompt.c)
 *     PsTerminateServerSilo @ 0x1406DE560 (PsTerminateServerSilo.c)
 */

void PspCatchCriticalBreak(const char *a1, _BYTE *a2, __int64 a3, __int64 a4, ...)
{
  char v6; // bl
  const CHAR *v7; // rdx
  __int64 v8; // r8
  char v9; // di
  char v10; // bl
  CHAR Response[24]; // [rsp+30h] [rbp-18h] BYREF

  v6 = 0;
  if ( (int)PsGetServerSiloState(a4) < 2 )
  {
    v9 = 0;
    if ( !(_BYTE)KdDebuggerEnabled )
    {
LABEL_15:
      v10 = *a2 & 0x7F;
      if ( PsIsHostSilo(a4) )
        KeBugCheckEx(0xEFu, (ULONG_PTR)a2, v10 == 6, 0LL, 0LL);
      if ( !v9 )
        PsTerminateServerSilo(a4);
      return;
    }
    DbgPrintEx(0, 0, v7, a2, v8);
    while ( 1 )
    {
      if ( (_BYTE)KdDebuggerNotPresent )
        goto LABEL_14;
      DbgPrompt("Break, or Ignore (bi)? ", Response, 2u);
      if ( Response[0] == 66 )
        goto LABEL_11;
      if ( Response[0] != 73 )
        break;
LABEL_12:
      v6 = 1;
LABEL_13:
      if ( v6 )
        goto LABEL_14;
    }
    if ( Response[0] != 98 )
    {
      if ( Response[0] != 105 )
        goto LABEL_13;
      goto LABEL_12;
    }
LABEL_11:
    __debugbreak();
    goto LABEL_12;
  }
  v9 = 1;
  v6 = 1;
LABEL_14:
  if ( !v6 )
    goto LABEL_15;
}
