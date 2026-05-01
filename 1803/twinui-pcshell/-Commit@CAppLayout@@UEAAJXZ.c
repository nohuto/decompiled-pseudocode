/*
 * XREFs of ?Commit@CAppLayout@@UEAAJXZ @ 0x1803124E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800F60C4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800F60F4 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?_CommitGutters@CAppLayout@@AEAAJXZ @ 0x180314258 (-_CommitGutters@CAppLayout@@AEAAJXZ.c)
 *     ?_CommitLayoutItems@CAppLayout@@AEAAJXZ @ 0x180314474 (-_CommitLayoutItems@CAppLayout@@AEAAJXZ.c)
 *     ?_RemoveItemsByType@CAppLayout@@AEAAXW4APP_LAYOUT_ITEM_TYPE@@@Z @ 0x180314848 (-_RemoveItemsByType@CAppLayout@@AEAAXW4APP_LAYOUT_ITEM_TYPE@@@Z.c)
 */

__int64 __fastcall CAppLayout::Commit(RTL_SRWLOCK *this)
{
  CAppLayout *v1; // rdi
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = (CAppLayout *)&this[-5];
  wil::srwlock::lock_exclusive(this + 2, &v7);
  CAppLayout::_RemoveItemsByType(v1, 2LL);
  v2 = CAppLayout::_CommitLayoutItems(v1);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v2 = CAppLayout::_CommitGutters(v1);
    v3 = v2;
    if ( v2 >= 0 )
    {
      v3 = 0;
      goto LABEL_7;
    }
    v4 = 1199LL;
  }
  else
  {
    v4 = 1196LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (__int64)"pcshell\\twinui\\applayout\\lib\\applayout.cpp",
    (const char *)(unsigned int)v2);
LABEL_7:
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v7);
  return v3;
}
