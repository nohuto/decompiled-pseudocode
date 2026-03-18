/*
 * XREFs of ?SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x1C01C1570
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C00F71CC (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C00333A4 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ??0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z @ 0x1C00348B8 (--0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SignalAbandonedInternal@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x1C01C15E4 (-SignalAbandonedInternal@DXGKEYEDMUTEX@@QEAAXIH@Z.c)
 */

void __fastcall DXGKEYEDMUTEX::SignalAbandoned(DXGKEYEDMUTEX *this, __int64 a2)
{
  __int64 v2; // rbx
  struct _KTHREAD **Current; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rax
  struct DXGKEYEDMUTEX *v7; // [rsp+30h] [rbp+8h] BYREF
  DXGKEYEDMUTEX *v8; // [rsp+48h] [rbp+20h] BYREF

  v7 = this;
  v2 = (unsigned int)a2;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)this, a2);
  DXGKEYEDMUTEXBYHANDLE::DXGKEYEDMUTEXBYHANDLE((DXGKEYEDMUTEXBYHANDLE *)&v8, v2, Current, &v7);
  if ( v7 )
  {
    DXGKEYEDMUTEX::SignalAbandonedInternal(v7, v2, 0);
  }
  else
  {
    v6 = WdLogNewEntry5_WdWarning(0LL, v4, v5);
    *(_QWORD *)(v6 + 24) = v2;
    *(_QWORD *)(v6 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v6);
  }
  if ( v8 )
    DXGKEYEDMUTEX::ReleaseReference(v8);
}
