/*
 * XREFs of UserRedrawDesktop @ 0x1C020CFB4
 * Callers:
 *     ?DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z @ 0x1C02510B4 (-DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z.c)
 * Callees:
 *     xxxInternalInvalidate @ 0x1C0069C80 (xxxInternalInvalidate.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C008E6C4 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 */

__int64 UserRedrawDesktop()
{
  __int64 v0; // rbx
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD v10[5]; // [rsp+20h] [rbp-28h] BYREF
  int v11; // [rsp+50h] [rbp+8h] BYREF

  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v11);
  v0 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 432LL) + 8LL) + 16LL);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v1, v2, v3);
  v10[0] = *(_QWORD *)(ThreadWin32Thread + 392);
  *(_QWORD *)(ThreadWin32Thread + 392) = v10;
  v10[1] = v0;
  _InterlockedAdd((volatile signed __int32 *)(v0 + 8), 1u);
  xxxInternalInvalidate((struct tagWND *)v0, (HRGN)1, 0x485u);
  result = ThreadUnlock1(v6, v5);
  if ( !v11 )
    return UserSessionSwitchLeaveCrit(v9, v8);
  return result;
}
