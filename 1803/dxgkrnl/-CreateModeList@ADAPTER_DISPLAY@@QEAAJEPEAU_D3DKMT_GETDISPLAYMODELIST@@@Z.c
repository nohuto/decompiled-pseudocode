/*
 * XREFs of ?CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C0152404
 * Callers:
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAE@Z @ 0x1C00AD874 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 * Callees:
 *     ??1DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000722C (--1DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     DxgkLogCodePointPacket @ 0x1C000735C (DxgkLogCodePointPacket.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     McTemplateK0pqq @ 0x1C002783C (McTemplateK0pqq.c)
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x1C01916F8 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::CreateModeList(
        ADAPTER_DISPLAY *this,
        unsigned __int8 a2,
        struct _D3DKMT_GETDISPLAYMODELIST *a3)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  void *v9; // rcx
  __int64 ActiveVidPnBasedDisplayModeList; // rsi
  __int64 v11; // rdx
  __int64 VidPnSourceId; // rax
  void *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // xmm1_8
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD *v20; // rax
  __int64 v22; // [rsp+20h] [rbp-48h]
  __int64 v23; // [rsp+28h] [rbp-40h]
  _BYTE v24[16]; // [rsp+30h] [rbp-38h] BYREF
  void *v25[2]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v26; // [rsp+50h] [rbp-18h]

  if ( !a3 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v6 + 24) = 5938LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( a3->VidPnSourceId >= *((_DWORD *)this + 20) )
  {
    v7 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v7 + 24) = 5939LL;
    WdLogEvent5_WdAssertion(v7);
  }
  if ( a3->pModeList )
  {
    v8 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v8 + 24) = 5940LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0pqq((__int64)this, &EventStartRebuildModeCache, (__int64)a3, this, a3->VidPnSourceId, 0);
  v9 = (void *)*((_QWORD *)this + 2);
  v25[0] = 0LL;
  v25[1] = 0LL;
  v26 = 0LL;
  ActiveVidPnBasedDisplayModeList = (int)GetActiveVidPnBasedDisplayModeList(
                                           v9,
                                           a2,
                                           a3,
                                           (struct _D3DKMT_GETDISPLAYMODELIST *)((unsigned __int64)v25 & -(__int64)(*((_QWORD *)this + 22) != 0LL)));
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v24, (ADAPTER_DISPLAY *)((char *)this + 136), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v24);
  v11 = *((_QWORD *)this + 22);
  if ( v11 )
  {
    VidPnSourceId = a3->VidPnSourceId;
    v13 = *(void **)(v11 + 24 * VidPnSourceId + 8);
    if ( v13 )
    {
      operator delete[](v13);
      VidPnSourceId = a3->VidPnSourceId;
      v11 = *((_QWORD *)this + 22);
    }
    v14 = 3 * VidPnSourceId;
    v15 = v26;
    *(_OWORD *)(v11 + 8 * v14) = *(_OWORD *)v25;
    *(_QWORD *)(v11 + 8 * v14 + 16) = v15;
  }
  else if ( v25[1] )
  {
    operator delete[](v25[1]);
  }
  DXGGLOBALSHAREMUTEX::~DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v24);
  if ( (int)ActiveVidPnBasedDisplayModeList < 0 )
  {
    operator delete[](a3->pModeList);
    a3->pModeList = 0LL;
    v20 = (_QWORD *)WdLogNewEntry5_WdEvent(v19, v18);
    v20[3] = this;
    v20[4] = a3->VidPnSourceId;
    v20[5] = ActiveVidPnBasedDisplayModeList;
    WdLogEvent5_WdEvent(v20);
  }
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(v23) = ActiveVidPnBasedDisplayModeList;
    LODWORD(v22) = a3->VidPnSourceId;
    McTemplateK0pqq(v16, &EventEndRebuildModeCache, v17, this, v22, v23);
  }
  DxgkLogCodePointPacket(
    0x1Du,
    a3->VidPnSourceId,
    ActiveVidPnBasedDisplayModeList,
    0,
    *(_QWORD *)(*((_QWORD *)this + 2) + 268LL));
  return (unsigned int)ActiveVidPnBasedDisplayModeList;
}
