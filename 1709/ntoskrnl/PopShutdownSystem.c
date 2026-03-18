/*
 * XREFs of PopShutdownSystem @ 0x14043A3E0
 * Callers:
 *     PopGracefulShutdown @ 0x140431740 (PopGracefulShutdown.c)
 * Callees:
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     VslNotifyShutdown @ 0x1401F23F4 (VslNotifyShutdown.c)
 *     DbgUnLoadImageSymbols @ 0x1402509BC (DbgUnLoadImageSymbols.c)
 *     PopInvokeSystemStateHandler @ 0x140439AE4 (PopInvokeSystemStateHandler.c)
 *     PopNotifyShutdownListener @ 0x14043A2E8 (PopNotifyShutdownListener.c)
 */

void __fastcall __noreturn PopShutdownSystem(int a1)
{
  int v2; // ebx
  int v3; // ebx

  PopNotifyShutdownListener();
  VslNotifyShutdown(0);
  DbgUnLoadImageSymbols(0LL, (PVOID)0xFFFFFFFFFFFFFFFFLL, 0LL);
  if ( (PopSimulate & 0x800) != 0 && ((a1 - 4) & 0xFFFFFFFD) == 0 )
    a1 = 5;
  v2 = a1 - 4;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( !v3 )
    {
      PopInvokeSystemStateHandler(5, 0LL);
      goto LABEL_12;
    }
    if ( v3 != 1 )
LABEL_12:
      HalReturnToFirmware(3LL);
  }
  else if ( PopShutdownPowerOffPolicy )
  {
    qword_1403662A8 = (__int64)PopShutdownHandler;
  }
  PopInvokeSystemStateHandler(4, 0LL);
  HalReturnToFirmware(1LL);
}
