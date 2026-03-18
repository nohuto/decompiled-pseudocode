/*
 * XREFs of ?CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@PEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C00E6FA4
 * Callers:
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAEPEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C00998B0 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 * Callees:
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0001C48 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogCodePointPacket @ 0x1C000BD40 (DxgkLogCodePointPacket.c)
 *     Template_pqq @ 0x1C0022874 (Template_pqq.c)
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1PEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C00A74A4 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1PEAUDXGK_STEREO_PA.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00AF918 (--_V@YAXPEAX@Z.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::CreateModeList(
        DXGADAPTER **this,
        __int64 a2,
        struct _D3DKMT_GETDISPLAYMODELIST *a3,
        struct DXGK_STEREO_PARAMS *a4)
{
  char v6; // bp
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  DXGADAPTER *v11; // rcx
  __int64 ActiveVidPnBasedDisplayModeList; // rsi
  __int64 v13; // r8
  __int64 v14; // r9
  DXGADAPTER *v15; // rax
  void *v16; // rcx
  __int64 v17; // xmm1_8
  __int64 v18; // rcx
  DXGADAPTER *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rcx
  _QWORD *v23; // rax
  struct DXGK_STEREO_PARAMS *v25; // [rsp+20h] [rbp-48h]
  __int64 v26; // [rsp+28h] [rbp-40h]
  _BYTE v27[16]; // [rsp+30h] [rbp-38h] BYREF
  void *v28[2]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v29; // [rsp+50h] [rbp-18h]

  v6 = a2;
  if ( !a3 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2, 0LL, a4);
    *(_QWORD *)(v8 + 24) = 5333LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( a3->VidPnSourceId >= *((_DWORD *)this + 20) )
  {
    v9 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v9 + 24) = 5334LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( a3->pModeList )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v10 + 24) = 5335LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    Template_pqq((__int64)this, &EventStartRebuildModeCache, (__int64)a3, this, a3->VidPnSourceId, 0);
  v11 = this[2];
  v28[0] = 0LL;
  v28[1] = 0LL;
  v29 = 0LL;
  ActiveVidPnBasedDisplayModeList = (int)GetActiveVidPnBasedDisplayModeList(
                                           v11,
                                           v6,
                                           a3,
                                           (struct _D3DKMT_GETDISPLAYMODELIST *)((unsigned __int64)v28 & -(__int64)(this[22] != 0LL)),
                                           a4);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v27, (struct DXGFASTMUTEX *const)(this + 17), v13, v14);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v27);
  v15 = this[22];
  if ( v15 )
  {
    v16 = (void *)*((_QWORD *)v15 + 3 * a3->VidPnSourceId + 1);
    if ( v16 )
      operator delete[](v16);
    v17 = v29;
    v18 = 3LL * a3->VidPnSourceId;
    v19 = this[22];
    *(_OWORD *)((char *)v19 + 8 * v18) = *(_OWORD *)v28;
    *((_QWORD *)v19 + v18 + 2) = v17;
  }
  else if ( v28[1] )
  {
    operator delete[](v28[1]);
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v27);
  if ( (int)ActiveVidPnBasedDisplayModeList < 0 )
  {
    operator delete[](a3->pModeList);
    a3->pModeList = 0LL;
    v23 = (_QWORD *)WdLogNewEntry5_WdEvent(v22);
    v23[3] = this;
    v23[4] = a3->VidPnSourceId;
    v23[5] = ActiveVidPnBasedDisplayModeList;
    WdLogEvent5_WdEvent(v23);
  }
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(v26) = ActiveVidPnBasedDisplayModeList;
    LODWORD(v25) = a3->VidPnSourceId;
    Template_pqq(v20, &EventEndRebuildModeCache, v21, this, v25, v26);
  }
  DxgkLogCodePointPacket(
    0x1Du,
    a3->VidPnSourceId,
    ActiveVidPnBasedDisplayModeList,
    0,
    *(_QWORD *)((char *)this[2] + 268));
  return (unsigned int)ActiveVidPnBasedDisplayModeList;
}
