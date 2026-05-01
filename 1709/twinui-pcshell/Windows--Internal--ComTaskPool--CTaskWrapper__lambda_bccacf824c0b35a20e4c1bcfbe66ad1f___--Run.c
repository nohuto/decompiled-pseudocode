/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_bccacf824c0b35a20e4c1bcfbe66ad1f___::Run @ 0x18006EAB0
 * Callers:
 *     <none>
 * Callees:
 *     ??$DropForeground@PEBGKAEAPEAUHWND__@@AEBW4DropForegroundOptions@@@IamTraceLogging@@SAX$$QEAPEBG$$QEAKAEAPEAUHWND__@@AEBW4DropForegroundOptions@@@Z @ 0x18006C61C (--$DropForeground@PEBGKAEAPEAUHWND__@@AEBW4DropForegroundOptions@@@IamTraceLogging@@SAX$$QEAPEBG.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_bccacf824c0b35a20e4c1bcfbe66ad1f___::Run(
        __int64 a1)
{
  int v2; // ebx
  int v3; // eax
  __int64 v4; // r8
  RTL_SRWLOCK *v5; // rcx
  int v6; // [rsp+30h] [rbp+8h] BYREF
  const WCHAR *v7; // [rsp+38h] [rbp+10h] BYREF

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 64LL);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v2 != 2 )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 32) + 576LL) + 160LL))(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 576LL));
    v4 = *(_QWORD *)(a1 + 32);
    v6 = v3;
    v7 = *(const WCHAR **)(v4 + 552);
    IamTraceLogging::DropForeground<unsigned short const *,unsigned long,HWND__ * &,enum DropForegroundOptions const &>(
      &v7,
      (__int64)&v6,
      (__int64 *)(v4 + 136),
      (int *)(a1 + 40));
    ShowWindowAsync(*(HWND *)(*(_QWORD *)(a1 + 32) + 136LL), 0);
    if ( !*(_DWORD *)(a1 + 40) )
      ShowWindowAsync(*(HWND *)(*(_QWORD *)(a1 + 32) + 136LL), 4);
  }
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v5 = CApplicationManagerUtility::g_pIAMGlobals;
  --*(_DWORD *)(*(_QWORD *)(a1 + 24) + 212LL);
  ReleaseSRWLockExclusive(v5);
}
