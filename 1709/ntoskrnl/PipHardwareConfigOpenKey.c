/*
 * XREFs of PipHardwareConfigOpenKey @ 0x1405C8980
 * Callers:
 *     PipHardwareConfigGetIndex @ 0x1405C8818 (PipHardwareConfigGetIndex.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x1405C88A0 (PnpHardwareConfigCreateBootDriverFlags.c)
 * Callees:
 *     RtlStringCchCopyExW @ 0x1400DF820 (RtlStringCchCopyExW.c)
 *     RtlStringCchCatExW @ 0x140146528 (RtlStringCchCatExW.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     _SysCtxRegOpenKey @ 0x140521D98 (_SysCtxRegOpenKey.c)
 */

__int64 __fastcall PipHardwareConfigOpenKey(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v4; // ebx
  NTSTRSAFE_PWSTR *v5; // r9
  __int64 v6; // rcx
  void *v7; // rcx
  size_t *v9; // [rsp+20h] [rbp-248h]
  ULONG dwFlags; // [rsp+28h] [rbp-240h]
  void *v11; // [rsp+30h] [rbp-238h] BYREF
  wchar_t pszDest[264]; // [rsp+40h] [rbp-228h] BYREF

  v11 = 0LL;
  if ( a3 )
  {
    v4 = RtlStringCchCopyExW(pszDest, 0x104uLL, L"System\\HardwareConfig\\", 0LL, 0LL, 0x800u);
    if ( v4 < 0
      || (v4 = RtlStringCchCatExW(pszDest, 0x104uLL, L"Current", v5, v9, dwFlags), v4 < 0)
      || (!*(_QWORD *)&PiPnpRtlCtx ? (v6 = 0LL) : (v6 = **(_QWORD **)&PiPnpRtlCtx),
          v4 = SysCtxRegOpenKey(v6, 2147483650LL, (__int64)pszDest, 0, 0x20019u, (__int64)&v11),
          v4 < 0) )
    {
      v7 = v11;
    }
    else
    {
      v7 = 0LL;
      *a3 = v11;
      v11 = 0LL;
    }
    if ( v7 )
      ZwClose(v7);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v4;
}
