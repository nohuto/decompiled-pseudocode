/*
 * XREFs of ?DestroyGlobal@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C01A5864
 * Callers:
 *     ??1DXGKEYEDMUTEX@@QEAA@XZ @ 0x1C01A4F68 (--1DXGKEYEDMUTEX@@QEAA@XZ.c)
 * Callees:
 *     ?FreeHandle@DXGGLOBAL@@QEAAXI@Z @ 0x1C0007180 (-FreeHandle@DXGGLOBAL@@QEAAXI@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000E120 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall DXGKEYEDMUTEX::DestroyGlobal(struct _KTHREAD ***this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  struct _KTHREAD **v12; // rcx
  _QWORD *v13; // rbx
  __int64 v14; // rcx
  _BYTE v15[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( this[3] )
  {
    v5 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v5 + 24) = 3101LL;
    WdLogEvent5_WdAssertion(v5);
  }
  if ( this[10] != (struct _KTHREAD **)(this + 10) )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v6 + 24) = 3102LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( *((_DWORD *)this + 8) )
  {
    DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v15);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
    DXGGLOBAL::FreeHandle(this[2], *((unsigned int *)this + 8), v7, v8);
    *((_DWORD *)this + 8) = 0;
    if ( v15[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15, v9, v10, v11);
  }
  v12 = this[17];
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  this[17] = 0LL;
  *((_DWORD *)this + 36) = 0;
  v13 = (_QWORD *)WdLogNewEntry5_WdEvent(v12);
  v13[3] = this;
  v14 = *((unsigned int *)this + 8);
  v13[4] = v14;
  v13[5] = DXGPROCESS::GetCurrent(v14);
  WdLogEvent5_WdEvent(v13);
}
