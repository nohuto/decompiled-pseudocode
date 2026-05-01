/*
 * XREFs of ?AllowSetForegroundWindow@CPrivilegedForegroundOperations@@EEAAJXZ @ 0x1800CFB00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18000408C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001E470 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Mi.c)
 *     ?TakeIamAccess@IamAccess@@QEAA?AVSyncIamAccess@1@XZ @ 0x1800CF1CC (-TakeIamAccess@IamAccess@@QEAA-AVSyncIamAccess@1@XZ.c)
 */

__int64 __fastcall CPrivilegedForegroundOperations::AllowSetForegroundWindow(CPrivilegedForegroundOperations *this)
{
  DWORD CurrentProcessId; // eax
  const char *v2; // r9
  unsigned int LastError; // edi
  RTL_SRWLOCK *v4; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v7; // [rsp+30h] [rbp+8h] BYREF

  IamAccess::TakeIamAccess(*((_QWORD *)this + 5), &v7);
  CurrentProcessId = GetCurrentProcessId();
  LastError = 0;
  if ( !AllowSetForegroundWindow(CurrentProcessId) )
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x16C,
                  (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
                  v2);
  v4 = v7;
  EnableIAMAccess(v7[4].Ptr, 0LL);
  ReleaseSRWLockExclusive(v4 + 5);
  Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v4);
  return LastError;
}
