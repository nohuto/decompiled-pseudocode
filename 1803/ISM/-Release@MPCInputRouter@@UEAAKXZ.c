/*
 * XREFs of ?Release@MPCInputRouter@@UEAAKXZ @ 0x18007B0C0
 * Callers:
 *     ?Release@DWMInputRouter@@W7EAAKXZ @ 0x180082270 (-Release@DWMInputRouter@@W7EAAKXZ.c)
 *     ?Release@DWMInputRouter@@WCI@EAAKXZ @ 0x180082280 (-Release@DWMInputRouter@@WCI@EAAKXZ.c)
 *     ?Release@DWMInputRouter@@WEI@EAAKXZ @ 0x1800822A0 (-Release@DWMInputRouter@@WEI@EAAKXZ.c)
 *     ?Release@DWMInputRouter@@WBA@EAAKXZ @ 0x180082300 (-Release@DWMInputRouter@@WBA@EAAKXZ.c)
 *     ?Release@DWMInputRouter@@WDA@EAAKXZ @ 0x180082310 (-Release@DWMInputRouter@@WDA@EAAKXZ.c)
 *     ?Release@DWMInputRouter@@WBI@EAAKXZ @ 0x180082370 (-Release@DWMInputRouter@@WBI@EAAKXZ.c)
 *     ?Release@DWMInputRouter@@WDI@EAAKXZ @ 0x180082380 (-Release@DWMInputRouter@@WDI@EAAKXZ.c)
 *     ?Release@DWMInputRouter@@WCA@EAAKXZ @ 0x1800823F0 (-Release@DWMInputRouter@@WCA@EAAKXZ.c)
 *     ?Release@DWMInputRouter@@WEA@EAAKXZ @ 0x180082400 (-Release@DWMInputRouter@@WEA@EAAKXZ.c)
 *     ?Release@MPCInputRouter@@WCMI@EAAKXZ @ 0x180087140 (-Release@MPCInputRouter@@WCMI@EAAKXZ.c)
 *     ?Release@MPCInputRouter@@WCNA@EAAKXZ @ 0x180087190 (-Release@MPCInputRouter@@WCNA@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCInputRouter::Release(MPCInputRouter *this)
{
  _DWORD *v1; // rdi
  unsigned __int32 v2; // ebx
  __int64 v3; // rax

  v1 = (_DWORD *)((char *)this + 72);
  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 20);
  if ( !v2 )
  {
    v3 = *(_QWORD *)v1;
    *((_DWORD *)this + 20) = 1;
    (*(void (__fastcall **)(char *))(v3 + 32))((char *)this + 72);
    v1[2] = 0;
    (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v1 + 24LL))(v1, 1LL);
  }
  return v2;
}
