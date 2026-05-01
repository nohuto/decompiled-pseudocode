/*
 * XREFs of std::shared_ptr_ExecutionModel::IGameConfigStore_::_Setpd_ExecutionModel::IGameConfigStore_____ptr64__lambda_363be69ce98476e89105dd3a93d8d574___ @ 0x180018FE8
 * Callers:
 *     ?CreateGameConfigStoreClientIfNeeded@@YAJAEAV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@@Z @ 0x180014944 (-CreateGameConfigStoreClientIfNeeded@@YAJAEAV-$shared_ptr@UIGameConfigStore@ExecutionModel@@@std.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180042950 (--2@YAPEAX_K@Z.c)
 */

_DWORD *__fastcall std::shared_ptr_ExecutionModel::IGameConfigStore_::_Setpd_ExecutionModel::IGameConfigStore_____ptr64__lambda_363be69ce98476e89105dd3a93d8d574___(
        __int64 *a1,
        __int64 a2)
{
  _DWORD *result; // rax

  try
  {
    result = operator new(0x18uLL);
    result[2] = 1;
    result[3] = 1;
    *(_QWORD *)result = off_180047AA0;
    *((_QWORD *)result + 2) = a2;
    *a1 = a2;
    a1[1] = (__int64)result;
  }
  catch ( ... )
  {
    lambda_c62bb885f9f6d79a34c1c24d88aff06c_::operator()((__int64)off_180047AA0, a2);
    throw;
  }
  return result;
}
