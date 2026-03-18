/*
 * XREFs of ?AcquirePinnedModeInfo@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C009AA10
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPinnedMode@DMMVIDPNTARGETMODESET@@QEAAPEAVDMMVIDPNTARGETMODE@@XZ @ 0x1C000E1C0 (-GetPinnedMode@DMMVIDPNTARGETMODESET@@QEAAPEAVDMMVIDPNTARGETMODE@@XZ.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?GetTextInfo@DMMVIDPNSOURCEMODE@@QEBAPEBW4_D3DKMDT_TEXT_RENDERING_FORMAT@@XZ @ 0x1C0044968 (-GetTextInfo@DMMVIDPNSOURCEMODE@@QEBAPEBW4_D3DKMDT_TEXT_RENDERING_FORMAT@@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00D93C0 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::AcquirePinnedModeInfo(
        DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a2,
        const struct _D3DKMDT_VIDPN_SOURCE_MODE **a3,
        __int64 a4)
{
  volatile signed __int32 *v4; // rax
  int v5; // ebx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct DMMVIDPNTARGETMODE *PinnedMode; // rsi
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD *v17; // rax
  __int64 v18; // rcx
  _QWORD *v19; // r14
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  _QWORD *v24; // r14
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  struct DMMVIDPNTARGETMODE *(__fastcall *v43)(DMMVIDPNTARGETMODESET *); // [rsp+20h] [rbp-18h] BYREF
  int v44; // [rsp+28h] [rbp-10h]

  v4 = (volatile signed __int32 *)DXGGLOBAL::m_pGlobal;
  v5 = 0;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v33 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v33 + 24) = 1815LL;
    WdLogEvent5_WdAssertion(v33);
    v4 = (volatile signed __int32 *)DXGGLOBAL::m_pGlobal;
  }
  _InterlockedIncrement(v4 + 10);
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 7003);
  v8 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v8 + 24) = this;
  *(_QWORD *)(v8 + 32) = a2;
  if ( !a2 )
  {
    v34 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v34 + 24) = 0LL;
    *(_QWORD *)(v34 + 32) = this;
    WdLogEvent5_WdError(v34);
    v5 = -1073741811;
    goto LABEL_18;
  }
  *(_QWORD *)a2 = 0LL;
  if ( !this || (v11 = this, *((_DWORD *)this + 32) != 1833173004) )
    v11 = 0LL;
  if ( !v11 )
  {
    v35 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v35 + 24) = this;
    WdLogEvent5_WdError(v35);
    v5 = -1071774968;
    goto LABEL_18;
  }
  v44 = 0;
  v43 = DMMVIDPNTARGETMODESET::GetPinnedMode;
  if ( !*((_BYTE *)v11 + 136) )
  {
    v36 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v36 + 24) = v11;
    WdLogEvent5_WdError(v36);
    v5 = -1071774944;
LABEL_36:
    v42 = WdLogNewEntry5_WdError(v38, v37);
    *(_QWORD *)(v42 + 24) = v11;
    *(_QWORD *)(v42 + 32) = v5;
    WdLogEvent5_WdError(v42);
    goto LABEL_18;
  }
  PinnedMode = DMMVIDPNTARGETMODESET::GetPinnedMode(v11);
  if ( !PinnedMode )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v13, v12, v15, v16) + 24) = &v43;
    v5 = 1075708679;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(&v43, v30, v31, v32) + 24) = v11;
    goto LABEL_18;
  }
  v17 = operator new(0x38uLL, 0x4E506456u, PagedPool);
  v19 = v17;
  if ( v17 )
  {
    *(_DWORD *)v17 = 305419896;
    v17[1] = PinnedMode;
    memset(v17 + 2, 0, 0x28uLL);
  }
  else
  {
    v19 = 0LL;
  }
  if ( !v19 )
  {
    v41 = WdLogNewEntry5_WdLowResource(v18);
    *(_QWORD *)(v41 + 24) = v11;
    WdLogEvent5_WdLowResource(v41);
    operator delete(0LL);
    v5 = -1073741801;
    goto LABEL_36;
  }
  operator delete(0LL);
  v24 = v19 + 2;
  *(_DWORD *)v24 = *((_DWORD *)PinnedMode + 6);
  v25 = *((_DWORD *)PinnedMode + 18);
  *((_DWORD *)v24 + 1) = v25;
  if ( v25 == 1 )
  {
LABEL_14:
    v26 = *((unsigned int *)PinnedMode + 18);
    if ( (((_DWORD)v26 - 1) & 0xFFFFFFFC) != 0 || (_DWORD)v26 == 2 )
    {
      v40 = WdLogNewEntry5_WdAssertion(v26, v20, v22, v23);
      WdLogEvent5_WdAssertion(v40);
    }
    *(_OWORD *)(v24 + 1) = *(_OWORD *)((char *)PinnedMode + 76);
    *(_OWORD *)(v24 + 3) = *(_OWORD *)((char *)PinnedMode + 92);
    goto LABEL_17;
  }
  if ( v25 != 2 )
  {
    if ( v25 <= 2 || v25 > 4 )
    {
      if ( (unsigned int)(v25 - 1) <= 3 )
      {
        v39 = WdLogNewEntry5_WdAssertion(v21, v20, v22, v23);
        WdLogEvent5_WdAssertion(v39);
      }
      goto LABEL_17;
    }
    goto LABEL_14;
  }
  *((enum _D3DKMDT_TEXT_RENDERING_FORMAT *)v24 + 2) = *DMMVIDPNSOURCEMODE::GetTextInfo(PinnedMode, v20, v22, v23);
LABEL_17:
  operator delete(0LL);
  *(_QWORD *)a2 = v24;
LABEL_18:
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v27, &EventProfilerExit, v28, 7003);
  return (unsigned int)v5;
}
