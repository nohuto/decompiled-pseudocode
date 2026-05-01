/*
 * XREFs of ?MaximizeWindow@CPrivilegedArrangementOperations@@EEAAJPEAUHWND__@@@Z @ 0x1800CF940
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18000408C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001E470 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Mi.c)
 *     ?TakeIamAccess@IamAccess@@QEAA?AVSyncIamAccess@1@XZ @ 0x1800CF1CC (-TakeIamAccess@IamAccess@@QEAA-AVSyncIamAccess@1@XZ.c)
 */

__int64 __fastcall CPrivilegedArrangementOperations::MaximizeWindow(CPrivilegedArrangementOperations *this, HWND a2)
{
  const char *v3; // r9
  unsigned int LastError; // edi
  RTL_SRWLOCK *v5; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v8; // [rsp+30h] [rbp+8h] BYREF

  IamAccess::TakeIamAccess(*((_QWORD *)this + 5), &v8);
  LastError = 0;
  if ( !PostMessageW(a2, 0x112u, 0xF030uLL, -1LL) )
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x14C,
                  (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
                  v3);
  v5 = v8;
  EnableIAMAccess(v8[4].Ptr, 0LL);
  ReleaseSRWLockExclusive(v5 + 5);
  Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v5);
  return LastError;
}
