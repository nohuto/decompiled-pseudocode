/*
 * XREFs of ?SetWindowGroup@PrivilegedWindowGroupingOperations@@EEAAJKPEAUHWND__@@KK@Z @ 0x1801A0A50
 * Callers:
 *     <none>
 * Callees:
 *     ??1SyncIamAccess@IamAccess@@QEAA@XZ @ 0x18000B794 (--1SyncIamAccess@IamAccess@@QEAA@XZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800FEE7C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UITabletModeChromeManager@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1802E787C (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1802E787C.c)
 */

__int64 __fastcall PrivilegedWindowGroupingOperations::SetWindowGroup(
        PrivilegedWindowGroupingOperations *this,
        unsigned int a2,
        HWND a3,
        unsigned int a4,
        unsigned int a5)
{
  RTL_SRWLOCK *v5; // rbx
  unsigned int LastError; // edi
  const char *v10; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  RTL_SRWLOCK *v13; // [rsp+40h] [rbp+8h] BYREF

  v5 = (RTL_SRWLOCK *)*((_QWORD *)this + 6);
  LastError = 0;
  v13 = v5;
  if ( v5 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,ITabletModeChromeManager>::InternalAddRef(v5);
  AcquireSRWLockExclusive(v5 + 6);
  EnableIAMAccess(v5[5].Ptr, 1LL);
  if ( !(unsigned int)SetWindowGroup(a2, a3, a4, a5) )
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x226,
                  (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
                  v10);
  IamAccess::SyncIamAccess::~SyncIamAccess(&v13);
  return LastError;
}
