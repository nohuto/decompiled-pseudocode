/*
 * XREFs of ??_GEyeControlApp@@UEAAPEAXI@Z @ 0x180258610
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1EyeControlApp@@UEAA@XZ @ 0x180258150 (--1EyeControlApp@@UEAA@XZ.c)
 */

EyeControlApp *__fastcall EyeControlApp::`scalar deleting destructor'(EyeControlApp *this, char a2)
{
  EyeControlApp::~EyeControlApp(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x40);
  return this;
}
