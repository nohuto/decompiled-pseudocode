/*
 * XREFs of ?GetPointerMessagePoint@CTouchProcessor@@QEAAHGPEAUtagPOINT@@@Z @ 0x1C0115BA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     ?UnLock@CInpLockGuard@@QEAAXXZ @ 0x1C009F2C0 (-UnLock@CInpLockGuard@@QEAAXXZ.c)
 *     ?LockExclusive@CInpLockGuard@@QEAAXXZ @ 0x1C009F300 (-LockExclusive@CInpLockGuard@@QEAAXXZ.c)
 *     ?GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND__@@@Z @ 0x1C0116B40 (-GetThreadPointerData@CTouchProcessor@@QEAA_KPEAUtagTHREADINPUTPOINTERLIST@@GPEAKPEAHPEAPEAUHWND.c)
 *     ?ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z @ 0x1C011AA94 (-ReferenceFrame@CTouchProcessor@@AEAAPEBUCPointerInputFrame@@K@Z.c)
 *     ?UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z @ 0x1C011DF60 (-UnreferenceFrame@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@@Z.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerMessagePoint(PERESOURCE *this, unsigned __int16 a2, struct tagPOINT *a3)
{
  struct tagTHREADINPUTPOINTERLIST *v6; // rdx
  unsigned int v7; // esi
  unsigned __int64 ThreadPointerData; // rax
  unsigned __int64 v9; // rbp
  const struct CPointerInputFrame *v10; // rdx
  struct tagPOINT *v11; // rax

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x6Bu,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
  CInpLockGuard::LockExclusive(this + 9);
  v6 = (struct tagTHREADINFO *)((char *)gptiCurrent + 1072);
  *a3 = 0LL;
  v7 = 0;
  ThreadPointerData = CTouchProcessor::GetThreadPointerData((CTouchProcessor *)this, v6, a2, 0LL, 0LL, 0LL);
  v9 = ThreadPointerData;
  if ( ThreadPointerData )
  {
    v10 = CTouchProcessor::ReferenceFrame((CTouchProcessor *)this, *(_DWORD *)(ThreadPointerData + 28));
    if ( v10 )
    {
      v11 = (struct tagPOINT *)(*((_QWORD *)v10 + 12) + 576LL * *(unsigned int *)(v9 + 32));
      if ( v11 )
      {
        v7 = 1;
        *a3 = v11[33];
      }
      CTouchProcessor::UnreferenceFrame((CTouchProcessor *)this, v10);
    }
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xBu,
      0x6Cu,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
  CInpLockGuard::UnLock(this + 9);
  return v7;
}
