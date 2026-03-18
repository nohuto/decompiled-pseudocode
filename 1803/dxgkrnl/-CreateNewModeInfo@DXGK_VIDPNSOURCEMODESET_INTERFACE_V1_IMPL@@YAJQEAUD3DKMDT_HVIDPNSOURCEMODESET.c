/*
 * XREFs of ?CreateNewModeInfo@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C00D1F40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0005B04 (--3@YAXPEAX@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     memset @ 0x1C001C940 (memset.c)
 */

__int64 __fastcall DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::CreateNewModeInfo(
        DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a2,
        struct _D3DKMDT_VIDPN_SOURCE_MODE **a3)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rcx
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v13; // rdi
  _DWORD *v14; // r14
  _QWORD *v15; // rax
  __int64 v16; // rcx
  _QWORD *v17; // rbx
  int v18; // eax
  int v19; // ebx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  int v28; // [rsp+20h] [rbp-18h] BYREF
  __int64 v29; // [rsp+28h] [rbp-10h]

  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal((__int64)this) + 11);
  v29 = 0LL;
  v28 = 7005;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v5, &EventProfilerEnter, v6, 7005);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v28, 7005);
  v11 = WdLogNewEntry5_WdTrace(v8, v7, v9, v10);
  *(_QWORD *)(v11 + 24) = this;
  *(_QWORD *)(v11 + 32) = a2;
  if ( a2 )
  {
    *(_QWORD *)a2 = 0LL;
    if ( this && *((_DWORD *)this + 32) == 1833173004 )
      v13 = this;
    else
      v13 = 0LL;
    if ( v13 )
    {
      v14 = 0LL;
      v15 = operator new[](0x38uLL, 0x4E506456u, PagedPool);
      v17 = v15;
      if ( v15 )
      {
        v15[1] = 0LL;
        *(_DWORD *)v15 = 305419896;
        memset(v15 + 2, 0, 0x28uLL);
      }
      else
      {
        v17 = 0LL;
      }
      if ( v17 )
      {
        operator delete(0LL);
        ++*((_DWORD *)v13 + 20);
        v14 = v17 + 2;
        v18 = *((_DWORD *)v13 + 20);
        *((_DWORD *)v17 + 5) = 0;
        v19 = 0;
        *v14 = v18;
      }
      else
      {
        v26 = WdLogNewEntry5_WdLowResource(v16);
        WdLogEvent5_WdLowResource(v26);
        v19 = -1073741801;
      }
      operator delete(0LL);
      if ( v19 < 0 )
      {
        v27 = WdLogNewEntry5_WdError(v20);
        *(_QWORD *)(v27 + 24) = v19;
        WdLogEvent5_WdError(v27);
      }
      else
      {
        *(_QWORD *)a2 = v14;
        v19 = 0;
      }
    }
    else
    {
      v25 = WdLogNewEntry5_WdError(v12);
      *(_QWORD *)(v25 + 24) = this;
      WdLogEvent5_WdError(v25);
      v19 = -1071774968;
    }
  }
  else
  {
    v24 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v24 + 24) = 0LL;
    WdLogEvent5_WdError(v24);
    v19 = -1071774960;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v21, &EventProfilerExit, v22, v28);
  return (unsigned int)v19;
}
