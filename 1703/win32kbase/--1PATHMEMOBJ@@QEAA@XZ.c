/*
 * XREFs of ??1PATHMEMOBJ@@QEAA@XZ @ 0x1C0022F80
 * Callers:
 *     <none>
 * Callees:
 *     PopThreadGuardedObject @ 0x1C0012E10 (PopThreadGuardedObject.c)
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C0023830 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 */

void __fastcall PATHMEMOBJ::~PATHMEMOBJ(PATHMEMOBJ *this)
{
  EPATHOBJ::vUnlock(this);
  if ( *((_DWORD *)this + 30) )
  {
    PopThreadGuardedObject((_QWORD *)this + 11);
    *((_DWORD *)this + 30) = 0;
  }
}
