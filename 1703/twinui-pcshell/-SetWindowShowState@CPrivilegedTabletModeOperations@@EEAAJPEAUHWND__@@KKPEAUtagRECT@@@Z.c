/*
 * XREFs of ?SetWindowShowState@CPrivilegedTabletModeOperations@@EEAAJPEAUHWND__@@KKPEAUtagRECT@@@Z @ 0x1800CFC00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18000408C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001E470 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Mi.c)
 *     ?TakeIamAccess@IamAccess@@QEAA?AVSyncIamAccess@1@XZ @ 0x1800CF1CC (-TakeIamAccess@IamAccess@@QEAA-AVSyncIamAccess@1@XZ.c)
 */

__int64 __fastcall CPrivilegedTabletModeOperations::SetWindowShowState(
        CPrivilegedTabletModeOperations *this,
        HWND a2,
        unsigned int a3,
        unsigned int a4,
        struct tagRECT *a5)
{
  int v8; // eax
  const char *v9; // r9
  unsigned int LastError; // edi
  RTL_SRWLOCK *v11; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v14; // [rsp+30h] [rbp+8h] BYREF

  IamAccess::TakeIamAccess(*((_QWORD *)this + 5), &v14);
  v8 = SetWindowShowState(a2, a3, a4, a5);
  LastError = 0;
  if ( !v8 )
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x185,
                  (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
                  v9);
  v11 = v14;
  EnableIAMAccess(v14[4].Ptr, 0LL);
  ReleaseSRWLockExclusive(v11 + 5);
  Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v11);
  return LastError;
}
