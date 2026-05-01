/*
 * XREFs of ?SetWindowBand@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@0K@Z @ 0x1800CF5D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001E470 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Mi.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800B0F78 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?TakeIamAccess@IamAccess@@QEAA?AVSyncIamAccess@1@XZ @ 0x1800CF1CC (-TakeIamAccess@IamAccess@@QEAA-AVSyncIamAccess@1@XZ.c)
 */

__int64 __fastcall CPrivilegedPresentationOperations::SetWindowBand(
        CPrivilegedPresentationOperations *this,
        HWND a2,
        HWND a3,
        unsigned int a4)
{
  int v7; // eax
  wil::details *v8; // rcx
  unsigned int LastErrorFailHr; // edi
  RTL_SRWLOCK *v10; // rbx
  RTL_SRWLOCK *v12; // [rsp+30h] [rbp+8h] BYREF

  IamAccess::TakeIamAccess(*((_QWORD *)this + 5), &v12);
  v7 = SetWindowBand(a2, a3, a4);
  LastErrorFailHr = 0;
  if ( !v7 )
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v8);
  v10 = v12;
  EnableIAMAccess(v12[4].Ptr, 0LL);
  ReleaseSRWLockExclusive(v10 + 5);
  Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v10);
  return LastErrorFailHr;
}
