/*
 * XREFs of IoDisconnectInterruptEx @ 0x14058E490
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     IoDisconnectInterrupt @ 0x14058E500 (IoDisconnectInterrupt.c)
 */

void __stdcall IoDisconnectInterruptEx(PIO_DISCONNECT_INTERRUPT_PARAMETERS Parameters)
{
  _DWORD *Generic; // rdi
  unsigned int j; // ebx
  unsigned int i; // ebx

  if ( Parameters->Version != 1 )
  {
    if ( Parameters->Version == 2 )
    {
      Generic = Parameters->ConnectionContext.Generic;
      for ( i = 0; i < Generic[65]; ++i )
        IoDisconnectInterrupt((PKINTERRUPT)(*(_QWORD *)&Generic[2 * i + 66] + 112LL));
      goto LABEL_6;
    }
    if ( Parameters->Version == 3 )
    {
LABEL_4:
      Generic = Parameters->ConnectionContext.Generic;
      for ( j = 0; j < Generic[1]; ++j )
        IoDisconnectInterrupt(*(PKINTERRUPT *)&Generic[12 * j + 6]);
LABEL_6:
      ExFreePoolWithTag(Generic, 0);
      return;
    }
    if ( Parameters->Version != 4 )
    {
      if ( Parameters->Version != 5 )
        KeBugCheckEx(0xCAu, 9uLL, Parameters->Version, 0LL, 0LL);
      goto LABEL_4;
    }
  }
  IoDisconnectInterrupt(Parameters->ConnectionContext.InterruptObject);
}
