/*
 * XREFs of PspCatchCriticalBreak @ 0x140719040
 * Callers:
 *     PspExitThread @ 0x1404D5FB4 (PspExitThread.c)
 *     PspTerminateThreadByPointer @ 0x1404D6B90 (PspTerminateThreadByPointer.c)
 *     PspTerminateAllThreads @ 0x1404D6C7C (PspTerminateAllThreads.c)
 * Callees:
 *     PsIsHostSilo @ 0x1400859F0 (PsIsHostSilo.c)
 *     KeStackAttachProcess @ 0x1400BD8C0 (KeStackAttachProcess.c)
 *     PsGetServerSiloState @ 0x140133BD0 (PsGetServerSiloState.c)
 *     DbgPrintEx @ 0x1401471C0 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     DbgPrompt @ 0x140250930 (DbgPrompt.c)
 *     PsTerminateServerSilo @ 0x140714A10 (PsTerminateServerSilo.c)
 */

void PspCatchCriticalBreak(const char *a1, ULONG_PTR a2, __int64 a3, __int64 a4, ...)
{
  char v6; // di
  const CHAR *v7; // r8
  __int64 v8; // r9
  ULONG_PTR v9; // rbx
  char v10; // bp
  struct _KPROCESS *v11; // rdi
  CHAR Response[8]; // [rsp+30h] [rbp-68h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+38h] [rbp-60h] BYREF

  v6 = 0;
  v9 = 1LL;
  if ( (int)PsGetServerSiloState(a4) < 2 )
  {
    v10 = 0;
    if ( !(_BYTE)KdDebuggerEnabled )
    {
LABEL_15:
      if ( (*(_BYTE *)a2 & 0x7F) == 6 )
      {
        v11 = *(struct _KPROCESS **)(a2 + 544);
      }
      else
      {
        v11 = (struct _KPROCESS *)a2;
        v9 = 0LL;
      }
      if ( PsIsHostSilo(a4) )
      {
        if ( v11 != KeGetCurrentThread()->ApcState.Process )
          KeStackAttachProcess(v11, &ApcState);
        KeBugCheckEx(0xEFu, a2, v9, 0LL, 0LL);
      }
      if ( !v10 )
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
  v10 = 1;
  v6 = 1;
LABEL_14:
  if ( !v6 )
    goto LABEL_15;
}
