/*
 * XREFs of VidSchiResume @ 0x1C00BC2FC
 * Callers:
 *     VidSchiHandleControlEvent @ 0x1C00BBDA8 (VidSchiHandleControlEvent.c)
 * Callees:
 *     VidSchiSetSchedulerStatus @ 0x1C00821A0 (VidSchiSetSchedulerStatus.c)
 */

LONG __fastcall VidSchiResume(struct _KEVENT *a1)
{
  LONG result; // eax

  result = VidSchiSetSchedulerStatus((__int64)a1, 1, 1);
  if ( a1[40].Header.SignalState )
  {
    a1[58].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)MEMORY[0xFFFFF78000000320];
    return KeSetEvent(a1 + 57, 0, 0);
  }
  return result;
}
