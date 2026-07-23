/*
 * XREFs of VF_FIND_DEVICE_INFORMATION_AND_REMOVE @ 0x14081752C
 * Callers:
 *     VfIoDeleteDevice @ 0x1408213F8 (VfIoDeleteDevice.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 */

struct _LIST_ENTRY *__fastcall VF_FIND_DEVICE_INFORMATION_AND_REMOVE(struct _LIST_ENTRY *a1)
{
  struct _LIST_ENTRY *v2; // rbx
  KIRQL v3; // si
  struct _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v5; // rcx
  struct _LIST_ENTRY *Blink; // rdx

  v2 = 0LL;
  v3 = KeAcquireSpinLockRaiseToDpc(&Lock);
  Flink = ViAdapterList.Flink;
  if ( &ViAdapterList != ViAdapterList.Flink )
  {
    while ( 1 )
    {
      v5 = Flink->Flink;
      if ( Flink[1].Blink == a1 )
        break;
      Flink = Flink->Flink;
      if ( &ViAdapterList == v5 )
        goto LABEL_4;
    }
    v2 = Flink;
    if ( v5->Blink != Flink || (Blink = Flink->Blink, Blink->Flink != Flink) )
      __fastfail(3u);
    Blink->Flink = v5;
    v5->Blink = Blink;
  }
LABEL_4:
  KxReleaseSpinLock(&Lock);
  __writecr8(v3);
  return v2;
}
