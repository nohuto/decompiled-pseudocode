/*
 * XREFs of DxgkSetVidPnSourceHwProtection @ 0x1C017E4C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0005A90 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C00078FC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C000D2E8 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkSetVidPnSourceHwProtection(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct _KTHREAD **Current; // r14
  __int64 v7; // rax
  DXGADAPTER *v8; // rcx
  __int64 v9; // r8
  int v11; // r15d
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  struct DXGADAPTER *v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rax
  int v19; // r8d
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r14
  __int64 v26; // rax
  __int64 v27; // r8
  DXGADAPTER *v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  __int64 v35; // r8
  __int64 v36; // rax
  unsigned int v37; // edx
  __int64 v38; // r8
  unsigned int v39; // r9d
  __int64 v40; // r8
  DXGADAPTER *v41; // rcx
  unsigned int v42[4]; // [rsp+20h] [rbp-78h]
  DXGADAPTER *v43; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v44[10]; // [rsp+40h] [rbp-58h] BYREF
  struct DXGADAPTER *v45; // [rsp+A8h] [rbp+10h] BYREF

  v3 = a1;
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2130);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1);
  if ( !Current )
  {
    v7 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v7 + 24) = 8151LL;
    WdLogEvent5_WdError(v7);
LABEL_6:
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q((__int64)v8, &EventProfilerExit, v9, 2130);
    return 3221225485LL;
  }
  if ( v3 >= MmUserProbeAddress )
    v3 = MmUserProbeAddress;
  *(_QWORD *)v42 = *(_QWORD *)v3;
  v11 = *(_DWORD *)(v3 + 8);
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v43, (unsigned int)*(_QWORD *)v3, Current, &v45);
  v16 = v45;
  if ( !v45 )
  {
    v17 = WdLogNewEntry5_WdError(v13, v12);
    *(_QWORD *)(v17 + 24) = Current;
    *(_QWORD *)(v17 + 32) = v42[0];
    WdLogEvent5_WdError(v17);
    goto LABEL_14;
  }
  if ( !*((_QWORD *)v45 + 285) )
  {
    v18 = WdLogNewEntry5_WdWarning(v13, v12, v14, v15);
    *(_QWORD *)(v18 + 24) = v16;
    *(_QWORD *)(v18 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v18);
    goto LABEL_14;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v44, v45, 0LL);
  v20 = COREADAPTERACCESS::AcquireExclusive(v44, v19 + 1);
  v25 = v20;
  if ( v20 >= 0 )
  {
    if ( v42[1] >= *(_DWORD *)(*((_QWORD *)v16 + 285) + 80LL) )
    {
      v29 = WdLogNewEntry5_WdWarning(v22, v21, v23, v24);
      *(_QWORD *)(v29 + 24) = v42[1];
      *(_QWORD *)(v29 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v29);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v44);
LABEL_14:
      v8 = v43;
      if ( v43 )
        DXGADAPTER::ReleaseReference(v43);
      goto LABEL_6;
    }
    if ( *((_BYTE *)DXGPROCESS::GetCurrent(v22) + 274) )
    {
      *(_BYTE *)(3208LL * v42[1] + *(_QWORD *)(*((_QWORD *)v16 + 285) + 112LL) + 1072) = v11 != 0;
      v36 = *((_QWORD *)v16 + 285);
      if ( v11 )
      {
        *(_BYTE *)(v36 + 276) = 1;
      }
      else
      {
        *(_BYTE *)(v36 + 276) = 0;
        v37 = 0;
        v38 = *((_QWORD *)v16 + 285);
        v39 = *(_DWORD *)(v38 + 80);
        if ( v39 )
        {
          while ( !*(_BYTE *)(3208LL * v37 + *(_QWORD *)(v38 + 112) + 1072) )
          {
            if ( ++v37 >= v39 )
              goto LABEL_41;
          }
          *(_BYTE *)(v38 + 276) = 1;
        }
      }
LABEL_41:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v44);
      v41 = v43;
      if ( v43 )
        DXGADAPTER::ReleaseReference(v43);
      if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q((__int64)v41, &EventProfilerExit, v40, 2130);
      return 0LL;
    }
    else
    {
      v34 = WdLogNewEntry5_WdWarning(v31, v30, v32, v33);
      *(_QWORD *)(v34 + 24) = -1073741790LL;
      WdLogEvent5_WdWarning(v34);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v44);
      if ( v43 )
        DXGADAPTER::ReleaseReference(v43);
      if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(qword_1C006E790, &EventProfilerExit, v35, 2130);
      return 3221225506LL;
    }
  }
  else
  {
    v26 = WdLogNewEntry5_WdError(v22, v21);
    *(_QWORD *)(v26 + 24) = v25;
    WdLogEvent5_WdError(v26);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v44);
    v28 = v43;
    if ( v43 )
      DXGADAPTER::ReleaseReference(v43);
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      Template_q((__int64)v28, &EventProfilerExit, v27, 2130);
    return (unsigned int)v25;
  }
}
