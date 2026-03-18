/*
 * XREFs of DxgkSetVidPnSourceHwProtection @ 0x1C0181B20
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0001A9C (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0008158 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0008404 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkSetVidPnSourceHwProtection(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v3; // rsi
  __int64 v4; // rcx
  struct _KTHREAD **Current; // r14
  __int64 v6; // rax
  DXGADAPTER *v7; // rcx
  __int64 v8; // r8
  int v10; // r15d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  struct DXGADAPTER *v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // r8d
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r14
  __int64 v23; // rax
  __int64 v24; // r8
  DXGADAPTER *v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // r8
  __int64 v32; // rax
  unsigned int v33; // edx
  __int64 v34; // r8
  unsigned int v35; // r9d
  __int64 v36; // r8
  DXGADAPTER *v37; // rcx
  unsigned int v38[4]; // [rsp+20h] [rbp-78h]
  DXGADAPTER *v39; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v40[10]; // [rsp+40h] [rbp-58h] BYREF
  struct DXGADAPTER *v41; // [rsp+A8h] [rbp+10h] BYREF

  v3 = a1;
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(a1, &EventProfilerEnter, a3, 2130);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1, a2);
  if ( !Current )
  {
    v6 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v6 + 24) = 8462LL;
    WdLogEvent5_WdError(v6);
LABEL_6:
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)v7, &EventProfilerExit, v8, 2130);
    return 3221225485LL;
  }
  if ( v3 >= MmUserProbeAddress )
    v3 = MmUserProbeAddress;
  *(_QWORD *)v38 = *(_QWORD *)v3;
  v10 = *(_DWORD *)(v3 + 8);
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v39, *(_QWORD *)v3, Current, &v41);
  v14 = v41;
  if ( !v41 )
  {
    v15 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v15 + 24) = Current;
    *(_QWORD *)(v15 + 32) = v38[0];
    WdLogEvent5_WdError(v15);
    goto LABEL_14;
  }
  if ( !*((_QWORD *)v41 + 288) )
  {
    v16 = WdLogNewEntry5_WdWarning(v12, v11, v13);
    *(_QWORD *)(v16 + 24) = v14;
    *(_QWORD *)(v16 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v16);
    goto LABEL_14;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v40, v41, 0LL);
  v18 = COREADAPTERACCESS::AcquireExclusive(v40, v17 + 1);
  v22 = v18;
  if ( v18 >= 0 )
  {
    if ( v38[1] >= *(_DWORD *)(*((_QWORD *)v14 + 288) + 80LL) )
    {
      v26 = WdLogNewEntry5_WdWarning(v20, v19, v21);
      *(_QWORD *)(v26 + 24) = v38[1];
      *(_QWORD *)(v26 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v26);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v40);
LABEL_14:
      v7 = v39;
      if ( v39 )
        DXGADAPTER::ReleaseReferenceNoTracking(v39);
      goto LABEL_6;
    }
    if ( *((_BYTE *)DXGPROCESS::GetCurrent(v20, v19) + 306) )
    {
      *(_BYTE *)(3760LL * v38[1] + *(_QWORD *)(*((_QWORD *)v14 + 288) + 112LL) + 1112) = v10 != 0;
      v32 = *((_QWORD *)v14 + 288);
      if ( v10 )
      {
        *(_BYTE *)(v32 + 276) = 1;
      }
      else
      {
        *(_BYTE *)(v32 + 276) = 0;
        v33 = 0;
        v34 = *((_QWORD *)v14 + 288);
        v35 = *(_DWORD *)(v34 + 80);
        if ( v35 )
        {
          while ( !*(_BYTE *)(3760LL * v33 + *(_QWORD *)(v34 + 112) + 1112) )
          {
            if ( ++v33 >= v35 )
              goto LABEL_41;
          }
          *(_BYTE *)(v34 + 276) = 1;
        }
      }
LABEL_41:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v40);
      v37 = v39;
      if ( v39 )
        DXGADAPTER::ReleaseReferenceNoTracking(v39);
      if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q((__int64)v37, &EventProfilerExit, v36, 2130);
      return 0LL;
    }
    else
    {
      v30 = WdLogNewEntry5_WdWarning(v28, v27, v29);
      *(_QWORD *)(v30 + 24) = -1073741790LL;
      WdLogEvent5_WdWarning(v30);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v40);
      if ( v39 )
        DXGADAPTER::ReleaseReferenceNoTracking(v39);
      if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(qword_1C005F010, &EventProfilerExit, v31, 2130);
      return 3221225506LL;
    }
  }
  else
  {
    v23 = WdLogNewEntry5_WdError(v20);
    *(_QWORD *)(v23 + 24) = v22;
    WdLogEvent5_WdError(v23);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v40);
    v25 = v39;
    if ( v39 )
      DXGADAPTER::ReleaseReferenceNoTracking(v39);
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q((__int64)v25, &EventProfilerExit, v24, 2130);
    return (unsigned int)v22;
  }
}
