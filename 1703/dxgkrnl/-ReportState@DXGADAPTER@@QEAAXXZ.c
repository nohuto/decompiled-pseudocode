/*
 * XREFs of ?ReportState@DXGADAPTER@@QEAAXXZ @ 0x1C016EBE8
 * Callers:
 *     ?ReportState@DXGGLOBAL@@QEAAXXZ @ 0x1C0196A04 (-ReportState@DXGGLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000622C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     Template_ppqxqxqqqqqqqqqccccqqqqqQR23qqp @ 0x1C001401C (Template_ppqxqxqqqqqqqqqccccqqqqqQR23qqp.c)
 *     Template_pqqq @ 0x1C00228F8 (Template_pqqq.c)
 *     Template_pqqqqjzqqx @ 0x1C0022988 (Template_pqqqqjzqqx.c)
 *     Template_pqqqxx @ 0x1C0022AC4 (Template_pqqqxx.c)
 *     Template_pdqqq @ 0x1C0042BC8 (Template_pdqqq.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00B1A9C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C00D3750 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     DpiReportAdapter @ 0x1C0111384 (DpiReportAdapter.c)
 *     ?ReportState@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C0172790 (-ReportState@ADAPTER_DISPLAY@@QEAAXXZ.c)
 *     ?ReportState@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0173ECC (-ReportState@ADAPTER_RENDER@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::ReportState(DXGADAPTER *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // rdi
  unsigned int *AdapterType; // rax
  int v9; // r9d
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  wchar_t *v13; // r14
  unsigned int i; // esi
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // r8
  unsigned int j; // ebp
  unsigned int k; // esi
  __int64 v20; // rcx
  __int64 v21; // rax
  unsigned int *v22; // rdi
  int v23; // r14d
  unsigned int m; // ebp
  __int64 v25; // rdi
  __int64 v26; // rcx
  int v27; // esi
  ADAPTER_DISPLAY *v28; // rcx
  ADAPTER_RENDER *v29; // rcx
  __int64 v30; // [rsp+20h] [rbp-128h]
  __int64 v31; // [rsp+28h] [rbp-120h]
  __int64 v32; // [rsp+30h] [rbp-118h]
  __int64 v33; // [rsp+38h] [rbp-110h]
  __int64 v34; // [rsp+50h] [rbp-F8h]
  __int64 v35; // [rsp+58h] [rbp-F0h]
  int v36; // [rsp+C0h] [rbp-88h]
  int v37; // [rsp+D8h] [rbp-70h]
  struct _UNICODE_STRING v38; // [rsp+100h] [rbp-48h] BYREF
  struct _STRING DestinationString; // [rsp+110h] [rbp-38h] BYREF
  int v40; // [rsp+150h] [rbp+8h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v3, v2, v4, v5);
    *(_QWORD *)(v6 + 24) = 7954LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( bTracingEnabled )
  {
    v7 = *((_QWORD *)this + 30);
    AdapterType = DXGADAPTER::GetAdapterType(this, &v40);
    v9 = *((_DWORD *)this + 415);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    {
      v10 = (unsigned int)v9 >> 14;
      LOBYTE(v10) = v10 & 7;
      Template_ppqxqxqqqqqqqqqccccqqqqqQR23qqp(
        v10,
        &EventReportAdapter,
        v9 < 0,
        *((_QWORD *)this + 24),
        (char)this,
        *((_DWORD *)this + 290),
        *((_QWORD *)this + 201),
        *((_DWORD *)this + 404),
        *((_QWORD *)this + 203),
        *((_DWORD *)this + 408),
        *((_DWORD *)this + 409),
        *((_DWORD *)this + 411),
        *((_DWORD *)this + 412),
        *((_DWORD *)this + 413),
        *((_DWORD *)this + 416),
        *((_DWORD *)this + 410),
        *((_DWORD *)this + 414),
        v9,
        ((unsigned int)v9 >> 10) & 0xF,
        v10,
        ((unsigned int)v9 >> 17) & 7,
        v9 < 0,
        *((_DWORD *)this + 417),
        *((_DWORD *)this + 418),
        v36,
        *((_DWORD *)this + 420),
        *((_DWORD *)this + 421),
        v37,
        *((_DWORD *)this + 616),
        *AdapterType,
        v7);
    }
  }
  DpiReportAdapter(*((_QWORD *)this + 24), (__int64)this);
  if ( bTracingEnabled && *((_DWORD *)this + 616) )
  {
    v13 = (wchar_t *)operator new[](0x50uLL, 0x4B677844u, PagedPool);
    if ( v13 )
    {
      for ( i = 0; i < *((_DWORD *)this + 616); ++i )
      {
        v15 = *((_QWORD *)this + 290) + 520LL * i;
        RtlInitAnsiString(&DestinationString, (PCSZ)(v15 + 236));
        *(_DWORD *)&v38.Length = 5242880;
        v38.Buffer = v13;
        if ( RtlAnsiStringToUnicodeString(&v38, &DestinationString, 0) < 0 )
          RtlInitUnicodeString(&v38, L"Unknown");
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        {
          LODWORD(v35) = *(_DWORD *)(v15 + 344);
          LODWORD(v34) = *(_DWORD *)(v15 + 216);
          LODWORD(v33) = *(_DWORD *)(v15 + 8);
          LODWORD(v32) = *(_DWORD *)(v15 + 212);
          LODWORD(v31) = *(_DWORD *)(v15 + 208);
          LODWORD(v30) = i;
          Template_pqqqqjzqqx(
            v15 + 220,
            v16,
            v17,
            this,
            v30,
            v31,
            v32,
            v33,
            v15 + 220,
            v38.Buffer,
            v34,
            v35,
            *(_QWORD *)(v15 + 368));
        }
        for ( j = 0; j < *(_DWORD *)(v15 + 8); ++j )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
          {
            LODWORD(v32) = *(_DWORD *)(v15 + 24LL * j + 32);
            LODWORD(v31) = j;
            LODWORD(v30) = i;
            Template_pqqqxx(
              3LL * j,
              v16,
              v17,
              this,
              v30,
              v31,
              v32,
              *(_QWORD *)(v15 + 24LL * j + 16),
              *(_QWORD *)(v15 + 24LL * j + 24));
          }
        }
      }
      ExFreePoolWithTag(v13, 0);
    }
    for ( k = 0; k < *((_DWORD *)this + 616); ++k )
    {
      v20 = 520LL * k;
      v21 = *((_QWORD *)this + 290);
      v22 = *(unsigned int **)(v20 + v21 + 512);
      if ( v22 )
      {
        v23 = *(_DWORD *)(v20 + v21 + 212);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
        {
          LODWORD(v33) = v22[48];
          LODWORD(v32) = *v22;
          LODWORD(v31) = *(_DWORD *)(v20 + v21 + 212);
          LODWORD(v30) = k;
          Template_pdqqq(v20, &Dxgk_PowerPStateComponent, v12, this, v30, v31, v32, v33);
        }
        for ( m = 0; m < *v22; ++m )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
          {
            LODWORD(v32) = v22[m + 1];
            LODWORD(v31) = m;
            LODWORD(v30) = v23;
            Template_pqqq((unsigned int)v32, &Dxgk_PowerPState, v12, this, v30, v31, v32);
          }
        }
      }
    }
  }
  v25 = *((_QWORD *)this + 24);
  v26 = *(_QWORD *)(v25 + 64);
  v27 = *(_DWORD *)(v26 + 4092);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(v32) = 0;
    LODWORD(v31) = *(unsigned __int8 *)(v26 + 4096);
    LODWORD(v30) = v31;
    Template_pqqq(v26, &EventBrightness, v12, v25, v30, v31, v32);
  }
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(v32) = 0;
    LODWORD(v31) = v27;
    LODWORD(v30) = v27;
    Template_pqqq(v26, &EventBacklightOptimizationLevel, v12, v25, v30, v31, v32);
  }
  v28 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 285);
  if ( v28 )
    ADAPTER_DISPLAY::ReportState(v28);
  v29 = (ADAPTER_RENDER *)*((_QWORD *)this + 286);
  if ( v29 )
    ADAPTER_RENDER::ReportState(v29);
  DXGADAPTER::ReportNodeMetadata(this, v11, v12);
}
