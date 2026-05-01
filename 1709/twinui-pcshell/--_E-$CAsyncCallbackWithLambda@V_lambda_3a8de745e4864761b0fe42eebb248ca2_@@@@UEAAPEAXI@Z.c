/*
 * XREFs of ??_E?$CAsyncCallbackWithLambda@V_lambda_3a8de745e4864761b0fe42eebb248ca2_@@@@UEAAPEAXI@Z @ 0x180079550
 * Callers:
 *     <none>
 * Callees:
 *     ??1RaiseApplicationViewChange@ApplicationViewTraceLogging@ApplicationViewManagement@@QEAA@XZ @ 0x18007A370 (--1RaiseApplicationViewChange@ApplicationViewTraceLogging@ApplicationViewManagement@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall CAsyncCallbackWithLambda<_lambda_3a8de745e4864761b0fe42eebb248ca2_>::`vector deleting destructor'(
        _QWORD *Block,
        char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange::~RaiseApplicationViewChange((ApplicationViewManagement::ApplicationViewTraceLogging::RaiseApplicationViewChange *)(Block + 11));
  v4 = Block[10];
  if ( v4 )
  {
    Block[10] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = Block[9];
  if ( v5 )
  {
    Block[9] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = Block[7];
  if ( v6 )
  {
    Block[7] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  *((_DWORD *)Block + 13) = -1073741823;
  v7 = Block[5];
  if ( v7 )
  {
    Block[5] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
