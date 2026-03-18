/*
 * XREFs of ?DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C00B99F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C000810C (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00AFBE8 (DxgkReleaseSessionModeChangeLock.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00B1CE4 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAEPEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C00B6EF8 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     ?DxgkWaitForMonitorEventDoneInternal@@YAJPEAVDXGADAPTER@@@Z @ 0x1C00B9B70 (-DxgkWaitForMonitorEventDoneInternal@@YAJPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkCddGetDisplayModeList(struct DXGADAPTER *a1, struct _D3DKMT_GETDISPLAYMODELIST *a2, __int64 a3)
{
  int PairingAdapters; // eax
  __int64 v6; // rcx
  __int64 v7; // rsi
  struct DXGADAPTER *v8; // rsi
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // r14
  int DisplayModeList; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  D3DKMT_DISPLAYMODE *pModeList; // rcx
  __int64 v20; // rcx
  __int64 v21; // r8
  _QWORD *v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  _QWORD *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  _QWORD *v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  struct _D3DKMT_GETDISPLAYMODELIST v35; // [rsp+30h] [rbp-39h] BYREF
  _BYTE v36[8]; // [rsp+50h] [rbp-19h] BYREF
  _BYTE v37[32]; // [rsp+58h] [rbp-11h] BYREF
  _BYTE v38[72]; // [rsp+78h] [rbp+Fh] BYREF
  unsigned __int8 v39; // [rsp+D0h] [rbp+67h] BYREF
  struct DXGADAPTER *v40; // [rsp+E0h] [rbp+77h] BYREF
  unsigned __int64 v41; // [rsp+E8h] [rbp+7Fh] BYREF

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 3004);
  memset(&v35, 0, sizeof(v35));
  v39 = 0;
  if ( a1 )
  {
    PairingAdapters = DxgkpGetPairingAdapters(a1, a2->VidPnSourceId, 0LL, 0LL, &v40, &v41);
    v7 = PairingAdapters;
    if ( PairingAdapters < 0 )
    {
      v26 = (_QWORD *)WdLogNewEntry5_WdEvent();
      v26[3] = a1;
      v26[4] = a2->VidPnSourceId;
      v26[5] = v7;
      WdLogEvent5_WdEvent(v26);
    }
    else
    {
      v8 = v40;
      if ( !v40 )
      {
        v27 = WdLogNewEntry5_WdAssertion(v6);
        *(_QWORD *)(v27 + 24) = 1192LL;
        WdLogEvent5_WdAssertion(v27);
      }
      DxgkWaitForMonitorEventDoneInternal(v8);
      LOBYTE(v40) = 0;
      v9 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v40, 0);
      v11 = v9;
      if ( v9 < 0 )
      {
        v28 = WdLogNewEntry5_WdError(v10);
        *(_QWORD *)(v28 + 24) = v11;
        WdLogEvent5_WdError(v28);
        LODWORD(v7) = v11;
      }
      else
      {
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v36, v8, 0LL);
        DXGADAPTER::ReleaseReferenceNoTracking(v8);
        v12 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v36);
        v14 = v12;
        if ( v12 < 0 )
        {
          v29 = (_QWORD *)WdLogNewEntry5_WdEvent();
          v29[3] = v14;
          v29[4] = PsGetCurrentProcess(v31, v30);
          v29[5] = a2->hAdapter;
          v29[6] = v8;
          WdLogEvent5_WdEvent(v29);
        }
        else
        {
          if ( !*((_QWORD *)v8 + 288) )
          {
            v32 = WdLogNewEntry5_WdAssertion(v13);
            *(_QWORD *)(v32 + 24) = 1232LL;
            WdLogEvent5_WdAssertion(v32);
          }
          v35.VidPnSourceId = a2->VidPnSourceId;
          DisplayModeList = DxgkpGetDisplayModeList(
                              (ADAPTER_DISPLAY **)v8,
                              (struct COREADAPTERACCESS *)v36,
                              0,
                              &v35,
                              &v39,
                              0LL);
          v14 = DisplayModeList;
          if ( DisplayModeList < 0 )
          {
            v33 = WdLogNewEntry5_WdDmmEvent(v17);
            *(_QWORD *)(v33 + 24) = a2->VidPnSourceId;
            *(_QWORD *)(v33 + 32) = v14;
            WdLogEvent5_WdDmmEvent(v33);
          }
          else
          {
            pModeList = a2->pModeList;
            if ( pModeList )
            {
              if ( a2->ModeCount < v35.ModeCount )
              {
                v34 = WdLogNewEntry5_WdWarning(pModeList, v16, v18);
                *(_QWORD *)(v34 + 24) = a2->ModeCount;
                *(_QWORD *)(v34 + 32) = v35.ModeCount;
                WdLogEvent5_WdWarning(v34);
                LODWORD(v14) = -1073741789;
              }
              else
              {
                memmove(pModeList, v35.pModeList, 44LL * v35.ModeCount);
              }
            }
            else
            {
              a2->ModeCount = v35.ModeCount;
            }
            if ( v39 )
            {
              if ( v35.pModeList )
                ExFreePoolWithTag(v35.pModeList, 0);
              v35.pModeList = 0LL;
            }
          }
        }
        LODWORD(v7) = v14;
        COREACCESS::~COREACCESS((COREACCESS *)v38);
        COREACCESS::~COREACCESS((COREACCESS *)v37);
      }
      if ( (_BYTE)v40 )
        DxgkReleaseSessionModeChangeLock(v20);
    }
  }
  else
  {
    LODWORD(v7) = -1073741811;
    v23 = (_QWORD *)WdLogNewEntry5_WdError(a1);
    v23[3] = -1073741811LL;
    v23[4] = PsGetCurrentProcess(v25, v24);
    v23[5] = a2->hAdapter;
    WdLogEvent5_WdError(v23);
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v20, &EventProfilerExit, v21, 3004);
  return (unsigned int)v7;
}
