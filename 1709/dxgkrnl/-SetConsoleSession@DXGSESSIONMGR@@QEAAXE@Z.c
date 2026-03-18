/*
 * XREFs of ?SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z @ 0x1C0090314
 * Callers:
 *     DxgkPreSessionDisconnected @ 0x1C00F9BE0 (DxgkPreSessionDisconnected.c)
 *     DxgkSessionConnected @ 0x1C00FC2B0 (DxgkSessionConnected.c)
 *     DxgkSessionReconnected @ 0x1C0104B30 (DxgkSessionReconnected.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00903E0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?RegisterTtmDevice@CTTMDEVICE@@AEAAJPEAVDXGSESSIONDATA@@@Z @ 0x1C01CAA98 (-RegisterTtmDevice@CTTMDEVICE@@AEAAJPEAVDXGSESSIONDATA@@@Z.c)
 *     ?UnRegisterTtmDevice@CTTMDEVICE@@AEAAXE@Z @ 0x1C01CB01C (-UnRegisterTtmDevice@CTTMDEVICE@@AEAAXE@Z.c)
 */

void __fastcall DXGSESSIONMGR::SetConsoleSession(struct DXGSESSIONDATA **this, char a2)
{
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // r13
  __int64 v6; // rcx
  struct DXGSESSIONDATA *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  CTTMDEVICE *v10; // rdi
  CTTMDEVICE *v11; // r15
  __int64 v12; // rax
  CTTMDEVICE *v13; // rcx
  int v14; // eax
  __int64 v15; // r14
  _QWORD *v16; // rax
  struct DXGSESSIONDATA *v17; // rax
  _QWORD **v18; // rax
  _QWORD *v19; // rdi
  CTTMDEVICE *v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rax
  _BYTE v23[56]; // [rsp+20h] [rbp-38h] BYREF

  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                     (DXGSESSIONMGR *)this,
                                     CurrentProcessSessionId);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v23, (struct DXGFASTMUTEX *const)this);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v23);
  if ( a2 )
  {
    if ( this[15] )
    {
      v8 = WdLogNewEntry5_WdAssertion(v6);
      *(_QWORD *)(v8 + 24) = 4550LL;
      WdLogEvent5_WdAssertion(v8);
    }
    this[15] = SessionDataForSpecifiedSession;
  }
  v7 = this[15];
  if ( v7 && *((_BYTE *)v7 + 18488) )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(this + 19, 0LL);
    this[20] = KeGetCurrentThread();
    if ( a2 )
    {
      v10 = this[21];
      while ( v10 != (CTTMDEVICE *)(this + 21) )
      {
        v11 = v10;
        if ( *((_QWORD *)v10 + 4) )
        {
          v12 = WdLogNewEntry5_WdAssertion(v9);
          *(_QWORD *)(v12 + 24) = 4579LL;
          WdLogEvent5_WdAssertion(v12);
        }
        v13 = v10;
        v10 = *(CTTMDEVICE **)v10;
        v14 = CTTMDEVICE::RegisterTtmDevice(v13, this[15]);
        v15 = v14;
        v9 = v14 + 0x80000000;
        if ( (int)v9 >= 0 && v14 != -1073741130 )
        {
          v16 = (_QWORD *)WdLogNewEntry5_WdError(v9);
          v16[3] = *((unsigned int *)v11 + 20);
          v16[4] = *((_QWORD *)v11 + 8);
          v16[5] = *(unsigned int *)this[15];
          v16[6] = v15;
          WdLogEvent5_WdError(v16);
        }
      }
    }
    else
    {
      v17 = this[15];
      if ( v17 )
      {
        v18 = (_QWORD **)((char *)v17 + 18576);
        v19 = *v18;
        while ( v19 != v18 )
        {
          v20 = (CTTMDEVICE *)(v19 - 2);
          if ( (struct DXGSESSIONDATA *)v19[2] != this[15] )
          {
            v21 = WdLogNewEntry5_WdAssertion(v9);
            *(_QWORD *)(v21 + 24) = 4614LL;
            WdLogEvent5_WdAssertion(v21);
          }
          v19 = (_QWORD *)*v19;
          CTTMDEVICE::UnRegisterTtmDevice(v20, 1u);
          v18 = (_QWORD **)((char *)this[15] + 18576);
        }
      }
    }
    this[20] = 0LL;
    ExReleasePushLockExclusiveEx(this + 19, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( !a2 )
  {
    if ( this[15] != SessionDataForSpecifiedSession )
    {
      v22 = WdLogNewEntry5_WdAssertion(v6);
      *(_QWORD *)(v22 + 24) = 4634LL;
      WdLogEvent5_WdAssertion(v22);
    }
    this[15] = 0LL;
  }
  if ( v23[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v23);
}
