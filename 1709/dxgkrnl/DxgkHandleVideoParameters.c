/*
 * XREFs of DxgkHandleVideoParameters @ 0x1C01C2684
 * Callers:
 *     DpiGdoHandleVideoParameters @ 0x1C01E97F8 (DpiGdoHandleVideoParameters.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ @ 0x1C0002850 (-IsFullWDDMAdapter@DXGADAPTER@@QEBAEXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C000820C (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateCopyProtection@ADAPTER_DISPLAY@@QEAAJIIPEAI@Z @ 0x1C0173978 (-CreateCopyProtection@ADAPTER_DISPLAY@@QEAAJIIPEAI@Z.c)
 *     ?DestroyCopyProtection@ADAPTER_DISPLAY@@QEAAJII@Z @ 0x1C0173FEC (-DestroyCopyProtection@ADAPTER_DISPLAY@@QEAAJII@Z.c)
 *     ?UpdateCopyProtection@ADAPTER_DISPLAY@@QEAAJIII@Z @ 0x1C0176B78 (-UpdateCopyProtection@ADAPTER_DISPLAY@@QEAAJIII@Z.c)
 *     ?GetCurrentTvStandard@@YAIPEAVDXGADAPTER@@I@Z @ 0x1C01C2500 (-GetCurrentTvStandard@@YAIPEAVDXGADAPTER@@I@Z.c)
 *     ?DmmGetMacrovisonSupportFromClientVidPnSource@@YAJQEAXIPEAU_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT@@@Z @ 0x1C01EC290 (-DmmGetMacrovisonSupportFromClientVidPnSource@@YAJQEAXIPEAU_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTE.c)
 *     ?DmmGetPathContentFromClientVidPnSource@@YAJQEAXIPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z @ 0x1C01ECBE8 (-DmmGetPathContentFromClientVidPnSource@@YAJQEAXIPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z.c)
 *     ?DmmIsSourcePresentedOnClientVidPnAnalogTvOut@@YAJQEAXIPEAEPEAI@Z @ 0x1C01ED218 (-DmmIsSourcePresentedOnClientVidPnAnalogTvOut@@YAJQEAXIPEAEPEAI@Z.c)
 *     ?DmmUpdateContentOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z @ 0x1C01EE49C (-DmmUpdateContentOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@.c)
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
  int v18; // r14d
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  int updated; // eax
  __int64 v24; // rax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_CONTENT v26; // [rsp+20h] [rbp-39h] BYREF
  unsigned int v27; // [rsp+24h] [rbp-35h] BYREF
  _BYTE v28[24]; // [rsp+28h] [rbp-31h] BYREF
  _BYTE v29[8]; // [rsp+40h] [rbp-19h] BYREF
  _BYTE v30[32]; // [rsp+48h] [rbp-11h] BYREF
  _BYTE v31[40]; // [rsp+68h] [rbp+Fh] BYREF
  struct _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT v32; // [rsp+D8h] [rbp+7Fh] BYREF

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
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v28, *((struct DXGFASTMUTEX *const *)Current + 37));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v28);
  if ( !a1 )
  {
    v11 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v11 + 24) = 65LL;
    WdLogEvent5_WdAssertion(v11);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v29, (struct DXGADAPTER *const)a1, 0LL);
  v9 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v29);
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
  if ( (unsigned int)v4 >= *((_DWORD *)a1[288] + 20) )
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
  *(_BYTE *)&v32 = 0;
  DmmIsSourcePresentedOnClientVidPnAnalogTvOut(a1, v4, (unsigned __int8 *)&v32, &v27);
  v17 = *((_DWORD *)Source1 + 5);
  v18 = 1;
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
    if ( v32 == 1 )
    {
      v26 = D3DKMDT_VPPC_UNINITIALIZED;
      DmmGetPathContentFromClientVidPnSource(a1, v4, &v26);
      *((_DWORD *)Source1 + 7) = (v26 == D3DKMDT_VPPC_VIDEO) + 1;
    }
    else
    {
      *((_DWORD *)Source1 + 7) = 1;
    }
    *((_DWORD *)Source1 + 9) = 3;
    if ( v32 == 1 )
      *((_DWORD *)Source1 + 8) = GetCurrentTvStandard((struct DXGADAPTER *)a1, v27);
    else
      *((_DWORD *)Source1 + 8) = 0x8000;
    *((_DWORD *)Source1 + 10) = *((_DWORD *)Source1 + 8) | 0x8000;
    if ( v32 == 1 )
    {
      DmmGetMacrovisonSupportFromClientVidPnSource(a1, v4, &v32);
      if ( (*(_BYTE *)&v32 & 4) == 0 && (*(_BYTE *)&v32 & 2) == 0 )
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
    if ( v32 == 1 && (*((_DWORD *)Source1 + 6) & 1) != 0 )
      DmmUpdateContentOnAllClientVidPnPathsFromSource(
        a1,
        v4,
        (enum _D3DKMDT_VIDPN_PRESENT_PATH_CONTENT)((*((_DWORD *)Source1 + 7) == 2) + 1));
    goto LABEL_45;
  }
  v19 = (unsigned int)(*((_DWORD *)Source1 + 21) - 1);
  if ( *((_DWORD *)Source1 + 21) != 1 )
  {
    v19 = (unsigned int)(*((_DWORD *)Source1 + 21) - 2);
    if ( *((_DWORD *)Source1 + 21) == 2 )
    {
      updated = ADAPTER_DISPLAY::DestroyCopyProtection(a1[288], v4, *((_DWORD *)Source1 + 23));
    }
    else
    {
      if ( *((_DWORD *)Source1 + 21) != 4 )
      {
        v20 = WdLogNewEntry5_WdWarning(v19, v15, v16);
        v21 = *((unsigned int *)Source1 + 21);
LABEL_33:
        *(_QWORD *)(v20 + 24) = v21;
        v9 = -1073741811;
        *(_QWORD *)(v20 + 32) = -1073741811LL;
        WdLogEvent5_WdWarning(v20);
        goto LABEL_45;
      }
      v22 = *((unsigned int *)Source1 + 24);
      if ( (unsigned int)v22 > 3 )
      {
LABEL_32:
        v20 = WdLogNewEntry5_WdWarning(v19, v15, v22);
        v21 = *((unsigned int *)Source1 + 24);
        goto LABEL_33;
      }
      updated = ADAPTER_DISPLAY::UpdateCopyProtection(a1[288], v4, v22, *((_DWORD *)Source1 + 23));
    }
    goto LABEL_39;
  }
  v22 = *((unsigned int *)Source1 + 24);
  if ( (unsigned int)(v22 - 1) <= 2 )
  {
    if ( *((_DWORD *)Source1 + 20) != 1 )
      goto LABEL_32;
    updated = ADAPTER_DISPLAY::CreateCopyProtection(a1[288], v4, v22, (unsigned int *)Source1 + 23);
LABEL_39:
    v9 = updated;
    goto LABEL_41;
  }
  v24 = WdLogNewEntry5_WdWarning(v19, v15, v22);
  v9 = -1073741811;
  *(_QWORD *)(v24 + 24) = *((unsigned int *)Source1 + 24);
  *(_QWORD *)(v24 + 32) = -1073741811LL;
  WdLogEvent5_WdWarning(v24);
LABEL_41:
  if ( v9 >= 0 )
    goto LABEL_42;
LABEL_45:
  COREACCESS::~COREACCESS((COREACCESS *)v31);
  COREACCESS::~COREACCESS((COREACCESS *)v30);
  if ( v28[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v28);
  return (unsigned int)v9;
}
