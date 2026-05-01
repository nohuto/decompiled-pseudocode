/*
 * XREFs of ??_ECImmersiveMode@@MEAAPEAXI@Z @ 0x180031CF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CImmersiveMode@@MEAA@XZ @ 0x180031D24 (--1CImmersiveMode@@MEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CImmersiveMode *__fastcall CImmersiveMode::`vector deleting destructor'(CImmersiveMode *this, char a2)
{
  CImmersiveMode::~CImmersiveMode(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
