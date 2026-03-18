/*
 * XREFs of ?DxgkGetSharedPrimaryHandle@@YAJPEAU_D3DKMT_GETSHAREDPRIMARYHANDLE@@@Z @ 0x1C017A9C0
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
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00F7EEC (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ?GetCddPrimaryShareResourceHandle@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C0171294 (-GetCddPrimaryShareResourceHandle@ADAPTER_DISPLAY@@QEBAII@Z.c)
 */

__int64 __fastcall DxgkGetSharedPrimaryHandle(struct _D3DKMT_GETSHAREDPRIMARYHANDLE *a1, __int64 a2, __int64 a3)
{
  struct _D3DKMT_GETSHAREDPRIMARYHANDLE *v4; // rax
  struct _KTHREAD **Current; // rax
  DXGADAPTER *v6; // rcx
  __int64 v7; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  struct DXGADAPTER *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int PairingAdapters; // r15d
  __int64 v20; // rax
  __int64 v21; // r8
  DXGADAPTER *v22; // rcx
  bool v23; // zf
  struct DXGADAPTER *v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  struct DXGADAPTER *v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  int CddPrimaryShareResourceHandle; // eax
  _DWORD *p_hSharedPrimary; // r8
  __int64 v37; // r8
  DXGADAPTER *v38; // rcx
  unsigned __int64 v39; // [rsp+30h] [rbp-98h] BYREF
  unsigned int v40[2]; // [rsp+38h] [rbp-90h]
  D3DKMT_HANDLE hSharedPrimary; // [rsp+40h] [rbp-88h]
  DXGADAPTER *v42; // [rsp+48h] [rbp-80h] BYREF
  _BYTE v43[104]; // [rsp+60h] [rbp-68h] BYREF
  struct DXGADAPTER *v44; // [rsp+D8h] [rbp+10h] BYREF
  struct DXGADAPTER *v45; // [rsp+E0h] [rbp+18h] BYREF
  unsigned __int64 v46; // [rsp+E8h] [rbp+20h] BYREF

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 2021);
  v4 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v4 = (struct _D3DKMT_GETSHAREDPRIMARYHANDLE *)MmUserProbeAddress;
  *(_QWORD *)v40 = *(_QWORD *)&v4->hAdapter;
  hSharedPrimary = v4->hSharedPrimary;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(MmUserProbeAddress);
  if ( !Current )
    goto LABEL_7;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v42, v40[0], Current, &v44);
  v13 = v44;
  if ( !v44 )
  {
    v14 = WdLogNewEntry5_WdWarning(v10, v9, v11, v12);
    *(_QWORD *)(v14 + 24) = v40[0];
    *(_QWORD *)(v14 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v14);
    goto LABEL_13;
  }
  PairingAdapters = DxgkpGetPairingAdapters(v44, v40[1], &v45, &v39, &v44, &v46);
  if ( PairingAdapters < 0 )
  {
    v20 = WdLogNewEntry5_WdError(v16, v15);
    *(_QWORD *)(v20 + 24) = v13;
    *(_QWORD *)(v20 + 32) = v40[1];
    WdLogEvent5_WdError(v20);
    v22 = v42;
    if ( v42 )
      DXGADAPTER::ReleaseReference(v42);
    v23 = (qword_1C006E790 & 2) == 0;
LABEL_19:
    if ( !v23 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q((__int64)v22, &EventProfilerExit, v21, 2021);
    return (unsigned int)PairingAdapters;
  }
  v24 = v45;
  if ( !v45 || !v44 )
  {
    v25 = WdLogNewEntry5_WdAssertion(v16, v15, v17, v18);
    *(_QWORD *)(v25 + 24) = 3577LL;
    WdLogEvent5_WdAssertion(v25);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v43, v24, v44);
  DXGADAPTER::ReleaseReference(v24);
  DXGADAPTER::ReleaseReference(v44);
  PairingAdapters = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v43);
  if ( PairingAdapters < 0 )
  {
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v43);
    if ( v42 )
      DXGADAPTER::ReleaseReference(v42);
    v22 = (DXGADAPTER *)qword_1C006E790;
    v23 = (qword_1C006E790 & 2) == 0;
    goto LABEL_19;
  }
  if ( !*((_QWORD *)v24 + 286) )
  {
    v30 = WdLogNewEntry5_WdAssertion(v27, v26, v28, v29);
    *(_QWORD *)(v30 + 24) = 3592LL;
    WdLogEvent5_WdAssertion(v30);
  }
  v31 = v44;
  if ( !*((_QWORD *)v44 + 285) )
  {
    v32 = WdLogNewEntry5_WdAssertion(v27, v26, v28, v29);
    *(_QWORD *)(v32 + 24) = 3593LL;
    WdLogEvent5_WdAssertion(v32);
  }
  v33 = *((_QWORD *)v31 + 285);
  if ( v40[1] >= *(_DWORD *)(v33 + 80) )
  {
    v34 = WdLogNewEntry5_WdError(v33, v26);
    *(_QWORD *)(v34 + 24) = v40[1];
    *(_QWORD *)(v34 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v34);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v43);
LABEL_13:
    v6 = v42;
    if ( v42 )
      DXGADAPTER::ReleaseReference(v42);
LABEL_7:
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q((__int64)v6, &EventProfilerExit, v7, 2021);
    return 3221225485LL;
  }
  CddPrimaryShareResourceHandle = ADAPTER_DISPLAY::GetCddPrimaryShareResourceHandle(
                                    (DXGADAPTER **)v33,
                                    v40[1],
                                    v28,
                                    v29);
  p_hSharedPrimary = &a1->hSharedPrimary;
  if ( (unsigned __int64)&a1->hSharedPrimary >= MmUserProbeAddress )
    p_hSharedPrimary = (_DWORD *)MmUserProbeAddress;
  *p_hSharedPrimary = CddPrimaryShareResourceHandle;
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v43);
  v38 = v42;
  if ( v42 )
    DXGADAPTER::ReleaseReference(v42);
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)v38, &EventProfilerExit, v37, 2021);
  return 0LL;
}
