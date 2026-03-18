/*
 * XREFs of UsbhBusIfLocationDereference @ 0x1C0028390
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 */

_DWORD *__fastcall UsbhBusIfLocationDereference(__int64 a1)
{
  _DWORD *result; // rax

  result = FdoExt(*(_QWORD *)(a1 + 1176));
  _InterlockedDecrement(result + 855);
  return result;
}
