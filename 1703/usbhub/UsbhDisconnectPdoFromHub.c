/*
 * XREFs of UsbhDisconnectPdoFromHub @ 0x1C003A0C8
 * Callers:
 *     UsbhDeletePdo @ 0x1C0054F90 (UsbhDeletePdo.c)
 * Callees:
 *     Log @ 0x1C0013A00 (Log.c)
 *     FdoExt @ 0x1C0014F60 (FdoExt.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 */

_DWORD *__fastcall UsbhDisconnectPdoFromHub(__int64 a1)
{
  __int64 v2; // rbx
  _DWORD *result; // rax

  v2 = *((_QWORD *)PdoExt(a1) + 147);
  FdoExt(v2);
  Log(v2, 8, 1346653997, a1, v2);
  result = PdoExt(a1);
  *((_QWORD *)result + 147) = 0LL;
  return result;
}
