/*
 * XREFs of UsbhBusIfLocationReference @ 0x1C0027B50
 * Callers:
 *     UsbhBusifGetLocationInterface @ 0x1C0027ACC (UsbhBusifGetLocationInterface.c)
 * Callees:
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 */

_DWORD *__fastcall UsbhBusIfLocationReference(__int64 a1)
{
  _DWORD *result; // rax

  result = FdoExt(*(_QWORD *)(a1 + 1176));
  _InterlockedIncrement(result + 855);
  return result;
}
