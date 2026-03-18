/*
 * XREFs of VidSchiSetSchedulerStatus @ 0x1C007D5AC
 * Callers:
 *     VidSchiWorkerThread @ 0x1C007D1F0 (VidSchiWorkerThread.c)
 *     VidSchiHandleControlEvent @ 0x1C00B33A8 (VidSchiHandleControlEvent.c)
 *     VidSchiResume @ 0x1C00B38E0 (VidSchiResume.c)
 * Callees:
 *     <none>
 */

LONG __fastcall VidSchiSetSchedulerStatus(__int64 a1, int a2, int a3)
{
  LONG result; // eax

  *(_DWORD *)(a1 + 272) = a2;
  if ( a3 )
  {
    *(_QWORD *)(a1 + 1496) = MEMORY[0xFFFFF78000000320];
    return KeSetEvent((PRKEVENT)(a1 + 1464), 0, 0);
  }
  return result;
}
