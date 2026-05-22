/*
 * XREFs of ?Release@MPCInputRouter@@UEAAKXZ @ 0x180016D20
 * Callers:
 *     ?Release@DWMInputRouter@@W7EAAKXZ @ 0x180020460 (-Release@DWMInputRouter@@W7EAAKXZ.c)
 *     ?Release@DWMInputRouter@@WCI@EAAKXZ @ 0x180020470 (-Release@DWMInputRouter@@WCI@EAAKXZ.c)
 *     ?Release@DWMInputRouter@@WBA@EAAKXZ @ 0x1800204F0 (-Release@DWMInputRouter@@WBA@EAAKXZ.c)
 *     ?Release@DWMInputRouter@@WDA@EAAKXZ @ 0x180020500 (-Release@DWMInputRouter@@WDA@EAAKXZ.c)
 *     ?Release@DWMInputRouter@@WBI@EAAKXZ @ 0x180020580 (-Release@DWMInputRouter@@WBI@EAAKXZ.c)
 *     ?Release@DWMInputRouter@@WDI@EAAKXZ @ 0x180020590 (-Release@DWMInputRouter@@WDI@EAAKXZ.c)
 *     ?Release@DWMInputRouter@@WCA@EAAKXZ @ 0x180020600 (-Release@DWMInputRouter@@WCA@EAAKXZ.c)
 *     ?Release@DWMInputRouter@@WEA@EAAKXZ @ 0x180020610 (-Release@DWMInputRouter@@WEA@EAAKXZ.c)
 *     ?Release@MPCInputRouter@@WCNI@EAAKXZ @ 0x1800AAEC0 (-Release@MPCInputRouter@@WCNI@EAAKXZ.c)
 *     ?Release@MPCInputRouter@@WCNA@EAAKXZ @ 0x1800AAF70 (-Release@MPCInputRouter@@WCNA@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCInputRouter::Release(MPCInputRouter *this)
{
  _DWORD *v1; // rdi
  unsigned __int32 v2; // ebx
  __int64 v3; // rax

  v1 = (_DWORD *)((char *)this + 64);
  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 18);
  if ( !v2 )
  {
    v3 = *(_QWORD *)v1;
    *((_DWORD *)this + 18) = 1;
    (*(void (__fastcall **)(char *))(v3 + 32))((char *)this + 64);
    v1[2] = 0;
    (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v1 + 24LL))(v1, 1LL);
  }
  return v2;
}
