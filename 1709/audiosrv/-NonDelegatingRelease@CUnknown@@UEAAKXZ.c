/*
 * XREFs of ?NonDelegatingRelease@CUnknown@@UEAAKXZ @ 0x18002FA70
 * Callers:
 *     ?Release@PhoneCallAudio@@UEAAKXZ @ 0x18002FA20 (-Release@PhoneCallAudio@@UEAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CUnknown::NonDelegatingRelease(CUnknown *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 4);
  if ( !v1 && this )
    (*(void (__fastcall **)(CUnknown *, __int64))(*(_QWORD *)this + 24LL))(this, 1LL);
  return v1;
}
