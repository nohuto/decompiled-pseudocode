/*
 * XREFs of ?Release@CAudioStream@@UEAAKXZ @ 0x18002F750
 * Callers:
 *     ?Release@CAudioStream@@W7EAAKXZ @ 0x180065AD0 (-Release@CAudioStream@@W7EAAKXZ.c)
 *     ?Release@CAudioStream@@WBA@EAAKXZ @ 0x180065AE0 (-Release@CAudioStream@@WBA@EAAKXZ.c)
 *     ?Release@CAudioStream@@WBI@EAAKXZ @ 0x180065AF0 (-Release@CAudioStream@@WBI@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioStream::Release(CAudioStream *this)
{
  char *v1; // rdi
  unsigned __int32 v2; // ebx

  v1 = (char *)this + 24;
  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 8);
  if ( !v2 )
  {
    (*(void (__fastcall **)(char *))(*(_QWORD *)v1 + 32LL))((char *)this + 24);
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v1 + 24LL))(v1, 1LL);
  }
  return v2;
}
