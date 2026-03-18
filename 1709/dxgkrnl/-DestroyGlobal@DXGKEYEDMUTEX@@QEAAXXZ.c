/*
 * XREFs of ?DestroyGlobal@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C01BF358
 * Callers:
 *     ??1DXGKEYEDMUTEX@@QEAA@XZ @ 0x1C01BEB20 (--1DXGKEYEDMUTEX@@QEAA@XZ.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?FreeHandle@DXGGLOBAL@@QEAAXI@Z @ 0x1C00031C8 (-FreeHandle@DXGGLOBAL@@QEAAXI@Z.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000DDE8 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall DXGKEYEDMUTEX::DestroyGlobal(DXGKEYEDMUTEX *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rax
  void *v7; // rcx
  _QWORD *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rdx
  _BYTE v11[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( *((_QWORD *)this + 3) )
  {
    v5 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v5 + 24) = 3206LL;
    WdLogEvent5_WdAssertion(v5);
  }
  if ( *((DXGKEYEDMUTEX **)this + 10) != (DXGKEYEDMUTEX *)((char *)this + 80) )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v6 + 24) = 3207LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( *((_DWORD *)this + 8) )
  {
    DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v11);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
    DXGGLOBAL::FreeHandle(*((struct _KTHREAD ***)this + 2), *((_DWORD *)this + 8));
    *((_DWORD *)this + 8) = 0;
    if ( v11[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v11);
  }
  v7 = (void *)*((_QWORD *)this + 17);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  *((_QWORD *)this + 17) = 0LL;
  *((_DWORD *)this + 36) = 0;
  v8 = (_QWORD *)WdLogNewEntry5_WdEvent(v7, a2, a3, a4);
  v8[3] = this;
  v9 = *((unsigned int *)this + 8);
  v8[4] = v9;
  v8[5] = DXGPROCESS::GetCurrent(v9, v10);
  WdLogEvent5_WdEvent(v8);
}
