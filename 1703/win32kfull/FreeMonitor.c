/*
 * XREFs of FreeMonitor @ 0x1C01A70C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FreeMonitor(__int64 a1)
{
  Win32FreePool(*(_QWORD *)(a1 + 40));
  return Win32FreePool(a1);
}
