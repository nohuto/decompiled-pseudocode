/*
 * XREFs of ?CreateNewModeInfo@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C00EFE70
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C00A3070 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::CreateNewModeInfo(
        DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a2,
        struct _D3DKMDT_VIDPN_SOURCE_MODE **a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // edi
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
  __int64 v22; // rcx
  __int64 v23; // rax

  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal((__int64)this) + 11);
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v6, &EventProfilerEnter, v7, 7005);
  v8 = WdLogNewEntry5_WdTrace(v6, v5);
  v10 = 0;
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
        v21 = WdLogNewEntry5_WdLowResource(v13);
        WdLogEvent5_WdLowResource(v21);
        operator delete(0LL);
        v23 = WdLogNewEntry5_WdError(v22);
        v10 = -1073741801;
        *(_QWORD *)(v23 + 24) = -1073741801LL;
        WdLogEvent5_WdError(v23);
      }
    }
    else
    {
      v20 = WdLogNewEntry5_WdError(v9);
      *(_QWORD *)(v20 + 24) = this;
      WdLogEvent5_WdError(v20);
      v10 = -1071774968;
    }
  }
  else
  {
    v19 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v19 + 24) = 0LL;
    WdLogEvent5_WdError(v19);
    v10 = -1071774960;
  }
  if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v16, &EventProfilerExit, v17, 7005);
  return v10;
}
