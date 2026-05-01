/*
 * XREFs of ??_GEyeControlApp@@UEAAPEAXI@Z @ 0x1801DF1B0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1801E2C84 (--3@YAXPEAX@Z.c)
 */

EyeControlApp *__fastcall EyeControlApp::`scalar deleting destructor'(EyeControlApp *this, char a2)
{
  *(_QWORD *)this = &EyeControlApp::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
