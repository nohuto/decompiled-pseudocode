/*
 * XREFs of ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1PEAX@Z @ 0x1C00D3444
 * Callers:
 *     ?DxgkCddCreate@@YAJQEAXPEBXPEAI22PEAU_CDDDXGK_DRIVERINFO@@3PEAPEAXPEAPEAU_OBJECT_TYPE@@@Z @ 0x1C009D250 (-DxgkCddCreate@@YAJQEAXPEBXPEAI22PEAU_CDDDXGK_DRIVERINFO@@3PEAPEAXPEAPEAU_OBJECT_TYPE@@@Z.c)
 *     ?DxgkProcessCallout@@YAJPEAPEAXQEBU_DXGKWIN32KENG_INTERFACE@@E@Z @ 0x1C00D3380 (-DxgkProcessCallout@@YAJPEAPEAXQEBU_DXGKWIN32KENG_INTERFACE@@E@Z.c)
 *     ?CreateVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z @ 0x1C0172F98 (-CreateVirtualGpu@ADAPTER_RENDER@@QEAAJW4DXG_VIRTUAL_GPU_TYPE@@PEAU_DXGKARG_CREATEVIRTUALGPU@@E@.c)
 *     ?SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1C0179140 (-SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z.c)
 *     ?VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C017E080 (-VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1C019ECB4 (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ??0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ @ 0x1C0009910 (--0DXGPROCESSCALLOUTMUTEX@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00165E0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ??0DXGPROCESSVM@@QEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@PEAVDXGPROCESS@@2@Z @ 0x1C0034284 (--0DXGPROCESSVM@@QEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@PEAVDXGPROCESS@@2@Z.c)
 *     ??2?$DXGQUOTAALLOCATOR@$00$0FAGHHIEE@@@SAPEAX_K@Z @ 0x1C00343A0 (--2-$DXGQUOTAALLOCATOR@$00$0FAGHHIEE@@@SAPEAX_K@Z.c)
 *     ?Initialize@DXGPROCESS@@QEAAJXZ @ 0x1C00F76A4 (-Initialize@DXGPROCESS@@QEAAJXZ.c)
 *     ??0DXGPROCESS@@IEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@@Z @ 0x1C00F7B64 (--0DXGPROCESS@@IEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@@Z.c)
 */

__int64 __fastcall DXGPROCESS::CreateDxgProcess(
        struct DXGPROCESS **a1,
        struct DXGPROCESS *a2,
        struct DXGPROCESS *a3,
        void *a4)
{
  __int64 CurrentProcess; // rax
  struct _EPROCESS *v9; // rsi
  struct DXGPROCESS *ProcessDxgProcess; // rax
  struct DXGPROCESS *v11; // rax
  __int64 v12; // rcx
  DXGPROCESS *PoolWithQuotaTag; // rbx
  struct DXGGLOBAL *v14; // rax
  DXGPROCESSVM *v15; // rax
  _QWORD *v16; // rdi
  __int64 v17; // rcx
  int v18; // ebx
  _QWORD *v19; // rbx
  char *v20; // rax
  __int64 v21; // rcx
  struct DXGGLOBAL *v23; // rax
  DXGPROCESSVM *v24; // rbx
  struct DXGGLOBAL *Global; // rax
  __int64 v26; // rax
  _QWORD *v27; // rsi
  __int64 v28; // rbx
  __int64 v29; // rbp
  _QWORD *v30; // rax
  __int64 v31; // rbx
  _BYTE v32[24]; // [rsp+30h] [rbp-18h] BYREF

  CurrentProcess = PsGetCurrentProcess(a1, a2);
  v9 = (struct _EPROCESS *)CurrentProcess;
  if ( !a2 )
  {
    ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess);
    if ( ProcessDxgProcess )
    {
      *a1 = ProcessDxgProcess;
      return 0LL;
    }
  }
  DXGPROCESSCALLOUTMUTEX::DXGPROCESSCALLOUTMUTEX((DXGPROCESSCALLOUTMUTEX *)v32);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v32);
  if ( a2 )
  {
    v24 = (DXGPROCESSVM *)DXGQUOTAALLOCATOR<1,1348958276>::operator new(0x1F8uLL);
    if ( v24 )
    {
      Global = DXGGLOBAL::GetGlobal(v12);
      v15 = DXGPROCESSVM::DXGPROCESSVM(v24, Global, v9, a2, a3);
      goto LABEL_8;
    }
LABEL_27:
    v16 = 0LL;
    goto LABEL_9;
  }
  v11 = (struct DXGPROCESS *)PsGetProcessDxgProcess(v9);
  if ( v11 )
  {
    *a1 = v11;
    goto LABEL_17;
  }
  if ( a4 )
  {
    v16 = DXGQUOTAALLOCATOR<1,1348958276>::operator new(0x1E0uLL);
    if ( v16 )
    {
      v23 = DXGGLOBAL::GetGlobal(v12);
      DXGPROCESS::DXGPROCESS((DXGPROCESS *)v16, v23, v9);
      v16[57] = 0LL;
      v16[58] = 0LL;
      *((_BYTE *)v16 + 323) |= 4u;
      *v16 = &DXGPROCESSVMWP::`vftable';
      *((_BYTE *)v16 + 472) = 0;
      goto LABEL_9;
    }
    goto LABEL_27;
  }
  PoolWithQuotaTag = (DXGPROCESS *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x1C8uLL, 0x50677844u);
  if ( !PoolWithQuotaTag )
    goto LABEL_27;
  v14 = DXGGLOBAL::GetGlobal(v12);
  v15 = DXGPROCESS::DXGPROCESS(PoolWithQuotaTag, v14, v9);
LABEL_8:
  v16 = v15;
LABEL_9:
  if ( !v16 )
  {
    v26 = WdLogNewEntry5_WdLowResource(v12);
    *(_QWORD *)(v26 + 24) = 238LL;
    WdLogEvent5_WdLowResource(v26);
    v18 = -1073741801;
    goto LABEL_18;
  }
  v18 = DXGPROCESS::Initialize((DXGPROCESS *)v16);
  if ( v18 < 0 )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))*v16)(v16, 1LL);
    goto LABEL_18;
  }
  if ( !*((_BYTE *)v16 + 321) )
  {
    v19 = v16 + 1;
    v20 = (char *)DXGGLOBAL::GetGlobal(v17) + 248;
    v21 = *(_QWORD *)v20;
    if ( *(char **)(*(_QWORD *)v20 + 8LL) != v20 )
      __fastfail(3u);
    *v19 = v21;
    v16[2] = v20;
    *(_QWORD *)(v21 + 8) = v19;
    *(_QWORD *)v20 = v19;
  }
  if ( a2 )
  {
    v27 = v16 + 59;
    v28 = *(_QWORD *)(v16[57] + 456LL);
    v29 = v28 + 64;
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v28 + 64));
    v30 = *(_QWORD **)(v28 + 32);
    v31 = v28 + 24;
    if ( *v30 != v31 )
      __fastfail(3u);
    *v27 = v31;
    v16[60] = v30;
    *v30 = v27;
    *(_QWORD *)(v31 + 8) = v27;
    *(_QWORD *)(v29 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v29, 0LL);
    KeLeaveCriticalRegion();
  }
  else
  {
    PsSetProcessDxgProcess(v9, v16);
  }
  *a1 = (struct DXGPROCESS *)v16;
LABEL_17:
  v18 = 0;
LABEL_18:
  if ( v32[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v32);
  return (unsigned int)v18;
}
