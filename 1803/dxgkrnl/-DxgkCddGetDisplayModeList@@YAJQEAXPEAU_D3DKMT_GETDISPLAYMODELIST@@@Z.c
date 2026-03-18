/*
 * XREFs of ?DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C00DA480
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0002D98 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     DxgkReleaseSessionModeChangeLock @ 0x1C00A9CC4 (DxgkReleaseSessionModeChangeLock.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00A9DAC (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAE@Z @ 0x1C00AD874 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     ?DxgkWaitForMonitorEventDoneInternal@@YAJPEAVDXGADAPTER@@@Z @ 0x1C00DA618 (-DxgkWaitForMonitorEventDoneInternal@@YAJPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkCddGetDisplayModeList(struct DXGADAPTER *a1, struct _D3DKMT_GETDISPLAYMODELIST *a2, __int64 a3)
{
  __int64 v5; // rcx
  int PairingAdapters; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rsi
  struct DXGADAPTER *v10; // r14
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  int DisplayModeList; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  D3DKMT_DISPLAYMODE *pModeList; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // r8
  _QWORD *v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rcx
  _QWORD *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  _QWORD *v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  int v38; // [rsp+30h] [rbp-49h] BYREF
  __int64 v39; // [rsp+38h] [rbp-41h]
  _D3DKMT_GETDISPLAYMODELIST v40; // [rsp+40h] [rbp-39h] BYREF
  DXGADAPTER *v41; // [rsp+60h] [rbp-19h] BYREF
  _BYTE v42[32]; // [rsp+68h] [rbp-11h] BYREF
  _BYTE v43[72]; // [rsp+88h] [rbp+Fh] BYREF
  unsigned __int8 v44; // [rsp+E0h] [rbp+67h] BYREF
  struct DXGADAPTER *v45; // [rsp+F0h] [rbp+77h] BYREF
  unsigned __int64 v46; // [rsp+F8h] [rbp+7Fh] BYREF

  v39 = 0LL;
  v38 = 3004;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, a3, 3004);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v38, 3004);
  memset(&v40, 0, sizeof(v40));
  v44 = 0;
  if ( a1 )
  {
    PairingAdapters = DxgkpGetPairingAdapters(a1, a2->VidPnSourceId, 0LL, 0LL, &v45, &v46);
    v9 = PairingAdapters;
    if ( PairingAdapters < 0 )
    {
      v29 = (_QWORD *)WdLogNewEntry5_WdEvent(v8, v7);
      v29[3] = a1;
      v29[4] = a2->VidPnSourceId;
      v29[5] = v9;
      WdLogEvent5_WdEvent(v29);
    }
    else
    {
      v10 = v45;
      if ( !v45 )
      {
        v30 = WdLogNewEntry5_WdAssertion(v8);
        *(_QWORD *)(v30 + 24) = 1232LL;
        WdLogEvent5_WdAssertion(v30);
      }
      DxgkWaitForMonitorEventDoneInternal(v10);
      LOBYTE(v45) = 0;
      v11 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v45, 0);
      v13 = v11;
      if ( v11 < 0 )
      {
        v31 = WdLogNewEntry5_WdError(v12);
        *(_QWORD *)(v31 + 24) = v13;
        WdLogEvent5_WdError(v31);
        LODWORD(v9) = v13;
      }
      else
      {
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v41, v10, 0LL);
        DXGADAPTER::ReleaseReferenceNoTracking(v10);
        v14 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)&v41);
        v9 = v14;
        if ( v14 < 0 )
        {
          v32 = (_QWORD *)WdLogNewEntry5_WdEvent(v16, v15);
          v32[3] = v9;
          v32[4] = PsGetCurrentProcess(v34, v33);
          v32[5] = a2->hAdapter;
          v32[6] = v10;
          WdLogEvent5_WdEvent(v32);
        }
        else
        {
          if ( !*((_QWORD *)v10 + 307) )
          {
            v35 = WdLogNewEntry5_WdAssertion(v16);
            *(_QWORD *)(v35 + 24) = 1272LL;
            WdLogEvent5_WdAssertion(v35);
          }
          v40.VidPnSourceId = a2->VidPnSourceId;
          DisplayModeList = DxgkpGetDisplayModeList((ADAPTER_DISPLAY **)v10, &v41, 0, &v40, &v44);
          v9 = DisplayModeList;
          if ( DisplayModeList < 0 )
          {
            v36 = WdLogNewEntry5_WdDmmEvent(v19);
            *(_QWORD *)(v36 + 24) = a2->VidPnSourceId;
            *(_QWORD *)(v36 + 32) = v9;
            WdLogEvent5_WdDmmEvent(v36);
          }
          else
          {
            pModeList = a2->pModeList;
            if ( pModeList )
            {
              if ( a2->ModeCount < v40.ModeCount )
              {
                v37 = WdLogNewEntry5_WdWarning(pModeList, v18, v20);
                *(_QWORD *)(v37 + 24) = a2->ModeCount;
                *(_QWORD *)(v37 + 32) = v40.ModeCount;
                WdLogEvent5_WdWarning(v37);
                LODWORD(v9) = -1073741789;
              }
              else
              {
                memmove(pModeList, v40.pModeList, 44LL * v40.ModeCount);
              }
            }
            else
            {
              a2->ModeCount = v40.ModeCount;
            }
            if ( v44 )
            {
              operator delete[](v40.pModeList);
              v40.pModeList = 0LL;
            }
          }
        }
        COREACCESS::~COREACCESS((COREACCESS *)v43);
        COREACCESS::~COREACCESS((COREACCESS *)v42);
      }
      if ( (_BYTE)v45 )
        DxgkReleaseSessionModeChangeLock(v22);
    }
  }
  else
  {
    LODWORD(v9) = -1073741811;
    v26 = (_QWORD *)WdLogNewEntry5_WdError(v5);
    v26[3] = -1073741811LL;
    v26[4] = PsGetCurrentProcess(v28, v27);
    v26[5] = a2->hAdapter;
    WdLogEvent5_WdError(v26);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v38);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v23, &EventProfilerExit, v24, v38);
  return (unsigned int)v9;
}
