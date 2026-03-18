/*
 * XREFs of ?AcquirePinnedModeInfo@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C00EF900
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetPinnedMode@DMMVIDPNTARGETMODESET@@QEAAPEAVDMMVIDPNTARGETMODE@@XZ @ 0x1C000F550 (-GetPinnedMode@DMMVIDPNTARGETMODESET@@QEAAPEAVDMMVIDPNTARGETMODE@@XZ.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ?GetTextInfo@DMMVIDPNSOURCEMODE@@QEBAPEBW4_D3DKMDT_TEXT_RENDERING_FORMAT@@XZ @ 0x1C00355D0 (-GetTextInfo@DMMVIDPNSOURCEMODE@@QEBAPEBW4_D3DKMDT_TEXT_RENDERING_FORMAT@@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00A3070 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::AcquirePinnedModeInfo(
        DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a2,
        const struct _D3DKMDT_VIDPN_SOURCE_MODE **a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // ebx
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct DMMVIDPNTARGETMODE *PinnedMode; // rsi
  _QWORD *v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // r14
  __int64 v18; // rcx
  _QWORD *v19; // r14
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  struct DMMVIDPNTARGETMODE *(__fastcall *v34)(DMMVIDPNTARGETMODESET *); // [rsp+20h] [rbp-18h] BYREF
  int v35; // [rsp+28h] [rbp-10h]

  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal((__int64)this) + 10);
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v6, &EventProfilerEnter, v7, 7003);
  v8 = WdLogNewEntry5_WdTrace(v6, v5);
  v10 = 0;
  *(_QWORD *)(v8 + 24) = this;
  *(_QWORD *)(v8 + 32) = a2;
  if ( !a2 )
  {
    v26 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v26 + 24) = 0LL;
    *(_QWORD *)(v26 + 32) = this;
    WdLogEvent5_WdError(v26);
    v10 = -1073741811;
    goto LABEL_16;
  }
  *(_QWORD *)a2 = 0LL;
  if ( !this || (v11 = this, *((_DWORD *)this + 32) != 1833173004) )
    v11 = 0LL;
  if ( !v11 )
  {
    v27 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v27 + 24) = this;
    WdLogEvent5_WdError(v27);
    v10 = -1071774968;
    goto LABEL_16;
  }
  v35 = 0;
  v34 = DMMVIDPNTARGETMODESET::GetPinnedMode;
  if ( !*((_BYTE *)v11 + 136) )
  {
    v28 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v28 + 24) = v11;
    WdLogEvent5_WdError(v28);
    v10 = -1071774944;
LABEL_34:
    v33 = WdLogNewEntry5_WdError(v29);
    *(_QWORD *)(v33 + 32) = v10;
    *(_QWORD *)(v33 + 24) = v11;
    WdLogEvent5_WdError(v33);
    goto LABEL_16;
  }
  PinnedMode = DMMVIDPNTARGETMODESET::GetPinnedMode(v11);
  if ( !PinnedMode )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v13, v12) + 24) = &v34;
    v10 = 1075708679;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(&v34, v25) + 24) = v11;
    goto LABEL_16;
  }
  v15 = operator new(0x38uLL, 0x4E506456u, PagedPool);
  v17 = v15;
  if ( v15 )
  {
    *(_DWORD *)v15 = 305419896;
    v15[1] = PinnedMode;
    memset(v15 + 2, 0, 0x28uLL);
  }
  else
  {
    v17 = 0LL;
  }
  if ( !v17 )
  {
    v32 = WdLogNewEntry5_WdLowResource(v16);
    *(_QWORD *)(v32 + 24) = v11;
    WdLogEvent5_WdLowResource(v32);
    operator delete(0LL);
    v10 = -1073741801;
    goto LABEL_34;
  }
  operator delete(0LL);
  v19 = v17 + 2;
  *(_DWORD *)v19 = *((_DWORD *)PinnedMode + 6);
  v20 = *((_DWORD *)PinnedMode + 18);
  *((_DWORD *)v19 + 1) = v20;
  if ( v20 == 1 )
  {
LABEL_12:
    v21 = *((unsigned int *)PinnedMode + 18);
    if ( (((_DWORD)v21 - 1) & 0xFFFFFFFC) != 0 || (_DWORD)v21 == 2 )
    {
      v31 = WdLogNewEntry5_WdAssertion(v21);
      WdLogEvent5_WdAssertion(v31);
    }
    *(_OWORD *)(v19 + 1) = *(_OWORD *)((char *)PinnedMode + 76);
    *(_OWORD *)(v19 + 3) = *(_OWORD *)((char *)PinnedMode + 92);
    goto LABEL_15;
  }
  if ( v20 != 2 )
  {
    if ( v20 <= 2 || v20 > 4 )
    {
      if ( (unsigned int)(v20 - 1) <= 3 )
      {
        v30 = WdLogNewEntry5_WdAssertion(v18);
        WdLogEvent5_WdAssertion(v30);
      }
      goto LABEL_15;
    }
    goto LABEL_12;
  }
  *((enum _D3DKMDT_TEXT_RENDERING_FORMAT *)v19 + 2) = *DMMVIDPNSOURCEMODE::GetTextInfo(PinnedMode);
LABEL_15:
  operator delete(0LL);
  *(_QWORD *)a2 = v19;
LABEL_16:
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v22, &EventProfilerExit, v23, 7003);
  return (unsigned int)v10;
}
