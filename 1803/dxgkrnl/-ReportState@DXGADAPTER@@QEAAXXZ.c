/*
 * XREFs of ?ReportState@DXGADAPTER@@QEAAXXZ @ 0x1C014EE2C
 * Callers:
 *     ?ReportState@DXGGLOBAL@@QEAAXXZ @ 0x1C01A0D58 (-ReportState@DXGGLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00160D0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     McTemplateK0ppqxqxqqqqqqqqqccccqqqqqQR23qqp @ 0x1C001B05C (McTemplateK0ppqxqxqqqqqqqqqccccqqqqqQR23qqp.c)
 *     McTemplateK0pqqq @ 0x1C00278B8 (McTemplateK0pqqq.c)
 *     McTemplateK0pqqqqjzqqx @ 0x1C0027950 (McTemplateK0pqqqqjzqqx.c)
 *     McTemplateK0pqqqxx @ 0x1C0027A84 (McTemplateK0pqqqxx.c)
 *     McTemplateK0pqqqq @ 0x1C0042734 (McTemplateK0pqqqq.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C00F51FC (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ?ReportNodeMetadata@DXGADAPTER@@QEBAXXZ @ 0x1C014ED58 (-ReportNodeMetadata@DXGADAPTER@@QEBAXXZ.c)
 *     ?ReportState@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C0156DE8 (-ReportState@ADAPTER_DISPLAY@@QEAAXXZ.c)
 *     ?ReportState@ADAPTER_RENDER@@QEAAXXZ @ 0x1C015B94C (-ReportState@ADAPTER_RENDER@@QEAAXXZ.c)
 *     DpiReportAdapter @ 0x1C01F0058 (DpiReportAdapter.c)
 */

