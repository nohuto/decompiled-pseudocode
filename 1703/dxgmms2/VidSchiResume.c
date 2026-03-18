/*
 * XREFs of VidSchiResume @ 0x1C00AAFCC
 * Callers:
 *     VidSchiHandleControlEvent @ 0x1C00AAA90 (VidSchiHandleControlEvent.c)
 * Callees:
 *     VidSchiSetSchedulerStatus @ 0x1C00769DC (VidSchiSetSchedulerStatus.c)
 */

LONG __fastcall VidSchiResume(__int64 a1)
{
  LONG result; // eax

  result = VidSchiSetSchedulerStatus(a1, 1, 1);
  if ( *(_DWORD *)(a1 + 948) )
  {
    *(_QWORD *)(a1 + 1376) = MEMORY[0xFFFFF78000000320];
    return KeSetEvent((PRKEVENT)(a1 + 1344), 0, 0);
  }
  return result;
}
