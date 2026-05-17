/*
 * XREFs of sub_1800CA554 @ 0x1800CA554
 * Callers:
 *     sub_18000F300 @ 0x18000F300 (sub_18000F300.c)
 *     sub_18000FA60 @ 0x18000FA60 (sub_18000FA60.c)
 *     sub_18000FC70 @ 0x18000FC70 (sub_18000FC70.c)
 *     LdrResolveDelayLoadedAPI @ 0x180022CD0 (LdrResolveDelayLoadedAPI.c)
 *     sub_18002BDB8 @ 0x18002BDB8 (sub_18002BDB8.c)
 *     sub_18002C0DC @ 0x18002C0DC (sub_18002C0DC.c)
 *     sub_18002D1D8 @ 0x18002D1D8 (sub_18002D1D8.c)
 *     sub_18002DF14 @ 0x18002DF14 (sub_18002DF14.c)
 *     sub_18003829C @ 0x18003829C (sub_18003829C.c)
 *     sub_180039360 @ 0x180039360 (sub_180039360.c)
 *     sub_18003B5F8 @ 0x18003B5F8 (sub_18003B5F8.c)
 *     sub_18003B92C @ 0x18003B92C (sub_18003B92C.c)
 *     sub_18003FCF8 @ 0x18003FCF8 (sub_18003FCF8.c)
 *     sub_18003FFC8 @ 0x18003FFC8 (sub_18003FFC8.c)
 *     sub_1800410D4 @ 0x1800410D4 (sub_1800410D4.c)
 *     LdrLoadDll @ 0x180041BB0 (LdrLoadDll.c)
 *     LdrGetDllHandleEx @ 0x180041D20 (LdrGetDllHandleEx.c)
 *     sub_180041F10 @ 0x180041F10 (sub_180041F10.c)
 *     sub_180042054 @ 0x180042054 (sub_180042054.c)
 *     sub_180042450 @ 0x180042450 (sub_180042450.c)
 *     sub_1800426E8 @ 0x1800426E8 (sub_1800426E8.c)
 *     sub_180043500 @ 0x180043500 (sub_180043500.c)
 *     sub_180046AE0 @ 0x180046AE0 (sub_180046AE0.c)
 *     sub_1800473FC @ 0x1800473FC (sub_1800473FC.c)
 *     LdrShutdownProcess @ 0x180047E60 (LdrShutdownProcess.c)
 *     sub_18004F9F4 @ 0x18004F9F4 (sub_18004F9F4.c)
 *     sub_18004FD90 @ 0x18004FD90 (sub_18004FD90.c)
 *     sub_180050300 @ 0x180050300 (sub_180050300.c)
 *     sub_18005088C @ 0x18005088C (sub_18005088C.c)
 *     sub_180054DE8 @ 0x180054DE8 (sub_180054DE8.c)
 *     sub_180055808 @ 0x180055808 (sub_180055808.c)
 *     sub_1800559B0 @ 0x1800559B0 (sub_1800559B0.c)
 *     sub_180055C44 @ 0x180055C44 (sub_180055C44.c)
 *     sub_180055D80 @ 0x180055D80 (sub_180055D80.c)
 *     sub_180056DF4 @ 0x180056DF4 (sub_180056DF4.c)
 *     sub_180071960 @ 0x180071960 (sub_180071960.c)
 *     sub_180073CD4 @ 0x180073CD4 (sub_180073CD4.c)
 *     sub_180075000 @ 0x180075000 (sub_180075000.c)
 *     sub_18007AE58 @ 0x18007AE58 (sub_18007AE58.c)
 *     sub_18007FCDC @ 0x18007FCDC (sub_18007FCDC.c)
 *     sub_180080B70 @ 0x180080B70 (sub_180080B70.c)
 *     sub_180081A8C @ 0x180081A8C (sub_180081A8C.c)
 *     sub_180082804 @ 0x180082804 (sub_180082804.c)
 *     sub_1800828E0 @ 0x1800828E0 (sub_1800828E0.c)
 *     LdrGetKnownDllSectionHandle @ 0x180082C40 (LdrGetKnownDllSectionHandle.c)
 *     sub_18008965C @ 0x18008965C (sub_18008965C.c)
 *     LdrInitShimEngineDynamic @ 0x1800CC730 (LdrInitShimEngineDynamic.c)
 *     sub_1800CCA84 @ 0x1800CCA84 (sub_1800CCA84.c)
 *     sub_1800CCC9C @ 0x1800CCC9C (sub_1800CCC9C.c)
 *     sub_1800CD0D8 @ 0x1800CD0D8 (sub_1800CD0D8.c)
 *     sub_1800CDEF0 @ 0x1800CDEF0 (sub_1800CDEF0.c)
 *     sub_1800CFF48 @ 0x1800CFF48 (sub_1800CFF48.c)
 *     sub_1800CFFE8 @ 0x1800CFFE8 (sub_1800CFFE8.c)
 *     sub_1800D00B4 @ 0x1800D00B4 (sub_1800D00B4.c)
 *     sub_1800D0B18 @ 0x1800D0B18 (sub_1800D0B18.c)
 * Callees:
 *     sub_1800085D4 @ 0x1800085D4 (sub_1800085D4.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     sub_1800CA80C @ 0x1800CA80C (sub_1800CA80C.c)
 */

struct _TEB *sub_1800CA554(_DWORD a1, _DWORD a2, _DWORD a3, _DWORD a4, char *a5, ...)
{
  struct _TEB *result; // rax
  char Buffer[256]; // [rsp+40h] [rbp-118h] BYREF
  va_list va; // [rsp+188h] [rbp+30h] BYREF

  va_start(va, a5);
  if ( (NtCurrentTeb()->SameTebFlags & 8) == 0 || (result = NtCurrentTeb(), (result->SameTebFlags & 0x20) != 0) )
  {
    sub_1800CA80C(Buffer);
    return (struct _TEB *)sub_1800085D4(Buffer, 0x55u, 0, a5, va, 1);
  }
  return result;
}