void __fastcall DXGADAPTER::ReportState(DXGADAPTER *this)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rdi
  int *AdapterType; // rax
  unsigned int v6; // r9d
  __int64 v7; // rcx
  __int64 v8; // rdx
  const GUID *v9; // r8
  wchar_t *v10; // r14
  unsigned int i; // esi
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // r8
  unsigned int j; // ebp
  unsigned int k; // esi
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned int *v19; // rdi
  unsigned int v20; // r14d
  unsigned int m; // ebp
  _QWORD *v22; // rdi
  __int64 v23; // rcx
  unsigned int v24; // esi
  ADAPTER_DISPLAY *v25; // rcx
  ADAPTER_RENDER *v26; // rcx
  unsigned int Arg1[2]; // [rsp+20h] [rbp-128h]
  __int64 Arg2; // [rsp+28h] [rbp-120h]
  unsigned int Arg3[2]; // [rsp+30h] [rbp-118h]
  __int64 v30; // [rsp+38h] [rbp-110h]
  __int64 v31; // [rsp+50h] [rbp-F8h]
  __int64 v32; // [rsp+58h] [rbp-F0h]
  int v33; // [rsp+C0h] [rbp-88h]
  int v34; // [rsp+D8h] [rbp-70h]
  struct _UNICODE_STRING v35; // [rsp+100h] [rbp-48h] BYREF
  struct _STRING DestinationString; // [rsp+110h] [rbp-38h] BYREF
  int v37; // [rsp+150h] [rbp+8h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
  {
    v3 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v3 + 24) = 8397LL;
    WdLogEvent5_WdAssertion(v3);
  }
  if ( bTracingEnabled )
  {
    v4 = *((_QWORD *)this + 30);
    AdapterType = DXGADAPTER::GetAdapterType(this, &v37);
    v6 = *((_DWORD *)this + 455);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      v7 = v6 >> 14;
      LOBYTE(v7) = v7 & 7;
      McTemplateK0ppqxqxqqqqqqqqqccccqqqqqQR23qqp(
        v7,
        &EventReportAdapter,
        v6 >> 31,
        *((_QWORD *)this + 24),
        (char)this,
        *((_DWORD *)this + 320),
        *((_QWORD *)this + 221),
        *((_DWORD *)this + 444),
        *((_QWORD *)this + 223),
        *((_DWORD *)this + 448),
        *((_DWORD *)this + 449),
        *((_DWORD *)this + 451),
        *((_DWORD *)this + 452),
        *((_DWORD *)this + 453),
        *((_DWORD *)this + 456),
        *((_DWORD *)this + 450),
        *((_DWORD *)this + 454),
        v6,
        (v6 >> 10) & 0xF,
        v7,
        (v6 >> 17) & 7,
        (v6 & 0x80000000) != 0,
        *((_DWORD *)this + 457),
        *((_DWORD *)this + 458),
        v33,
        *((_DWORD *)this + 460),
        *((_DWORD *)this + 461),
        v34,
        *((_DWORD *)this + 660),
        *AdapterType,
        v4);
    }
  }
  DpiReportAdapter(*((_QWORD *)this + 24), this);
  if ( bTracingEnabled && *((_DWORD *)this + 660) )
  {
    v10 = (wchar_t *)operator new[](0x50uLL, 0x4B677844u, PagedPool);
    if ( v10 )
    {
      for ( i = 0; i < *((_DWORD *)this + 660); ++i )
      {
        v12 = *((_QWORD *)this + 312) + 520LL * i;
        RtlInitAnsiString(&DestinationString, (PCSZ)(v12 + 236));
        *(_DWORD *)&v35.Length = 5242880;
        v35.Buffer = v10;
        if ( RtlAnsiStringToUnicodeString(&v35, &DestinationString, 0) < 0 )
          RtlInitUnicodeString(&v35, L"Unknown");
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        {
          LODWORD(v32) = *(_DWORD *)(v12 + 344);
          LODWORD(v31) = *(_DWORD *)(v12 + 216);
          LODWORD(v30) = *(_DWORD *)(v12 + 8);
          Arg3[0] = *(_DWORD *)(v12 + 212);
          LODWORD(Arg2) = *(_DWORD *)(v12 + 208);
          Arg1[0] = i;
          McTemplateK0pqqqqjzqqx(
            v12 + 220,
            v13,
            v14,
            this,
            *(_QWORD *)Arg1,
            Arg2,
            *(_QWORD *)Arg3,
            v30,
            v12 + 220,
            v35.Buffer,
            v31,
            v32,
            *(_QWORD *)(v12 + 368));
        }
        for ( j = 0; j < *(_DWORD *)(v12 + 8); ++j )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
          {
            Arg3[0] = *(_DWORD *)(v12 + 24LL * j + 32);
            LODWORD(Arg2) = j;
            Arg1[0] = i;
            McTemplateK0pqqqxx(
              3LL * j,
              v13,
              v14,
              this,
              *(_QWORD *)Arg1,
              Arg2,
              *(_QWORD *)Arg3,
              *(_QWORD *)(v12 + 24LL * j + 16),
              *(_QWORD *)(v12 + 24LL * j + 24));
          }
        }
      }
      operator delete[](v10);
    }
    for ( k = 0; k < *((_DWORD *)this + 660); ++k )
    {
      v17 = 520LL * k;
      v18 = *((_QWORD *)this + 312);
      v19 = *(unsigned int **)(v17 + v18 + 512);
      if ( v19 )
      {
        v20 = *(_DWORD *)(v17 + v18 + 212);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        {
          LODWORD(v30) = v19[48];
          Arg3[0] = *v19;
          LODWORD(Arg2) = *(_DWORD *)(v17 + v18 + 212);
          Arg1[0] = k;
          McTemplateK0pqqqq(
            v17,
            &Dxgk_PowerPStateComponent,
            (__int64)v9,
            this,
            *(_QWORD *)Arg1,
            Arg2,
            *(_QWORD *)Arg3,
            v30);
        }
        for ( m = 0; m < *v19; ++m )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
            McTemplateK0pqqq((PMCGEN_TRACE_CONTEXT)v19[m + 1], &Dxgk_PowerPState, v9, this, v20, m, v19[m + 1]);
        }
      }
    }
  }
  v22 = (_QWORD *)*((_QWORD *)this + 24);
  v23 = v22[8];
  v24 = *(_DWORD *)(v23 + 4188);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0pqqq(
      (PMCGEN_TRACE_CONTEXT)v23,
      &EventBrightness,
      v9,
      v22,
      *(unsigned __int8 *)(v23 + 4192),
      *(unsigned __int8 *)(v23 + 4192),
      0);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    McTemplateK0pqqq((PMCGEN_TRACE_CONTEXT)v23, &EventBacklightOptimizationLevel, v9, v22, v24, v24, 0);
  v25 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 307);
  if ( v25 )
    ADAPTER_DISPLAY::ReportState(v25);
  v26 = (ADAPTER_RENDER *)*((_QWORD *)this + 308);
  if ( v26 )
    ADAPTER_RENDER::ReportState(v26);
  DXGADAPTER::ReportNodeMetadata(this, v8, (__int64)v9);
}
