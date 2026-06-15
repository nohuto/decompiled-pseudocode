/*
 * XREFs of ?Reset@CAPOWrapperSrv@@UEAAJXZ @ 0x140048170
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAPOWrapperSrv::Reset(CAPOWrapperSrv *this)
{
  __int64 v1; // rcx

  v1 = *((_QWORD *)this + 10);
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 24LL))(v1);
  else
    return 2147500033LL;
}
