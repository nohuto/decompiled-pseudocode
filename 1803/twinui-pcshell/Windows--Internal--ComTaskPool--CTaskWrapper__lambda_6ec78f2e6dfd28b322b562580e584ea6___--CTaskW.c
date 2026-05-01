/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6ec78f2e6dfd28b322b562580e584ea6___::CTaskWrapper__lambda_6ec78f2e6dfd28b322b562580e584ea6_____lambda_6ec78f2e6dfd28b322b562580e584ea6___ @ 0x1801E3880
 * Callers:
 *     ?_ReconcileSessionIdleTaskCompletion@ViewWrapperBase@@AEAAJXZ @ 0x18004F6C0 (-_ReconcileSessionIdleTaskCompletion@ViewWrapperBase@@AEAAJXZ.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180010B98 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x1801E4188 (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0Is_ea_1801E4188.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6ec78f2e6dfd28b322b562580e584ea6___::CTaskWrapper__lambda_6ec78f2e6dfd28b322b562580e584ea6_____lambda_6ec78f2e6dfd28b322b562580e584ea6___(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // rcx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)a1);
  *a1 = off_180335478;
  v4 = a2 + 1;
  a1[2] = *a2;
  a1[3] = 0LL;
  if ( a1 + 3 != a2 + 1 )
  {
    a1[3] = *v4;
    *v4 = 0LL;
  }
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
    a1 + 4,
    a2 + 2);
  a1[4] = &ViewManagerInteropTraceLogging::RemoveSessionIdleTaskCompletion::`vftable';
  return a1;
}
