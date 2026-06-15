/*
 * XREFs of ?AddClientReference@CAudioStream@@UEAAKXZ @ 0x18002F070
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioStream::AddClientReference(CAudioStream *this)
{
  unsigned int (__fastcall *v2)(CAudioStream *__hidden); // rax

  v2 = *(unsigned int (__fastcall **)(CAudioStream *__hidden))(*(_QWORD *)this + 8LL);
  if ( v2 == CAudioStream::AddRef )
    _InterlockedIncrement((volatile signed __int32 *)this + 8);
  else
    v2(this);
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 11);
}
