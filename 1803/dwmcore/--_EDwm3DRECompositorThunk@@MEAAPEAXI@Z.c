/*
 * XREFs of ??_EDwm3DRECompositorThunk@@MEAAPEAXI@Z @ 0x180149D98
 * Callers:
 *     ??_EDwm3DRECompositorThunk@@O7EAAPEAXI@Z @ 0x1800DD430 (--_EDwm3DRECompositorThunk@@O7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 *     ??1Dwm3DRECompositorThunk@@MEAA@XZ @ 0x18017A56C (--1Dwm3DRECompositorThunk@@MEAA@XZ.c)
 */

Dwm3DRECompositorThunk *__fastcall Dwm3DRECompositorThunk::`vector deleting destructor'(
        Dwm3DRECompositorThunk *this,
        char a2)
{
  Dwm3DRECompositorThunk::~Dwm3DRECompositorThunk(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
