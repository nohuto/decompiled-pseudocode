/*
 * XREFs of ??1ScopedWrite@ReaderWriterLock@@QEAA@XZ @ 0x18003B920
 * Callers:
 *     _Windows::Gaming::Preview::GamesEnumeration::KglDefaults::LoadKgl_::_1_::dtor$2 @ 0x180044C1C (_Windows--Gaming--Preview--GamesEnumeration--KglDefaults--LoadKgl_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

void __fastcall ReaderWriterLock::ScopedWrite::~ScopedWrite(PSRWLOCK *this)
{
  ReleaseSRWLockExclusive(*this);
}
