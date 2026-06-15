/*
 * XREFs of ??_ECProcess@@MEAAPEAXI@Z @ 0x180013E10
 * Callers:
 *     <none>
 * Callees:
 *     ??1CProcess@@MEAA@XZ @ 0x180014BB8 (--1CProcess@@MEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180035504 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CProcess *__fastcall CProcess::`vector deleting destructor'(CProcess *this, char a2)
{
  CProcess::~CProcess(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x2F8);
  return this;
}
