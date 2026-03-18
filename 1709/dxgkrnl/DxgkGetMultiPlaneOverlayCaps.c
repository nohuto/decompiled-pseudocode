/*
 * XREFs of DxgkGetMultiPlaneOverlayCaps @ 0x1C00B9050
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0001A9C (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0008404 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetMultiPlaneOverlayCaps@ADAPTER_DISPLAY@@QEAAJIPEAI00PEAU_D3DKMT_MULTIPLANE_OVERLAY_CAPS@@PEAM2@Z @ 0x1C00ABB74 (-GetMultiPlaneOverlayCaps@ADAPTER_DISPLAY@@QEAAJIPEAI00PEAU_D3DKMT_MULTIPLANE_OVERLAY_CAPS@@PEAM.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00B1CE4 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 */

__int64 __fastcall DxgkGetMultiPlaneOverlayCaps(ULONG64 a1, __int64 a2, __int64 a3)
{
  _OWORD *v4; // rax
  struct _KTHREAD **Current; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  struct DXGADAPTER *v10; // r15
  __int64 v11; // rcx
  int PairingAdapters; // r14d
  ADAPTER_DISPLAY **v13; // rdi
  struct DXGADAPTER *v14; // r14
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
  __int64 v25; // r8
  DXGADAPTER *v26; // rcx
  bool v27; // zf
  __int64 v29; // rax
  __int64 v30; // r8
  DXGADAPTER *v31; // rcx
  bool v32; // zf
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  unsigned int v37[4]; // [rsp+40h] [rbp-B8h] BYREF
  _D3DKMT_MULTIPLANE_OVERLAY_CAPS v38[4]; // [rsp+50h] [rbp-A8h] BYREF
  DXGADAPTER *v39; // [rsp+60h] [rbp-98h] BYREF
  unsigned __int64 v40; // [rsp+70h] [rbp-88h] BYREF
  _BYTE v41[120]; // [rsp+80h] [rbp-78h] BYREF
  struct DXGADAPTER *v42; // [rsp+108h] [rbp+10h] BYREF
  unsigned __int64 v43; // [rsp+110h] [rbp+18h] BYREF
  struct DXGADAPTER *v44; // [rsp+118h] [rbp+20h] BYREF

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2145);
  v4 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v4 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v37 = *v4;
  *(_OWORD *)&v38[0].0 = v4[1];
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(MmUserProbeAddress, a2);
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
        v34 = WdLogNewEntry5_WdError(v11);
        *(_QWORD *)(v34 + 24) = v10;
        *(_QWORD *)(v34 + 32) = v37[1];
        WdLogEvent5_WdError(v34);
      }
      else
      {
        if ( v13 && !v13[288] )
        {
          v35 = WdLogNewEntry5_WdAssertion(v11);
          *(_QWORD *)(v35 + 24) = 8949LL;
          WdLogEvent5_WdAssertion(v35);
        }
        v14 = v42;
        if ( !v42 || !*((_QWORD *)v42 + 289) )
        {
          v36 = WdLogNewEntry5_WdAssertion(v11);
          *(_QWORD *)(v36 + 24) = 8951LL;
          WdLogEvent5_WdAssertion(v36);
        }
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v41, v14, (struct DXGADAPTER *const)v13);
        DXGADAPTER::ReleaseReferenceNoTracking(v14);
        if ( v13 )
          DXGADAPTER::ReleaseReferenceNoTracking((DXGADAPTER *)v13);
        PairingAdapters = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v41);
        if ( PairingAdapters < 0 )
        {
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v41);
          if ( v39 )
            DXGADAPTER::ReleaseReferenceNoTracking(v39);
          v26 = (DXGADAPTER *)qword_1C005F010;
          v27 = (qword_1C005F010 & 2) == 0;
          goto LABEL_35;
        }
        if ( v13 )
        {
          PairingAdapters = ADAPTER_DISPLAY::GetMultiPlaneOverlayCaps(
                              v13[288],
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
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v41);
      }
      v26 = v39;
      if ( v39 )
        DXGADAPTER::ReleaseReferenceNoTracking(v39);
      v27 = (qword_1C005F010 & 2) == 0;
LABEL_35:
      if ( !v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q((__int64)v26, &EventProfilerExit, v25, 2145);
      return (unsigned int)PairingAdapters;
    }
    v33 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    *(_QWORD *)(v33 + 24) = v37[0];
    *(_QWORD *)(v33 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v33);
    v31 = v39;
    if ( v39 )
      DXGADAPTER::ReleaseReferenceNoTracking(v39);
    v32 = (qword_1C005F010 & 2) == 0;
  }
  else
  {
    v29 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v29 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v29);
    v31 = (DXGADAPTER *)qword_1C005F010;
    v32 = (qword_1C005F010 & 2) == 0;
  }
  if ( !v32 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)v31, &EventProfilerExit, v30, 2145);
  return 3221225485LL;
}
