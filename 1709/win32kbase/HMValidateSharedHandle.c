/*
 * XREFs of HMValidateSharedHandle @ 0x1C005ABE4
 * Callers:
 *     NtUserGetDpiForMonitor @ 0x1C005AA50 (NtUserGetDpiForMonitor.c)
 *     ValidateHmonitor @ 0x1C005ABD0 (ValidateHmonitor.c)
 *     NtUserGetHDevName @ 0x1C005AF10 (NtUserGetHDevName.c)
 *     UserGetHDevFromMonitor @ 0x1C005B6C0 (UserGetHDevFromMonitor.c)
 *     NtUserInitializeInputDeviceInjection @ 0x1C00E8AF0 (NtUserInitializeInputDeviceInjection.c)
 *     NtUserInitializePointerDeviceInjectionEx @ 0x1C00E8D30 (NtUserInitializePointerDeviceInjectionEx.c)
 * Callees:
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 */

__int64 __fastcall HMValidateSharedHandle(int a1)
{
  _QWORD *v1; // rsi
  char *v2; // rbx
  __int64 v3; // rdi
  __int64 result; // rax

  if ( (unsigned __int64)(unsigned __int16)a1 >= *((_QWORD *)gpsi + 1)
    || (v1 = gpKernelHandleTable,
        v2 = (char *)qword_1C018E9B8 + (unsigned int)(unsigned __int16)a1 * dword_1C018E9C0,
        v3 = 3 * ((__int64)((unsigned int)(unsigned __int16)a1 * dword_1C018E9C0) >> 5),
        HIWORD(a1) != *((_WORD *)v2 + 13))
    && HIWORD(a1) != 0xFFFF
    && (HIWORD(a1) || !PsGetCurrentProcessWow64Process((unsigned __int16)a1))
    || (v2[25] & 1) != 0
    || v2[24] != 12
    || (result = v1[v3]) == 0 )
  {
    UserSetLastError(1461LL);
    return 0LL;
  }
  return result;
}
