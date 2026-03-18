/*
 * XREFs of ?DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C0099030
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000CC30 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAEPEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C00998B0 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     ?DxgkWaitForMonitorEventDoneInternal@@YAJPEAVDXGADAPTER@@@Z @ 0x1C0099BF4 (-DxgkWaitForMonitorEventDoneInternal@@YAJPEAVDXGADAPTER@@@Z.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00F7E04 (DxgkReleaseSessionModeChangeLock.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00F7EEC (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 */

__int64 __fastcall DxgkCddGetDisplayModeList(struct DXGADAPTER *a1, struct _D3DKMT_GETDISPLAYMODELIST *a2, __int64 a3)
{
  int PairingAdapters; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rsi
  struct DXGADAPTER *v11; // rsi
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // r14
  int DisplayModeList; // eax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  D3DKMT_DISPLAYMODE *pModeList; // rcx
  __int64 v27; // rcx
  __int64 v28; // r8
  _QWORD *v30; // rbx
  _QWORD *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  _QWORD *v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  struct _D3DKMT_GETDISPLAYMODELIST v38; // [rsp+30h] [rbp-39h] BYREF
  _BYTE v39[8]; // [rsp+50h] [rbp-19h] BYREF
  _BYTE v40[32]; // [rsp+58h] [rbp-11h] BYREF
  _BYTE v41[72]; // [rsp+78h] [rbp+Fh] BYREF
  unsigned __int8 v42; // [rsp+D0h] [rbp+67h] BYREF
  struct DXGADAPTER *v43; // [rsp+E0h] [rbp+77h] BYREF
  unsigned __int64 v44; // [rsp+E8h] [rbp+7Fh] BYREF

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 3004);
  memset(&v38, 0, sizeof(v38));
  v42 = 0;
  if ( a1 )
  {
    PairingAdapters = DxgkpGetPairingAdapters(a1, a2->VidPnSourceId, 0LL, 0LL, &v43, &v44);
    v10 = PairingAdapters;
    if ( PairingAdapters < 0 )
    {
      v31 = (_QWORD *)WdLogNewEntry5_WdEvent();
      v31[3] = a1;
      v31[4] = a2->VidPnSourceId;
      v31[5] = v10;
      WdLogEvent5_WdEvent(v31);
    }
    else
    {
      v11 = v43;
      if ( !v43 )
      {
        v32 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
        *(_QWORD *)(v32 + 24) = 1185LL;
        WdLogEvent5_WdAssertion(v32);
      }
      DxgkWaitForMonitorEventDoneInternal(v11);
      LOBYTE(v43) = 0;
      v12 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v43, 0);
      v15 = v12;
      if ( v12 < 0 )
      {
        v33 = WdLogNewEntry5_WdError(v14, v13);
        *(_QWORD *)(v33 + 24) = v15;
        WdLogEvent5_WdError(v33);
        LODWORD(v10) = v15;
      }
      else
      {
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v39, v11, 0LL);
        DXGADAPTER::ReleaseReference(v11);
        v16 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v39);
        v21 = v16;
        if ( v16 < 0 )
        {
          v34 = (_QWORD *)WdLogNewEntry5_WdEvent();
          v34[3] = v21;
          v34[4] = PsGetCurrentProcess();
          v34[5] = a2->hAdapter;
          v34[6] = v11;
          WdLogEvent5_WdEvent(v34);
        }
        else
        {
          if ( !*((_QWORD *)v11 + 285) )
          {
            v35 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
            *(_QWORD *)(v35 + 24) = 1225LL;
            WdLogEvent5_WdAssertion(v35);
          }
          v38.VidPnSourceId = a2->VidPnSourceId;
          DisplayModeList = DxgkpGetDisplayModeList(v11, (struct COREADAPTERACCESS *)v39, 0, &v38, &v42, 0LL);
          v21 = DisplayModeList;
          if ( DisplayModeList < 0 )
          {
            v36 = WdLogNewEntry5_WdDmmEvent();
            *(_QWORD *)(v36 + 24) = a2->VidPnSourceId;
            *(_QWORD *)(v36 + 32) = v21;
            WdLogEvent5_WdDmmEvent(v36);
          }
          else
          {
            pModeList = a2->pModeList;
            if ( pModeList )
            {
              if ( a2->ModeCount < v38.ModeCount )
              {
                v37 = WdLogNewEntry5_WdWarning(pModeList, v23, v24, v25);
                *(_QWORD *)(v37 + 24) = a2->ModeCount;
                *(_QWORD *)(v37 + 32) = v38.ModeCount;
                WdLogEvent5_WdWarning(v37);
                LODWORD(v21) = -1073741789;
              }
              else
              {
                memmove(pModeList, v38.pModeList, 44LL * v38.ModeCount);
              }
            }
            else
            {
              a2->ModeCount = v38.ModeCount;
            }
            if ( v42 )
            {
              if ( v38.pModeList )
                ExFreePoolWithTag(v38.pModeList, 0);
              v38.pModeList = 0LL;
            }
          }
        }
        LODWORD(v10) = v21;
        COREACCESS::~COREACCESS((COREACCESS *)v41);
        COREACCESS::~COREACCESS((COREACCESS *)v40);
      }
      if ( (_BYTE)v43 )
        DxgkReleaseSessionModeChangeLock();
    }
  }
  else
  {
    LODWORD(v10) = -1073741811;
    v30 = (_QWORD *)WdLogNewEntry5_WdError(a1, a2);
    v30[3] = -1073741811LL;
    v30[4] = PsGetCurrentProcess();
    v30[5] = a2->hAdapter;
    WdLogEvent5_WdError(v30);
  }
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v27, &EventProfilerExit, v28, 3004);
  return (unsigned int)v10;
}
