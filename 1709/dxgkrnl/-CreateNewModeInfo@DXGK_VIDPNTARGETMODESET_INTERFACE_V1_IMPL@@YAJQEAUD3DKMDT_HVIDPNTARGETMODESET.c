/*
 * XREFs of ?CreateNewModeInfo@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEAU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C00D74E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@SAPEAVDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C000BA08 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTARGETMODESET@@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@@@S.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     ?AcquireRawDdiEnumeratorCachedModeInfo@DMMVIDPNTARGETMODESET@@QEAAJPEAPEAU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C00A30C8 (-AcquireRawDdiEnumeratorCachedModeInfo@DMMVIDPNTARGETMODESET@@QEAAJPEAPEAU_D3DKMDT_VIDPN_TARGET_.c)
 */

__int64 __fastcall DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::CreateNewModeInfo(
        DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a2,
        struct _D3DKMDT_VIDPN_TARGET_MODE **a3)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rcx
  DMMVIDPNTARGETMODESET *v10; // rax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  struct _D3DKMDT_VIDPN_TARGET_MODE *v20; // [rsp+30h] [rbp+8h] BYREF

  v4 = (__int64)this;
  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal((__int64)this) + 15);
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v6, &EventProfilerEnter, v7, 7013);
  v8 = WdLogNewEntry5_WdTrace(v6, v5);
  *(_QWORD *)(v8 + 24) = v4;
  *(_QWORD *)(v8 + 32) = a2;
  if ( a2 )
  {
    *(_QWORD *)a2 = 0LL;
    v10 = (DMMVIDPNTARGETMODESET *)ExposedViaHandle<DMMVIDPNTARGETMODESET,D3DKMDT_HVIDPNTARGETMODESET__ *>::GetFromHandle(v4);
    if ( v10 )
    {
      v12 = DMMVIDPNTARGETMODESET::AcquireRawDdiEnumeratorCachedModeInfo(v10, &v20);
      v4 = v12;
      if ( v12 < 0 )
      {
        if ( v12 != -1073741801 )
        {
          v18 = WdLogNewEntry5_WdAssertion(v13);
          WdLogEvent5_WdAssertion(v18);
        }
        v19 = WdLogNewEntry5_WdError(v13);
        *(_QWORD *)(v19 + 24) = v4;
        WdLogEvent5_WdError(v19);
      }
      else
      {
        LODWORD(v4) = 0;
        *(_QWORD *)a2 = v20;
      }
    }
    else
    {
      v17 = WdLogNewEntry5_WdError(v11);
      *(_QWORD *)(v17 + 24) = v4;
      WdLogEvent5_WdError(v17);
      LODWORD(v4) = -1071774967;
    }
  }
  else
  {
    v16 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v16 + 24) = 0LL;
    WdLogEvent5_WdError(v16);
    LODWORD(v4) = -1071774959;
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v13, &EventProfilerExit, v14, 7013);
  return (unsigned int)v4;
}
