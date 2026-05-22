/*
 * XREFs of ?OnExclusiveModeStateChanged@MPCInputRouter@@UEAAJEK@Z @ 0x180086CE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCInputRouter::OnExclusiveModeStateChanged(MPCInputRouter *this, char a2, __int32 a3)
{
  *((_BYTE *)this + 88) = a2 != 0;
  _InterlockedExchange((volatile __int32 *)this + 23, a3);
  (*(void (__fastcall **)(_QWORD, __int64 (__fastcall *)(), char *, __int64))(**((_QWORD **)this + 13) + 128LL))(
    *((_QWORD *)this + 13),
    lambda_b4e39e6c596c6c16e4eb60f4733859c1_::_lambda_invoker_cdecl_,
    (char *)this - 720,
    4LL);
  return 0LL;
}
