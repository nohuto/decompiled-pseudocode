/*
 * XREFs of DxgkGetPostCompositionCaps @ 0x1C00A00F0
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
 *     ?GetPostCompositionCaps@ADAPTER_DISPLAY@@QEAAJIPEAM0@Z @ 0x1C00E6500 (-GetPostCompositionCaps@ADAPTER_DISPLAY@@QEAAJIPEAM0@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00F7EEC (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 */

__int64 __fastcall DxgkGetPostCompositionCaps(ULONG64 a1, __int64 a2, __int64 a3)
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
  _DWORD *v20; // rdx
  _DWORD *v21; // rdx
  __int64 v22; // r8
  DXGADAPTER *v23; // rcx
  bool v24; // zf
  __int64 v26; // rax
  __int64 v27; // r8
  DXGADAPTER *v28; // rcx
  bool v29; // zf
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  unsigned __int64 v34; // [rsp+30h] [rbp-A8h] BYREF
  unsigned int v35[4]; // [rsp+38h] [rbp-A0h] BYREF
  DXGADAPTER *v36; // [rsp+48h] [rbp-90h] BYREF
  _BYTE v37[120]; // [rsp+60h] [rbp-78h] BYREF
  struct DXGADAPTER *v38; // [rsp+E8h] [rbp+10h] BYREF
  unsigned __int64 v39; // [rsp+F0h] [rbp+18h] BYREF
  struct DXGADAPTER *v40; // [rsp+F8h] [rbp+20h] BYREF

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2146);
  v4 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v4 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v35 = *v4;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
  if ( Current )
  {
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v36, v35[0], Current, &v38);
    v12 = v38;
    if ( v38 )
    {
      PairingAdapters = DxgkpGetPairingAdapters(v38, v35[1], &v38, &v39, &v40, &v34);
      if ( PairingAdapters < 0 )
      {
        v18 = 0LL;
        PairingAdapters = DxgkpGetPairingAdapters(v12, v35[1], &v38, &v39, 0LL, 0LL);
      }
      else
      {
        v18 = (ADAPTER_DISPLAY **)v40;
      }
      if ( PairingAdapters < 0 )
      {
        v31 = WdLogNewEntry5_WdError(v14, v13);
        *(_QWORD *)(v31 + 24) = v12;
        *(_QWORD *)(v31 + 32) = v35[1];
        WdLogEvent5_WdError(v31);
      }
      else
      {
        if ( v18 && !v18[285] )
        {
          v32 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
          *(_QWORD *)(v32 + 24) = 8781LL;
          WdLogEvent5_WdAssertion(v32);
        }
        v19 = v38;
        if ( !v38 || !*((_QWORD *)v38 + 286) )
        {
          v33 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
          *(_QWORD *)(v33 + 24) = 8783LL;
          WdLogEvent5_WdAssertion(v33);
        }
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v37, v19, (struct DXGADAPTER *const)v18);
        DXGADAPTER::ReleaseReference(v19);
        if ( v18 )
          DXGADAPTER::ReleaseReference((DXGADAPTER *)v18);
        PairingAdapters = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v37);
        if ( PairingAdapters < 0 )
        {
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v37);
          if ( v36 )
            DXGADAPTER::ReleaseReference(v36);
          v23 = (DXGADAPTER *)qword_1C006E790;
          v24 = (qword_1C006E790 & 2) == 0;
          goto LABEL_27;
        }
        if ( v18 )
        {
          PairingAdapters = ADAPTER_DISPLAY::GetPostCompositionCaps(
                              v18[285],
                              v35[1],
                              (float *)&v35[2],
                              (float *)&v35[3]);
        }
        else
        {
          v35[2] = 1065353216;
          v35[3] = 1065353216;
        }
        v20 = (_DWORD *)(a1 + 8);
        if ( a1 + 8 >= MmUserProbeAddress )
          v20 = (_DWORD *)MmUserProbeAddress;
        *v20 = v35[2];
        v21 = (_DWORD *)(a1 + 12);
        if ( a1 + 12 >= MmUserProbeAddress )
          v21 = (_DWORD *)MmUserProbeAddress;
        *v21 = v35[3];
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v37);
      }
      v23 = v36;
      if ( v36 )
        DXGADAPTER::ReleaseReference(v36);
      v24 = (qword_1C006E790 & 2) == 0;
LABEL_27:
      if ( !v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q((__int64)v23, &EventProfilerExit, v22, 2146);
      return (unsigned int)PairingAdapters;
    }
    v30 = WdLogNewEntry5_WdWarning(v9, v8, v10, v11);
    *(_QWORD *)(v30 + 24) = v35[0];
    *(_QWORD *)(v30 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v30);
    v28 = v36;
    if ( v36 )
      DXGADAPTER::ReleaseReference(v36);
    v29 = (qword_1C006E790 & 2) == 0;
  }
  else
  {
    v26 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v26 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v26);
    v28 = (DXGADAPTER *)qword_1C006E790;
    v29 = (qword_1C006E790 & 2) == 0;
  }
  if ( !v29 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)v28, &EventProfilerExit, v27, 2146);
  return 3221225485LL;
}
