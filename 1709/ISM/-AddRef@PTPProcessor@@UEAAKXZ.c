/*
 * XREFs of ?AddRef@PTPProcessor@@UEAAKXZ @ 0x180003400
 * Callers:
 *     ?AddRef@InputRedirectionTarget@@WBA@EAAKXZ @ 0x1800056E0 (-AddRef@InputRedirectionTarget@@WBA@EAAKXZ.c)
 *     ?AddRef@GazeProcessor@@W7EAAKXZ @ 0x180005720 (-AddRef@GazeProcessor@@W7EAAKXZ.c)
 *     ?AddRef@PTPProcessor@@WLI@EAAKXZ @ 0x18006F500 (-AddRef@PTPProcessor@@WLI@EAAKXZ.c)
 *     ?AddRef@PTPProcessor@@WMA@EAAKXZ @ 0x18006F530 (-AddRef@PTPProcessor@@WMA@EAAKXZ.c)
 *     ?AddRef@PTPProcessor@@WMI@EAAKXZ @ 0x18006F580 (-AddRef@PTPProcessor@@WMI@EAAKXZ.c)
 *     ?AddRef@PTPProcessor@@WLA@EAAKXZ @ 0x18006F5E0 (-AddRef@PTPProcessor@@WLA@EAAKXZ.c)
 *     ?AddRef@PTPProcessor@@WNA@EAAKXZ @ 0x18006F5F0 (-AddRef@PTPProcessor@@WNA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PTPProcessor::AddRef(PTPProcessor *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 6);
}
