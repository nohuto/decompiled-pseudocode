/*
 * XREFs of ?SetHolographicComposition@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@H@Z @ 0x1800CF650
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18000408C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001E470 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Mi.c)
 *     ?TakeIamAccess@IamAccess@@QEAA?AVSyncIamAccess@1@XZ @ 0x1800CF1CC (-TakeIamAccess@IamAccess@@QEAA-AVSyncIamAccess@1@XZ.c)
 */

__int64 __fastcall CPrivilegedPresentationOperations::SetHolographicComposition(
        CPrivilegedPresentationOperations *this,
        HWND a2,
        int a3)
{
  const char *v4; // r9
  unsigned int LastError; // edi
  RTL_SRWLOCK *v6; // rbx
  int v8; // [rsp+20h] [rbp-28h] BYREF
  int *v9; // [rsp+28h] [rbp-20h]
  int v10; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  RTL_SRWLOCK *v12; // [rsp+50h] [rbp+8h] BYREF
  int v13; // [rsp+60h] [rbp+18h] BYREF

  v13 = a3;
  IamAccess::TakeIamAccess(*((_QWORD *)this + 5), &v12);
  v8 = 23;
  v9 = &v13;
  v10 = 4;
  LastError = 0;
  if ( !(unsigned int)SetWindowCompositionAttribute(a2, &v8) )
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0xEC,
                  (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
                  v4);
  v6 = v12;
  EnableIAMAccess(v12[4].Ptr, 0LL);
  ReleaseSRWLockExclusive(v6 + 5);
  Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v6);
  return LastError;
}
