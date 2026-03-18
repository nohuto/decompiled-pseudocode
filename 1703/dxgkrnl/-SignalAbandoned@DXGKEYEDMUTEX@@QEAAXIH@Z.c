/*
 * XREFs of ?SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x1C01A65A0
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D6150 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C00385A8 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ??0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z @ 0x1C0039380 (--0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SignalAbandonedInternal@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x1C01A6614 (-SignalAbandonedInternal@DXGKEYEDMUTEX@@QEAAXIH@Z.c)
 */

void __fastcall DXGKEYEDMUTEX::SignalAbandoned(DXGKEYEDMUTEX *this, unsigned int a2)
{
  __int64 v2; // rbx
  struct DXGPROCESS *Current; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  struct DXGKEYEDMUTEX *v11; // [rsp+30h] [rbp+8h] BYREF
  DXGKEYEDMUTEX *v12; // [rsp+48h] [rbp+20h] BYREF

  v11 = this;
  v2 = a2;
  Current = DXGPROCESS::GetCurrent((__int64)this);
  DXGKEYEDMUTEXBYHANDLE::DXGKEYEDMUTEXBYHANDLE((DXGKEYEDMUTEXBYHANDLE *)&v12, v2, Current, &v11);
  if ( v11 )
  {
    DXGKEYEDMUTEX::SignalAbandonedInternal(v11, v2, 0);
  }
  else
  {
    v7 = WdLogNewEntry5_WdWarning(0LL, v4, v5, v6);
    *(_QWORD *)(v7 + 24) = v2;
    *(_QWORD *)(v7 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v7);
  }
  if ( v12 )
    DXGKEYEDMUTEX::ReleaseReference(v12, v8, v9, v10);
}
