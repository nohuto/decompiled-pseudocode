/*
 * XREFs of XEPATHOBJ_vConstructHPATHWrap @ 0x1C012C250
 * Callers:
 *     <none>
 * Callees:
 *     ?vLock@EPATHOBJ@@QEAAXPEAUHPATH__@@@Z @ 0x1C012C38C (-vLock@EPATHOBJ@@QEAAXPEAUHPATH__@@@Z.c)
 */

void __fastcall XEPATHOBJ_vConstructHPATHWrap(EPATHOBJ *this, struct HPATH__ *a2)
{
  *((_QWORD *)this + 1) = 0LL;
  if ( !*((_DWORD *)this + 30) )
  {
    PushThreadGuardedObject((char *)this + 88, this, XEPATHOBJ_vDestructWrap);
    *((_DWORD *)this + 30) = 1;
  }
  EPATHOBJ::vLock(this, a2);
}
