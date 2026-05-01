/*
 * XREFs of ?QuerySizeConstraints@CPrivilegedSizeConstraintsOperations@@EEAAJPEAUHWND__@@@Z @ 0x1800CFC90
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001E470 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Mi.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800B0F78 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?TakeIamAccess@IamAccess@@QEAA?AVSyncIamAccess@1@XZ @ 0x1800CF1CC (-TakeIamAccess@IamAccess@@QEAA-AVSyncIamAccess@1@XZ.c)
 */

__int64 __fastcall CPrivilegedSizeConstraintsOperations::QuerySizeConstraints(
        CPrivilegedSizeConstraintsOperations *this,
        HWND a2)
{
  wil::details *v3; // rcx
  unsigned int LastErrorFailHr; // edi
  RTL_SRWLOCK *v5; // rbx
  RTL_SRWLOCK *v7; // [rsp+30h] [rbp+8h] BYREF

  IamAccess::TakeIamAccess(*((_QWORD *)this + 5), &v7);
  LastErrorFailHr = 0;
  if ( !(unsigned int)GetWindowTrackInfoAsync(a2) )
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v3);
  v5 = v7;
  EnableIAMAccess(v7[4].Ptr, 0LL);
  ReleaseSRWLockExclusive(v5 + 5);
  Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)v5);
  return LastErrorFailHr;
}
