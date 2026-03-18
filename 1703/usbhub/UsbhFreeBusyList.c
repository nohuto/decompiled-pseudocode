/*
 * XREFs of UsbhFreeBusyList @ 0x1C0057A74
 * Callers:
 *     UsbhHubSSH_PnpStop @ 0x1C0057BB0 (UsbhHubSSH_PnpStop.c)
 * Callees:
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 */

LONG __fastcall UsbhFreeBusyList(__int64 a1)
{
  struct _KEVENT *v2; // rbx
  unsigned __int8 v3; // r9
  _LIST_ENTRY *p_WaitListHead; // rdi
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v6; // rcx
  void *v7; // r10

  v2 = (struct _KEVENT *)FdoExt(a1);
  v2[142].Header.Type = 1;
  KeWaitForSingleObject(&v2[139], Executive, 0, 0, 0LL);
  Log(a1, 0x10000, 1397113420, 0LL, v2[142].Header.Signalling);
  v2[142].Header.Signalling = v3;
  p_WaitListHead = &v2[129].Header.WaitListHead;
  while ( p_WaitListHead->Flink != p_WaitListHead )
  {
    Flink = p_WaitListHead->Flink;
    v6 = p_WaitListHead->Flink->Flink;
    if ( p_WaitListHead->Flink->Blink != p_WaitListHead || v6->Blink != Flink )
      __fastfail(3u);
    p_WaitListHead->Flink = v6;
    v6->Blink = p_WaitListHead;
    Log(a1, 0x10000, 1178749997, 0LL, (__int64)&Flink[-1].Blink);
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
  }
  *(_QWORD *)&v2[137].Header.Lock = 0LL;
  v2[137].Header.WaitListHead.Blink = 0LL;
  v2[137].Header.WaitListHead.Flink = 0LL;
  *(_QWORD *)&v2[138].Header.Lock = 0LL;
  v2[130].Header.LockNV = 0;
  HIDWORD(v2[138].Header.WaitListHead.Blink) = 0;
  LODWORD(v2[138].Header.WaitListHead.Blink) = 0;
  HIDWORD(v2[138].Header.WaitListHead.Flink) = 0;
  LODWORD(v2[138].Header.WaitListHead.Flink) = 0;
  return KeSetEvent(v2 + 139, 0, 0);
}
