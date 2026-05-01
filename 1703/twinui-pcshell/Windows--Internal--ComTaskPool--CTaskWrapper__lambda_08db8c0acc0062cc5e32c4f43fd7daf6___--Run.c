/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_08db8c0acc0062cc5e32c4f43fd7daf6___::Run @ 0x18011A4F0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireLockShared@ViewEventDispatcher@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x1800F187C (-AcquireLockShared@ViewEventDispatcher@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_poli.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
PCWSTR __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_08db8c0acc0062cc5e32c4f43fd7daf6___::Run(
        __int64 a1)
{
  PCWSTR result; // rax
  __int64 v3; // rbx
  PCWSTR v4; // rsi
  int v5; // edx
  int v6; // edx
  __int64 v7; // r9
  BOOL v8; // ebp
  PSRWLOCK SRWLock; // [rsp+60h] [rbp+8h] BYREF
  __int64 v10; // [rsp+68h] [rbp+10h]

  result = *(PCWSTR *)(a1 + 16);
  v3 = *(_QWORD *)(*((_QWORD *)result + 19) + 424LL);
  v10 = v3;
  if ( !v3 )
    goto LABEL_12;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  result = WindowsGetStringRawBuffer(*(HSTRING *)(*(_QWORD *)(a1 + 16) + 136LL), 0LL);
  v4 = result;
  v5 = *(_DWORD *)(a1 + 40);
  if ( !v5 )
  {
    (*(void (__fastcall **)(__int64, PCWSTR, _QWORD, _QWORD))(*(_QWORD *)v3 + 24LL))(
      v3,
      result,
      *(_QWORD *)(a1 + 32),
      0LL);
    goto LABEL_8;
  }
  v6 = v5 - 1;
  if ( !v6 )
  {
    v7 = 1LL;
LABEL_11:
    result = (PCWSTR)(*(__int64 (__fastcall **)(__int64, PCWSTR, _QWORD, __int64))(*(_QWORD *)v3 + 24LL))(
                       v3,
                       v4,
                       *(_QWORD *)(a1 + 32),
                       v7);
    goto LABEL_12;
  }
  if ( v6 == 1 )
  {
LABEL_8:
    ViewEventDispatcher::AcquireLockShared(*(RTL_SRWLOCK **)(*(_QWORD *)(a1 + 16) + 152LL), &SRWLock);
    v8 = (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 120LL))(*(_QWORD *)(a1 + 16)) - 4 > 1;
    if ( SRWLock )
      ReleaseSRWLockShared(SRWLock);
    v7 = (unsigned int)(v8 + 2);
    goto LABEL_11;
  }
LABEL_12:
  if ( v3 )
    return (PCWSTR)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return result;
}
