/*
 * XREFs of DxgkHandleVideoParameters @ 0x1C01C3B3C
 * Callers:
 *     DpiGdoHandleVideoParameters @ 0x1C020E7B8 (DpiGdoHandleVideoParameters.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0002B28 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C00253B0 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateCopyProtection@ADAPTER_DISPLAY@@QEAAJIIPEAI@Z @ 0x1C0151C28 (-CreateCopyProtection@ADAPTER_DISPLAY@@QEAAJIIPEAI@Z.c)
 *     ?DestroyCopyProtection@ADAPTER_DISPLAY@@QEAAJII@Z @ 0x1C0152B5C (-DestroyCopyProtection@ADAPTER_DISPLAY@@QEAAJII@Z.c)
 *     ?UpdateCopyProtection@ADAPTER_DISPLAY@@QEAAJIII@Z @ 0x1C0157BBC (-UpdateCopyProtection@ADAPTER_DISPLAY@@QEAAJIII@Z.c)
 *     ?GetCurrentTvStandard@@YAIPEAVDXGADAPTER@@I@Z @ 0x1C01C39B8 (-GetCurrentTvStandard@@YAIPEAVDXGADAPTER@@I@Z.c)
 *     ?DmmGetMacrovisonSupportFromClientVidPnSource@@YAJQEAXIPEAU_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT@@@Z @ 0x1C0212BF4 (-DmmGetMacrovisonSupportFromClientVidPnSource@@YAJQEAXIPEAU_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTE.c)
 *     ?DmmGetPathContentFromClientVidPnSource@@YAJQEAXIPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z @ 0x1C02132AC (-DmmGetPathContentFromClientVidPnSource@@YAJQEAXIPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z.c)
 *     ?DmmIsSourcePresentedOnClientVidPnAnalogTvOut@@YAJQEAXIPEAEPEAI@Z @ 0x1C0213BC4 (-DmmIsSourcePresentedOnClientVidPnAnalogTvOut@@YAJQEAXIPEAEPEAI@Z.c)
 *     ?DmmUpdateContentOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z @ 0x1C0215534 (-DmmUpdateContentOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@.c)
 */

__int64 __fastcall DxgkHandleVideoParameters(DXGADAPTER ***a1, __int64 a2, char *Source1)
{
  __int64 v4; // r15
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // edi
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8
  int v17; // eax
  int v18; // esi
  char v19; // r12
  int v20; // eax
  int CurrentTvStandard; // eax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r8
  int updated; // eax
  __int64 v27; // rax
  unsigned int v29; // [rsp+28h] [rbp-39h] BYREF
  _BYTE v30[24]; // [rsp+30h] [rbp-31h] BYREF
  _BYTE v31[8]; // [rsp+48h] [rbp-19h] BYREF
  _BYTE v32[32]; // [rsp+50h] [rbp-11h] BYREF
  _BYTE v33[40]; // [rsp+70h] [rbp+Fh] BYREF
  struct _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT v34; // [rsp+E0h] [rbp+7Fh] BYREF

  v4 = (unsigned int)a2;
  Current = DXGPROCESS::GetCurrent((__int64)a1, a2);
  if ( !Current )
  {
    v8 = WdLogNewEntry5_WdError(v7);
    v9 = -1073741811;
    *(_QWORD *)(v8 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v8);
    return (unsigned int)v9;
  }
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v30, *((struct DXGFASTMUTEX *const *)Current + 39), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v30);
  if ( !a1 )
  {
    v11 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v11 + 24) = 65LL;
    WdLogEvent5_WdAssertion(v11);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v31, (struct DXGADAPTER *const)a1, 0LL);
  v9 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v31);
  if ( !DXGADAPTER::IsFullWDDMAdapter((DXGADAPTER *)a1) )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v12);
    v9 = -1073741637;
    v13[3] = a1;
    v13[4] = -1073741637LL;
