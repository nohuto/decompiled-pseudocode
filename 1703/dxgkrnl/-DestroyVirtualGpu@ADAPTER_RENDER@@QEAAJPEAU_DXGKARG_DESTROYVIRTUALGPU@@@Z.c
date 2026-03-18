/*
 * XREFs of ?DestroyVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESTROYVIRTUALGPU@@@Z @ 0x1C0029D78
 * Callers:
 *     ?CreateVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z @ 0x1C0026584 (-CreateVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z.c)
 *     DxgkDdiDestroyVirtualGpu @ 0x1C0033A04 (DxgkDdiDestroyVirtualGpu.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D6150 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0004DF0 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0004E20 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000590C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0005998 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D778 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D7E0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??_GDXGK_VIRTUAL_GPU@@QEAAPEAXI@Z @ 0x1C0026144 (--_GDXGK_VIRTUAL_GPU@@QEAAPEAXI@Z.c)
 *     ?DdiDestroyVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESTROYVIRTUALGPU@@@Z @ 0x1C0027454 (-DdiDestroyVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESTROYVIRTUALGPU@@@Z.c)
 *     ?DestroyParavirtualizedGpu@ADAPTER_RENDER@@QEAAXI@Z @ 0x1C0029D1C (-DestroyParavirtualizedGpu@ADAPTER_RENDER@@QEAAXI@Z.c)
 *     ?DestroyVirtualGpu@DXGK_VIRTUAL_GPU@@QEAAXE@Z @ 0x1C0029F50 (-DestroyVirtualGpu@DXGK_VIRTUAL_GPU@@QEAAXE@Z.c)
 *     ?EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ @ 0x1C002A17C (-EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C00D3290 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00D3410 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 */

__int64 __fastcall ADAPTER_RENDER::DestroyVirtualGpu(
        ADAPTER_RENDER *this,
        struct _DXGKARG_DESTROYVIRTUALGPU *a2,
        __int64 a3,
        __int64 a4)
{
  ADAPTER_RENDER *v5; // rbx
  __int64 PartitionId; // rdx
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rcx
  DXGADAPTER *v14; // rbp
  __int64 v15; // r9
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rsi
  DXGK_VIRTUAL_GPU *v24; // rcx
  _BYTE v25[8]; // [rsp+30h] [rbp-98h] BYREF
  DXGADAPTER *v26; // [rsp+38h] [rbp-90h]
  char v27; // [rsp+40h] [rbp-88h]
  _BYTE v28[24]; // [rsp+48h] [rbp-80h] BYREF
  _BYTE v29[8]; // [rsp+60h] [rbp-68h] BYREF
  _BYTE v30[32]; // [rsp+68h] [rbp-60h] BYREF
  _BYTE v31[56]; // [rsp+88h] [rbp-40h] BYREF

  v5 = this;
  PartitionId = a2->PartitionId;
  if ( (unsigned int)PartitionId >= *((_DWORD *)this + 282)
    || (this = *(ADAPTER_RENDER **)(*((_QWORD *)this + 142) + 8 * PartitionId)) == 0LL )
  {
    v12 = WdLogNewEntry5_WdWarning(this, PartitionId, a3, a4);
    v13 = a2->PartitionId;
    goto LABEL_19;
  }
  if ( *((_BYTE *)this + 121) )
  {
    ADAPTER_RENDER::DestroyParavirtualizedGpu(v5, PartitionId);
    return 0LL;
  }
  result = ADAPTER_RENDER::EnsureVirtualGpuProcess(v5);
  if ( (int)result >= 0 )
  {
    if ( !*((_QWORD *)v5 + 143) )
    {
      v12 = WdLogNewEntry5_WdWarning(v9, v8, v10, v11);
      v13 = a2->PartitionId;
      *(_QWORD *)(v12 + 32) = 1686LL;
LABEL_19:
      *(_QWORD *)(v12 + 24) = v13;
      WdLogEvent5_WdWarning(v12);
      return 3221225485LL;
    }
    v14 = (DXGADAPTER *)*((_QWORD *)v5 + 2);
    DXGADAPTER::ReleaseCoreResource(v14);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
      (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v28,
      *((struct DXGDEVICE **)v5 + 143));
    v26 = v14;
    v27 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v25);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v29, *((_QWORD *)v5 + 143), 2LL, v15, 0);
    v16 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v29);
    v21 = v16;
    if ( v16 >= 0 )
    {
      v23 = *(_QWORD *)(*((_QWORD *)v5 + 142) + 8LL * a2->PartitionId);
      if ( *(_BYTE *)(v23 + 120) )
      {
        ADAPTER_RENDER::DdiDestroyVirtualGpu(v5, a2);
        *(_BYTE *)(v23 + 120) = 0;
      }
      --*((_DWORD *)v5 + 283);
      DXGK_VIRTUAL_GPU::DestroyVirtualGpu(*(DXGK_VIRTUAL_GPU **)(*((_QWORD *)v5 + 142) + 8LL * a2->PartitionId), 1u);
      v24 = *(DXGK_VIRTUAL_GPU **)(*((_QWORD *)v5 + 142) + 8LL * a2->PartitionId);
      if ( v24 )
        DXGK_VIRTUAL_GPU::`scalar deleting destructor'(v24);
      *(_QWORD *)(*((_QWORD *)v5 + 142) + 8LL * a2->PartitionId) = 0LL;
      LODWORD(v21) = 0;
    }
    else
    {
      v22 = WdLogNewEntry5_WdWarning(v18, v17, v19, v20);
      *(_QWORD *)(v22 + 24) = *((_QWORD *)v5 + 143);
      *(_QWORD *)(v22 + 32) = v21;
      WdLogEvent5_WdWarning(v22);
    }
    COREACCESS::~COREACCESS((COREACCESS *)v31);
    COREACCESS::~COREACCESS((COREACCESS *)v30);
    if ( v27 )
      DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v25);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v28);
    DXGADAPTER::AcquireCoreResourceShared(v14);
    return (unsigned int)v21;
  }
  return result;
}
