/*
 * XREFs of ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C019CFC4
 * Callers:
 *     DxgkAddAdapter @ 0x1C01A18E8 (DxgkAddAdapter.c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000DC30 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014EF0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015410 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015490 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     McTemplateK0ppqxqxqqqqqqqqqccccqqqqqQR23qqp @ 0x1C001B05C (McTemplateK0ppqxqxqqqqqqqqqccccqqqqqQR23qqp.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ??_GDXGADAPTER@@QEAAPEAXI@Z @ 0x1C003276C (--_GDXGADAPTER@@QEAAPEAXI@Z.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C00F51FC (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ??0DXGADAPTER@@QEAA@PEAVDXGGLOBAL@@@Z @ 0x1C014774C (--0DXGADAPTER@@QEAA@PEAVDXGGLOBAL@@@Z.c)
 *     ?AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0147E6C (-AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CO.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C01489E8 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C0149978 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     ?ReportNodeMetadata@DXGADAPTER@@QEBAXXZ @ 0x1C014ED58 (-ReportNodeMetadata@DXGADAPTER@@QEBAXXZ.c)
 *     ?FinalizeInitialization@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0159BBC (-FinalizeInitialization@ADAPTER_RENDER@@QEAAJXZ.c)
 *     DpiReportAdapter @ 0x1C01F0058 (DpiReportAdapter.c)
 */

__int64 __fastcall DXGGLOBAL::CreateAdapter(
        DXGGLOBAL *this,
        struct _DEVICE_OBJECT *a2,
        struct DXGADAPTER **a3,
        struct _DXGK_ADAPTER_CAPS *a4,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a5)
{
  char *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  DXGADAPTER *v13; // rbx
  __int64 v14; // rax
  int v16; // esi
  __int64 v17; // rax
  int v18; // esi
  __int64 v19; // r14
  int v20; // r15d
  int *AdapterType; // rax
  unsigned int v22; // r9d
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // r8
  ADAPTER_RENDER *v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rax
  DXGADAPTER **v31; // rax
  __int64 v32; // rcx
  int updated; // eax
  __int64 v34; // rcx
  __int64 v35; // rdi
  __int64 v36; // rax
  int v37; // [rsp+C0h] [rbp-78h]
  int v38; // [rsp+D8h] [rbp-60h]
  int v39; // [rsp+100h] [rbp-38h] BYREF
  _BYTE v40[8]; // [rsp+108h] [rbp-30h] BYREF
  DXGADAPTER *v41; // [rsp+110h] [rbp-28h]
  char v42; // [rsp+118h] [rbp-20h]

