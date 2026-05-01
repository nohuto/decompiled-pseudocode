/*
 * XREFs of _lambda_6d9923a1ae258a03f662b6b89cb315c5_::__lambda_6d9923a1ae258a03f662b6b89cb315c5_ @ 0x180179A04
 * Callers:
 *     CreationThreadDispatcher::RunAsync__lambda_a8a8a6fc1c15fdd6434ee6b8fb931e9b___ @ 0x1801797FC (CreationThreadDispatcher--RunAsync__lambda_a8a8a6fc1c15fdd6434ee6b8fb931e9b___.c)
 *     ??_E?$CTaskWrapper@V_lambda_7f972278ece14cb52f7272136f7cbede_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x180179F40 (--_E-$CTaskWrapper@V_lambda_7f972278ece14cb52f7272136f7cbede_@@@ComTaskPool@Internal@Windows@@UE.c)
 *     CreationThreadDispatcher::RunAsync__lambda_f4b46c9c4eb1558b25bb27c2a9448747___ @ 0x18017AB08 (CreationThreadDispatcher--RunAsync__lambda_f4b46c9c4eb1558b25bb27c2a9448747___.c)
 *     _CreationThreadDispatcher::RunAsync__lambda_f4b46c9c4eb1558b25bb27c2a9448747____::_1_::dtor$2 @ 0x1801F5346 (_CreationThreadDispatcher--RunAsync__lambda_f4b46c9c4eb1558b25bb27c2a9448747____--_1_--dtor$2.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_6d9923a1ae258a03f662b6b89cb315c5_::__lambda_6d9923a1ae258a03f662b6b89cb315c5_(_QWORD *a1)
{
  volatile signed __int32 *v2; // rcx
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx

  v2 = (volatile signed __int32 *)a1[3];
  if ( v2 )
  {
    a1[3] = 0LL;
    result = (unsigned int)_InterlockedExchangeAdd(v2 + 11, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      result = (*(__int64 (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v2 + 72LL))(v2, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        result = (*(__int64 (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                         + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  v4 = a1[2];
  if ( v4 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = a1[1];
  if ( v5 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  if ( *a1 )
    return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
  return result;
}
