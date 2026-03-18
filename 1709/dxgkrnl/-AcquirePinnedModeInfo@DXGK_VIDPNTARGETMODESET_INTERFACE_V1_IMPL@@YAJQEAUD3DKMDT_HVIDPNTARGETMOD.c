/*
 * XREFs of ?AcquirePinnedModeInfo@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C00EFAA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetPinnedMode@DMMVIDPNTARGETMODESET@@QEAAPEAVDMMVIDPNTARGETMODE@@XZ @ 0x1C000F550 (-GetPinnedMode@DMMVIDPNTARGETMODESET@@QEAAPEAVDMMVIDPNTARGETMODE@@XZ.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C00A3070 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::AcquirePinnedModeInfo(
        DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a2,
        const struct _D3DKMDT_VIDPN_TARGET_MODE **a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // edi
  DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct DMMVIDPNTARGETMODE *PinnedMode; // rbp
  _QWORD *v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  struct DMMVIDPNTARGETMODE *(__fastcall *v28)(DMMVIDPNTARGETMODESET *); // [rsp+20h] [rbp-18h] BYREF
  int v29; // [rsp+28h] [rbp-10h]

  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal((__int64)this) + 14);
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v6, &EventProfilerEnter, v7, 7011);
  v8 = WdLogNewEntry5_WdTrace(v6, v5);
  v10 = 0;
  *(_QWORD *)(v8 + 24) = this;
  *(_QWORD *)(v8 + 32) = a2;
  if ( !a2 )
  {
    v22 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v22 + 24) = 0LL;
    *(_QWORD *)(v22 + 32) = this;
    WdLogEvent5_WdError(v22);
    v10 = -1073741811;
    goto LABEL_12;
  }
  *(_QWORD *)a2 = 0LL;
  if ( !this || (v11 = this, *((_DWORD *)this + 32) != 1833173005) )
    v11 = 0LL;
  if ( !v11 )
  {
    v23 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v23 + 24) = this;
    WdLogEvent5_WdError(v23);
    v10 = -1071774967;
    goto LABEL_12;
  }
  v29 = 0;
  v28 = DMMVIDPNTARGETMODESET::GetPinnedMode;
  if ( !*((_BYTE *)v11 + 136) )
  {
    v24 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v24 + 24) = v11;
    WdLogEvent5_WdError(v24);
    v10 = -1071774944;
LABEL_23:
    v27 = WdLogNewEntry5_WdError(v25);
    *(_QWORD *)(v27 + 32) = v10;
    *(_QWORD *)(v27 + 24) = v11;
    WdLogEvent5_WdError(v27);
    goto LABEL_12;
  }
  PinnedMode = DMMVIDPNTARGETMODESET::GetPinnedMode(v11);
  if ( !PinnedMode )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v13, v12) + 24) = &v28;
    v10 = 1075708679;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(&v28, v21) + 24) = v11;
    goto LABEL_12;
  }
  v15 = operator new(0x58uLL, 0x4E506456u, PagedPool);
  v17 = v15;
  if ( v15 )
  {
    *(_DWORD *)v15 = 305419896;
    v15[1] = PinnedMode;
    memset(v15 + 2, 0, 0x48uLL);
  }
  else
  {
    v17 = 0LL;
  }
  if ( !v17 )
  {
    v26 = WdLogNewEntry5_WdLowResource(v16);
    *(_QWORD *)(v26 + 24) = v11;
    WdLogEvent5_WdLowResource(v26);
    operator delete(0LL);
    v10 = -1073741801;
    goto LABEL_23;
  }
  operator delete(0LL);
  *((_DWORD *)v17 + 4) = *((_DWORD *)PinnedMode + 6);
  *(_OWORD *)(v17 + 3) = *(_OWORD *)((char *)PinnedMode + 72);
  *(_OWORD *)(v17 + 5) = *(_OWORD *)((char *)PinnedMode + 88);
  *(_OWORD *)(v17 + 7) = *(_OWORD *)((char *)PinnedMode + 104);
  v17[9] = *((_QWORD *)PinnedMode + 15);
  *((_DWORD *)v17 + 20) = *((_DWORD *)PinnedMode + 32);
  operator delete(0LL);
  *(_QWORD *)a2 = v17 + 2;
LABEL_12:
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v18, &EventProfilerExit, v19, 7011);
  return (unsigned int)v10;
}
