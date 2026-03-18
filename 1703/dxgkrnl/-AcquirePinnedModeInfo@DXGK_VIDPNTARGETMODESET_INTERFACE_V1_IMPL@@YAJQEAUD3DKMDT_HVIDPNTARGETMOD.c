/*
 * XREFs of ?AcquirePinnedModeInfo@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C009ABC0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPinnedMode@DMMVIDPNTARGETMODESET@@QEAAPEAVDMMVIDPNTARGETMODE@@XZ @ 0x1C000E1C0 (-GetPinnedMode@DMMVIDPNTARGETMODESET@@QEAAPEAVDMMVIDPNTARGETMODE@@XZ.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C00D93C0 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::AcquirePinnedModeInfo(
        DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a2,
        const struct _D3DKMDT_VIDPN_TARGET_MODE **a3,
        __int64 a4)
{
  volatile signed __int32 *v4; // rax
  int v5; // edi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct DMMVIDPNTARGETMODE *PinnedMode; // rbp
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD *v17; // rax
  __int64 v18; // rcx
  _QWORD *v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rax
  struct DMMVIDPNTARGETMODE *(__fastcall *v34)(DMMVIDPNTARGETMODESET *); // [rsp+20h] [rbp-18h] BYREF
  int v35; // [rsp+28h] [rbp-10h]

  v4 = (volatile signed __int32 *)DXGGLOBAL::m_pGlobal;
  v5 = 0;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v26 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v26 + 24) = 1815LL;
    WdLogEvent5_WdAssertion(v26);
    v4 = (volatile signed __int32 *)DXGGLOBAL::m_pGlobal;
  }
  _InterlockedIncrement(v4 + 14);
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 7011);
  v8 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v8 + 24) = this;
  *(_QWORD *)(v8 + 32) = a2;
  if ( !a2 )
  {
    v27 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v27 + 24) = 0LL;
    *(_QWORD *)(v27 + 32) = this;
    WdLogEvent5_WdError(v27);
    v5 = -1073741811;
    goto LABEL_14;
  }
  *(_QWORD *)a2 = 0LL;
  if ( !this || (v11 = this, *((_DWORD *)this + 32) != 1833173005) )
    v11 = 0LL;
  if ( !v11 )
  {
    v28 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v28 + 24) = this;
    WdLogEvent5_WdError(v28);
    v5 = -1071774967;
    goto LABEL_14;
  }
  v35 = 0;
  v34 = DMMVIDPNTARGETMODESET::GetPinnedMode;
  if ( !*((_BYTE *)v11 + 136) )
  {
    v29 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v29 + 24) = v11;
    WdLogEvent5_WdError(v29);
    v5 = -1071774944;
LABEL_25:
    v33 = WdLogNewEntry5_WdError(v31, v30);
    *(_QWORD *)(v33 + 24) = v11;
    *(_QWORD *)(v33 + 32) = v5;
    WdLogEvent5_WdError(v33);
    goto LABEL_14;
  }
  PinnedMode = DMMVIDPNTARGETMODESET::GetPinnedMode(v11);
  if ( !PinnedMode )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v13, v12, v15, v16) + 24) = &v34;
    v5 = 1075708679;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(&v34, v23, v24, v25) + 24) = v11;
    goto LABEL_14;
  }
  v17 = operator new(0x58uLL, 0x4E506456u, PagedPool);
  v19 = v17;
  if ( v17 )
  {
    *(_DWORD *)v17 = 305419896;
    v17[1] = PinnedMode;
    memset(v17 + 2, 0, 0x48uLL);
  }
  else
  {
    v19 = 0LL;
  }
  if ( !v19 )
  {
    v32 = WdLogNewEntry5_WdLowResource(v18);
    *(_QWORD *)(v32 + 24) = v11;
    WdLogEvent5_WdLowResource(v32);
    operator delete(0LL);
    v5 = -1073741801;
    goto LABEL_25;
  }
  operator delete(0LL);
  *((_DWORD *)v19 + 4) = *((_DWORD *)PinnedMode + 6);
  *(_OWORD *)(v19 + 3) = *(_OWORD *)((char *)PinnedMode + 72);
  *(_OWORD *)(v19 + 5) = *(_OWORD *)((char *)PinnedMode + 88);
  *(_OWORD *)(v19 + 7) = *(_OWORD *)((char *)PinnedMode + 104);
  v19[9] = *((_QWORD *)PinnedMode + 15);
  *((_DWORD *)v19 + 20) = *((_DWORD *)PinnedMode + 32);
  operator delete(0LL);
  *(_QWORD *)a2 = v19 + 2;
LABEL_14:
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v20, &EventProfilerExit, v21, 7011);
  return (unsigned int)v5;
}
