/*
 * XREFs of VidSchiResume @ 0x1C00B38E0
 * Callers:
 *     VidSchiHandleControlEvent @ 0x1C00B33A8 (VidSchiHandleControlEvent.c)
 * Callees:
 *     VidSchiSetSchedulerStatus @ 0x1C007D5AC (VidSchiSetSchedulerStatus.c)
 */

LONG __fastcall VidSchiResume(__int64 a1)
{
  LONG result; // eax

  result = VidSchiSetSchedulerStatus(a1, 1, 1);
  if ( *(_DWORD *)(a1 + 948) )
  {
    *(_QWORD *)(a1 + 1384) = MEMORY[0xFFFFF78000000320];
    return KeSetEvent((PRKEVENT)(a1 + 1352), 0, 0);
  }
  return result;
}
