/*
 * XREFs of ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@EPEAV1@@Z @ 0x1C009BE20
 * Callers:
 *     ?CreateVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z @ 0x1C0026584 (-CreateVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_CREATEVIRTUALGPU@@E@Z.c)
 *     ?EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ @ 0x1C002A17C (-EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?SetVirtualGpuVmBus@ADAPTER_RENDER@@QEAAJPEAU_LUID@@PEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x1C002AD2C (-SetVirtualGpuVmBus@ADAPTER_RENDER@@QEAAJPEAU_LUID@@PEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z.c)
 *     ?VmBusCreateProcess@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C002C800 (-VmBusCreateProcess@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?DxgkCddCreate@@YAJQEAXPEBXPEAI2PEAU_CDDDXGK_DRIVERINFO@@3PEAPEAXPEAPEAU_OBJECT_TYPE@@@Z @ 0x1C0096B40 (-DxgkCddCreate@@YAJQEAXPEBXPEAI2PEAU_CDDDXGK_DRIVERINFO@@3PEAPEAXPEAPEAU_OBJECT_TYPE@@@Z.c)
 *     ?DxgkProcessCallout@@YAJPEAPEAXQEBU_DXGKWIN32KENG_INTERFACE@@E@Z @ 0x1C009BD80 (-DxgkProcessCallout@@YAJPEAPEAXQEBU_DXGKWIN32KENG_INTERFACE@@E@Z.c)
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1C0110864 (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ??_GDXGPROCESS@@AEAAPEAXI@Z @ 0x1C0006CDC (--_GDXGPROCESS@@AEAAPEAXI@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Initialize@DXGPROCESS@@QEAAJXZ @ 0x1C00D65C8 (-Initialize@DXGPROCESS@@QEAAJXZ.c)
 *     ??0DXGPROCESS@@AEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@@Z @ 0x1C00D6AAC (--0DXGPROCESS@@AEAA@PEAVDXGGLOBAL@@QEAU_EPROCESS@@@Z.c)
 */

__int64 __fastcall DXGPROCESS::CreateDxgProcess(struct DXGPROCESS **a1, char a2, struct DXGPROCESS *a3)
{
  __int64 CurrentProcess; // rax
  __int64 v7; // rdx
  struct _EPROCESS *v8; // rsi
  struct DXGPROCESS *ProcessDxgProcess; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v16; // rdx
  struct DXGPROCESS *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  DXGPROCESS *PoolWithQuotaTag; // rbx
  struct DXGGLOBAL *v23; // rax
  DXGPROCESS *v24; // rbx
  __int64 v25; // rdx
  int v26; // edi
  char *v27; // rax
  __int64 v28; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 *v33; // rcx
  __int64 **v34; // rax
  struct _KTHREAD **v35; // [rsp+20h] [rbp-28h] BYREF
  char v36; // [rsp+28h] [rbp-20h]

  CurrentProcess = PsGetCurrentProcess();
  v8 = (struct _EPROCESS *)CurrentProcess;
  if ( !a2 )
  {
    ProcessDxgProcess = (struct DXGPROCESS *)PsGetProcessDxgProcess(CurrentProcess, v7);
    if ( ProcessDxgProcess )
    {
      *a1 = ProcessDxgProcess;
      return 0LL;
    }
  }
  Global = DXGGLOBAL::GetGlobal();
  v36 = 0;
  v35 = (struct _KTHREAD **)((char *)Global + 200);
  if ( Global == (struct DXGGLOBAL *)-200LL )
  {
    v30 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
    *(_QWORD *)(v30 + 24) = 453LL;
    WdLogEvent5_WdAssertion(v30);
  }
  CurrentThread = KeGetCurrentThread();
  if ( v35[1] == CurrentThread )
  {
    v31 = WdLogNewEntry5_WdAssertion(CurrentThread, v11, v13, v14);
    *(_QWORD *)(v31 + 24) = 460LL;
    WdLogEvent5_WdAssertion(v31);
  }
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v35);
  if ( !a2 && (v17 = (struct DXGPROCESS *)PsGetProcessDxgProcess(v8, v16)) != 0LL )
  {
    *a1 = v17;
  }
  else
  {
    PoolWithQuotaTag = (DXGPROCESS *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x1F0uLL, 0x50677844u);
    if ( PoolWithQuotaTag )
    {
      v23 = DXGGLOBAL::GetGlobal();
      v24 = DXGPROCESS::DXGPROCESS(PoolWithQuotaTag, v23, v8);
    }
    else
    {
      v24 = 0LL;
    }
    if ( !v24 )
    {
      v32 = WdLogNewEntry5_WdLowResource(v21);
      *(_QWORD *)(v32 + 24) = 153LL;
      WdLogEvent5_WdLowResource(v32);
      v26 = -1073741801;
      goto LABEL_20;
    }
    *((_BYTE *)v24 + 275) ^= (*((_BYTE *)v24 + 275) ^ (4 * a2)) & 4;
    v26 = DXGPROCESS::Initialize(v24);
    if ( v26 < 0 )
    {
      DXGPROCESS::`scalar deleting destructor'(v24);
      goto LABEL_20;
    }
    if ( !*((_BYTE *)v24 + 273) )
    {
      v27 = (char *)DXGGLOBAL::GetGlobal() + 240;
      v28 = *(_QWORD *)v27;
      if ( *(char **)(*(_QWORD *)v27 + 8LL) != v27 )
        __fastfail(3u);
      *(_QWORD *)v24 = v28;
      *((_QWORD *)v24 + 1) = v27;
      *(_QWORD *)(v28 + 8) = v24;
      *(_QWORD *)v27 = v24;
    }
    if ( a2 )
    {
      *((_BYTE *)v24 + 275) |= 4u;
      *((_QWORD *)v24 + 49) = a3;
      v19 = PsGetProcessDxgProcess(v8, v25);
      v33 = (__int64 *)((char *)v24 + 352);
      v18 = v19 + 352;
      v34 = *(__int64 ***)(v19 + 360);
      if ( *v34 != (__int64 *)(v19 + 352) )
        __fastfail(3u);
      *v33 = v18;
      *((_QWORD *)v24 + 45) = v34;
      *v34 = v33;
      *(_QWORD *)(v19 + 360) = v33;
      *((_QWORD *)v24 + 9) = *(_QWORD *)(v19 + 72);
      *((_QWORD *)v24 + 50) = v19;
    }
    else
    {
      PsSetProcessDxgProcess(v8, v24);
    }
    *((_QWORD *)v24 + 55) = (char *)v24 + 432;
    *((_QWORD *)v24 + 54) = (char *)v24 + 432;
    *a1 = v24;
  }
  v26 = 0;
LABEL_20:
  if ( v36 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v35, v18, v19, v20);
  return (unsigned int)v26;
}
