/*
 * XREFs of ?DxgkCddSetOrigin@@YAXQEAXIQEBUtagPOINT@@@Z @ 0x1C00DC430
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0002A74 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z @ 0x1C00144A4 (-SetContentRect@ADAPTER_DISPLAY@@QEAAXIQEBUtagRECT@@@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C0014A18 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00A9DAC (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C00E21E8 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 */

void __fastcall DxgkCddSetOrigin(struct DXGADAPTER *a1, unsigned int a2, const struct tagPOINT *const a3)
{
  __int64 v4; // rsi
  int PairingAdapters; // eax
  __int64 v7; // rcx
  __int64 v8; // r14
  DXGADAPTER ***v9; // rbx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r14
  ADAPTER_DISPLAY *v14; // rcx
  struct SESSION_VIEW *SessionViewOwner; // rax
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // r14
  LONG x; // r9d
  LONG y; // r10d
  __int64 v19; // rdx
  DXGADAPTER *v20; // r8
  int v21; // ecx
  int v22; // ecx
  __int64 v23; // rcx
  _QWORD *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  _QWORD *v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  _QWORD *v30; // rax
  struct tagRECT v31; // [rsp+38h] [rbp-29h] BYREF
  int v32; // [rsp+48h] [rbp-19h] BYREF
  __int64 v33; // [rsp+50h] [rbp-11h]
  __int64 v34; // [rsp+58h] [rbp-9h] BYREF
  _BYTE v35[32]; // [rsp+60h] [rbp-1h] BYREF
  _BYTE v36[40]; // [rsp+80h] [rbp+1Fh] BYREF
  struct DXGADAPTER *v37; // [rsp+E0h] [rbp+7Fh] BYREF

  v33 = 0LL;
  v4 = a2;
  v32 = 3014;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)a1, &EventProfilerEnter, (__int64)a3, 3014);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v32, 3014);
  PairingAdapters = DxgkpGetPairingAdapters(a1, v4, 0LL, 0LL, &v37, (unsigned __int64 *)&v31);
  v8 = PairingAdapters;
  if ( PairingAdapters < 0 )
  {
    v27 = (_QWORD *)WdLogNewEntry5_WdError(v7);
    v27[3] = a1;
    v27[4] = v4;
    v27[5] = v8;
    WdLogEvent5_WdError(v27);
  }
  else
  {
    v9 = (DXGADAPTER ***)v37;
    if ( !v37 )
    {
      v28 = WdLogNewEntry5_WdAssertion(v7);
      *(_QWORD *)(v28 + 24) = 2394LL;
      WdLogEvent5_WdAssertion(v28);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v34, (struct DXGADAPTER *const)v9, 0LL);
    DXGADAPTER::ReleaseReferenceNoTracking((DXGADAPTER *)v9);
    v10 = COREADAPTERACCESS::AcquireExclusive(&v34);
    v13 = v10;
    if ( v10 < 0 )
    {
      v30 = (_QWORD *)WdLogNewEntry5_WdEvent(v12, v11);
      v30[3] = v13;
      v30[4] = v4;
      v30[5] = v9;
      v30[6] = a3->x;
      v30[7] = a3->y;
      WdLogEvent5_WdEvent(v30);
    }
    else
    {
      v14 = (ADAPTER_DISPLAY *)v9[307];
      if ( !v14 )
      {
        v29 = WdLogNewEntry5_WdAssertion(0LL);
        *(_QWORD *)(v29 + 24) = 2405LL;
        WdLogEvent5_WdAssertion(v29);
        v14 = (ADAPTER_DISPLAY *)v9[307];
      }
      SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(v14, v4);
      if ( SessionViewOwner )
      {
        *((_DWORD *)SessionViewOwner + 8) += a3->x - *((_DWORD *)SessionViewOwner + 6);
        *((_DWORD *)SessionViewOwner + 6) = a3->x;
        *((_DWORD *)SessionViewOwner + 9) += a3->y - *((_DWORD *)SessionViewOwner + 7);
        *((_DWORD *)SessionViewOwner + 7) = a3->y;
      }
      DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(v9[307], v4);
      x = a3->x;
      y = a3->y;
      v19 = 3760 * v4;
      v20 = v9[307][14];
      v21 = *((_DWORD *)DisplayModeInfo + 7) - 2;
      v31.left = a3->x;
      v31.top = y;
      if ( (v21 & 0xFFFFFFFD) != 0 )
      {
        v31.right = x + *(_DWORD *)((char *)v20 + v19 + 644);
        v22 = *(_DWORD *)((char *)v20 + v19 + 648);
      }
      else
      {
        v31.right = x + *(_DWORD *)((char *)v20 + v19 + 648);
        v22 = *(_DWORD *)((char *)v20 + v19 + 644);
      }
      v23 = (unsigned int)(y + v22);
      v31.bottom = v23;
      v24 = (_QWORD *)WdLogNewEntry5_WdEvent(v23, v19);
      v24[3] = v4;
      v24[4] = v9;
      v24[5] = a3->x;
      v24[6] = a3->y;
      v24[7] = *((int *)DisplayModeInfo + 7);
      WdLogEvent5_WdEvent(v24);
      ADAPTER_DISPLAY::SetContentRect((ADAPTER_DISPLAY *)v9[307], v4, &v31);
    }
    COREACCESS::~COREACCESS((COREACCESS *)v36);
    COREACCESS::~COREACCESS((COREACCESS *)v35);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v25, &EventProfilerExit, v26, v32);
}
