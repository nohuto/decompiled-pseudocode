/*
 * XREFs of ?Stop@DXGPROTECTEDSESSION@@QEAAXXZ @ 0x1C01BC194
 * Callers:
 *     ?Stop@ADAPTER_DISPLAY@@QEAAXE@Z @ 0x1C0176AD4 (-Stop@ADAPTER_DISPLAY@@QEAAXE@Z.c)
 *     ?DestroyProtectedSession@ADAPTER_DISPLAY@@QEAAXPEAVDXGPROTECTEDSESSION@@@Z @ 0x1C01BBC8C (-DestroyProtectedSession@ADAPTER_DISPLAY@@QEAAXPEAVDXGPROTECTEDSESSION@@@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000278C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?SetSessionStatus@DXGPROTECTEDSESSION@@QEAAJW4_DXGK_PROTECTED_SESSION_STATUS@@@Z @ 0x1C0029764 (-SetSessionStatus@DXGPROTECTEDSESSION@@QEAAJW4_DXGK_PROTECTED_SESSION_STATUS@@@Z.c)
 *     ?DdiDestroyProtectedSession@ADAPTER_DISPLAY@@QEAAJPEAX@Z @ 0x1C017A0D0 (-DdiDestroyProtectedSession@ADAPTER_DISPLAY@@QEAAJPEAX@Z.c)
 */

void __fastcall DXGPROTECTEDSESSION::Stop(DXGPROTECTEDSESSION *this)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rax
  void *v7; // rdx

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v3 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v3 + 24) = 1159LL;
    WdLogEvent5_WdAssertion(v3);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v6 + 24) = 1048LL;
    WdLogEvent5_WdAssertion(v6);
  }
  v7 = (void *)*((_QWORD *)this + 17);
  if ( v7 )
  {
    ADAPTER_DISPLAY::DdiDestroyProtectedSession(*((ADAPTER_DISPLAY **)this + 2), v7, v5);
    *((_QWORD *)this + 17) = 0LL;
  }
  *((_DWORD *)this + 6) = 3;
  DXGPROTECTEDSESSION::SetSessionStatus(this, DXGK_PROTECTED_SESSION_STATUS_INVALID);
}
