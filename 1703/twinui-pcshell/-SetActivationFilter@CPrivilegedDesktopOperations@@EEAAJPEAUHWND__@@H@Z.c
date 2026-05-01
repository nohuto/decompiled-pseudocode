/*
 * XREFs of ?SetActivationFilter@CPrivilegedDesktopOperations@@EEAAJPEAUHWND__@@H@Z @ 0x1800CF3F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18000408C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001E470 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Mi.c)
 *     ?TakeIamAccess@IamAccess@@QEAA?AVSyncIamAccess@1@XZ @ 0x1800CF1CC (-TakeIamAccess@IamAccess@@QEAA-AVSyncIamAccess@1@XZ.c)
 */

__int64 __fastcall CPrivilegedDesktopOperations::SetActivationFilter(
        CPrivilegedDesktopOperations *this,
        HWND a2,
        unsigned int a3)
{
  int v5; // eax
  const char *v6; // r9
  unsigned int LastError; // edi
  RTL_SRWLOCK *v8; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v11; // [rsp+30h] [rbp+8h] BYREF

  IamAccess::TakeIamAccess(*((_QWORD *)this + 5), &v11);
  v5 = SetActivationFilter(a2, a3);
  LastError = 0;
  if ( !v5 )
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0xA2,
                  (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
                  v6);
  v8 = v11;
  EnableIAMAccess(v11[4].Ptr, 0LL);
  ReleaseSRWLockExclusive(v8 + 5);
  Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v8);
  return LastError;
}
