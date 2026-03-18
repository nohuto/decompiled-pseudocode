/*
 * XREFs of ??1PATHMEMOBJ@@QEAA@XZ @ 0x1C0044B20
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C001C130 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 *     PopThreadGuardedObject @ 0x1C001E1D0 (PopThreadGuardedObject.c)
 */

void __fastcall PATHMEMOBJ::~PATHMEMOBJ(PATHMEMOBJ *this)
{
  EPATHOBJ::vUnlock(this);
  if ( *((_DWORD *)this + 28) )
  {
    PopThreadGuardedObject((_QWORD *)this + 10);
    *((_DWORD *)this + 28) = 0;
  }
}
