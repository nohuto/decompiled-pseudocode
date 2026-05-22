/*
 * XREFs of ?AddRef@Win32kInterop@@UEAAKXZ @ 0x18000B0F0
 * Callers:
 *     ?AddRef@Win32kInterop@@WBA@EAAKXZ @ 0x180012540 (-AddRef@Win32kInterop@@WBA@EAAKXZ.c)
 *     ?AddRef@DWMFocusedInputTarget@@WBI@EAAKXZ @ 0x180012570 (-AddRef@DWMFocusedInputTarget@@WBI@EAAKXZ.c)
 *     ?AddRef@Win32kInterop@@WCA@EAAKXZ @ 0x1800125B0 (-AddRef@Win32kInterop@@WCA@EAAKXZ.c)
 *     ?AddRef@DWMFocusedInputTarget@@W7EAAKXZ @ 0x1800125E0 (-AddRef@DWMFocusedInputTarget@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Win32kInterop::AddRef(Win32kInterop *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 10);
}
