/*
 * XREFs of DxgkHandleVideoParameters @ 0x1C01A87E8
 * Callers:
 *     DpiGdoHandleVideoParameters @ 0x1C01CF3D8 (DpiGdoHandleVideoParameters.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C00062F0 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateCopyProtection@ADAPTER_DISPLAY@@QEAAJIIPEAI@Z @ 0x1C01702CC (-CreateCopyProtection@ADAPTER_DISPLAY@@QEAAJIIPEAI@Z.c)
 *     ?DestroyCopyProtection@ADAPTER_DISPLAY@@QEAAJII@Z @ 0x1C01708E8 (-DestroyCopyProtection@ADAPTER_DISPLAY@@QEAAJII@Z.c)
 *     ?UpdateCopyProtection@ADAPTER_DISPLAY@@QEAAJIII@Z @ 0x1C01731DC (-UpdateCopyProtection@ADAPTER_DISPLAY@@QEAAJIII@Z.c)
 *     ?GetCurrentTvStandard@@YAIPEAVDXGADAPTER@@I@Z @ 0x1C01A8664 (-GetCurrentTvStandard@@YAIPEAVDXGADAPTER@@I@Z.c)
 *     DmmGetMacrovisonSupportFromClientVidPnSource @ 0x1C01D5330 (DmmGetMacrovisonSupportFromClientVidPnSource.c)
 *     DmmGetPathContentFromClientVidPnSource @ 0x1C01D5B38 (DmmGetPathContentFromClientVidPnSource.c)
 *     DmmIsSourcePresentedOnClientVidPnAnalogTvOut @ 0x1C01D60F8 (DmmIsSourcePresentedOnClientVidPnAnalogTvOut.c)
 *     DmmUpdateContentOnAllClientVidPnPathsFromSource @ 0x1C01D6C10 (DmmUpdateContentOnAllClientVidPnPathsFromSource.c)
 */

__int64 __fastcall DxgkHandleVideoParameters(DXGADAPTER ***a1, unsigned int a2, char *Source1)
{
  __int64 v4; // r15
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  int v12; // edi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // eax
  int v27; // r14d
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  int updated; // eax
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  int v38; // [rsp+20h] [rbp-39h] BYREF
  unsigned int v39; // [rsp+24h] [rbp-35h] BYREF
  _BYTE v40[24]; // [rsp+28h] [rbp-31h] BYREF
  _BYTE v41[8]; // [rsp+40h] [rbp-19h] BYREF
  _BYTE v42[32]; // [rsp+48h] [rbp-11h] BYREF
  _BYTE v43[40]; // [rsp+68h] [rbp+Fh] BYREF
  char v44; // [rsp+D8h] [rbp+7Fh] BYREF

  v4 = a2;
  Current = DXGPROCESS::GetCurrent((__int64)a1);
  if ( !Current )
  {
    v11 = WdLogNewEntry5_WdError(v8, v7);
    v12 = -1073741811;
    *(_QWORD *)(v11 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v11);
    return (unsigned int)v12;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v40, *((struct DXGFASTMUTEX *const *)Current + 33), v9, v10);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v40);
  if ( !a1 )
  {
    v17 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
    *(_QWORD *)(v17 + 24) = 65LL;
    WdLogEvent5_WdAssertion(v17);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v41, (struct DXGADAPTER *const)a1, 0LL);
  v12 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v41);
  if ( !DXGADAPTER::IsFullWDDMAdapter((DXGADAPTER *)a1) )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdError(v19, v18);
    v12 = -1073741637;
    v20[3] = a1;
    v20[4] = -1073741637LL;
