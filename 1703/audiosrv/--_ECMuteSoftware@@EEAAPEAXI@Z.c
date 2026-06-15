/*
 * XREFs of ??_ECMuteSoftware@@EEAAPEAXI@Z @ 0x180087F90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180049338 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CMuteSoftware@@EEAA@XZ @ 0x180087CA0 (--1CMuteSoftware@@EEAA@XZ.c)
 */

CMuteSoftware *__fastcall CMuteSoftware::`vector deleting destructor'(CMuteSoftware *this, char a2)
{
  CMuteSoftware::~CMuteSoftware(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x68);
  return this;
}
