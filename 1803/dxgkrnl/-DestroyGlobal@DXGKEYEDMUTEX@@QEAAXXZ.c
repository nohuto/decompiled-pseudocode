/*
 * XREFs of ?DestroyGlobal@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C01C0454
 * Callers:
 *     ??1DXGKEYEDMUTEX@@QEAA@XZ @ 0x1C01BFC10 (--1DXGKEYEDMUTEX@@QEAA@XZ.c)
 * Callees:
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C0007248 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?FreeHandle@DXGGLOBAL@@QEAAXI@Z @ 0x1C0016A58 (-FreeHandle@DXGGLOBAL@@QEAAXI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall DXGKEYEDMUTEX::DestroyGlobal(DXGKEYEDMUTEX *this)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  _QWORD *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rdx
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( *((_QWORD *)this + 3) )
  {
    v2 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v2 + 24) = 3368LL;
    WdLogEvent5_WdAssertion(v2);
  }
  if ( *((DXGKEYEDMUTEX **)this + 10) != (DXGKEYEDMUTEX *)((char *)this + 80) )
  {
    v3 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v3 + 24) = 3369LL;
    WdLogEvent5_WdAssertion(v3);
  }
  if ( *((_DWORD *)this + 8) )
  {
    DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v9);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9);
    DXGGLOBAL::FreeHandle(*((struct _KTHREAD ***)this + 2), *((_DWORD *)this + 8));
    *((_DWORD *)this + 8) = 0;
    if ( v9[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v9);
  }
  operator delete[](*((void **)this + 17));
  *((_QWORD *)this + 17) = 0LL;
  *((_DWORD *)this + 36) = 0;
  v6 = (_QWORD *)WdLogNewEntry5_WdEvent(v5, v4);
  v6[3] = this;
  v7 = *((unsigned int *)this + 8);
  v6[4] = v7;
  v6[5] = DXGPROCESS::GetCurrent(v7, v8);
  WdLogEvent5_WdEvent(v6);
}
