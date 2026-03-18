/*
 * XREFs of ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C010EEAC
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00B8F5C (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C00EBA10 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0101F80 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?ValidateDirectFlipResource@DXGDEVICE@@QEAAJPEAVDXGRESOURCE@@IIIW4_D3DDDIFORMAT@@I@Z @ 0x1C010B534 (-ValidateDirectFlipResource@DXGDEVICE@@QEAAJPEAVDXGRESOURCE@@IIIW4_D3DDDIFORMAT@@I@Z.c)
 *     ?PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z @ 0x1C010B640 (-PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z.c)
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0151310 (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IAEBU_D3DKMT_DISPLAYMODE@@PEAVCOREDEV.c)
 *     ?UpdateOneCddPrimaryPrivateDriverData@ADAPTER_DISPLAY@@QEAAXIPEAVDXGADAPTER@@@Z @ 0x1C0158008 (-UpdateOneCddPrimaryPrivateDriverData@ADAPTER_DISPLAY@@QEAAXIPEAVDXGADAPTER@@@Z.c)
 *     ?VmBusCreateAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C017D240 (-VmBusCreateAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C0188F30 (-CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@.c)
 *     ?IsYUVAllocation@@YAHPEAXPEAVADAPTER_RENDER@@@Z @ 0x1C018B078 (-IsYUVAllocation@@YAHPEAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01930B4 (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 *     ?UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1C01A75CC (-UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z.c)
 *     ?Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B040C (-Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@UtagRECT@@1IPEBU2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B0B9C (-BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@UtagRECT@@1IPEBU2@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@AEBU_D3DKMT_PRESENT@@AEAUINDIRECT_RESOURCE_INFO@@@Z @ 0x1C01B2984 (-PreIndirectPresentReadAllocationInfo@@YAJPEAVDXGPROCESS@@AEBU_D3DKMT_PRESENT@@AEAUINDIRECT_RESO.c)
 *     ?GetAllocationSize@@YAJPEAVDXGDEVICE@@IPEAUtagRECT@@@Z @ 0x1C01C91E8 (-GetAllocationSize@@YAJPEAVDXGDEVICE@@IPEAUtagRECT@@@Z.c)
 *     ?PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z @ 0x1C01D5160 (-PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@IPEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01D64FC (-SetPresentDodArg@PRESENTDODARG@@QEAAJPEAVDXGCONTEXT@@IPEAVDXGALLOCATION@@KEPEBUtagRECT@@PEBU_D3.c)
 *     ?DisplayOnlyPresent@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGALLOCATION@@IPEAU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01D85A0 (-DisplayOnlyPresent@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGALLOCATION@@IPEAU_DXGKARG_PRESE.c)
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C01D8C08 (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 *     ?CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z @ 0x1C01EA670 (-CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C00024F0 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C00161C0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0016230 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C001B400 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ADAPTER_RENDER::DdiDescribeAllocation(
        ADAPTER_RENDER *this,
        struct _DXGKARG_DESCRIBEALLOCATION *a2,
        __int64 a3)
{
  int v3; // r14d
  __int64 v6; // rdx
  __int64 v7; // rcx
  _OWORD *hAllocation; // rax
  __int64 v9; // rbp
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v12; // rdi
  __int64 *ThreadProperty; // rax
  __int64 *v14; // rbx
  int v15; // r13d
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // r9d
  __int64 v21; // rcx
  unsigned __int8 CurrentIrql; // r12
  __int64 v23; // rdi
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v25; // rax
  int CurrentProcessSessionId; // ebp
  __int64 ThreadWin32Thread; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  _QWORD *v32; // rax
  unsigned __int8 v33; // cl
  _QWORD *v34; // rax
  __int64 v35; // rcx
  _QWORD *v36; // rax
  __int64 Format; // rcx
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // r8
  int v42; // [rsp+20h] [rbp-88h] BYREF
  __int64 v43; // [rsp+28h] [rbp-80h]
  char v44[8]; // [rsp+30h] [rbp-78h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+38h] [rbp-70h] BYREF

  v3 = 0;
  v43 = 0LL;
  v42 = 5003;
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q((__int64)this, &EventProfilerEnter, a3, 5003);
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v42, 5003);
  if ( *(_BYTE *)(*((_QWORD *)this + 2) + 185LL) )
  {
    hAllocation = a2->hAllocation;
    LODWORD(v9) = 0;
    *(_OWORD *)&a2->hAllocation = *((_OWORD *)a2->hAllocation + 4);
    *(_OWORD *)&a2->Format = hAllocation[5];
    *(_OWORD *)&a2->RefreshRate.Denominator = hAllocation[6];
    a2->Rotation = -1;
    goto LABEL_45;
  }
  CurrentProcess = PsGetCurrentProcess(v7, v6);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v12 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      v14 = ThreadProperty;
      if ( ThreadProperty )
      {
        ObfDereferenceObject(ThreadProperty);
        v12 = *v14;
      }
    }
  }
  v15 = 0;
  v16 = (v12 + 120) & -(__int64)(v12 != 0);
  if ( v16 && *(struct _KTHREAD **)(((v12 + 120) & -(__int64)(v12 != 0)) + 8) == KeGetCurrentThread() )
  {
    v17 = WdLogNewEntry5_WdAssertion(v12 + 120);
    *(_QWORD *)(v17 + 24) = 1306LL;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( v12 )
  {
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((v12 + 120) & -(__int64)(v12 != 0), 0LL) )
    {
      if ( bTracingEnabled )
      {
        v20 = *(_DWORD *)(((v12 + 120) & -(__int64)(v12 != 0)) + 0x10);
        if ( v20 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v18, &EventBlockThread, v19, v20);
      }
      ExAcquirePushLockExclusiveEx((v12 + 120) & -(__int64)(v12 != 0), 0LL);
    }
    v15 = 2;
    *(_QWORD *)(((v12 + 120) & -(__int64)(v12 != 0)) + 8) = KeGetCurrentThread();
  }
  DXGADAPTER::AcquireDdiSync(*((_QWORD *)this + 2), 1);
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4168LL));
  CurrentIrql = KeGetCurrentIrql();
  v23 = 0LL;
  if ( CurrentIrql < 2u )
  {
    CurrentThread = KeGetCurrentThread();
    if ( !CurrentThread )
    {
      v25 = WdLogNewEntry5_WdAssertion(v21);
      *(_QWORD *)(v25 + 24) = 94LL;
      WdLogEvent5_WdAssertion(v25);
    }
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v21);
    if ( !CurrentProcessSessionId || (unsigned int)PsGetThreadSessionId(CurrentThread) != CurrentProcessSessionId )
    {
      v23 = 0LL;
LABEL_32:
      if ( v23 )
        v3 = *(_DWORD *)(v23 + 136);
      goto LABEL_34;
    }
    if ( !IsThreadCrossSessionAttached() )
    {
      ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
      {
        if ( *(_QWORD *)ThreadWin32Thread )
        {
          v23 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
          goto LABEL_32;
        }
      }
    }
    v23 = 0LL;
  }
LABEL_34:
  DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
    (DXGVALIDATIONPROCESSATTACH *)v44,
    *((struct DXGADAPTER **)this + 2));
  v9 = (*(int (__fastcall **)(_QWORD, struct _DXGKARG_DESCRIBEALLOCATION *))(*((_QWORD *)this + 2) + 344LL))(
         *(_QWORD *)(*((_QWORD *)this + 2) + 240LL),
         a2);
  if ( v44[0] )
    KeUnstackDetachProcess(&ApcState);
  if ( CurrentIrql != KeGetCurrentIrql() )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v29);
    v32[3] = 275LL;
    v32[4] = 16LL;
    v32[5] = this;
    v32[6] = CurrentIrql;
    v33 = KeGetCurrentIrql();
    v32[7] = v33;
    WdLogEvent5_WdCriticalError(v32);
  }
  if ( v23 && *(_DWORD *)(v23 + 136) != v3 )
  {
    v34 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v29);
    v34[3] = 275LL;
    v34[4] = 38LL;
    v35 = *(int *)(v23 + 136);
    v34[7] = 0LL;
    v34[5] = v35;
    v34[6] = v3;
    WdLogEvent5_WdCriticalError(v34);
  }
  _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)this + 2) + 4168LL));
  v36 = (_QWORD *)WdLogNewEntry5_WdTrace(v29, v28, v30, v31);
  v36[3] = v9;
  v36[4] = a2->hAllocation;
  v36[5] = a2->Width;
  v36[6] = a2->Height;
  Format = a2->Format;
  v36[7] = Format;
  if ( (_DWORD)v9 )
  {
    v38 = WdLogNewEntry5_WdError(Format);
    *(_QWORD *)(v38 + 24) = v9;
    WdLogEvent5_WdError(v38);
  }
  DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)this + 2));
  if ( v15 == 2 )
  {
    *(_QWORD *)(v16 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v16, 0LL);
    KeLeaveCriticalRegion();
  }
LABEL_45:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v42);
  if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q(v39, &EventProfilerExit, v40, v42);
  return (unsigned int)v9;
}
