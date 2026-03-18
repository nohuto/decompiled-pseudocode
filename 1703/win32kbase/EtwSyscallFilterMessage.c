/*
 * XREFs of EtwSyscallFilterMessage @ 0x1C00FCD20
 * Callers:
 *     NtUserWin32kSysCallFilterStub @ 0x1C00E5D80 (NtUserWin32kSysCallFilterStub.c)
 * Callees:
 *     Template_szz @ 0x1C00FD3F8 (Template_szz.c)
 */

__int64 __fastcall EtwSyscallFilterMessage(int a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = HIDWORD(Microsoft_Windows_Win32kEnableBits);
  if ( (Microsoft_Windows_Win32kEnableBits & 0x2000000000LL) != 0 )
    return Template_szz(a1, a2, a3, a1, a2, a3);
  return result;
}
