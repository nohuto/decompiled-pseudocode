/*
 * XREFs of HMValidateSharedHandle @ 0x1C002810C
 * Callers:
 *     UserGetHDevFromMonitor @ 0x1C0026E6C (UserGetHDevFromMonitor.c)
 *     GetHDevName @ 0x1C00274F0 (GetHDevName.c)
 *     ValidateHmonitor @ 0x1C0028100 (ValidateHmonitor.c)
 *     NtUserGetDpiForMonitor @ 0x1C00281A0 (NtUserGetDpiForMonitor.c)
 *     NtUserInitializeInputDeviceInjection @ 0x1C00E1C70 (NtUserInitializeInputDeviceInjection.c)
 *     NtUserInitializePointerDeviceInjectionEx @ 0x1C00E1FD0 (NtUserInitializePointerDeviceInjectionEx.c)
 * Callees:
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 */

__int64 __fastcall HMValidateSharedHandle(int a1)
{
  char *v1; // rbx
  __int64 *v2; // rdi
  __int64 result; // rax

  if ( (unsigned __int64)(unsigned __int16)a1 >= *((_QWORD *)gpsi + 1)
    || (v1 = (char *)qword_1C0189E38 + (unsigned int)(unsigned __int16)a1 * dword_1C0189E40,
        v2 = (__int64 *)((char *)gpKernelHandleTable
                       + 16 * ((__int64)((unsigned int)(unsigned __int16)a1 * dword_1C0189E40) >> 5)),
        HIWORD(a1) != *((_WORD *)v1 + 13))
    && HIWORD(a1) != 0xFFFF
    && (HIWORD(a1) || !PsGetCurrentProcessWow64Process())
    || (v1[25] & 1) != 0
    || v1[24] != 12
    || (result = *v2) == 0 )
  {
    UserSetLastError(1461LL);
    return 0LL;
  }
  return result;
}
