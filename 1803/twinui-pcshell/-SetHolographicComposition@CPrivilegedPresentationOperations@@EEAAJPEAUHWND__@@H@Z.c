/*
 * XREFs of ?SetHolographicComposition@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@H@Z @ 0x1801A0900
 * Callers:
 *     <none>
 * Callees:
 *     ??1SyncIamAccess@IamAccess@@QEAA@XZ @ 0x18000B794 (--1SyncIamAccess@IamAccess@@QEAA@XZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800FEE7C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UITabletModeChromeManager@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1802E787C (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1802E787C.c)
 */

__int64 __fastcall CPrivilegedPresentationOperations::SetHolographicComposition(
        CPrivilegedPresentationOperations *this,
        HWND a2,
        int a3)
{
  RTL_SRWLOCK *v3; // rbx
  unsigned int LastError; // edi
  const char *v6; // r9
  int v8; // [rsp+20h] [rbp-28h] BYREF
  int *v9; // [rsp+28h] [rbp-20h]
  int v10; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  RTL_SRWLOCK *v12; // [rsp+50h] [rbp+8h] BYREF
  int v13; // [rsp+60h] [rbp+18h] BYREF

  v13 = a3;
  v3 = (RTL_SRWLOCK *)*((_QWORD *)this + 6);
  LastError = 0;
  v12 = v3;
  if ( v3 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,ITabletModeChromeManager>::InternalAddRef(v3);
  AcquireSRWLockExclusive(v3 + 6);
  EnableIAMAccess(v3[5].Ptr, 1LL);
  v8 = 23;
  v9 = &v13;
  v10 = 4;
  if ( !(unsigned int)SetWindowCompositionAttribute(a2, &v8) )
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0xEE,
                  (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
                  v6);
  IamAccess::SyncIamAccess::~SyncIamAccess(&v12);
  return LastError;
}
