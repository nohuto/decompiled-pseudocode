/*
 * XREFs of DxgkGetMultiPlaneOverlayCaps @ 0x1C00D73A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0002A20 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0002BC4 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00A9DAC (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?GetMultiPlaneOverlayCaps@ADAPTER_DISPLAY@@QEAAJIPEAI00PEAU_D3DKMT_MULTIPLANE_OVERLAY_CAPS@@PEAM2@Z @ 0x1C00E1794 (-GetMultiPlaneOverlayCaps@ADAPTER_DISPLAY@@QEAAJIPEAI00PEAU_D3DKMT_MULTIPLANE_OVERLAY_CAPS@@PEAM.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkGetMultiPlaneOverlayCaps(ULONG64 a1, __int64 a2, __int64 a3)
{
  _OWORD *v4; // rax
  struct _KTHREAD **Current; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct DXGADAPTER *v10; // r14
  __int64 v11; // rcx
  int PairingAdapters; // esi
  ADAPTER_DISPLAY **v13; // rbx
  struct DXGADAPTER *v14; // rsi
  struct _D3DKMT_MULTIPLANE_OVERLAY_CAPS::$5ADCAAAAF0FF45A11EB6181E01A54CF6::$9635F7548140CCA051B6415A5B7A4347 Value; // r8d
  UINT v16; // r9d
  unsigned int v17; // r10d
  unsigned int v18; // r11d
  _DWORD *v19; // rdx
  _DWORD *v20; // rdx
  _DWORD *v21; // rdx
  _DWORD *v22; // rdx
  _D3DKMT_MULTIPLANE_OVERLAY_CAPS *v23; // rdx
  _D3DKMT_MULTIPLANE_OVERLAY_CAPS *v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  int v35; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v36; // [rsp+48h] [rbp-C0h]
  unsigned int v37[4]; // [rsp+50h] [rbp-B8h] BYREF
  _D3DKMT_MULTIPLANE_OVERLAY_CAPS v38[4]; // [rsp+60h] [rbp-A8h] BYREF
  DXGADAPTER *v39; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int64 v40; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v41[120]; // [rsp+90h] [rbp-78h] BYREF
  struct DXGADAPTER *v42; // [rsp+118h] [rbp+10h] BYREF
  unsigned __int64 v43; // [rsp+120h] [rbp+18h] BYREF
  struct DXGADAPTER *v44; // [rsp+128h] [rbp+20h] BYREF

  v36 = 0LL;
  v35 = 2145;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2145);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v35, 2145);
  v4 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v4 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v37 = *v4;
  *(_OWORD *)&v38[0].0 = v4[1];
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( Current )
  {
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v39, v37[0], Current, &v42);
    v10 = v42;
    if ( v42 )
    {
      PairingAdapters = DxgkpGetPairingAdapters(v42, v37[1], &v42, &v43, &v44, &v40);
      if ( PairingAdapters < 0 )
      {
        v13 = 0LL;
        PairingAdapters = DxgkpGetPairingAdapters(v10, v37[1], &v42, &v43, 0LL, 0LL);
      }
      else
      {
        v13 = (ADAPTER_DISPLAY **)v44;
      }
      if ( PairingAdapters < 0 )
      {
        v32 = WdLogNewEntry5_WdError(v11);
        *(_QWORD *)(v32 + 24) = v10;
        *(_QWORD *)(v32 + 32) = v37[1];
        WdLogEvent5_WdError(v32);
      }
      else
      {
        if ( v13 && !v13[307] )
        {
          v33 = WdLogNewEntry5_WdAssertion(v11);
          *(_QWORD *)(v33 + 24) = 9695LL;
          WdLogEvent5_WdAssertion(v33);
        }
        v14 = v42;
        if ( !v42 || !*((_QWORD *)v42 + 308) )
        {
          v34 = WdLogNewEntry5_WdAssertion(v11);
          *(_QWORD *)(v34 + 24) = 9697LL;
          WdLogEvent5_WdAssertion(v34);
        }
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v41, v14, (struct DXGADAPTER *const)v13);
        DXGADAPTER::ReleaseReferenceNoTracking(v14);
        if ( v13 )
          DXGADAPTER::ReleaseReferenceNoTracking((DXGADAPTER *)v13);
        PairingAdapters = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v41);
        if ( PairingAdapters >= 0 )
        {
          if ( v13 )
          {
            PairingAdapters = ADAPTER_DISPLAY::GetMultiPlaneOverlayCaps(
                                v13[307],
                                v37[1],
                                &v37[2],
                                &v37[3],
                                (unsigned int *)v38,
                                &v38[1],
                                (float *)&v38[2],
                                (float *)&v38[3]);
            Value = (struct _D3DKMT_MULTIPLANE_OVERLAY_CAPS::$5ADCAAAAF0FF45A11EB6181E01A54CF6::$9635F7548140CCA051B6415A5B7A4347)v38[1].Value;
            v16 = v38[0].Value;
            v17 = v37[3];
            v18 = v37[2];
          }
          else
          {
            v18 = 1;
            v17 = 0;
            v16 = 0;
            Value = 0;
            v38[2].Value = 1065353216;
            v38[3].Value = 1065353216;
          }
          v19 = (_DWORD *)(a1 + 8);
          if ( a1 + 8 >= MmUserProbeAddress )
            v19 = (_DWORD *)MmUserProbeAddress;
          *v19 = v18;
          v20 = (_DWORD *)(a1 + 12);
          if ( a1 + 12 >= MmUserProbeAddress )
            v20 = (_DWORD *)MmUserProbeAddress;
          *v20 = v17;
          v21 = (_DWORD *)(a1 + 16);
          if ( a1 + 16 >= MmUserProbeAddress )
            v21 = (_DWORD *)MmUserProbeAddress;
          *v21 = v16;
          v22 = (_DWORD *)(a1 + 20);
          if ( a1 + 20 >= MmUserProbeAddress )
            v22 = (_DWORD *)MmUserProbeAddress;
          *v22 = Value;
          v23 = (_D3DKMT_MULTIPLANE_OVERLAY_CAPS *)(a1 + 24);
          if ( a1 + 24 >= MmUserProbeAddress )
            v23 = (_D3DKMT_MULTIPLANE_OVERLAY_CAPS *)MmUserProbeAddress;
          v23->0 = (struct _D3DKMT_MULTIPLANE_OVERLAY_CAPS::$5ADCAAAAF0FF45A11EB6181E01A54CF6::$9635F7548140CCA051B6415A5B7A4347)v38[2];
          v24 = (_D3DKMT_MULTIPLANE_OVERLAY_CAPS *)(a1 + 28);
          if ( a1 + 28 >= MmUserProbeAddress )
            v24 = (_D3DKMT_MULTIPLANE_OVERLAY_CAPS *)MmUserProbeAddress;
          v24->0 = (struct _D3DKMT_MULTIPLANE_OVERLAY_CAPS::$5ADCAAAAF0FF45A11EB6181E01A54CF6::$9635F7548140CCA051B6415A5B7A4347)v38[3];
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v41);
      }
      if ( v39 )
        DXGADAPTER::ReleaseReferenceNoTracking(v39);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
      if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v25, &EventProfilerExit, v26, v35);
      return (unsigned int)PairingAdapters;
    }
    v31 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    *(_QWORD *)(v31 + 24) = v37[0];
    *(_QWORD *)(v31 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v31);
    if ( v39 )
      DXGADAPTER::ReleaseReferenceNoTracking(v39);
  }
  else
  {
    v28 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v28 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v28);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v35);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v29, &EventProfilerExit, v30, v35);
  return 3221225485LL;
}