LABEL_11:
    WdLogEvent5_WdError(v13);
    goto LABEL_45;
  }
  if ( (unsigned int)v4 >= *((_DWORD *)a1[307] + 20) )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v12);
    v9 = -1071774975;
    v13[3] = v4;
    v13[4] = a1;
    v13[5] = -1071774975LL;
    goto LABEL_11;
  }
  if ( RtlCompareMemory(Source1, &GUID_VIDEO_PARAMETERS, 0x10uLL) != 16 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v14);
    v9 = -1073741811;
    v13[3] = -1073741811LL;
    goto LABEL_11;
  }
  *(_BYTE *)&v34 = 0;
  DmmIsSourcePresentedOnClientVidPnAnalogTvOut(a1, v4, (unsigned __int8 *)&v34, &v29);
  v17 = *((_DWORD *)Source1 + 5);
  v18 = 1;
  v19 = (char)v34;
  if ( v17 == 1 )
  {
    *(_QWORD *)(Source1 + 28) = 0LL;
    *(_QWORD *)(Source1 + 36) = 0LL;
    *(_QWORD *)(Source1 + 44) = 0LL;
    v9 = 0;
    *(_QWORD *)(Source1 + 52) = 0LL;
    *(_QWORD *)(Source1 + 60) = 0LL;
    *(_QWORD *)(Source1 + 68) = 0LL;
    *(_QWORD *)(Source1 + 76) = 0LL;
    *(_QWORD *)(Source1 + 84) = 0LL;
    *(_QWORD *)(Source1 + 92) = 0LL;
    memset(Source1 + 100, 0, 0x100uLL);
    *((_DWORD *)Source1 + 6) = 3;
    if ( v19 == 1 )
    {
      v34 = 0;
      DmmGetPathContentFromClientVidPnSource(a1, v4, (enum _D3DKMDT_VIDPN_PRESENT_PATH_CONTENT *)&v34);
      v20 = (v34 == 2) + 1;
    }
    else
    {
      v20 = 1;
    }
    *((_DWORD *)Source1 + 7) = v20;
    *((_DWORD *)Source1 + 9) = 3;
    if ( v19 == 1 )
      CurrentTvStandard = GetCurrentTvStandard((struct DXGADAPTER *)a1, v29);
    else
      CurrentTvStandard = 0x8000;
    *((_DWORD *)Source1 + 8) = CurrentTvStandard;
    *((_DWORD *)Source1 + 10) = CurrentTvStandard | 0x8000;
    if ( v19 == 1 )
    {
      DmmGetMacrovisonSupportFromClientVidPnSource(a1, v4, &v34);
      if ( (*(_BYTE *)&v34 & 4) == 0 && (*(_BYTE *)&v34 & 2) == 0 )
        v18 = 0;
    }
    *((_DWORD *)Source1 + 20) = v18;
    if ( v18 )
    {
      *((_DWORD *)Source1 + 6) |= 0x100u;
      *((_DWORD *)Source1 + 22) = 196799;
    }
    goto LABEL_45;
  }
  if ( v17 != 2 )
    goto LABEL_45;
  v9 = 0;
  if ( (*((_DWORD *)Source1 + 6) & 0x100) == 0 )
  {
LABEL_42:
    if ( v19 == 1 && (*((_DWORD *)Source1 + 6) & 1) != 0 )
      DmmUpdateContentOnAllClientVidPnPathsFromSource(
        a1,
        v4,
        (enum _D3DKMDT_VIDPN_PRESENT_PATH_CONTENT)((*((_DWORD *)Source1 + 7) == 2) + 1));
    goto LABEL_45;
  }
  v22 = (unsigned int)(*((_DWORD *)Source1 + 21) - 1);
  if ( *((_DWORD *)Source1 + 21) != 1 )
  {
    v22 = (unsigned int)(*((_DWORD *)Source1 + 21) - 2);
    if ( *((_DWORD *)Source1 + 21) == 2 )
    {
      updated = ADAPTER_DISPLAY::DestroyCopyProtection(a1[307], v4, *((_DWORD *)Source1 + 23));
    }
    else
    {
      if ( *((_DWORD *)Source1 + 21) != 4 )
      {
        v23 = WdLogNewEntry5_WdWarning(v22, v15, v16);
        v24 = *((unsigned int *)Source1 + 21);
LABEL_33:
        *(_QWORD *)(v23 + 24) = v24;
        v9 = -1073741811;
        *(_QWORD *)(v23 + 32) = -1073741811LL;
        WdLogEvent5_WdWarning(v23);
        goto LABEL_45;
      }
      v25 = *((unsigned int *)Source1 + 24);
      if ( (unsigned int)v25 > 3 )
      {
LABEL_32:
        v23 = WdLogNewEntry5_WdWarning(v22, v15, v25);
        v24 = *((unsigned int *)Source1 + 24);
        goto LABEL_33;
      }
      updated = ADAPTER_DISPLAY::UpdateCopyProtection(a1[307], v4, v25, *((_DWORD *)Source1 + 23));
    }
    goto LABEL_39;
  }
  v25 = *((unsigned int *)Source1 + 24);
  if ( (unsigned int)(v25 - 1) <= 2 )
  {
    if ( *((_DWORD *)Source1 + 20) != 1 )
      goto LABEL_32;
    updated = ADAPTER_DISPLAY::CreateCopyProtection(a1[307], v4, v25, (unsigned int *)Source1 + 23);
LABEL_39:
    v9 = updated;
    goto LABEL_41;
  }
  v27 = WdLogNewEntry5_WdWarning(v22, v15, v25);
  v9 = -1073741811;
  *(_QWORD *)(v27 + 24) = *((unsigned int *)Source1 + 24);
  *(_QWORD *)(v27 + 32) = -1073741811LL;
  WdLogEvent5_WdWarning(v27);
LABEL_41:
  if ( v9 >= 0 )
    goto LABEL_42;
LABEL_45:
  COREACCESS::~COREACCESS((COREACCESS *)v33);
  COREACCESS::~COREACCESS((COREACCESS *)v32);
  if ( v30[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v30);
  return (unsigned int)v9;
}
