/*
 * XREFs of ?IsSameAsTarget@DWMInputTarget@@UEBA_N_KPEAX@Z @ 0x180021E60
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

char __fastcall DWMInputTarget::IsSameAsTarget(DWMInputTarget *this, __int64 a2, void *a3)
{
  _BYTE v6[40]; // [rsp+20h] [rbp-38h] BYREF

  if ( a2 == *((_QWORD *)this + 8) )
    return 1;
  if ( a2
    && *((_QWORD *)this + 8)
    && (*(int (__fastcall **)(_QWORD, __int64, _BYTE *))(**((_QWORD **)this + 7) + 112LL))(
         *((_QWORD *)this + 7),
         a2,
         v6) >= 0 )
  {
    return (*(__int64 (__fastcall **)(DWMInputTarget *, _BYTE *, void *))(*(_QWORD *)this + 32LL))(this, v6, a3);
  }
  return 0;
}
