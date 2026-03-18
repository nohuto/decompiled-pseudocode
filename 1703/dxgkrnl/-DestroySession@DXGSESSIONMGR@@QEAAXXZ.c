/*
 * XREFs of ?DestroySession@DXGSESSIONMGR@@QEAAXXZ @ 0x1C00DD9F8
 * Callers:
 *     ?DxgkNotifySessionStateChange@@YAJK@Z @ 0x1C00A6B30 (-DxgkNotifySessionStateChange@@YAJK@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??_GDXGSESSIONDATA@@QEAAPEAXI@Z @ 0x1C000D550 (--_GDXGSESSIONDATA@@QEAAPEAXI@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00D7FFC (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

void __fastcall DXGSESSIONMGR::DestroySession(DXGSESSIONMGR *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  struct DXGGLOBAL *Global; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 CurrentProcessSessionId; // rsi
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  _QWORD *v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  DXGSESSIONDATA *v23; // rcx
  _BYTE v24[16]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v25[24]; // [rsp+30h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v25, this, a3, a4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v25);
  Global = DXGGLOBAL::GetGlobal(v6, v5, v7, v8);
  DXGGLOBAL::IterateAdaptersWithCallback(
    (__int64)Global,
    (__int64 (__fastcall *)(_QWORD *, __int64))DXGPRESENTHISTORYTOKENQUEUE::CleanupPresentHistoryTokenQueueAdapter,
    0LL,
    2LL);
  CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId(v11, v10, v12, v13);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v24, (DXGSESSIONMGR *)((char *)this + 80), v15, v16);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v24);
  v18 = (_QWORD *)WdLogNewEntry5_WdEvent(v17);
  v18[3] = CurrentProcessSessionId;
  if ( (unsigned int)CurrentProcessSessionId >= *((_DWORD *)this + 18) )
    v19 = 0LL;
  else
    v19 = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * CurrentProcessSessionId);
  v18[4] = v19;
  v18[5] = *((unsigned int *)this + 18);
  WdLogEvent5_WdEvent(v18);
  if ( (unsigned int)CurrentProcessSessionId < *((_DWORD *)this + 18) )
  {
    v23 = *(DXGSESSIONDATA **)(*((_QWORD *)this + 5) + 8 * CurrentProcessSessionId);
    if ( v23 )
    {
      DXGSESSIONDATA::`scalar deleting destructor'(v23);
      *(_QWORD *)(*((_QWORD *)this + 5) + 8 * CurrentProcessSessionId) = 0LL;
    }
  }
  if ( v24[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v24, v20, v21, v22);
  if ( v25[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v25, v20, v21, v22);
}
