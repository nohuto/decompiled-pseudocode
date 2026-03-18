/*
 * XREFs of ??1XEPATHOBJ@@QEAA@XZ @ 0x1C0097C80
 * Callers:
 *     ?hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z @ 0x1C0039C50 (-hpath@DC@@QEAAPEAUHPATH__@@PEAU2@@Z.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x1C0012E10 (PopThreadGuardedObject.c)
 */

void __fastcall XEPATHOBJ::~XEPATHOBJ(XEPATHOBJ *this)
{
  if ( (int)IsXEPATHOBJ_vDestructSupported() >= 0 )
    XEPATHOBJ_vDestructWrap(this);
  if ( *((_DWORD *)this + 30) )
  {
    PopThreadGuardedObject((_QWORD *)this + 11);
    *((_DWORD *)this + 30) = 0;
  }
}
