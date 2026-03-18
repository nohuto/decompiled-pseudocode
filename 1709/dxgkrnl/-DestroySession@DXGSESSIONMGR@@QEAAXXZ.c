/*
 * XREFs of ?DestroySession@DXGSESSIONMGR@@QEAAXXZ @ 0x1C0090080
 * Callers:
 *     ?DxgkNotifySessionStateChange@@YAJK@Z @ 0x1C00FA530 (-DxgkNotifySessionStateChange@@YAJK@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??_GDXGSESSIONDATA@@QEAAPEAXI@Z @ 0x1C0008028 (--_GDXGSESSIONDATA@@QEAAPEAXI@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C008B884 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

void __fastcall DXGSESSIONMGR::DestroySession(DXGSESSIONMGR *this)
{
  __int64 v2; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 CurrentProcessSessionId; // rsi
  _QWORD *v5; // rdx
  __int64 v6; // rax
  DXGSESSIONDATA *v7; // rcx
  _BYTE v8[16]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v9[24]; // [rsp+30h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v9, this);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9);
  Global = DXGGLOBAL::GetGlobal(v2);
  DXGGLOBAL::IterateAdaptersWithCallback(
    (__int64)Global,
    (__int64 (__fastcall *)(_QWORD *, __int64))DXGPRESENTHISTORYTOKENQUEUE::CleanupPresentHistoryTokenQueueAdapter,
    0LL,
    2);
  CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v8, (DXGSESSIONMGR *)((char *)this + 80));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
  v5 = (_QWORD *)WdLogNewEntry5_WdEvent();
  v5[3] = CurrentProcessSessionId;
  if ( (unsigned int)CurrentProcessSessionId >= *((_DWORD *)this + 18) )
    v6 = 0LL;
  else
    v6 = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * CurrentProcessSessionId);
  v5[4] = v6;
  v5[5] = *((unsigned int *)this + 18);
  WdLogEvent5_WdEvent(v5);
  if ( (unsigned int)CurrentProcessSessionId < *((_DWORD *)this + 18) )
  {
    v7 = *(DXGSESSIONDATA **)(*((_QWORD *)this + 5) + 8 * CurrentProcessSessionId);
    if ( v7 )
    {
      DXGSESSIONDATA::`scalar deleting destructor'(v7);
      *(_QWORD *)(*((_QWORD *)this + 5) + 8 * CurrentProcessSessionId) = 0LL;
    }
  }
  if ( v8[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v8);
  if ( v9[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v9);
}
