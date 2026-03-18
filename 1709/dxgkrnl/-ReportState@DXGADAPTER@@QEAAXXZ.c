/*
 * XREFs of ?ReportState@DXGADAPTER@@QEAAXXZ @ 0x1C01723C0
 * Callers:
 *     ?ReportState@DXGGLOBAL@@QEAAXXZ @ 0x1C01ABB54 (-ReportState@DXGGLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000278C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     McTemplateK0ppqxqxqqqqqqqqqccccqqqqqQR23qqp @ 0x1C0015028 (McTemplateK0ppqxqxqqqqqqqqqccccqqqqqQR23qqp.c)
 *     McTemplateK0pqqq @ 0x1C00206A0 (McTemplateK0pqqq.c)
 *     McTemplateK0pqqqq @ 0x1C0020738 (McTemplateK0pqqqq.c)
 *     McTemplateK0pqqqqjzqqx @ 0x1C00207E0 (McTemplateK0pqqqqjzqqx.c)
 *     McTemplateK0pqqqxx @ 0x1C0020914 (McTemplateK0pqqqxx.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C0084D8C (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00CECE8 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?ReportNodeMetadata@DXGADAPTER@@QEBAXXZ @ 0x1C0112EF4 (-ReportNodeMetadata@DXGADAPTER@@QEBAXXZ.c)
 *     DpiReportAdapter @ 0x1C011A830 (DpiReportAdapter.c)
 *     ?ReportState@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C01762D0 (-ReportState@ADAPTER_DISPLAY@@QEAAXXZ.c)
 *     ?ReportState@ADAPTER_RENDER@@QEAAXXZ @ 0x1C01779BC (-ReportState@ADAPTER_RENDER@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::ReportState(DXGADAPTER *this)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  unsigned int *AdapterType; // rax
  char v5; // r11
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
    *(_QWORD *)(v3 + 24) = 7964LL;
    WdLogEvent5_WdAssertion(v3);
  }
  if ( bTracingEnabled )
  {
    AdapterType = DXGADAPTER::GetAdapterType(this, &v37);
    v6 = *((_DWORD *)this + 421);
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
        *((_DWORD *)this + 296),
        *((_QWORD *)this + 204),
        *((_DWORD *)this + 410),
        *((_QWORD *)this + 206),
        *((_DWORD *)this + 414),
        *((_DWORD *)this + 415),
        *((_DWORD *)this + 417),
        *((_DWORD *)this + 418),
        *((_DWORD *)this + 419),
        *((_DWORD *)this + 422),
        *((_DWORD *)this + 416),
        *((_DWORD *)this + 420),
        v6,
        (v6 >> 10) & 0xF,
        v7,
        (v6 >> 17) & 7,
        (v6 & 0x80000000) != 0,
        *((_DWORD *)this + 423),
        *((_DWORD *)this + 424),
        v33,
        *((_DWORD *)this + 426),
        *((_DWORD *)this + 427),
        v34,
        *((_DWORD *)this + 622),
        *AdapterType,
        v5);
    }
  }
  DpiReportAdapter(*((_QWORD *)this + 24), (__int64)this);
  if ( bTracingEnabled && *((_DWORD *)this + 622) )
  {
    v10 = (wchar_t *)operator new[](0x50uLL, 0x4B677844u, PagedPool);
    if ( v10 )
    {
      for ( i = 0; i < *((_DWORD *)this + 622); ++i )
      {
        v12 = *((_QWORD *)this + 293) + 520LL * i;
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
      ExFreePoolWithTag(v10, 0);
    }
    for ( k = 0; k < *((_DWORD *)this + 622); ++k )
    {
      v17 = 520LL * k;
      v18 = *((_QWORD *)this + 293);
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
  v25 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 288);
  if ( v25 )
    ADAPTER_DISPLAY::ReportState(v25);
  v26 = (ADAPTER_RENDER *)*((_QWORD *)this + 289);
  if ( v26 )
    ADAPTER_RENDER::ReportState(v26);
  DXGADAPTER::ReportNodeMetadata(this, v8, (__int64)v9);
}
