/*
 * XREFs of ?PinMode@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@I@Z @ 0x1C02209D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@SAPEAVDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C0005EE4 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@S.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     ?PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z @ 0x1C00BE024 (-PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z.c)
 */

__int64 __fastcall DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::PinMode(
        DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a2,
        __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rsi
  DMMVIDPNSOURCEMODESET *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  int v14; // ebx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  int v20; // [rsp+20h] [rbp-18h] BYREF
  __int64 v21; // [rsp+28h] [rbp-10h]

  v21 = 0LL;
  v4 = (unsigned int)a2;
  v20 = 7007;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 7007);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v20, 7007);
  v9 = WdLogNewEntry5_WdTrace(v6, v5, v7, v8);
  v10 = v4;
  *(_QWORD *)(v9 + 24) = v4;
  *(_QWORD *)(v9 + 32) = this;
  v11 = (DMMVIDPNSOURCEMODESET *)ExposedViaHandle<DMMVIDPNSOURCEMODESET,D3DKMDT_HVIDPNSOURCEMODESET__ *>::GetFromHandle((__int64)this);
  if ( v11 )
  {
    v14 = DMMVIDPNSOURCEMODESET::PinMode(v11, v4);
    if ( v14 >= 0 )
    {
      v14 = 0;
    }
    else
    {
      v16 = WdLogNewEntry5_WdError(v15);
      *(_QWORD *)(v16 + 24) = v10;
      *(_QWORD *)(v16 + 32) = this;
      WdLogEvent5_WdError(v16);
    }
  }
  else
  {
    v13 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v13 + 24) = this;
    WdLogEvent5_WdError(v13);
    v14 = -1071774968;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v17, &EventProfilerExit, v18, v20);
  return (unsigned int)v14;
}
