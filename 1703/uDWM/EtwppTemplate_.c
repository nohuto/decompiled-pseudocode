/*
 * XREFs of EtwppTemplate_ @ 0x180085D64
 * Callers:
 *     ?UpdateScene@CWindowList@@UEAAJXZ @ 0x18002EFC0 (-UpdateScene@CWindowList@@UEAAJXZ.c)
 *     ?ForceDisconnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180031730 (-ForceDisconnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwppTemplate_(__int64 a1, __int64 a2)
{
  return EtwEventWrite(Microsoft_Windows_Dwm_UdwmHandle, a2, 0LL, 0LL);
}
