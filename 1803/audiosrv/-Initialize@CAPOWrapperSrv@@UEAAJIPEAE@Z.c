/*
 * XREFs of ?Initialize@CAPOWrapperSrv@@UEAAJIPEAE@Z @ 0x180108720
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAPOWrapperSrv::Initialize(CAPOWrapperSrv *this, __int64 a2, unsigned __int8 *a3)
{
  __int64 v3; // rcx

  v3 = *((_QWORD *)this + 10);
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64, __int64, unsigned __int8 *))(*(_QWORD *)v3 + 48LL))(v3, a2, a3);
  else
    return 2147500033LL;
}
