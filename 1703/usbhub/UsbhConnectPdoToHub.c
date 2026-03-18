/*
 * XREFs of UsbhConnectPdoToHub @ 0x1C001996C
 * Callers:
 *     UsbhCreatePdo @ 0x1C001FDA0 (UsbhCreatePdo.c)
 * Callees:
 *     Log @ 0x1C0013A00 (Log.c)
 *     PdoExt @ 0x1C0018C00 (PdoExt.c)
 */

__int64 __fastcall UsbhConnectPdoToHub(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rax

  *((_QWORD *)PdoExt(a1) + 147) = 0LL;
  Log(a2, 8, 1346653995, a1, 0LL);
  v4 = PdoExt(a1);
  v4[354] |= 2u;
  *((_QWORD *)PdoExt(a1) + 147) = a2;
  return 0LL;
}
