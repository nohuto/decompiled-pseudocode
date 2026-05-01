/*
 * XREFs of ?QuerySizeConstraints@CPrivilegedSizeConstraintsOperations@@EEAAJPEAUHWND__@@@Z @ 0x18000B7F0
 * Callers:
 *     ?QuerySizeConstraintsFromApp@CWin32ApplicationView@@UEAAJXZ @ 0x18002A6D0 (-QuerySizeConstraintsFromApp@CWin32ApplicationView@@UEAAJXZ.c)
 * Callees:
 *     ??1SyncIamAccess@IamAccess@@QEAA@XZ @ 0x18000B794 (--1SyncIamAccess@IamAccess@@QEAA@XZ.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x180093D10 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCWRLObjectWithSite@@UITabletModeChromeManager@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1802E787C (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_1802E787C.c)
 */

__int64 __fastcall CPrivilegedSizeConstraintsOperations::QuerySizeConstraints(
        CPrivilegedSizeConstraintsOperations *this,
        HWND a2)
{
  RTL_SRWLOCK *v2; // rbx
  unsigned int LastErrorFailHr; // edi
  wil::details *v5; // rcx
  RTL_SRWLOCK *v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = (RTL_SRWLOCK *)*((_QWORD *)this + 6);
  LastErrorFailHr = 0;
  v7 = v2;
  if ( v2 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CWRLObjectWithSite,ITabletModeChromeManager>::InternalAddRef(v2);
  AcquireSRWLockExclusive(v2 + 6);
  EnableIAMAccess(v2[5].Ptr, 1LL);
  if ( !(unsigned int)GetWindowTrackInfoAsync(a2) )
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v5);
  IamAccess::SyncIamAccess::~SyncIamAccess(&v7);
  return LastErrorFailHr;
}
