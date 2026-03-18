/*
 * XREFs of ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0110684
 * Callers:
 *     DxgkAddAdapter @ 0x1C0111404 (DxgkAddAdapter.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B960 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D778 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D7E0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     Template_ppqxqxqqqqqqqqqccccqqqqqQR23qqp @ 0x1C001401C (Template_ppqxqxqqqqqqqqqccccqqqqqQR23qqp.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ??_GDXGADAPTER@@QEAAPEAXI@Z @ 0x1C00383E0 (--_GDXGADAPTER@@QEAAPEAXI@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00A5924 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C00D3750 (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ?FinalizeInitialization@ADAPTER_RENDER@@QEAAJXZ @ 0x1C010A1BC (-FinalizeInitialization@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?ReportNodeMetadata@DXGADAPTER@@QEBAXXZ @ 0x1C010B91C (-ReportNodeMetadata@DXGADAPTER@@QEBAXXZ.c)
 *     ?AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010B9C8 (-AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CO.c)
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C010C924 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     ??0DXGADAPTER@@QEAA@PEAVDXGGLOBAL@@@Z @ 0x1C010DE4C (--0DXGADAPTER@@QEAA@PEAVDXGGLOBAL@@@Z.c)
 *     DpiReportAdapter @ 0x1C0111384 (DpiReportAdapter.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C016D848 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
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
  __int64 v13; // r9
  DXGADAPTER *v14; // rbx
  int v15; // esi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  ADAPTER_RENDER *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  DXGADAPTER **v29; // rax
  __int64 v30; // rcx
  __int64 v32; // rax
  __int64 v33; // rax
  int v34; // esi
  __int64 v35; // r15
  int v36; // r12d
  unsigned int *AdapterType; // rax
  int v38; // r9d
  __int64 v39; // rcx
  __int64 v40; // rax
  int v41; // [rsp+C0h] [rbp-78h]
  int v42; // [rsp+D8h] [rbp-60h]
  int v43; // [rsp+100h] [rbp-38h] BYREF
  _BYTE v44[8]; // [rsp+108h] [rbp-30h] BYREF
  DXGADAPTER *v45; // [rsp+110h] [rbp-28h]
  char v46; // [rsp+118h] [rbp-20h]

  v9 = (char *)operator new(0xF40uLL, (__int64)a2, 1, (POOL_TYPE)512);
  if ( v9 )
    v14 = DXGADAPTER::DXGADAPTER(v9, this);
  else
    v14 = 0LL;
  if ( v14 )
  {
    v15 = DXGADAPTER::Initialize(v14, a2, a4, v13);
    if ( v15 >= 0 )
    {
      if ( bTracingEnabled )
      {
        v33 = *((_QWORD *)v14 + 285);
        if ( v33 )
          v34 = *(_DWORD *)(v33 + 80);
        else
          LOBYTE(v34) = 0;
        v35 = *((_QWORD *)v14 + 30);
        v36 = *((_DWORD *)v14 + 616);
        AdapterType = DXGADAPTER::GetAdapterType(v14, &v43);
        v38 = *((_DWORD *)v14 + 415);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        {
          v39 = (unsigned int)v38 >> 14;
          LOBYTE(v39) = v39 & 7;
          Template_ppqxqxqqqqqqqqqccccqqqqqQR23qqp(
            v39,
            &EventCreateAdapter,
            v38 < 0,
            (__int64)a2,
            (char)v14,
            v34,
            *((_QWORD *)v14 + 201),
            *((_DWORD *)v14 + 404),
            *((_QWORD *)v14 + 203),
            *((_DWORD *)v14 + 408),
            *((_DWORD *)v14 + 409),
            *((_DWORD *)v14 + 411),
            *((_DWORD *)v14 + 412),
            *((_DWORD *)v14 + 413),
            *((_DWORD *)v14 + 416),
            *((_DWORD *)v14 + 410),
            *((_DWORD *)v14 + 414),
            v38,
            ((unsigned int)v38 >> 10) & 0xF,
            v39,
            ((unsigned int)v38 >> 17) & 7,
            v38 < 0,
            *((_DWORD *)v14 + 417),
            *((_DWORD *)v14 + 418),
            v41,
            *((_DWORD *)v14 + 420),
            *((_DWORD *)v14 + 421),
            v42,
            v36,
            *AdapterType,
            v35);
        }
      }
      DpiReportAdapter(a2, v14);
      if ( *((_QWORD *)v14 + 286) )
        DXGADAPTER::ReportNodeMetadata(v14, v16, v17);
      DXGADAPTER::AdapterTelemetry((__int64)v14, 0, (__int64)a5);
      v15 = 0;
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 24) + 64LL) + 3704LL) = v14;
      v21 = (ADAPTER_RENDER *)*((_QWORD *)v14 + 286);
      if ( !v21 || (v15 = ADAPTER_RENDER::FinalizeInitialization(v21, v18, v19, v20), v15 >= 0) )
      {
        DXGFASTMUTEX::Acquire((DXGGLOBAL *)((char *)this + 400));
        v29 = (DXGADAPTER **)((char *)this + 440);
        v30 = *((_QWORD *)this + 55);
        if ( *(DXGGLOBAL **)(v30 + 8) != (DXGGLOBAL *)((char *)this + 440) )
          __fastfail(3u);
        *(_QWORD *)v14 = v30;
        *((_QWORD *)v14 + 1) = v29;
        *(_QWORD *)(v30 + 8) = v14;
        *v29 = v14;
        if ( *((_QWORD *)v14 + 286) && (*((_DWORD *)v14 + 75) & 0x4000) == 0 )
        {
          v45 = v14;
          v46 = 0;
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v44);
          if ( *((_DWORD *)v14 + 44) == 1 )
          {
            v27 = *((unsigned int *)this + 365);
            if ( (_DWORD)v27 != 10 || (*((_DWORD *)this + 368) & 1) != 0 )
              (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 286) + 408LL) + 8LL)
                                                     + 856LL))(
                *(_QWORD *)(*((_QWORD *)v14 + 286) + 416LL),
                *((_DWORD *)this + 368) & 1);
            v26 = *((unsigned int *)this + 366);
            if ( *((_QWORD *)this + 183) != 0x1E00000032LL )
              (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 286) + 432LL)
                                                                          + 8LL)
                                                              + 1144LL))(
                *(_QWORD *)(*((_QWORD *)v14 + 286) + 440LL),
                v26,
                *((unsigned int *)this + 367));
          }
          if ( v46 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v44);
        }
        DXGFASTMUTEX::Release((struct _KTHREAD **)this + 50, v26, v27, v28);
        *a3 = v14;
        return (unsigned int)v15;
      }
      v40 = WdLogNewEntry5_WdWarning(v23, v22, v24, v25);
      *(_QWORD *)(v40 + 24) = -1073741801LL;
      *(_QWORD *)(v40 + 32) = 1884LL;
      WdLogEvent5_WdWarning(v40);
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v14 + 24) + 64LL) + 3704LL) = 0LL;
      DXGADAPTER::Destroy(v14);
    }
    DXGADAPTER::`scalar deleting destructor'(v14);
    return (unsigned int)v15;
  }
  v32 = WdLogNewEntry5_WdWarning(v11, v10, v12, v13);
  *(_QWORD *)(v32 + 24) = -1073741801LL;
  WdLogEvent5_WdWarning(v32);
  return 3221225495LL;
}
