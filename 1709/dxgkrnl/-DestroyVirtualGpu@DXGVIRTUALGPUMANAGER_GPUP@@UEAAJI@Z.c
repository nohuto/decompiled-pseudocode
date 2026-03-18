/*
 * XREFs of ?DestroyVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJI@Z @ 0x1C018F1D0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001B00 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0001BB4 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003310 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003360 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C00040D4 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0004104 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C0084890 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0084A30 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DdiDestroyVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESTROYVIRTUALGPU@@@Z @ 0x1C018ACAC (-DdiDestroyVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESTROYVIRTUALGPU@@@Z.c)
 */

__int64 __fastcall DXGVIRTUALGPUMANAGER_GPUP::DestroyVirtualGpu(
        DXGVIRTUALGPUMANAGER_GPUP *this,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rdi
  __int64 v5; // r15
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rcx
  struct DXGPROCESS *v8; // rsi
  __int64 v9; // rax
  PERESOURCE *v11; // r13
  struct DXGDEVICE *v12; // r12
  __int64 v13; // r9
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rsi
  __int64 v19; // rax
  ADAPTER_RENDER *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdx
  _QWORD *v24; // rax
  __int64 v25; // rcx
  void (__fastcall ***v26)(_QWORD, __int64); // rcx
  __int64 v27; // rax
  _BYTE v28[8]; // [rsp+38h] [rbp-59h] BYREF
  PERESOURCE *v29; // [rsp+40h] [rbp-51h]
  char v30; // [rsp+48h] [rbp-49h]
  _BYTE v31[24]; // [rsp+50h] [rbp-41h] BYREF
  _BYTE v32[8]; // [rsp+68h] [rbp-29h] BYREF
  _BYTE v33[32]; // [rsp+70h] [rbp-21h] BYREF
  _BYTE v34[56]; // [rsp+90h] [rbp-1h] BYREF
  _DXGKARG_DESTROYVIRTUALGPU v35; // [rsp+100h] [rbp+6Fh] BYREF

  v4 = (unsigned int)a2;
  if ( (unsigned int)a2 < *((_DWORD *)this + 3) && *(_QWORD *)(*((_QWORD *)this + 3) + 8LL * (unsigned int)a2) )
  {
    _mm_lfence();
    v5 = *(_QWORD *)(*((_QWORD *)this + 3) + 8LL * (unsigned int)a2);
    Current = DXGPROCESS::GetCurrent((__int64)this, a2);
    v8 = Current;
    if ( *(struct DXGPROCESS **)(v5 + 80) == Current || !Current || (*((_BYTE *)Current + 307) & 4) != 0 )
    {
      v11 = *(PERESOURCE **)(*((_QWORD *)this + 4) + 16LL);
      DXGADAPTER::ReleaseCoreResource(v11);
      v12 = *(struct DXGDEVICE **)(v5 + 120);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
        (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v31,
        v12);
      v29 = v11;
      v30 = 0;
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v28);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v32, (__int64)v12, 2, v13, 0);
      v14 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v32);
      v18 = v14;
      if ( v14 >= 0 )
      {
        _mm_lfence();
        LODWORD(v18) = 0;
        if ( *(_BYTE *)(v5 + 136) )
        {
          v20 = (ADAPTER_RENDER *)*((_QWORD *)this + 4);
          v35.PartitionId = v4;
          ADAPTER_RENDER::DdiDestroyVirtualGpu(v20, &v35, v17);
          *(_BYTE *)(v5 + 136) = 0;
        }
        --*((_DWORD *)this + 4);
        v21 = *((_QWORD *)this + 3);
        v22 = *(_QWORD *)(v21 + 8 * v4) + 88LL;
        v23 = *(_QWORD *)v22;
        if ( *(_QWORD *)(*(_QWORD *)v22 + 8LL) != v22
          || (v24 = *(_QWORD **)(*(_QWORD *)(v21 + 8 * v4) + 96LL), *v24 != v22) )
        {
          __fastfail(3u);
        }
        *v24 = v23;
        *(_QWORD *)(v23 + 8) = v24;
        _mm_lfence();
        LOBYTE(v23) = 1;
        v25 = *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v4);
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v25 + 8LL))(v25, v23);
        v26 = *(void (__fastcall ****)(_QWORD, __int64))(*((_QWORD *)this + 3) + 8 * v4);
        if ( v26 )
          (**v26)(v26, 1LL);
        *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v4) = 0LL;
      }
      else
      {
        v19 = WdLogNewEntry5_WdWarning(v16, v15, v17);
        *(_QWORD *)(v19 + 24) = v12;
        *(_QWORD *)(v19 + 32) = v18;
        WdLogEvent5_WdWarning(v19);
      }
      COREACCESS::~COREACCESS((COREACCESS *)v34);
      COREACCESS::~COREACCESS((COREACCESS *)v33);
      if ( v30 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v28);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v31);
      DXGADAPTER::AcquireCoreResourceShared((DXGADAPTER *)v11);
      return (unsigned int)v18;
    }
    else
    {
      v9 = WdLogNewEntry5_WdError(v7);
      *(_QWORD *)(v9 + 24) = v8;
      WdLogEvent5_WdError(v9);
      return 3221225506LL;
    }
  }
  else
  {
    v27 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v27 + 24) = v4;
    WdLogEvent5_WdWarning(v27);
    return 0LL;
  }
}