  v9 = (char *)operator new(0x1070uLL, 0x4B677844u, 1, (POOL_TYPE)512);
  if ( v9 )
    v13 = DXGADAPTER::DXGADAPTER(v9, this);
  else
    v13 = 0LL;
  if ( !v13 )
  {
    v14 = WdLogNewEntry5_WdWarning(v11, v10, v12);
    *(_QWORD *)(v14 + 24) = -1073741801LL;
    WdLogEvent5_WdWarning(v14);
    return 3221225495LL;
  }
  v16 = DXGADAPTER::Initialize(v13, a2, a4);
  if ( v16 >= 0 )
  {
    if ( bTracingEnabled )
    {
      v17 = *((_QWORD *)v13 + 307);
      if ( v17 )
        v18 = *(_DWORD *)(v17 + 80);
      else
        LOBYTE(v18) = 0;
      v19 = *((_QWORD *)v13 + 30);
      v20 = *((_DWORD *)v13 + 660);
      AdapterType = DXGADAPTER::GetAdapterType(v13, &v39);
      v22 = *((_DWORD *)v13 + 455);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      {
        v23 = v22 >> 14;
        LOBYTE(v23) = v23 & 7;
        McTemplateK0ppqxqxqqqqqqqqqccccqqqqqQR23qqp(
          v23,
          &EventCreateAdapter,
          v22 >> 31,
          (__int64)a2,
          (char)v13,
          v18,
          *((_QWORD *)v13 + 221),
          *((_DWORD *)v13 + 444),
          *((_QWORD *)v13 + 223),
          *((_DWORD *)v13 + 448),
          *((_DWORD *)v13 + 449),
          *((_DWORD *)v13 + 451),
          *((_DWORD *)v13 + 452),
          *((_DWORD *)v13 + 453),
          *((_DWORD *)v13 + 456),
          *((_DWORD *)v13 + 450),
          *((_DWORD *)v13 + 454),
          v22,
          (v22 >> 10) & 0xF,
          v23,
          (v22 >> 17) & 7,
          (v22 & 0x80000000) != 0,
          *((_DWORD *)v13 + 457),
          *((_DWORD *)v13 + 458),
          v37,
          *((_DWORD *)v13 + 460),
          *((_DWORD *)v13 + 461),
          v38,
          v20,
          *AdapterType,
          v19);
      }
    }
    DpiReportAdapter(a2, v13);
    if ( *((_QWORD *)v13 + 308) )
      DXGADAPTER::ReportNodeMetadata(v13, v24, v25);
    DXGADAPTER::AdapterTelemetry((__int64)v13, 0, (__int64)a5);
    v16 = 0;
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 24) + 64LL) + 3728LL) = v13;
    v26 = (ADAPTER_RENDER *)*((_QWORD *)v13 + 308);
    if ( !v26 || (v16 = ADAPTER_RENDER::FinalizeInitialization(v26), v16 >= 0) )
    {
      DXGFASTMUTEX::Acquire((DXGGLOBAL *)((char *)this + 408));
      v31 = (DXGADAPTER **)((char *)this + 448);
      v32 = *((_QWORD *)this + 56);
      if ( *(DXGGLOBAL **)(v32 + 8) != (DXGGLOBAL *)((char *)this + 448) )
        __fastfail(3u);
      *(_QWORD *)v13 = v32;
      *((_QWORD *)v13 + 1) = v31;
      *(_QWORD *)(v32 + 8) = v13;
      *v31 = v13;
      if ( *((_QWORD *)v13 + 308) && (*((_DWORD *)v13 + 75) & 0x4000) == 0 )
      {
        v41 = v13;
        v42 = 0;
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v40);
        if ( *((_DWORD *)v13 + 44) == 1 )
        {
          if ( *((_DWORD *)this + 418) != 10 || (*((_DWORD *)this + 421) & 1) != 0 )
            (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 308) + 520LL) + 8LL)
                                                   + 968LL))(
              *(_QWORD *)(*((_QWORD *)v13 + 308) + 528LL),
              *((_DWORD *)this + 421) & 1);
          if ( *(_QWORD *)((char *)this + 1676) != 0x1E00000032LL )
            (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 308) + 544LL)
                                                                       + 8LL)
                                                           + 1160LL))(
              *(_QWORD *)(*((_QWORD *)v13 + 308) + 552LL),
              *((unsigned int *)this + 419),
              *((unsigned int *)this + 420));
        }
        if ( v42 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v40);
      }
      DXGFASTMUTEX::Release((struct _KTHREAD **)this + 51);
      *((_BYTE *)v13 + 4172) = 1;
      updated = ZwUpdateWnfStateData(&WNF_DX_ADAPTER_START, 0LL, 0LL, 0LL, 0LL, 0, 0);
      v35 = updated;
      if ( updated < 0 )
      {
        v36 = WdLogNewEntry5_WdError(v34);
        *(_QWORD *)(v36 + 24) = v13;
        *(_QWORD *)(v36 + 32) = v35;
        WdLogEvent5_WdError(v36);
      }
      *a3 = v13;
      return (unsigned int)v16;
    }
    v30 = WdLogNewEntry5_WdWarning(v28, v27, v29);
    *(_QWORD *)(v30 + 24) = -1073741801LL;
    *(_QWORD *)(v30 + 32) = 2040LL;
    WdLogEvent5_WdWarning(v30);
    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 24) + 64LL) + 3728LL) = 0LL;
    DXGADAPTER::Destroy(v13);
  }
  DXGADAPTER::`scalar deleting destructor'(v13);
  return (unsigned int)v16;
}
