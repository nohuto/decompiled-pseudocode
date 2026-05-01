/*
 * XREFs of ??_GCImmersiveApp@@MEAAPEAXI@Z @ 0x1800532E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CImmersiveApp@@MEAA@XZ @ 0x180053454 (--1CImmersiveApp@@MEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CImmersiveApp *__fastcall CImmersiveApp::`scalar deleting destructor'(CImmersiveApp *this, char a2)
{
  CImmersiveApp::~CImmersiveApp(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
