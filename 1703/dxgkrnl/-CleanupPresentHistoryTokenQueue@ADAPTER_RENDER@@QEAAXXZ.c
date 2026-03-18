/*
 * XREFs of ?CleanupPresentHistoryTokenQueue@ADAPTER_RENDER@@QEAAXXZ @ 0x1C00CF588
 * Callers:
 *     ?CleanupPresentHistoryTokenQueueAdapter@DXGPRESENTHISTORYTOKENQUEUE@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00A6D50 (-CleanupPresentHistoryTokenQueueAdapter@DXGPRESENTHISTORYTOKENQUEUE@@CAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ??_GDXGPRESENTHISTORYTOKENQUEUE@@QEAAPEAXI@Z @ 0x1C0001978 (--_GDXGPRESENTHISTORYTOKENQUEUE@@QEAAPEAXI@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006DD0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0006E80 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 */

void __fastcall ADAPTER_RENDER::CleanupPresentHistoryTokenQueue(
        struct _KTHREAD **this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int CurrentProcessSessionId; // eax
  __int64 v10; // rdi
  DXGPRESENTHISTORYTOKENQUEUE *v11; // rcx
  _BYTE v12[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v13; // [rsp+28h] [rbp-20h]
  int v14; // [rsp+30h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v12, this + 78, a3, a4);
  DXGPUSHLOCK::AcquireExclusive(v13);
  v14 = 2;
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v6, v5, v7, v8);
  if ( CurrentProcessSessionId < *((_DWORD *)this + 162) )
  {
    v10 = CurrentProcessSessionId;
    v11 = (DXGPRESENTHISTORYTOKENQUEUE *)*((_QWORD *)this[82] + CurrentProcessSessionId);
    if ( v11 )
    {
      DXGPRESENTHISTORYTOKENQUEUE::`scalar deleting destructor'(v11);
      *((_QWORD *)this[82] + v10) = 0LL;
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v12);
}
