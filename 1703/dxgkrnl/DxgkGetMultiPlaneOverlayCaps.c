/*
 * XREFs of DxgkGetMultiPlaneOverlayCaps @ 0x1C009FB60
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0005A90 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C000D2E8 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetMultiPlaneOverlayCaps@ADAPTER_DISPLAY@@QEAAJIPEAI00PEAU_D3DKMT_MULTIPLANE_OVERLAY_CAPS@@PEAM2@Z @ 0x1C00E657C (-GetMultiPlaneOverlayCaps@ADAPTER_DISPLAY@@QEAAJIPEAI00PEAU_D3DKMT_MULTIPLANE_OVERLAY_CAPS@@PEAM.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00F7EEC (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 */

__int64 __fastcall DxgkGetMultiPlaneOverlayCaps(ULONG64 a1, __int64 a2, __int64 a3)
{
  _OWORD *v4; // rax
  struct _KTHREAD **Current; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct DXGADAPTER *v12; // r15
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  int PairingAdapters; // r14d
  ADAPTER_DISPLAY **v18; // rdi
  struct DXGADAPTER *v19; // r14
  struct _D3DKMT_MULTIPLANE_OVERLAY_CAPS::$5ADCAAAAF0FF45A11EB6181E01A54CF6::$9635F7548140CCA051B6415A5B7A4347 Value; // r8d
  UINT v21; // r9d
  unsigned int v22; // r10d
  unsigned int v23; // r11d
  _DWORD *v24; // rdx
  _DWORD *v25; // rdx
  _DWORD *v26; // rdx
  _DWORD *v27; // rdx
  _D3DKMT_MULTIPLANE_OVERLAY_CAPS *v28; // rdx
  _D3DKMT_MULTIPLANE_OVERLAY_CAPS *v29; // rdx
  __int64 v30; // r8
  DXGADAPTER *v31; // rcx
  bool v32; // zf
  __int64 v34; // rax
  __int64 v35; // r8
  DXGADAPTER *v36; // rcx
  bool v37; // zf
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  unsigned int v42[4]; // [rsp+40h] [rbp-B8h] BYREF
  _D3DKMT_MULTIPLANE_OVERLAY_CAPS v43[4]; // [rsp+50h] [rbp-A8h] BYREF
  DXGADAPTER *v44; // [rsp+60h] [rbp-98h] BYREF
  unsigned __int64 v45; // [rsp+70h] [rbp-88h] BYREF
  _BYTE v46[120]; // [rsp+80h] [rbp-78h] BYREF
  struct DXGADAPTER *v47; // [rsp+108h] [rbp+10h] BYREF
  unsigned __int64 v48; // [rsp+110h] [rbp+18h] BYREF
  struct DXGADAPTER *v49; // [rsp+118h] [rbp+20h] BYREF

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2145);
  v4 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v4 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v42 = *v4;
  *(_OWORD *)&v43[0].0 = v4[1];
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( Current )
  {
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v44, v42[0], Current, &v47);
    v12 = v47;
    if ( v47 )
    {
      PairingAdapters = DxgkpGetPairingAdapters(v47, v42[1], &v47, &v48, &v49, &v45);
      if ( PairingAdapters < 0 )
      {
        v18 = 0LL;
        PairingAdapters = DxgkpGetPairingAdapters(v12, v42[1], &v47, &v48, 0LL, 0LL);
      }
      else
      {
        v18 = (ADAPTER_DISPLAY **)v49;
      }
      if ( PairingAdapters < 0 )
      {
        v39 = WdLogNewEntry5_WdError(v14, v13);
        *(_QWORD *)(v39 + 24) = v12;
        *(_QWORD *)(v39 + 32) = v42[1];
        WdLogEvent5_WdError(v39);
      }
      else
      {
        if ( v18 && !v18[285] )
        {
          v40 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
          *(_QWORD *)(v40 + 24) = 8635LL;
          WdLogEvent5_WdAssertion(v40);
        }
        v19 = v47;
        if ( !v47 || !*((_QWORD *)v47 + 286) )
        {
          v41 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
          *(_QWORD *)(v41 + 24) = 8637LL;
          WdLogEvent5_WdAssertion(v41);
        }
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v46, v19, (struct DXGADAPTER *const)v18);
        DXGADAPTER::ReleaseReference(v19);
        if ( v18 )
          DXGADAPTER::ReleaseReference((DXGADAPTER *)v18);
        PairingAdapters = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v46);
        if ( PairingAdapters < 0 )
        {
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v46);
          if ( v44 )
            DXGADAPTER::ReleaseReference(v44);
          v31 = (DXGADAPTER *)qword_1C006E790;
          v32 = (qword_1C006E790 & 2) == 0;
          goto LABEL_35;
        }
        if ( v18 )
        {
          PairingAdapters = ADAPTER_DISPLAY::GetMultiPlaneOverlayCaps(
                              v18[285],
                              v42[1],
                              &v42[2],
                              &v42[3],
                              (unsigned int *)v43,
                              &v43[1],
                              (float *)&v43[2],
                              (float *)&v43[3]);
          Value = (struct _D3DKMT_MULTIPLANE_OVERLAY_CAPS::$5ADCAAAAF0FF45A11EB6181E01A54CF6::$9635F7548140CCA051B6415A5B7A4347)v43[1].Value;
          v21 = v43[0].Value;
          v22 = v42[3];
          v23 = v42[2];
        }
        else
        {
          v23 = 1;
          v22 = 0;
          v21 = 0;
          Value = 0;
          v43[2].Value = 1065353216;
          v43[3].Value = 1065353216;
        }
        v24 = (_DWORD *)(a1 + 8);
        if ( a1 + 8 >= MmUserProbeAddress )
          v24 = (_DWORD *)MmUserProbeAddress;
        *v24 = v23;
        v25 = (_DWORD *)(a1 + 12);
        if ( a1 + 12 >= MmUserProbeAddress )
          v25 = (_DWORD *)MmUserProbeAddress;
        *v25 = v22;
        v26 = (_DWORD *)(a1 + 16);
        if ( a1 + 16 >= MmUserProbeAddress )
          v26 = (_DWORD *)MmUserProbeAddress;
        *v26 = v21;
        v27 = (_DWORD *)(a1 + 20);
        if ( a1 + 20 >= MmUserProbeAddress )
          v27 = (_DWORD *)MmUserProbeAddress;
        *v27 = Value;
        v28 = (_D3DKMT_MULTIPLANE_OVERLAY_CAPS *)(a1 + 24);
        if ( a1 + 24 >= MmUserProbeAddress )
          v28 = (_D3DKMT_MULTIPLANE_OVERLAY_CAPS *)MmUserProbeAddress;
        v28->0 = (struct _D3DKMT_MULTIPLANE_OVERLAY_CAPS::$5ADCAAAAF0FF45A11EB6181E01A54CF6::$9635F7548140CCA051B6415A5B7A4347)v43[2];
        v29 = (_D3DKMT_MULTIPLANE_OVERLAY_CAPS *)(a1 + 28);
        if ( a1 + 28 >= MmUserProbeAddress )
          v29 = (_D3DKMT_MULTIPLANE_OVERLAY_CAPS *)MmUserProbeAddress;
        v29->0 = (struct _D3DKMT_MULTIPLANE_OVERLAY_CAPS::$5ADCAAAAF0FF45A11EB6181E01A54CF6::$9635F7548140CCA051B6415A5B7A4347)v43[3];
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v46);
      }
      v31 = v44;
      if ( v44 )
        DXGADAPTER::ReleaseReference(v44);
      v32 = (qword_1C006E790 & 2) == 0;
LABEL_35:
      if ( !v32 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q((__int64)v31, &EventProfilerExit, v30, 2145);
      return (unsigned int)PairingAdapters;
    }
    v38 = WdLogNewEntry5_WdWarning(v9, v8, v10, v11);
    *(_QWORD *)(v38 + 24) = v42[0];
    *(_QWORD *)(v38 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v38);
    v36 = v44;
    if ( v44 )
      DXGADAPTER::ReleaseReference(v44);
    v37 = (qword_1C006E790 & 2) == 0;
  }
  else
  {
    v34 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v34 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v34);
    v36 = (DXGADAPTER *)qword_1C006E790;
    v37 = (qword_1C006E790 & 2) == 0;
  }
  if ( !v37 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)v36, &EventProfilerExit, v35, 2145);
  return 3221225485LL;
}
