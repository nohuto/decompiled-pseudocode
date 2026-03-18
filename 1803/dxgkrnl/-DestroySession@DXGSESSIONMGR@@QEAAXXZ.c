/*
 * XREFs of ?DestroySession@DXGSESSIONMGR@@QEAAXXZ @ 0x1C01CF698
 * Callers:
 *     ?DxgkNotifySessionStateChange@@YAJK@Z @ 0x1C01CF980 (-DxgkNotifySessionStateChange@@YAJK@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??_GDXGSESSIONDATA@@QEAAPEAXI@Z @ 0x1C00363A0 (--_GDXGSESSIONDATA@@QEAAPEAXI@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00F9E10 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

void __fastcall DXGSESSIONMGR::DestroySession(DXGSESSIONMGR *this)
{
  __int64 v2; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v4; // rcx
  __int64 CurrentProcessSessionId; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rdx
  __int64 v9; // rax
  DXGSESSIONDATA *v10; // rcx
  _BYTE v11[16]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v12[24]; // [rsp+30h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v12, this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v12);
  Global = DXGGLOBAL::GetGlobal(v2);
  DXGGLOBAL::IterateAdaptersWithCallback(
    (__int64)Global,
    (__int64 (__fastcall *)(_QWORD *, __int64))DXGPRESENTHISTORYTOKENQUEUE::CleanupPresentHistoryTokenQueueAdapter,
    0LL,
    2);
  CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId(v4);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v11, (DXGSESSIONMGR *)((char *)this + 80), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v11);
  v8 = (_QWORD *)WdLogNewEntry5_WdEvent(v7, v6);
  v8[3] = CurrentProcessSessionId;
  if ( (unsigned int)CurrentProcessSessionId >= *((_DWORD *)this + 18) )
    v9 = 0LL;
  else
    v9 = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * CurrentProcessSessionId);
  v8[4] = v9;
  v8[5] = *((unsigned int *)this + 18);
  WdLogEvent5_WdEvent(v8);
  if ( (unsigned int)CurrentProcessSessionId < *((_DWORD *)this + 18) )
  {
    v10 = *(DXGSESSIONDATA **)(*((_QWORD *)this + 5) + 8 * CurrentProcessSessionId);
    if ( v10 )
    {
      DXGSESSIONDATA::`scalar deleting destructor'(v10);
      *(_QWORD *)(*((_QWORD *)this + 5) + 8 * CurrentProcessSessionId) = 0LL;
    }
  }
  if ( v11[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v11);
  if ( v12[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v12);
}
