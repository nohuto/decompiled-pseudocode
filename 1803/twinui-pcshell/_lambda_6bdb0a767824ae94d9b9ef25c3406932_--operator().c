/*
 * XREFs of _lambda_6bdb0a767824ae94d9b9ef25c3406932_::operator() @ 0x180136658
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_bccacf824c0b35a20e4c1bcfbe66ad1f___::Run @ 0x180137280 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_bccacf824c0b35a20e4c1bcfbe66ad1f___--Run.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$DropForeground@PEBGKAEAPEAUHWND__@@AEBW4DropForegroundOptions@@@IamTraceLogging@@SAX$$QEAPEBG$$QEAKAEAPEAUHWND__@@AEBW4DropForegroundOptions@@@Z @ 0x18013553C (--$DropForeground@PEBGKAEAPEAUHWND__@@AEBW4DropForegroundOptions@@@IamTraceLogging@@SAX$$QEAPEBG.c)
 */

BOOL __fastcall lambda_6bdb0a767824ae94d9b9ef25c3406932_::operator()(int *a1)
{
  int v2; // eax
  __int64 v3; // r8
  BOOL result; // eax
  int v5; // [rsp+30h] [rbp+8h] BYREF
  LPCWSTR v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)a1 + 568LL) + 160LL))(*(_QWORD *)(*(_QWORD *)a1 + 568LL));
  v3 = *(_QWORD *)a1;
  v5 = v2;
  v6 = *(LPCWSTR *)(v3 + 544);
  IamTraceLogging::DropForeground<unsigned short const *,unsigned long,HWND__ * &,enum DropForegroundOptions const &>(
    &v6,
    (__int64)&v5,
    (__int64 *)(v3 + 128),
    a1 + 2);
  result = ShowWindowAsync(*(HWND *)(*(_QWORD *)a1 + 128LL), 0);
  if ( !a1[2] )
    return ShowWindowAsync(*(HWND *)(*(_QWORD *)a1 + 128LL), 4);
  return result;
}
