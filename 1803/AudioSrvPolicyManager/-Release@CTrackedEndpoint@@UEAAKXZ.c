/*
 * XREFs of ?Release@CTrackedEndpoint@@UEAAKXZ @ 0x18002C8B0
 * Callers:
 *     ?Release@CTrackedEndpoint@@WBA@EAAKXZ @ 0x18002D450 (-Release@CTrackedEndpoint@@WBA@EAAKXZ.c)
 *     ?Release@CTrackedEndpoint@@W7EAAKXZ @ 0x18002D4A0 (-Release@CTrackedEndpoint@@W7EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800362D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTrackedEndpoint::Release(CTrackedEndpoint *this)
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
