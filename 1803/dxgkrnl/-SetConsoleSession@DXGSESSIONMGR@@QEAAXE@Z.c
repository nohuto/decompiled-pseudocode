/*
 * XREFs of ?SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z @ 0x1C01D0610
 * Callers:
 *     DxgkPreSessionDisconnected @ 0x1C01A1DE0 (DxgkPreSessionDisconnected.c)
 *     DxgkSessionConnected @ 0x1C01A2080 (DxgkSessionConnected.c)
 *     DxgkSessionReconnected @ 0x1C01A21F0 (DxgkSessionReconnected.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00E29C0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?RegisterTtmDevice@CTTMDEVICE@@AEAAJPEAVDXGSESSIONDATA@@@Z @ 0x1C01D009C (-RegisterTtmDevice@CTTMDEVICE@@AEAAJPEAVDXGSESSIONDATA@@@Z.c)
 *     ?UnRegisterTtmDevice@CTTMDEVICE@@AEAAXE@Z @ 0x1C01D0C44 (-UnRegisterTtmDevice@CTTMDEVICE@@AEAAXE@Z.c)
 */

void __fastcall DXGSESSIONMGR::SetConsoleSession(struct DXGSESSIONDATA **this, char a2)
{
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // r15
  struct DXGSESSIONDATA *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  CTTMDEVICE *v9; // rdi
  CTTMDEVICE *v10; // r13
  __int64 v11; // rax
  CTTMDEVICE *v12; // rcx
  int v13; // eax
  __int64 v14; // r14
  _QWORD *v15; // rax
  struct DXGSESSIONDATA *v16; // rdx
  _QWORD *v17; // rax
  _QWORD *v18; // rdi
  CTTMDEVICE *v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rax
  _BYTE v22[56]; // [rsp+20h] [rbp-38h] BYREF

  CurrentProcessSessionId = PsGetCurrentProcessSessionId(this);
  SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                     (DXGSESSIONMGR *)this,
                                     CurrentProcessSessionId);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v22, (struct DXGFASTMUTEX *const)this, 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v22);
  v6 = this[15];
  if ( a2 )
  {
    if ( v6 )
    {
      v7 = WdLogNewEntry5_WdAssertion(v6);
      *(_QWORD *)(v7 + 24) = 4705LL;
      WdLogEvent5_WdAssertion(v7);
    }
    this[15] = SessionDataForSpecifiedSession;
    v6 = SessionDataForSpecifiedSession;
  }
  if ( v6 && *((_BYTE *)v6 + 18488) )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(this + 19, 0LL);
    this[20] = KeGetCurrentThread();
    if ( a2 )
    {
      v9 = this[21];
      while ( v9 != (CTTMDEVICE *)(this + 21) )
      {
        v10 = v9;
        if ( *((_QWORD *)v9 + 4) )
        {
          v11 = WdLogNewEntry5_WdAssertion(v8);
          *(_QWORD *)(v11 + 24) = 4734LL;
          WdLogEvent5_WdAssertion(v11);
        }
        v12 = v9;
        v9 = *(CTTMDEVICE **)v9;
        v13 = CTTMDEVICE::RegisterTtmDevice(v12, this[15]);
        v14 = v13;
        v8 = v13 + 0x80000000;
        if ( (int)v8 >= 0 && v13 != -1073741130 )
        {
          v15 = (_QWORD *)WdLogNewEntry5_WdError(v8);
          v15[3] = *((unsigned int *)v10 + 20);
          v15[4] = *((_QWORD *)v10 + 8);
          v15[5] = *(unsigned int *)this[15];
          v15[6] = v14;
          WdLogEvent5_WdError(v15);
        }
      }
    }
    else
    {
      v16 = this[15];
      if ( v16 )
      {
        v17 = (_QWORD *)((char *)v16 + 18576);
        v18 = (_QWORD *)*((_QWORD *)v16 + 2322);
        while ( v18 != v17 )
        {
          v19 = (CTTMDEVICE *)(v18 - 2);
          if ( (struct DXGSESSIONDATA *)v18[2] != v16 )
          {
            v20 = WdLogNewEntry5_WdAssertion(v8);
            *(_QWORD *)(v20 + 24) = 4769LL;
            WdLogEvent5_WdAssertion(v20);
          }
          v18 = (_QWORD *)*v18;
          CTTMDEVICE::UnRegisterTtmDevice(v19, 1u);
          v16 = this[15];
          v17 = (_QWORD *)((char *)v16 + 18576);
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
      v21 = WdLogNewEntry5_WdAssertion(v6);
      *(_QWORD *)(v21 + 24) = 4789LL;
      WdLogEvent5_WdAssertion(v21);
    }
    this[15] = 0LL;
  }
  if ( v22[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v22);
}
