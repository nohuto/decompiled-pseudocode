/*
 * XREFs of ?EnableGamepadExclusivityForProcess@MPCManagerClient@@UEAAJK@Z @ 0x180026B50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCManagerClient::EnableGamepadExclusivityForProcess(MPCManagerClient *this)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(*((_QWORD *)this + 131) + 160LL);
  if ( v1 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 48LL))(v1);
  else
    return 0LL;
}
