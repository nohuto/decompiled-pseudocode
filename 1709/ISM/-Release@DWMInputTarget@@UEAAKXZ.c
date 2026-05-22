/*
 * XREFs of ?Release@DWMInputTarget@@UEAAKXZ @ 0x180020E10
 * Callers:
 *     ?Release@DWMInputTarget@@WBI@EAAKXZ @ 0x180022530 (-Release@DWMInputTarget@@WBI@EAAKXZ.c)
 *     ?Release@DWMInputTarget@@WCA@EAAKXZ @ 0x180022570 (-Release@DWMInputTarget@@WCA@EAAKXZ.c)
 *     ?Release@DWMInputTarget@@W7EAAKXZ @ 0x1800225C0 (-Release@DWMInputTarget@@W7EAAKXZ.c)
 *     ?Release@DWMInputTarget@@WCI@EAAKXZ @ 0x1800225D0 (-Release@DWMInputTarget@@WCI@EAAKXZ.c)
 *     ?Release@DWMInputTarget@@WBA@EAAKXZ @ 0x180022620 (-Release@DWMInputTarget@@WBA@EAAKXZ.c)
 *     ?Release@DWMInputTarget@@WDA@EAAKXZ @ 0x180022630 (-Release@DWMInputTarget@@WDA@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMInputTarget::Release(DWMInputTarget *this)
{
  _DWORD *v1; // rdi
  unsigned __int32 v2; // ebx
  __int64 v3; // rax

  v1 = (_DWORD *)((char *)this + 48);
  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 14);
  if ( !v2 )
  {
    v3 = *(_QWORD *)v1;
    *((_DWORD *)this + 14) = 1;
    (*(void (__fastcall **)(char *))(v3 + 32))((char *)this + 48);
    v1[2] = 0;
    (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v1 + 24LL))(v1, 1LL);
  }
  return v2;
}
