/*
 * XREFs of ??0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z @ 0x1C0266DB4
 * Callers:
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1C0123130 (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0123538 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     NtGdiGetPath @ 0x1C028C570 (NtGdiGetPath.c)
 * Callees:
 *     ?vLock@EPATHOBJ@@QEAAXPEAUHPATH__@@@Z @ 0x1C012481C (-vLock@EPATHOBJ@@QEAAXPEAUHPATH__@@@Z.c)
 */

XEPATHOBJ *__fastcall XEPATHOBJ::XEPATHOBJ(XEPATHOBJ *this, struct HPATH__ *a2)
{
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 30) = 0;
  *((_QWORD *)this + 1) = 0LL;
  if ( !*((_DWORD *)this + 30) )
  {
    PushThreadGuardedObject((char *)this + 88, this, XEPATHOBJ_vDestructWrap);
    *((_DWORD *)this + 30) = 1;
  }
  EPATHOBJ::vLock(this, a2);
  return this;
}
