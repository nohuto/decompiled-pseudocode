/*
 * XREFs of ??_ECAudioSession@@MEAAPEAXI@Z @ 0x180089F78
 * Callers:
 *     ??_ECAudioSession@@OCA@EAAPEAXI@Z @ 0x1800580A0 (--_ECAudioSession@@OCA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CAudioSession@@MEAA@XZ @ 0x18001553C (--1CAudioSession@@MEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180049338 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CAudioSession *__fastcall CAudioSession::`vector deleting destructor'(CAudioSession *this, char a2)
{
  CAudioSession::~CAudioSession(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x420);
  return this;
}
