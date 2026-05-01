/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e02303751d4e49a7e603e0304fd9978e___::Run @ 0x18008FA40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_e02303751d4e49a7e603e0304fd9978e___::Run(
        __int64 a1)
{
  struct IUnknown *v1; // r8
  struct IImmersiveApplication *v2; // rdx
  __int64 (__fastcall *v3)(RTL_SRWLOCK *, struct IImmersiveApplication *, struct IUnknown *); // rax
  RTL_SRWLOCK *v4; // rcx

  v1 = *(struct IUnknown **)(a1 + 32);
  v2 = *(struct IImmersiveApplication **)(a1 + 24);
  v3 = *(__int64 (__fastcall **)(RTL_SRWLOCK *, struct IImmersiveApplication *, struct IUnknown *))(**(_QWORD **)(a1 + 16)
                                                                                                  + 112LL);
  v4 = *(RTL_SRWLOCK **)(a1 + 16);
  if ( v3 == CApplicationViewManager::AddWinRTApplicationView )
    return CApplicationViewManager::AddWinRTApplicationView(v4, v2, v1);
  else
    return v3(v4, v2, v1);
}
