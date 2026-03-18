/*
 * XREFs of ??0DEVLOCKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C014327C
 * Callers:
 *     NtGdiFastPolyPolyline @ 0x1C0135E10 (NtGdiFastPolyPolyline.c)
 * Callees:
 *     <none>
 */

DEVLOCKOBJ *__fastcall DEVLOCKOBJ::DEVLOCKOBJ(DEVLOCKOBJ *this, struct XDCOBJ *a2, int a3)
{
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  DEVLOCKOBJ::bLock(this, a2, a3);
  return this;
}
