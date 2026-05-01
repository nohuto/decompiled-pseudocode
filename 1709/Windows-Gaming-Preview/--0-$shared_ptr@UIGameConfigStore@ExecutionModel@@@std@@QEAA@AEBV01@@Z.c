/*
 * XREFs of ??0?$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@QEAA@AEBV01@@Z @ 0x18002B8EC
 * Callers:
 *     ??4?$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18002B85C (--4-$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?PopulateValues@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18003F090 (-PopulateValues@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::shared_ptr<ExecutionModel::IGameConfigStore>::shared_ptr<ExecutionModel::IGameConfigStore>(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v3; // rsi
  __int64 v4; // rbp
  volatile signed __int32 *v5; // rdi
  _QWORD *result; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v3 = a2[1];
  v4 = *a2;
  if ( v3 )
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
  v5 = (volatile signed __int32 *)a1[1];
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  a1[1] = v3;
  result = a1;
  *a1 = v4;
  return result;
}
