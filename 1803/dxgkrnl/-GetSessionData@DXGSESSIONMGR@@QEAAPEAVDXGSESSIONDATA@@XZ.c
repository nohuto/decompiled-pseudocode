/*
 * XREFs of ?GetSessionData@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C00E2B30
 * Callers:
 *     DxgkReferenceCurrentSessionDwmProcess @ 0x1C0001B70 (DxgkReferenceCurrentSessionDwmProcess.c)
 *     ?NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C00126F0 (-NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     ??1DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000722C (--1DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014EF0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 */

struct DXGSESSIONDATA *__fastcall DXGSESSIONMGR::GetSessionData(DXGSESSIONMGR *this)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  __int64 CurrentProcessSessionId; // rsi
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v6; // rbx
  __int64 v8; // rax
  __int64 v9; // rax
  _QWORD *v10; // rax
  DXGFASTMUTEX *v11; // [rsp+20h] [rbp-18h] BYREF
  char v12; // [rsp+28h] [rbp-10h]

  v2 = 0LL;
  CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId(this);
  v11 = (DXGSESSIONMGR *)((char *)this + 80);
  v12 = 0;
  if ( this == (DXGSESSIONMGR *)-80LL )
  {
    v8 = WdLogNewEntry5_WdAssertion(v3);
    *(_QWORD *)(v8 + 24) = 508LL;
    WdLogEvent5_WdAssertion(v8);
  }
  CurrentThread = KeGetCurrentThread();
  if ( *((struct _KTHREAD **)v11 + 1) == CurrentThread )
  {
    v9 = WdLogNewEntry5_WdAssertion(CurrentThread);
    *(_QWORD *)(v9 + 24) = 515LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( v12 )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdCriticalError(CurrentThread);
    v10[5] = &v11;
    v10[3] = 275LL;
    v10[4] = 4LL;
    v10[6] = 0LL;
    v10[7] = 0LL;
    WdLogEvent5_WdCriticalError(v10);
  }
  DXGFASTMUTEX::Acquire(v11);
  v12 = 1;
  if ( (unsigned int)CurrentProcessSessionId >= *((_DWORD *)this + 18) )
  {
    DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)&v11);
  }
  else
  {
    v6 = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * CurrentProcessSessionId);
    v12 = 0;
    DXGFASTMUTEX::Release((struct _KTHREAD **)v11);
    return (struct DXGSESSIONDATA *)v6;
  }
  return (struct DXGSESSIONDATA *)v2;
}
