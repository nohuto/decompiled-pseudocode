/*
 * XREFs of ?Release@Win32kInterop@@UEAAKXZ @ 0x18000B100
 * Callers:
 *     ?Release@Win32kInterop@@W7EAAKXZ @ 0x180012550 (-Release@Win32kInterop@@W7EAAKXZ.c)
 *     ?Release@Win32kInterop@@WBA@EAAKXZ @ 0x180012580 (-Release@Win32kInterop@@WBA@EAAKXZ.c)
 *     ?Release@Win32kInterop@@WBI@EAAKXZ @ 0x1800125C0 (-Release@Win32kInterop@@WBI@EAAKXZ.c)
 *     ?Release@Win32kInterop@@WCA@EAAKXZ @ 0x1800125F0 (-Release@Win32kInterop@@WCA@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Win32kInterop::Release(Win32kInterop *this)
{
  _DWORD *v1; // rdi
  unsigned __int32 v2; // ebx
  __int64 v3; // rax

  v1 = (_DWORD *)((char *)this + 32);
  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 10);
  if ( !v2 )
  {
    v3 = *(_QWORD *)v1;
    *((_DWORD *)this + 10) = 1;
    (*(void (__fastcall **)(char *))(v3 + 32))((char *)this + 32);
    v1[2] = 0;
    (*(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v1 + 24LL))(v1, 1LL);
  }
  return v2;
}
