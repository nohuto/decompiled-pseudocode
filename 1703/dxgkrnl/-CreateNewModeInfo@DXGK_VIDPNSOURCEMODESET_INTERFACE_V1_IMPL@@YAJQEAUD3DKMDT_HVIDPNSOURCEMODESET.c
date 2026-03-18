/*
 * XREFs of ?CreateNewModeInfo@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C009B560
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C00D93C0 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::CreateNewModeInfo(
        DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a2,
        struct _D3DKMDT_VIDPN_SOURCE_MODE **a3,
        __int64 a4)
{
  volatile signed __int32 *v4; // rax
  unsigned int v5; // edi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v11; // rsi
  _QWORD *v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rbx
  _DWORD *v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax

  v4 = (volatile signed __int32 *)DXGGLOBAL::m_pGlobal;
  v5 = 0;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v19 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v19 + 24) = 1815LL;
    WdLogEvent5_WdAssertion(v19);
    v4 = (volatile signed __int32 *)DXGGLOBAL::m_pGlobal;
  }
  _InterlockedIncrement(v4 + 11);
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, (__int64)a3, 7005);
  v8 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
  *(_QWORD *)(v8 + 24) = this;
  *(_QWORD *)(v8 + 32) = a2;
  if ( a2 )
  {
    *(_QWORD *)a2 = 0LL;
    if ( !this || (v11 = this, *((_DWORD *)this + 32) != 1833173004) )
      v11 = 0LL;
    if ( v11 )
    {
      v12 = operator new(0x38uLL, 0x4E506456u, PagedPool);
      v14 = v12;
      if ( v12 )
      {
        *(_DWORD *)v12 = 305419896;
        v12[1] = 0LL;
        memset(v12 + 2, 0, 0x28uLL);
      }
      else
      {
        v14 = 0LL;
      }
      if ( v14 )
      {
        operator delete(0LL);
        ++*((_DWORD *)v11 + 20);
        v15 = v14 + 2;
        *v15 = *((_DWORD *)v11 + 20);
        v15[1] = 0;
        operator delete(0LL);
        *(_QWORD *)a2 = v15;
      }
      else
      {
        v22 = WdLogNewEntry5_WdLowResource(v13);
        WdLogEvent5_WdLowResource(v22);
        operator delete(0LL);
        v25 = WdLogNewEntry5_WdError(v24, v23);
        v5 = -1073741801;
        *(_QWORD *)(v25 + 24) = -1073741801LL;
        WdLogEvent5_WdError(v25);
      }
    }
    else
    {
      v21 = WdLogNewEntry5_WdError(v10, v9);
      *(_QWORD *)(v21 + 24) = this;
      WdLogEvent5_WdError(v21);
      v5 = -1071774968;
    }
  }
  else
  {
    v20 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v20 + 24) = 0LL;
    WdLogEvent5_WdError(v20);
    v5 = -1071774960;
  }
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v16, &EventProfilerExit, v17, 7005);
  return v5;
}