LABEL_11:
    WdLogEvent5_WdError(v20);
    goto LABEL_45;
  }
  if ( (unsigned int)v4 >= *((_DWORD *)a1[285] + 20) )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdError(v19, v18);
    v12 = -1071774975;
    v20[3] = v4;
    v20[4] = a1;
    v20[5] = -1071774975LL;
    goto LABEL_11;
  }
  if ( RtlCompareMemory(Source1, &GUID_VIDEO_PARAMETERS, 0x10uLL) != 16 )
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdError(v22, v21);
    v12 = -1073741811;
    v20[3] = -1073741811LL;
    goto LABEL_11;
  }
  v44 = 0;
  DmmIsSourcePresentedOnClientVidPnAnalogTvOut(a1, (unsigned int)v4, &v44, &v39);
  v26 = *((_DWORD *)Source1 + 5);
  v27 = 1;
  if ( v26 == 1 )
  {
    *(_QWORD *)(Source1 + 28) = 0LL;
    *(_QWORD *)(Source1 + 36) = 0LL;
    *(_QWORD *)(Source1 + 44) = 0LL;
    v12 = 0;
    *(_QWORD *)(Source1 + 52) = 0LL;
    *(_QWORD *)(Source1 + 60) = 0LL;
    *(_QWORD *)(Source1 + 68) = 0LL;
    *(_QWORD *)(Source1 + 76) = 0LL;
    *(_QWORD *)(Source1 + 84) = 0LL;
    *(_QWORD *)(Source1 + 92) = 0LL;
    memset(Source1 + 100, 0, 0x100uLL);
    *((_DWORD *)Source1 + 6) = 3;
    if ( v44 == 1 )
    {
      v38 = 0;
      DmmGetPathContentFromClientVidPnSource(a1, (unsigned int)v4, &v38);
      *((_DWORD *)Source1 + 7) = (v38 == 2) + 1;
    }
    else
    {
      *((_DWORD *)Source1 + 7) = 1;
    }
    *((_DWORD *)Source1 + 9) = 3;
    if ( v44 == 1 )
      *((_DWORD *)Source1 + 8) = GetCurrentTvStandard((struct DXGADAPTER *)a1, v39);
    else
      *((_DWORD *)Source1 + 8) = 0x8000;
    *((_DWORD *)Source1 + 10) = *((_DWORD *)Source1 + 8) | 0x8000;
    if ( v44 == 1 )
    {
      DmmGetMacrovisonSupportFromClientVidPnSource(a1, (unsigned int)v4, &v44);
      if ( (v44 & 4) == 0 && (v44 & 2) == 0 )
        v27 = 0;
    }
    *((_DWORD *)Source1 + 20) = v27;
    if ( v27 )
    {
      *((_DWORD *)Source1 + 6) |= 0x100u;
      *((_DWORD *)Source1 + 22) = 196799;
    }
    goto LABEL_45;
  }
  if ( v26 != 2 )
    goto LABEL_45;
  v12 = 0;
  if ( (*((_DWORD *)Source1 + 6) & 0x100) == 0 )
  {
LABEL_42:
    if ( v44 == 1 && (*((_DWORD *)Source1 + 6) & 1) != 0 )
      DmmUpdateContentOnAllClientVidPnPathsFromSource(
        a1,
        (unsigned int)v4,
        (unsigned int)(*((_DWORD *)Source1 + 7) == 2) + 1);
    goto LABEL_45;
  }
  v28 = (unsigned int)(*((_DWORD *)Source1 + 21) - 1);
  if ( *((_DWORD *)Source1 + 21) != 1 )
  {
    v28 = (unsigned int)(*((_DWORD *)Source1 + 21) - 2);
    if ( *((_DWORD *)Source1 + 21) == 2 )
    {
      updated = ADAPTER_DISPLAY::DestroyCopyProtection(a1[285], v4, *((_DWORD *)Source1 + 23));
    }
    else
    {
      if ( *((_DWORD *)Source1 + 21) != 4 )
      {
        v29 = WdLogNewEntry5_WdWarning(v28, v23, v24, v25);
        v30 = *((unsigned int *)Source1 + 21);
LABEL_33:
        *(_QWORD *)(v29 + 24) = v30;
        v12 = -1073741811;
        *(_QWORD *)(v29 + 32) = -1073741811LL;
        WdLogEvent5_WdWarning(v29);
        goto LABEL_45;
      }
      v31 = *((unsigned int *)Source1 + 24);
      if ( (unsigned int)v31 > 3 )
      {
LABEL_32:
        v29 = WdLogNewEntry5_WdWarning(v28, v23, v31, v25);
        v30 = *((unsigned int *)Source1 + 24);
        goto LABEL_33;
      }
      updated = ADAPTER_DISPLAY::UpdateCopyProtection(a1[285], v4, v31, *((_DWORD *)Source1 + 23));
    }
    goto LABEL_39;
  }
  v31 = *((unsigned int *)Source1 + 24);
  if ( (unsigned int)(v31 - 1) <= 2 )
  {
    if ( *((_DWORD *)Source1 + 20) != 1 )
      goto LABEL_32;
    updated = ADAPTER_DISPLAY::CreateCopyProtection(a1[285], v4, v31, (unsigned int *)Source1 + 23);
LABEL_39:
    v12 = updated;
    goto LABEL_41;
  }
  v33 = WdLogNewEntry5_WdWarning(v28, v23, v31, v25);
  v12 = -1073741811;
  *(_QWORD *)(v33 + 24) = *((unsigned int *)Source1 + 24);
  *(_QWORD *)(v33 + 32) = -1073741811LL;
  WdLogEvent5_WdWarning(v33);
LABEL_41:
  if ( v12 >= 0 )
    goto LABEL_42;
LABEL_45:
  COREACCESS::~COREACCESS((COREACCESS *)v43);
  COREACCESS::~COREACCESS((COREACCESS *)v42);
  if ( v40[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v40, v34, v35, v36);
  return (unsigned int)v12;
}
