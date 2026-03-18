/*
 * XREFs of ?CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@PEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C00AC648
 * Callers:
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAEPEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C00B6EF8 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 * Callees:
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C0002ED4 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkLogCodePointPacket @ 0x1C0009664 (DxgkLogCodePointPacket.c)
 *     McTemplateK0pqq @ 0x1C0020624 (McTemplateK0pqq.c)
 *     ??3@YAXPEAX@Z @ 0x1C00A3070 (--3@YAXPEAX@Z.c)
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1PEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C00E6098 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1PEAUDXGK_STEREO_PA.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::CreateModeList(
        ADAPTER_DISPLAY *this,
        unsigned __int8 a2,
        struct _D3DKMT_GETDISPLAYMODELIST *a3,
        struct DXGK_STEREO_PARAMS *a4)
{
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  void *v11; // rcx
  __int64 ActiveVidPnBasedDisplayModeList; // rsi
  __int64 v13; // rax
  void *v14; // rcx
  __int64 v15; // xmm1_8
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  _QWORD *v20; // rax
  struct DXGK_STEREO_PARAMS *v22; // [rsp+20h] [rbp-48h]
  __int64 v23; // [rsp+28h] [rbp-40h]
  _BYTE v24[16]; // [rsp+30h] [rbp-38h] BYREF
  void *v25[2]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v26; // [rsp+50h] [rbp-18h]

  if ( !a3 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v8 + 24) = 5933LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( a3->VidPnSourceId >= *((_DWORD *)this + 20) )
  {
    v9 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v9 + 24) = 5934LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( a3->pModeList )
  {
    v10 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v10 + 24) = 5935LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0pqq((__int64)this, &EventStartRebuildModeCache, (__int64)a3, this, a3->VidPnSourceId, 0);
  v11 = (void *)*((_QWORD *)this + 2);
  v25[0] = 0LL;
  v25[1] = 0LL;
  v26 = 0LL;
  ActiveVidPnBasedDisplayModeList = (int)GetActiveVidPnBasedDisplayModeList(
                                           v11,
                                           a2,
                                           a3,
                                           (struct _D3DKMT_GETDISPLAYMODELIST *)((unsigned __int64)v25 & -(__int64)(*((_QWORD *)this + 22) != 0LL)),
                                           a4);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v24, (ADAPTER_DISPLAY *)((char *)this + 136));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v24);
  v13 = *((_QWORD *)this + 22);
  if ( v13 )
  {
    v14 = *(void **)(v13 + 24LL * a3->VidPnSourceId + 8);
    if ( v14 )
      operator delete(v14);
    v15 = v26;
    v16 = 3LL * a3->VidPnSourceId;
    v17 = *((_QWORD *)this + 22);
    *(_OWORD *)(v17 + 8 * v16) = *(_OWORD *)v25;
    *(_QWORD *)(v17 + 8 * v16 + 16) = v15;
  }
  else if ( v25[1] )
  {
    operator delete(v25[1]);
  }
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v24);
  if ( (int)ActiveVidPnBasedDisplayModeList < 0 )
  {
    operator delete(a3->pModeList);
    a3->pModeList = 0LL;
    v20 = (_QWORD *)WdLogNewEntry5_WdEvent();
    v20[3] = this;
    v20[4] = a3->VidPnSourceId;
    v20[5] = ActiveVidPnBasedDisplayModeList;
    WdLogEvent5_WdEvent(v20);
  }
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(v23) = ActiveVidPnBasedDisplayModeList;
    LODWORD(v22) = a3->VidPnSourceId;
    McTemplateK0pqq(v18, &EventEndRebuildModeCache, v19, this, v22, v23);
  }
  DxgkLogCodePointPacket(
    0x1Du,
    a3->VidPnSourceId,
    ActiveVidPnBasedDisplayModeList,
    0,
    *(_QWORD *)(*((_QWORD *)this + 2) + 268LL));
  return (unsigned int)ActiveVidPnBasedDisplayModeList;
}
