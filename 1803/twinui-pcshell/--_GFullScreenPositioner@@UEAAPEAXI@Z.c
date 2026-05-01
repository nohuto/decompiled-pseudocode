/*
 * XREFs of ??_GFullScreenPositioner@@UEAAPEAXI@Z @ 0x18014D0A0
 * Callers:
 *     ??_EFullScreenPositioner@@WBI@EAAPEAXI@Z @ 0x1800A44A0 (--_EFullScreenPositioner@@WBI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1FullScreenPositioner@@UEAA@XZ @ 0x18014CCA8 (--1FullScreenPositioner@@UEAA@XZ.c)
 */

FullScreenPositioner *__fastcall FullScreenPositioner::`scalar deleting destructor'(
        FullScreenPositioner *this,
        char a2)
{
  FullScreenPositioner::~FullScreenPositioner(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x120);
  return this;
}
