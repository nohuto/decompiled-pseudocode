/*
 * XREFs of VidSchiSetSchedulerStatus @ 0x1C00769DC
 * Callers:
 *     VidSchiWorkerThread @ 0x1C0076620 (VidSchiWorkerThread.c)
 *     VidSchiHandleControlEvent @ 0x1C00AAA90 (VidSchiHandleControlEvent.c)
 *     VidSchiResume @ 0x1C00AAFCC (VidSchiResume.c)
 * Callees:
 *     <none>
 */

LONG __fastcall VidSchiSetSchedulerStatus(__int64 a1, int a2, int a3)
{
  LONG result; // eax

  *(_DWORD *)(a1 + 264) = a2;
  if ( a3 )
  {
    *(_QWORD *)(a1 + 1488) = MEMORY[0xFFFFF78000000320];
    return KeSetEvent((PRKEVENT)(a1 + 1456), 0, 0);
  }
  return result;
}
