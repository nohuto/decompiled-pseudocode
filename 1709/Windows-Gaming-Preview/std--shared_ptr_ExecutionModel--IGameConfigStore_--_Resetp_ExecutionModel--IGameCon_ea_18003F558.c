/*
 * XREFs of std::shared_ptr_ExecutionModel::IGameConfigStore_::_Resetp_ExecutionModel::IGameConfigStore__lambda_c62bb885f9f6d79a34c1c24d88aff06c___ @ 0x18003F558
 * Callers:
 *     ?PopulateValues@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18003F090 (-PopulateValues@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180041620 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

unsigned __int64 __fastcall std::shared_ptr_ExecutionModel::IGameConfigStore_::_Resetp_ExecutionModel::IGameConfigStore__lambda_c62bb885f9f6d79a34c1c24d88aff06c___(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // rcx
  _DWORD *v5; // rdi
  unsigned __int64 result; // rax
  volatile signed __int32 *v7; // rbx

  try
  {
    v5 = operator new(0x18uLL);
    v5[2] = 1;
    v5[3] = 1;
    result = (unsigned __int64)off_18004AEE0;
    *(_QWORD *)v5 = off_18004AEE0;
    *((_QWORD *)v5 + 2) = a2;
    v7 = (volatile signed __int32 *)a1[1];
    if ( v7 )
    {
      result = (unsigned int)_InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
        result = (unsigned int)_InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF);
        if ( (_DWORD)result == 1 )
          result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
      }
    }
    a1[1] = (__int64)v5;
    *a1 = a2;
  }
  catch ( ... )
  {
    lambda_c62bb885f9f6d79a34c1c24d88aff06c_::operator()(v4, a2);
    throw;
  }
  return result;
}
