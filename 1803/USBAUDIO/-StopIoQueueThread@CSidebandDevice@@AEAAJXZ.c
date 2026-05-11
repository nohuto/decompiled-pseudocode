/*
 * XREFs of ?StopIoQueueThread@CSidebandDevice@@AEAAJXZ @ 0x1C00072F0
 * Callers:
 *     ?DeInitIoQueue@CSidebandDevice@@QEAAJXZ @ 0x1C000727C (-DeInitIoQueue@CSidebandDevice@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSidebandDevice::StopIoQueueThread(PVOID *this)
{
  struct _KEVENT *v2; // rbx

  if ( this[21] )
  {
    v2 = (struct _KEVENT *)(this + 22);
    KeSetEvent((PRKEVENT)(this + 22), 0, 0);
    KeWaitForSingleObject(this[21], Executive, 0, 0, 0LL);
    ObfDereferenceObject(this[21]);
    this[21] = 0LL;
    KeClearEvent(v2);
  }
  return 0LL;
}
