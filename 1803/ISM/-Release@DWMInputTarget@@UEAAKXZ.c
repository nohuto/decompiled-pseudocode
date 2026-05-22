/*
 * XREFs of ?Release@DWMInputTarget@@UEAAKXZ @ 0x180017A70
 * Callers:
 *     ?Release@DWMInputTarget@@WBI@EAAKXZ @ 0x180018F20 (-Release@DWMInputTarget@@WBI@EAAKXZ.c)
 *     ?Release@DWMInputTarget@@WDI@EAAKXZ @ 0x180018F30 (-Release@DWMInputTarget@@WDI@EAAKXZ.c)
 *     ?Release@DWMInputTarget@@WCA@EAAKXZ @ 0x180018F90 (-Release@DWMInputTarget@@WCA@EAAKXZ.c)
 *     ?Release@DWMInputTarget@@W7EAAKXZ @ 0x180018FE0 (-Release@DWMInputTarget@@W7EAAKXZ.c)
 *     ?Release@DWMInputTarget@@WCI@EAAKXZ @ 0x180018FF0 (-Release@DWMInputTarget@@WCI@EAAKXZ.c)
 *     ?Release@DWMInputTarget@@WBA@EAAKXZ @ 0x180019040 (-Release@DWMInputTarget@@WBA@EAAKXZ.c)
 *     ?Release@DWMInputTarget@@WDA@EAAKXZ @ 0x180019050 (-Release@DWMInputTarget@@WDA@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMInputTarget::Release(DWMInputTarget *this)
{
  _DWORD *v1; // rdi
  unsigned __int32 v2; // ebx
  __int64 v3; // rax

  v1 = (_DWORD *)((char *)this + 56);
  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 16);
  if ( !v2 )
  {
    v3 = *(_QWORD *)v1;
    *((_DWORD *)this + 16) = 1;
    (*(void (__fastcall **)(char *))(v3 + 32))((char *)this + 56);
    v1[2] = 0;
    (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v1 + 24LL))(v1, 1LL);
  }
  return v2;
}
