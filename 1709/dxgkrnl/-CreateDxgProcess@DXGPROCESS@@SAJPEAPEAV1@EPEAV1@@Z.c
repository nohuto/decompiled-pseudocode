/*
 * XREFs of ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@EPEAV1@@Z @ 0x1C00F0940
 * Callers:
 *     ?DxgkProcessCallout@@YAJPEAPEAXQEBU_DXGKWIN32KENG_INTERFACE@@E@Z @ 0x1C00F08A0 (-DxgkProcessCallout@@YAJPEAPEAXQEBU_DXGKWIN32KENG_INTERFACE@@E@Z.c)
 *     ?DxgkCddCreate@@YAJQEAXPEBXPEAI2PEAU_CDDDXGK_DRIVERINFO@@3PEAPEAXPEAPEAU_OBJECT_TYPE@@@Z @ 0x1C00F8590 (-DxgkCddCreate@@YAJQEAXPEBXPEAI2PEAU_CDDDXGK_DRIVERINFO@@3PEAPEAXPEAPEAU_OBJECT_TYPE@@@Z.c)
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1C0119AB0 (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 *     ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_PARAV@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z @ 0x1C018DCA0 (-CreateVirtualGpu@DXGVIRTUALGPUMANAGER_PARAV@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z.c)
 *     ?SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1C018E510 (-SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z.c)
 *     ?CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z @ 0x1C018E930 (-CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP@@UEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z.c)
 *     ?VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0192290 (-VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??_GDXGPROCESS@@AEAAPEAXI@Z @ 0x1C001D7D8 (--_GDXGPROCESS@@AEAAPEAXI@Z.c)
 *     ?Initialize@DXGPROCESS@@QEAAJXZ @ 0x1C0089968 (-Initialize@DXGPROCESS@@QEAAJXZ.c)
 *     ??0DXGPROCESS@@AEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@@Z @ 0x1C0089CE4 (--0DXGPROCESS@@AEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@@Z.c)
 */

__int64 __fastcall DXGPROCESS::CreateDxgProcess(struct DXGPROCESS **a1, __int64 a2, struct DXGPROCESS *a3)
{
  char v4; // bp
  __int64 CurrentProcess; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct _EPROCESS *v9; // rsi
  struct DXGPROCESS *ProcessDxgProcess; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v12; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v14; // rdx
  struct DXGPROCESS *v15; // rax
  __int64 v16; // rcx
  DXGPROCESS *PoolWithQuotaTag; // rbx
  struct DXGGLOBAL *v18; // rax
  DXGPROCESS *v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // edi
  char *v23; // rax
  __int64 v24; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // r8
  _QWORD *v30; // rcx
  _QWORD *v31; // rax
  struct _KTHREAD **v32; // [rsp+20h] [rbp-28h] BYREF
  char v33; // [rsp+28h] [rbp-20h]

  v4 = a2;
  CurrentProcess = PsGetCurrentProcess(a1, a2);
  v9 = (struct _EPROCESS *)CurrentProcess;
  if ( !v4 )
  {
    ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess, v7);
    if ( ProcessDxgProcess )
    {
      *a1 = ProcessDxgProcess;
      return 0LL;
    }
  }
  Global = DXGGLOBAL::GetGlobal(v8);
  v33 = 0;
  v32 = (struct _KTHREAD **)((char *)Global + 200);
  if ( Global == (struct DXGGLOBAL *)-200LL )
  {
    v26 = WdLogNewEntry5_WdAssertion(v12);
    *(_QWORD *)(v26 + 24) = 464LL;
    WdLogEvent5_WdAssertion(v26);
  }
  CurrentThread = KeGetCurrentThread();
  if ( v32[1] == CurrentThread )
  {
    v27 = WdLogNewEntry5_WdAssertion(CurrentThread);
    *(_QWORD *)(v27 + 24) = 471LL;
    WdLogEvent5_WdAssertion(v27);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v32);
  if ( !v4 && (v15 = (struct DXGPROCESS *)PsGetProcessDxgProcess(v9, v14)) != 0LL )
  {
    *a1 = v15;
  }
  else
  {
    PoolWithQuotaTag = (DXGPROCESS *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x220uLL, 0x50677844u);
    if ( PoolWithQuotaTag )
    {
      v18 = DXGGLOBAL::GetGlobal(v16);
      v19 = DXGPROCESS::DXGPROCESS(PoolWithQuotaTag, v18, v9);
    }
    else
    {
      v19 = 0LL;
    }
    if ( !v19 )
    {
      v28 = WdLogNewEntry5_WdLowResource(v16);
      *(_QWORD *)(v28 + 24) = 150LL;
      WdLogEvent5_WdLowResource(v28);
      v22 = -1073741801;
      goto LABEL_20;
    }
    *((_BYTE *)v19 + 307) ^= (*((_BYTE *)v19 + 307) ^ (8 * v4)) & 8;
    v22 = DXGPROCESS::Initialize(v19);
    if ( v22 < 0 )
    {
      DXGPROCESS::`scalar deleting destructor'(v19);
      goto LABEL_20;
    }
    if ( !*((_BYTE *)v19 + 305) )
    {
      v23 = (char *)DXGGLOBAL::GetGlobal(v21) + 240;
      v24 = *(_QWORD *)v23;
      if ( *(char **)(*(_QWORD *)v23 + 8LL) != v23 )
        __fastfail(3u);
      *(_QWORD *)v19 = v24;
      *((_QWORD *)v19 + 1) = v23;
      *(_QWORD *)(v24 + 8) = v19;
      *(_QWORD *)v23 = v19;
    }
    if ( v4 )
    {
      *((_BYTE *)v19 + 307) |= 8u;
      *((_QWORD *)v19 + 54) = a3;
      v29 = PsGetProcessDxgProcess(v9, v20);
      v30 = (_QWORD *)((char *)v19 + 392);
      v31 = *(_QWORD **)(v29 + 400);
      if ( *v31 != v29 + 392 )
        __fastfail(3u);
      *v30 = v29 + 392;
      *((_QWORD *)v19 + 50) = v31;
      *v31 = v30;
      *(_QWORD *)(v29 + 400) = v30;
      *((_QWORD *)v19 + 12) = *(_QWORD *)(v29 + 96);
      *((_QWORD *)v19 + 55) = v29;
    }
    else
    {
      PsSetProcessDxgProcess(v9, v19);
    }
    *a1 = v19;
  }
  v22 = 0;
LABEL_20:
  if ( v33 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v32);
  return (unsigned int)v22;
}
