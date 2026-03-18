/*
 * XREFs of ?CreateAdapter@DXGGLOBAL@@QEAAJPEAU_DEVICE_OBJECT@@PEAPEAVDXGADAPTER@@PEAU_DXGK_ADAPTER_CAPS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0119870
 * Callers:
 *     DxgkAddAdapter @ 0x1C01194CC (DxgkAddAdapter.c)
 * Callees:
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003310 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003360 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007D10 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     McTemplateK0ppqxqxqqqqqqqqqccccqqqqqQR23qqp @ 0x1C0015028 (McTemplateK0ppqxqxqqqqqqqqqccccqqqqqQR23qqp.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ??_GDXGADAPTER@@QEAAPEAXI@Z @ 0x1C0027EE4 (--_GDXGADAPTER@@QEAAPEAXI@Z.c)
 *     ?GetAdapterType@DXGADAPTER@@QEAA?AU_D3DKMT_ADAPTERTYPE@@XZ @ 0x1C0084D8C (-GetAdapterType@DXGADAPTER@@QEAA-AU_D3DKMT_ADAPTERTYPE@@XZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C00F925C (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ?FinalizeInitialization@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0111CF0 (-FinalizeInitialization@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?ReportNodeMetadata@DXGADAPTER@@QEBAXXZ @ 0x1C0112EF4 (-ReportNodeMetadata@DXGADAPTER@@QEBAXXZ.c)
 *     ?AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0112FA0 (-AdapterTelemetry@DXGADAPTER@@QEAAXW4_TELEMETRY_INVENTORY_TRIGGER@@PEAU_DXGK_DISPLAY_SCENARIO_CO.c)
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C011364C (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     ??0DXGADAPTER@@QEAA@PEAVDXGGLOBAL@@@Z @ 0x1C011432C (--0DXGADAPTER@@QEAA@PEAVDXGGLOBAL@@@Z.c)
 *     DpiReportAdapter @ 0x1C011A830 (DpiReportAdapter.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C0170FCC (-Destroy@DXGADAPTER@@QEAAXXZ.c)
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
  int v14; // esi
  __int64 v15; // rsi
  int v16; // r14d
  unsigned int *AdapterType; // rax
  char v18; // r11
  unsigned int v19; // r9d
  __int64 v20; // rdx
  __int64 v21; // r8
  ADAPTER_RENDER *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  DXGADAPTER **v26; // rax
  __int64 v27; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rax
  int v32; // [rsp+C0h] [rbp-78h]
  int v33; // [rsp+D8h] [rbp-60h]
  int v34; // [rsp+100h] [rbp-38h] BYREF
  _BYTE v35[8]; // [rsp+108h] [rbp-30h] BYREF
  DXGADAPTER *v36; // [rsp+110h] [rbp-28h]
  char v37; // [rsp+118h] [rbp-20h]

  v9 = (char *)operator new(0xF60uLL, 0x4B677844u, 1, (POOL_TYPE)512);
  if ( v9 )
    v13 = DXGADAPTER::DXGADAPTER(v9, this);
  else
    v13 = 0LL;
  if ( v13 )
  {
    v14 = DXGADAPTER::Initialize(v13, a2, a4);
    if ( v14 >= 0 )
    {
      if ( bTracingEnabled )
      {
        v15 = *((_QWORD *)v13 + 30);
        v16 = *((_DWORD *)v13 + 622);
        AdapterType = DXGADAPTER::GetAdapterType(v13, &v34);
        v19 = *((_DWORD *)v13 + 421);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        {
          v30 = v19 >> 14;
          LOBYTE(v30) = v30 & 7;
          McTemplateK0ppqxqxqqqqqqqqqccccqqqqqQR23qqp(
            v30,
            &EventCreateAdapter,
            v19 >> 31,
            (__int64)a2,
            (char)v13,
            v18,
            *((_QWORD *)v13 + 204),
            *((_DWORD *)v13 + 410),
            *((_QWORD *)v13 + 206),
            *((_DWORD *)v13 + 414),
            *((_DWORD *)v13 + 415),
            *((_DWORD *)v13 + 417),
            *((_DWORD *)v13 + 418),
            *((_DWORD *)v13 + 419),
            *((_DWORD *)v13 + 422),
            *((_DWORD *)v13 + 416),
            *((_DWORD *)v13 + 420),
            v19,
            (v19 >> 10) & 0xF,
            v30,
            (v19 >> 17) & 7,
            (v19 & 0x80000000) != 0,
            *((_DWORD *)v13 + 423),
            *((_DWORD *)v13 + 424),
            v32,
            *((_DWORD *)v13 + 426),
            *((_DWORD *)v13 + 427),
            v33,
            v16,
            *AdapterType,
            v15);
        }
      }
      DpiReportAdapter(a2, v13);
      if ( *((_QWORD *)v13 + 289) )
        DXGADAPTER::ReportNodeMetadata(v13, v20, v21);
      DXGADAPTER::AdapterTelemetry((__int64)v13, 0, (__int64)a5);
      v14 = 0;
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 24) + 64LL) + 3728LL) = v13;
      v22 = (ADAPTER_RENDER *)*((_QWORD *)v13 + 289);
      if ( !v22 || (v14 = ADAPTER_RENDER::FinalizeInitialization(v22), v14 >= 0) )
      {
        DXGFASTMUTEX::Acquire((DXGGLOBAL *)((char *)this + 400));
        v26 = (DXGADAPTER **)((char *)this + 440);
        v27 = *((_QWORD *)this + 55);
        if ( *(DXGGLOBAL **)(v27 + 8) != (DXGGLOBAL *)((char *)this + 440) )
          __fastfail(3u);
        *(_QWORD *)v13 = v27;
        *((_QWORD *)v13 + 1) = v26;
        *(_QWORD *)(v27 + 8) = v13;
        *v26 = v13;
        if ( *((_QWORD *)v13 + 289) && (*((_DWORD *)v13 + 75) & 0x4000) == 0 )
        {
          v36 = v13;
          v37 = 0;
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v35);
          if ( *((_DWORD *)v13 + 44) == 1 )
          {
            if ( *((_DWORD *)this + 386) != 10 || (*((_DWORD *)this + 389) & 1) != 0 )
              (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 289) + 504LL) + 8LL)
                                                     + 856LL))(
                *(_QWORD *)(*((_QWORD *)v13 + 289) + 512LL),
                *((_DWORD *)this + 389) & 1);
            if ( *(_QWORD *)((char *)this + 1548) != 0x1E00000032LL )
              (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 289) + 528LL)
                                                                         + 8LL)
                                                             + 1144LL))(
                *(_QWORD *)(*((_QWORD *)v13 + 289) + 536LL),
                *((unsigned int *)this + 387),
                *((unsigned int *)this + 388));
          }
          if ( v37 )
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v35);
        }
        DXGFASTMUTEX::Release((struct _KTHREAD **)this + 50);
        *a3 = v13;
        return (unsigned int)v14;
      }
      v31 = WdLogNewEntry5_WdWarning(v24, v23, v25);
      *(_QWORD *)(v31 + 24) = -1073741801LL;
      *(_QWORD *)(v31 + 32) = 2020LL;
      WdLogEvent5_WdWarning(v31);
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v13 + 24) + 64LL) + 3728LL) = 0LL;
      DXGADAPTER::Destroy(v13);
    }
    DXGADAPTER::`scalar deleting destructor'(v13);
    return (unsigned int)v14;
  }
  v29 = WdLogNewEntry5_WdWarning(v11, v10, v12);
  *(_QWORD *)(v29 + 24) = -1073741801LL;
  WdLogEvent5_WdWarning(v29);
  return 3221225495LL;
}
