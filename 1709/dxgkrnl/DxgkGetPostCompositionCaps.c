/*
 * XREFs of DxgkGetPostCompositionCaps @ 0x1C00B9400
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
 *     ?GetPostCompositionCaps@ADAPTER_DISPLAY@@QEAAJIPEAM0@Z @ 0x1C00ABAF8 (-GetPostCompositionCaps@ADAPTER_DISPLAY@@QEAAJIPEAM0@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C00B1CE4 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 */

__int64 __fastcall DxgkGetPostCompositionCaps(ULONG64 a1, __int64 a2, __int64 a3)
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
  _DWORD *v15; // rdx
  _DWORD *v16; // rdx
  __int64 v17; // r8
  DXGADAPTER *v18; // rcx
  bool v19; // zf
  __int64 v21; // rax
  __int64 v22; // r8
  DXGADAPTER *v23; // rcx
  bool v24; // zf
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned __int64 v29; // [rsp+30h] [rbp-A8h] BYREF
  unsigned int v30[4]; // [rsp+38h] [rbp-A0h] BYREF
  DXGADAPTER *v31; // [rsp+48h] [rbp-90h] BYREF
  _BYTE v32[120]; // [rsp+60h] [rbp-78h] BYREF
  struct DXGADAPTER *v33; // [rsp+E8h] [rbp+10h] BYREF
  unsigned __int64 v34; // [rsp+F0h] [rbp+18h] BYREF
  struct DXGADAPTER *v35; // [rsp+F8h] [rbp+20h] BYREF

  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2146);
  v4 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v4 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v30 = *v4;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(MmUserProbeAddress, a2);
  if ( Current )
  {
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v31, v30[0], Current, &v33);
    v10 = v33;
    if ( v33 )
    {
      PairingAdapters = DxgkpGetPairingAdapters(v33, v30[1], &v33, &v34, &v35, &v29);
      if ( PairingAdapters < 0 )
      {
        v13 = 0LL;
        PairingAdapters = DxgkpGetPairingAdapters(v10, v30[1], &v33, &v34, 0LL, 0LL);
      }
      else
      {
        v13 = (ADAPTER_DISPLAY **)v35;
      }
      if ( PairingAdapters < 0 )
      {
        v26 = WdLogNewEntry5_WdError(v11);
        *(_QWORD *)(v26 + 24) = v10;
        *(_QWORD *)(v26 + 32) = v30[1];
        WdLogEvent5_WdError(v26);
      }
      else
      {
        if ( v13 && !v13[288] )
        {
          v27 = WdLogNewEntry5_WdAssertion(v11);
          *(_QWORD *)(v27 + 24) = 9095LL;
          WdLogEvent5_WdAssertion(v27);
        }
        v14 = v33;
        if ( !v33 || !*((_QWORD *)v33 + 289) )
        {
          v28 = WdLogNewEntry5_WdAssertion(v11);
          *(_QWORD *)(v28 + 24) = 9097LL;
          WdLogEvent5_WdAssertion(v28);
        }
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v32, v14, (struct DXGADAPTER *const)v13);
        DXGADAPTER::ReleaseReferenceNoTracking(v14);
        if ( v13 )
          DXGADAPTER::ReleaseReferenceNoTracking((DXGADAPTER *)v13);
        PairingAdapters = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v32);
        if ( PairingAdapters < 0 )
        {
          COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v32);
          if ( v31 )
            DXGADAPTER::ReleaseReferenceNoTracking(v31);
          v18 = (DXGADAPTER *)qword_1C005F010;
          v19 = (qword_1C005F010 & 2) == 0;
          goto LABEL_27;
        }
        if ( v13 )
        {
          PairingAdapters = ADAPTER_DISPLAY::GetPostCompositionCaps(
                              v13[288],
                              v30[1],
                              (float *)&v30[2],
                              (float *)&v30[3]);
        }
        else
        {
          v30[2] = 1065353216;
          v30[3] = 1065353216;
        }
        v15 = (_DWORD *)(a1 + 8);
        if ( a1 + 8 >= MmUserProbeAddress )
          v15 = (_DWORD *)MmUserProbeAddress;
        *v15 = v30[2];
        v16 = (_DWORD *)(a1 + 12);
        if ( a1 + 12 >= MmUserProbeAddress )
          v16 = (_DWORD *)MmUserProbeAddress;
        *v16 = v30[3];
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v32);
      }
      v18 = v31;
      if ( v31 )
        DXGADAPTER::ReleaseReferenceNoTracking(v31);
      v19 = (qword_1C005F010 & 2) == 0;
LABEL_27:
      if ( !v19 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q((__int64)v18, &EventProfilerExit, v17, 2146);
      return (unsigned int)PairingAdapters;
    }
    v25 = WdLogNewEntry5_WdWarning(v8, v7, v9);
    *(_QWORD *)(v25 + 24) = v30[0];
    *(_QWORD *)(v25 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v25);
    v23 = v31;
    if ( v31 )
      DXGADAPTER::ReleaseReferenceNoTracking(v31);
    v24 = (qword_1C005F010 & 2) == 0;
  }
  else
  {
    v21 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v21 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v21);
    v23 = (DXGADAPTER *)qword_1C005F010;
    v24 = (qword_1C005F010 & 2) == 0;
  }
  if ( !v24 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)v23, &EventProfilerExit, v22, 2146);
  return 3221225485LL;
}
