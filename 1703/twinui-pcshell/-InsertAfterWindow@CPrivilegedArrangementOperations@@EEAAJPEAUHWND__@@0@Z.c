/*
 * XREFs of ?InsertAfterWindow@CPrivilegedArrangementOperations@@EEAAJPEAUHWND__@@0@Z @ 0x1800CF9D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18000408C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001E470 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Mi.c)
 *     ?TakeIamAccess@IamAccess@@QEAA?AVSyncIamAccess@1@XZ @ 0x1800CF1CC (-TakeIamAccess@IamAccess@@QEAA-AVSyncIamAccess@1@XZ.c)
 */

__int64 __fastcall CPrivilegedArrangementOperations::InsertAfterWindow(
        CPrivilegedArrangementOperations *this,
        HWND a2,
        HWND a3)
{
  unsigned int LastError; // esi
  const char *v6; // r9
  RTL_SRWLOCK *v7; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  RTL_SRWLOCK *v10; // [rsp+50h] [rbp+8h] BYREF

  IamAccess::TakeIamAccess(*((_QWORD *)this + 5), &v10);
  LastError = 0;
  if ( !SetWindowPos(a2, a3, 0, 0, 0, 0, 0x4013u) )
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x157,
                  (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
                  v6);
  v7 = v10;
  EnableIAMAccess(v10[4].Ptr, 0LL);
  ReleaseSRWLockExclusive(v7 + 5);
  Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v7);
  return LastError;
}
