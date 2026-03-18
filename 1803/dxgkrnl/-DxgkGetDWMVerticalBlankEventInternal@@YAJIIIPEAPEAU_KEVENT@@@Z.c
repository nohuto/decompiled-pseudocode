/*
 * XREFs of ?DxgkGetDWMVerticalBlankEventInternal@@YAJIIIPEAPEAU_KEVENT@@@Z @ 0x1C0164E84
 * Callers:
 *     DxgkGetDWMVerticalBlankEvent @ 0x1C0167470 (DxgkGetDWMVerticalBlankEvent.c)
 * Callees:
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0002A48 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0002BC4 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00151B0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00A5DC4 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00A9DAC (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetVBlankEvent@ADAPTER_DISPLAY@@QEAAJIPEAPEAU_KEVENT@@@Z @ 0x1C0154FEC (-GetVBlankEvent@ADAPTER_DISPLAY@@QEAAJIPEAPEAU_KEVENT@@@Z.c)
 */

__int64 __fastcall DxgkGetDWMVerticalBlankEventInternal(__int64 a1, unsigned int a2, __int64 a3, struct _KEVENT **a4)
{
  __int64 v4; // r12
  __int64 v5; // r13
  __int64 v6; // rdi
  struct DXGDEVICE *v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  struct _KTHREAD **v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  struct DXGADAPTER *v21; // rsi
  __int64 v22; // rax
  struct DXGDEVICE *v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rax
  int PairingAdapters; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  _QWORD *v32; // rax
  struct DXGADAPTER *v33; // r12
  ADAPTER_DISPLAY **v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rcx
  int v38; // esi
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // r8
  struct DXGDEVICE *v44; // [rsp+38h] [rbp-79h] BYREF
  struct DXGDEVICE *v45; // [rsp+40h] [rbp-71h] BYREF
  struct DXGADAPTER *v46; // [rsp+48h] [rbp-69h] BYREF
  struct DXGADAPTER *v47; // [rsp+50h] [rbp-61h] BYREF
  int v48; // [rsp+58h] [rbp-59h] BYREF
  __int64 v49; // [rsp+60h] [rbp-51h]
  struct DXGADAPTER *v50; // [rsp+68h] [rbp-49h] BYREF
  unsigned __int64 v51; // [rsp+70h] [rbp-41h] BYREF
  unsigned __int64 v52; // [rsp+80h] [rbp-31h] BYREF
  DXGADAPTER *v53; // [rsp+88h] [rbp-29h] BYREF
  _BYTE v54[8]; // [rsp+98h] [rbp-19h] BYREF
  _BYTE v55[32]; // [rsp+A0h] [rbp-11h] BYREF
  _BYTE v56[40]; // [rsp+C0h] [rbp+Fh] BYREF
  unsigned int v57; // [rsp+128h] [rbp+77h]

  v57 = a3;
  v49 = 0LL;
  v4 = (unsigned int)a3;
  v5 = a2;
  v6 = (unsigned int)a1;
  v48 = 2192;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2192);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v48, 2192);
  v7 = 0LL;
  v44 = 0LL;
  Current = DXGPROCESS::GetCurrent(v9, v8);
  v14 = (struct _KTHREAD **)Current;
  if ( !Current )
  {
    v15 = WdLogNewEntry5_WdError(v12);
    LODWORD(v16) = -1073741811;
    *(_QWORD *)(v15 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v15);
    goto LABEL_48;
  }
  if ( !*((_BYTE *)Current + 322) )
  {
    v17 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    LODWORD(v16) = -1073741790;
    *(_QWORD *)(v17 + 24) = -1073741790LL;
    WdLogEvent5_WdWarning(v17);
    goto LABEL_48;
  }
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v53, v6, (struct _KTHREAD **)Current, &v46);
  v21 = v46;
  if ( v46 )
  {
    v23 = 0LL;
    if ( (_DWORD)v5 )
    {
      DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v45, v5, v14, &v44);
      if ( !v44 )
      {
        v27 = WdLogNewEntry5_WdWarning(v25, v24, v26);
        *(_QWORD *)(v27 + 24) = v21;
        *(_QWORD *)(v27 + 32) = v5;
        WdLogEvent5_WdWarning(v27);
        if ( v45 && _InterlockedExchangeAdd64((volatile signed __int64 *)v45 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v45 + 2), v45);
        LODWORD(v16) = -1073741811;
        goto LABEL_46;
      }
      _InterlockedIncrement64((volatile signed __int64 *)v44 + 8);
      v7 = v44;
      v23 = v44;
      if ( v45 )
      {
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v45 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v45 + 2), v45);
        v7 = v44;
      }
      v21 = v46;
    }
    PairingAdapters = DxgkpGetPairingAdapters(v21, v4, &v47, &v51, &v50, &v52);
    v16 = PairingAdapters;
    if ( PairingAdapters >= 0 )
    {
      v33 = v47;
      v34 = (ADAPTER_DISPLAY **)v50;
      if ( !v47 || !v50 )
      {
        v35 = WdLogNewEntry5_WdAssertion(v30);
        *(_QWORD *)(v35 + 24) = 5523LL;
        WdLogEvent5_WdAssertion(v35);
      }
      if ( v57 < *((_DWORD *)v34[307] + 20) )
      {
        if ( !v23
          || v33 == *(struct DXGADAPTER **)(*((_QWORD *)v7 + 2) + 16LL) && v34 == *((ADAPTER_DISPLAY ***)v7 + 211) )
        {
          COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v54, v33, (struct DXGADAPTER *const)v34);
          DXGADAPTER::ReleaseReferenceNoTracking(v33);
          DXGADAPTER::ReleaseReferenceNoTracking((DXGADAPTER *)v34);
          v38 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v54);
          if ( v38 >= 0 )
          {
            if ( !*((_QWORD *)v33 + 308) )
            {
              v39 = WdLogNewEntry5_WdAssertion(v37);
              *(_QWORD *)(v39 + 24) = 5558LL;
              WdLogEvent5_WdAssertion(v39);
            }
            if ( !v34[307] )
            {
              v40 = WdLogNewEntry5_WdAssertion(v37);
              *(_QWORD *)(v40 + 24) = 5559LL;
              WdLogEvent5_WdAssertion(v40);
            }
            if ( !(_DWORD)v5 || *((_DWORD *)v7 + 106) == 1 )
            {
              ADAPTER_DISPLAY::GetVBlankEvent(v34[307], v57, a4);
              COREADAPTERACCESS::Release((COREADAPTERACCESS *)v54);
            }
            else
            {
              v38 = -1073741130;
            }
          }
          LODWORD(v16) = v38;
          COREACCESS::~COREACCESS((COREACCESS *)v56);
          COREACCESS::~COREACCESS((COREACCESS *)v55);
        }
        else
        {
          v36 = WdLogNewEntry5_WdWarning(v57, v29, v31);
          *(_QWORD *)(v36 + 24) = v21;
          *(_QWORD *)(v36 + 32) = v5;
          WdLogEvent5_WdWarning(v36);
          LODWORD(v16) = -1073741811;
        }
        goto LABEL_43;
      }
      v32 = (_QWORD *)WdLogNewEntry5_WdError(v57);
      LODWORD(v16) = -1073741811;
      v32[3] = v57;
      v32[4] = -1073741811LL;
    }
    else
    {
      v32 = (_QWORD *)WdLogNewEntry5_WdError(v30);
      v32[3] = v21;
      v32[4] = v4;
      v32[5] = v16;
    }
    WdLogEvent5_WdError(v32);
LABEL_43:
    if ( v23 && _InterlockedExchangeAdd64((volatile signed __int64 *)v23 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v23 + 2), v23);
    goto LABEL_46;
  }
  v22 = WdLogNewEntry5_WdWarning(v19, v18, v20);
  LODWORD(v16) = -1073741811;
  *(_QWORD *)(v22 + 24) = v6;
  *(_QWORD *)(v22 + 32) = -1073741811LL;
  WdLogEvent5_WdWarning(v22);
LABEL_46:
  if ( v53 )
    DXGADAPTER::ReleaseReferenceNoTracking(v53);
LABEL_48:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v48);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v41, &EventProfilerExit, v42, v48);
  return (unsigned int)v16;
}
