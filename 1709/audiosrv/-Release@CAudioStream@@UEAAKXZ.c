/*
 * XREFs of ?Release@CAudioStream@@UEAAKXZ @ 0x18001D3B0
 * Callers:
 *     ?ReleaseClientReference@CAudioStream@@UEAAKXZ @ 0x18001CA50 (-ReleaseClientReference@CAudioStream@@UEAAKXZ.c)
 *     ?Release@CAudioStream@@W7EAAKXZ @ 0x180036E70 (-Release@CAudioStream@@W7EAAKXZ.c)
 *     ?Release@CAudioStream@@WBA@EAAKXZ @ 0x180036E80 (-Release@CAudioStream@@WBA@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioStream::Release(CAudioStream *this)
{
  char *v1; // rdi
  unsigned __int32 v2; // ebx

  v1 = (char *)this + 16;
  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 6);
  if ( !v2 )
  {
    (*(void (__fastcall **)(char *))(*(_QWORD *)v1 + 32LL))((char *)this + 16);
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v1 + 24LL))(v1, 1LL);
  }
  return v2;
}
