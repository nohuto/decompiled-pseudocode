/*
 * XREFs of ?NonDelegatingRelease@CUnknown@@UEAAKXZ @ 0x180016EC0
 * Callers:
 *     ?Release@AudioDeviceMgr@@UEAAKXZ @ 0x180056600 (-Release@AudioDeviceMgr@@UEAAKXZ.c)
 *     ?Release@EndpointDevice@@UEAAKXZ @ 0x180056840 (-Release@EndpointDevice@@UEAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CUnknown::NonDelegatingRelease(CUnknown *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 4);
  if ( !v1 && this )
    (*(void (__fastcall **)(CUnknown *, __int64))(*(_QWORD *)this + 24LL))(this, 1LL);
  return v1;
}
