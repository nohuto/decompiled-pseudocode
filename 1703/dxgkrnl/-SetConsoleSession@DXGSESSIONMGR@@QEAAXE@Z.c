/*
 * XREFs of ?SetConsoleSession@DXGSESSIONMGR@@QEAAXE@Z @ 0x1C00DD6DC
 * Callers:
 *     DxgkSessionConnected @ 0x1C00A6570 (DxgkSessionConnected.c)
 *     DxgkPreSessionDisconnected @ 0x1C00A6870 (DxgkPreSessionDisconnected.c)
 *     DxgkSessionReconnected @ 0x1C0105230 (DxgkSessionReconnected.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C00DD7A0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?RegisterTtmDevice@CTTMDEVICE@@AEAAJPEAVDXGSESSIONDATA@@@Z @ 0x1C01B0CD8 (-RegisterTtmDevice@CTTMDEVICE@@AEAAJPEAVDXGSESSIONDATA@@@Z.c)
 *     ?UnRegisterTtmDevice@CTTMDEVICE@@AEAAXE@Z @ 0x1C01B125C (-UnRegisterTtmDevice@CTTMDEVICE@@AEAAXE@Z.c)
 */

void __fastcall DXGSESSIONMGR::SetConsoleSession(struct DXGSESSIONDATA **this, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r12
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // r13
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  struct DXGSESSIONDATA *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  CTTMDEVICE *v20; // rdi
  CTTMDEVICE *v21; // r15
  __int64 v22; // rax
  CTTMDEVICE *v23; // rcx
  int v24; // eax
  __int64 v25; // r14
  _QWORD *v26; // rax
  struct DXGSESSIONDATA *v27; // rax
  _QWORD **v28; // rax
  _QWORD *v29; // rdi
  CTTMDEVICE *v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rax
  _BYTE v33[56]; // [rsp+20h] [rbp-38h] BYREF

  v4 = a2;
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(this, a2, a3, a4);
  SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(
                                     (DXGSESSIONMGR *)this,
                                     CurrentProcessSessionId);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v33, (struct DXGFASTMUTEX *const)this, v8, v9);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v33);
  if ( v4 )
  {
    if ( this[15] )
    {
      v15 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
      *(_QWORD *)(v15 + 24) = 4483LL;
      WdLogEvent5_WdAssertion(v15);
    }
    this[15] = SessionDataForSpecifiedSession;
  }
  v14 = this[15];
  if ( v14 && *((_BYTE *)v14 + 18488) )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(this + 19, 0LL);
    this[20] = KeGetCurrentThread();
    if ( v4 )
    {
      v20 = this[21];
      while ( v20 != (CTTMDEVICE *)(this + 21) )
      {
        v21 = v20;
        if ( *((_QWORD *)v20 + 4) )
        {
          v22 = WdLogNewEntry5_WdAssertion(v17, v16, v18, v19);
          *(_QWORD *)(v22 + 24) = 4512LL;
          WdLogEvent5_WdAssertion(v22);
        }
        v23 = v20;
        v20 = *(CTTMDEVICE **)v20;
        v24 = CTTMDEVICE::RegisterTtmDevice(v23, this[15]);
        v25 = v24;
        v17 = v24 + 0x80000000;
        if ( (int)v17 >= 0 && v24 != -1073741130 )
        {
          v26 = (_QWORD *)WdLogNewEntry5_WdError(v17, v16);
          v26[3] = *((unsigned int *)v21 + 20);
          v26[4] = *((_QWORD *)v21 + 8);
          v26[5] = *(unsigned int *)this[15];
          v26[6] = v25;
          WdLogEvent5_WdError(v26);
        }
      }
    }
    else
    {
      v27 = this[15];
      if ( v27 )
      {
        v28 = (_QWORD **)((char *)v27 + 18568);
        v29 = *v28;
        while ( v29 != v28 )
        {
          v30 = (CTTMDEVICE *)(v29 - 2);
          if ( (struct DXGSESSIONDATA *)v29[2] != this[15] )
          {
            v31 = WdLogNewEntry5_WdAssertion(v17, v16, v18, v19);
            *(_QWORD *)(v31 + 24) = 4547LL;
            WdLogEvent5_WdAssertion(v31);
          }
          v29 = (_QWORD *)*v29;
          CTTMDEVICE::UnRegisterTtmDevice(v30, 1u);
          v28 = (_QWORD **)((char *)this[15] + 18568);
        }
      }
    }
    this[20] = 0LL;
    ExReleasePushLockExclusiveEx(this + 19, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( !v4 )
  {
    if ( this[15] != SessionDataForSpecifiedSession )
    {
      v32 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
      *(_QWORD *)(v32 + 24) = 4567LL;
      WdLogEvent5_WdAssertion(v32);
    }
    this[15] = 0LL;
  }
  if ( v33[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v33, v10, v12, v13);
}
