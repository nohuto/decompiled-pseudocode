/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_93f38ba93d47dfd49d81f7dcedd6087e___::CTaskWrapper__lambda_93f38ba93d47dfd49d81f7dcedd6087e_____lambda_93f38ba93d47dfd49d81f7dcedd6087e___ @ 0x180222C7C
 * Callers:
 *     CreationThreadDispatcher::RunAsync__lambda_a108a8c11bb5b98786bc6ab4691e60b5___ @ 0x180223064 (CreationThreadDispatcher--RunAsync__lambda_a108a8c11bb5b98786bc6ab4691e60b5___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180010B98 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     _lambda_a108a8c11bb5b98786bc6ab4691e60b5_::_lambda_a108a8c11bb5b98786bc6ab4691e60b5_ @ 0x180223388 (_lambda_a108a8c11bb5b98786bc6ab4691e60b5_--_lambda_a108a8c11bb5b98786bc6ab4691e60b5_.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_93f38ba93d47dfd49d81f7dcedd6087e___::CTaskWrapper__lambda_93f38ba93d47dfd49d81f7dcedd6087e_____lambda_93f38ba93d47dfd49d81f7dcedd6087e___(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v4; // rdi

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)a1);
  *a1 = off_180435330;
  lambda_a108a8c11bb5b98786bc6ab4691e60b5_::_lambda_a108a8c11bb5b98786bc6ab4691e60b5_(a1 + 2, a2);
  v4 = (_QWORD *)(a2 + 16);
  a1[4] = 0LL;
  if ( a1 + 4 != v4 )
  {
    a1[4] = *v4;
    *v4 = 0LL;
  }
  return a1;
}
