/*
 * XREFs of UsbhPeekNextPdoIdleIrp @ 0x1C0008FD0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x1C0028424 (UsbhTrapFatal_Dbg.c)
 */

_LIST_ENTRY **__fastcall UsbhPeekNextPdoIdleIrp(char *Csq, PIRP Irp, PVOID PeekContext)
{
  _LIST_ENTRY **p_Blink; // r9
  char *v6; // rcx
  _LIST_ENTRY *Flink; // rax

  p_Blink = 0LL;
  v6 = Csq - 1456;
  if ( !v6 )
    UsbhTrapFatal_Dbg(MEMORY[0x498], Csq);
  if ( Irp )
    Flink = Irp->Tail.Overlay.ListEntry.Flink;
  else
    Flink = (_LIST_ENTRY *)*((_QWORD *)v6 + 180);
  while ( Flink != (_LIST_ENTRY *)(v6 + 1440) )
  {
    if ( !Flink )
      UsbhTrapFatal_Dbg(*((_QWORD *)v6 + 147), Csq);
    p_Blink = &Flink[-11].Blink;
    if ( Flink == (_LIST_ENTRY *)168 )
      UsbhTrapFatal_Dbg(*((_QWORD *)v6 + 147), Csq);
    if ( !PeekContext )
      break;
    Flink = Flink->Flink;
  }
  return p_Blink;
}
