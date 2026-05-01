/*
 * XREFs of ?get_IsActive@AppViewSwitchItem@@UEAAJPEAE@Z @ 0x180163F30
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockShared@Details@234@XZ @ 0x18002442C (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockShared@Details@234@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AppViewSwitchItem::get_IsActive(AppViewSwitchItem *this, bool *a2)
{
  int v4; // eax
  unsigned int v5; // edi
  bool v7; // al
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v9; // [rsp+40h] [rbp+8h] BYREF
  PSRWLOCK SRWLock; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0;
  v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 23) + 64LL))(*((_QWORD *)this + 23), &v9);
  v5 = v4;
  if ( v4 >= 0 )
  {
    Microsoft::WRL::Wrappers::SRWLock::LockShared((RTL_SRWLOCK *)this + 4, &SRWLock);
    v7 = v9 && *((_BYTE *)this + 200);
    *a2 = v7;
    if ( SRWLock )
      ReleaseSRWLockShared(SRWLock);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x58,
      (__int64)"pcshell\\twinui\\appviewdatasource\\lib\\appviewswitchitem.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
}
