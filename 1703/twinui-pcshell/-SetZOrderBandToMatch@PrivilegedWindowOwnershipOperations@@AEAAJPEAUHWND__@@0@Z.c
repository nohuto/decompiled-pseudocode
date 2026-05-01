/*
 * XREFs of ?SetZOrderBandToMatch@PrivilegedWindowOwnershipOperations@@AEAAJPEAUHWND__@@0@Z @ 0x1800CFDA4
 * Callers:
 *     ?SetWindowOwner@PrivilegedWindowOwnershipOperations@@EEAAJPEAUHWND__@@0@Z @ 0x1800CFD00 (-SetWindowOwner@PrivilegedWindowOwnershipOperations@@EEAAJPEAUHWND__@@0@Z.c)
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x18000408C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001E470 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Mi.c)
 *     ?TakeIamAccess@IamAccess@@QEAA?AVSyncIamAccess@1@XZ @ 0x1800CF1CC (-TakeIamAccess@IamAccess@@QEAA-AVSyncIamAccess@1@XZ.c)
 */

__int64 __fastcall PrivilegedWindowOwnershipOperations::SetZOrderBandToMatch(
        PrivilegedWindowOwnershipOperations *this,
        HWND a2,
        HWND a3)
{
  const char *v6; // r9
  __int64 v7; // rdx
  const char *v9; // r9
  unsigned int LastError; // eax
  RTL_SRWLOCK *v11; // rbx
  unsigned int v12; // edi
  RTL_SRWLOCK *v13; // rbx
  int v14; // [rsp+20h] [rbp-18h] BYREF
  RTL_SRWLOCK *v15; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v17; // [rsp+58h] [rbp+20h] BYREF

  if ( !(unsigned int)GetWindowBand(a2, &v14) )
  {
    v7 = 466LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v7,
             (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
             v6);
  }
  if ( !(unsigned int)GetWindowBand(a3, &v17) )
  {
    v7 = 469LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v7,
             (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
             v6);
  }
  if ( v14 != v17 )
  {
    IamAccess::TakeIamAccess(*((_QWORD *)this + 5), &v15);
    if ( !(unsigned int)SetWindowBand(a2, 0LL, v17) )
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x1DA,
                    (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
                    v9);
      v11 = v15;
      v12 = LastError;
      EnableIAMAccess(v15[4].Ptr, 0LL);
      ReleaseSRWLockExclusive(v11 + 5);
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v11);
      return v12;
    }
    v13 = v15;
    EnableIAMAccess(v15[4].Ptr, 0LL);
    ReleaseSRWLockExclusive(v13 + 5);
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v13);
  }
  return 0LL;
}
