/*
 * XREFs of ?_Move@?$_Func_impl_no_alloc@V?$_Binder@U_Unforced@std@@P8MPCHolographicInputManager@@EAAX_N@ZPEAV3@AEBU?$_Ph@$00@2@@std@@X_N@std@@EEAAPEAV?$_Func_base@X_N@2@PEAX@Z @ 0x180051300
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,void (MPCHolographicInputManager::*)(bool),MPCHolographicInputManager *,std::_Ph<1> const &>,void,bool>::_Move(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a2 = &std::_Func_impl_no_alloc<std::_Binder<std::_Unforced,void (MPCHolographicInputManager::*)(bool),MPCHolographicInputManager *,std::_Ph<1> const &>,void,bool>::`vftable';
  result = a2;
  *(_OWORD *)(a2 + 8) = *(_OWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 24);
  return result;
}
