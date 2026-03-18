/*
 * XREFs of ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0101F80
 * Callers:
 *     DxgkPresent @ 0x1C00C8F20 (DxgkPresent.c)
 *     DxgkSubmitPresentBltToHwQueue @ 0x1C01A5B30 (DxgkSubmitPresentBltToHwQueue.c)
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1C01B1648 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 * Callees:
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C00024F0 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x1C0009520 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     ?Release@DXGPRESENTMUTEX@@QEAAXXZ @ 0x1C000AA64 (-Release@DXGPRESENTMUTEX@@QEAAXXZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C000B224 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C0014A18 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0014AF8 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0014E9C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?VidSchGetDeviceFlipMode@VIDSCH_EXPORT@@QEAA?AW4_VIDSCH_FLIP_MODE@@PEAU_VIDSCH_DEVICE@@IPEAW4D3DDDI_FLIPINTERVAL_TYPE@@@Z @ 0x1C00150A0 (-VidSchGetDeviceFlipMode@VIDSCH_EXPORT@@QEAA-AW4_VIDSCH_FLIP_MODE@@PEAU_VIDSCH_DEVICE@@IPEAW4D3D.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0015110 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015410 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0015490 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C001552C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0015700 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C001576C (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0015880 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C00158E4 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0016110 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C00161C0 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0016230 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C0019B40 (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?GetContentRect@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z @ 0x1C0019BCC (-GetContentRect@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C0019CE0 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?Unlock@CWin32kLocks@@QEAAXXZ @ 0x1C001A878 (-Unlock@CWin32kLocks@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C001B314 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C001B400 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1C0023A84 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     ??0DXGPRESENTMUTEX@@QEAA@QEAVADAPTER_RENDER@@@Z @ 0x1C0023DE4 (--0DXGPRESENTMUTEX@@QEAA@QEAVADAPTER_RENDER@@@Z.c)
 *     ?Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z @ 0x1C0023ED0 (-Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z.c)
 *     ?GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z @ 0x1C0027E54 (-GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z.c)
 *     ?Acquire@DXGPRESENTMUTEX@@QEAAXXZ @ 0x1C0033B94 (-Acquire@DXGPRESENTMUTEX@@QEAAXXZ.c)
 *     McTemplateK0ppxppttqddddddddq @ 0x1C0033F48 (McTemplateK0ppxppttqddddddddq.c)
 *     McTemplateK0pqpqtt @ 0x1C00340F8 (McTemplateK0pqpqtt.c)
 *     McTemplateK0ptqDR2DR2DR2DR2 @ 0x1C00341B8 (McTemplateK0ptqDR2DR2DR2DR2.c)
 *     ?QueueWork@DXGWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z @ 0x1C0036C3C (-QueueWork@DXGWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z.c)
 *     ?DxgkCancelSwapChainBinding@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C004BA98 (-DxgkCancelSwapChainBinding@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00962E0 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00A619C (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAU_PRESENT_REDIRECTED_PARAMS@@@Z @ 0x1C00CB880 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTER@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAX_N@Z @ 0x1C00DFA9C (-SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCES.c)
 *     ?DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C00E184C (-DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?SetAllocationForSinglePlanePresent@ADAPTER_DISPLAY@@QEAAXIPEBVDXGALLOCATION@@@Z @ 0x1C00E1990 (-SetAllocationForSinglePlanePresent@ADAPTER_DISPLAY@@QEAAXIPEBVDXGALLOCATION@@@Z.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C00E1B78 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00E8320 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00E8360 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00E8760 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C00E9030 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C00F263C (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C00F4D30 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?ValidatePresentRegions@DXGCONTEXT@@AEBAJPEBU_D3DKMT_PRESENT@@II@Z @ 0x1C01007B0 (-ValidatePresentRegions@DXGCONTEXT@@AEBAJPEBU_D3DKMT_PRESENT@@II@Z.c)
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0100890 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEBUDXGK_PRESENT_PARAMS@@IPEAPEAV1@PEAVDXGA.c)
 *     ?CheckInput@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@II@Z @ 0x1C0107A14 (-CheckInput@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@II@Z.c)
 *     ?CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3DDDIFORMAT@@H@Z @ 0x1C0108110 (-CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3.c)
 *     ?IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z @ 0x1C010B07C (-IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z.c)
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C010E944 (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C010EEAC (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?GetDdiSubRectList@DXGPRESENT@@QEBAPEAUtagRECT@@I@Z @ 0x1C01458DC (-GetDdiSubRectList@DXGPRESENT@@QEBAPEAUtagRECT@@I@Z.c)
 *     ?GrowRectList@DXGPRESENT@@QEAAJI@Z @ 0x1C01458FC (-GrowRectList@DXGPRESENT@@QEAAJI@Z.c)
 *     ?WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z @ 0x1C0145EA4 (-WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?PresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@PEAUtagRECT@@@Z @ 0x1C0156324 (-PresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRE.c)
 *     ?VmBusSendBlt@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@IIPEAUtagRECT@@2IPEBU4@IPEAE@Z @ 0x1C0181650 (-VmBusSendBlt@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@IIPEAUtagRECT@@2I.c)
 *     ?VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK2@@EII@Z @ 0x1C0183378 (-VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK.c)
 *     ?VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UNLOCK2@@E@Z @ 0x1C0185890 (-VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UN.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C019DB30 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?AllowLegacyPresent@DXGDEVICE@@QEBAEI@Z @ 0x1C01B03A0 (-AllowLegacyPresent@DXGDEVICE@@QEBAEI@Z.c)
 *     ?CheckOcclusion@DXGPRESENT@@QEAAEXZ @ 0x1C01B12B4 (-CheckOcclusion@DXGPRESENT@@QEAAEXZ.c)
 *     ?IntersectRect@DXGPRESENT@@SAEPEAUtagRECT@@PEBU2@1@Z @ 0x1C01B1DA8 (-IntersectRect@DXGPRESENT@@SAEPEAUtagRECT@@PEBU2@1@Z.c)
 *     ?OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z @ 0x1C01B1F48 (-OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z.c)
 *     ?PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z @ 0x1C01B2BCC (-PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z.c)
 *     ?SynchronizePresentToPrimary@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVDXGPRESENTMUTEX@@E@Z @ 0x1C01B48A0 (-SynchronizePresentToPrimary@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVDXGPRESENTMUTEX@@E@Z.c)
 *     ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@IPEAPEAV2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01CB610 (-ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@IPEAPEAV2@PE.c)
 *     ?UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z @ 0x1C01DB434 (-UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z.c)
 */

__int64 __fastcall DXGCONTEXT::Present(
        DXGCONTEXT *this,
        const struct DXGK_PRESENT_PARAMS *a2,
        struct _KTHREAD ***a3,
        struct DXGADAPTERSTOPRESETLOCKSHARED *a4,
        struct CWin32kLocks *a5,
        struct DXGCONTEXT **a6,
        struct VIDSCH_SUBMIT_DATA_BASE *a7)
{
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v16; // r8
  __int64 v17; // rcx
  unsigned int v18; // eax
  bool v19; // zf
  int v20; // r12d
  unsigned int v21; // esi
  struct _EX_RUNDOWN_REF *v22; // rbx
  unsigned int v23; // r13d
  __int64 v24; // rdi
  __int64 v25; // r13
  __int64 v26; // rcx
  __int64 v27; // r8
  int v28; // r9d
  unsigned int v29; // eax
  unsigned int v30; // esi
  __int64 v31; // rax
  __int64 v32; // r8
  unsigned int v33; // ecx
  struct _EX_RUNDOWN_REF *v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  _QWORD *v38; // rax
  __int64 v39; // rcx
  _QWORD *v40; // rax
  int v41; // eax
  __int64 v42; // rsi
  _QWORD *v43; // rax
  unsigned int v44; // ebx
  __int64 v45; // rsi
  __int64 v46; // rcx
  __int64 v47; // r8
  int v48; // r9d
  unsigned int v49; // eax
  unsigned int v50; // ebx
  __int64 v51; // rax
  __int64 v52; // r8
  unsigned int v53; // ecx
  struct _EX_RUNDOWN_REF *v54; // rdx
  __int64 v55; // rdx
  __int64 v56; // rcx
  _QWORD *v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // r13
  _QWORD *v61; // rax
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rax
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v67; // rcx
  __int64 v68; // rdi
  __int64 *ThreadProperty; // rax
  __int64 *v70; // rsi
  __int64 v71; // rsi
  __int64 v72; // rax
  __int64 v73; // rcx
  __int64 v74; // r8
  int v75; // r9d
  __int64 v76; // rcx
  __int64 v77; // rdi
  struct _KTHREAD *CurrentThread; // r13
  __int64 v79; // rax
  int CurrentProcessSessionId; // edi
  __int64 v81; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v83; // r13
  __int64 v84; // rdx
  __int64 v85; // r8
  __int64 v86; // r9
  __int64 v87; // r13
  __int64 v88; // rcx
  _QWORD *v89; // rax
  __int64 v90; // rcx
  _QWORD *v91; // rax
  _QWORD *v92; // rax
  __int64 v93; // rcx
  __int64 v94; // rax
  _QWORD *v95; // rax
  struct DXGALLOCATION *v96; // rcx
  signed int v97; // esi
  int v98; // eax
  __int64 v99; // rdx
  _QWORD *v100; // rax
  int v101; // esi
  __int64 v102; // rdx
  unsigned int v103; // r13d
  _QWORD *v104; // rax
  __int64 v105; // rcx
  unsigned int v106; // r13d
  __int64 v107; // rcx
  __int64 v108; // rax
  __int64 v109; // rdx
  RECT *v110; // rcx
  __int64 v111; // r8
  unsigned int v112; // ecx
  __int64 v113; // rcx
  _QWORD *v114; // rax
  int v115; // eax
  int v116; // r9d
  unsigned int v117; // r10d
  unsigned int v118; // ebx
  __int64 v119; // rsi
  __int64 v120; // rcx
  int v121; // eax
  int v122; // r9d
  __int64 v123; // rcx
  const RECT *v124; // r11
  int v125; // r9d
  int v126; // r10d
  __int64 v127; // rdx
  RECT v128; // xmm0
  _QWORD *v129; // rax
  __int64 v130; // rcx
  _QWORD *v131; // rax
  _QWORD *v132; // rax
  unsigned int v133; // esi
  UINT Value; // ecx
  _QWORD *v135; // rax
  __int64 v136; // rdx
  _QWORD *v137; // rax
  int v138; // eax
  unsigned int k; // ebx
  __int64 v140; // rdi
  __int64 v141; // rcx
  __int64 v142; // rdi
  __int64 v143; // rbx
  __int64 v144; // rcx
  __int64 v145; // rax
  unsigned int v146; // eax
  __int64 v147; // rax
  __int64 v148; // rsi
  __int64 v149; // rdi
  __int64 v150; // rbx
  __int64 v151; // rax
  __int64 v152; // rax
  _QWORD *v153; // rax
  _QWORD *v154; // rax
  __int64 v155; // rcx
  _QWORD *v156; // rax
  int v157; // edx
  ULONG_PTR v158; // rax
  __int64 v159; // rax
  __int64 v160; // rcx
  _QWORD *v161; // rax
  __int64 v162; // rcx
  __int64 v163; // rax
  __int64 v164; // rcx
  _QWORD *v165; // rax
  __int64 v166; // rax
  __int64 v167; // rax
  __int64 v168; // rax
  int v169; // edx
  __int64 v170; // rdx
  __int64 v171; // rcx
  __int64 v172; // r8
  __int64 v173; // rax
  __int64 v174; // rax
  struct VIDSCH_SUBMIT_DATA_BASE *v175; // rsi
  int v176; // ecx
  int v177; // ecx
  int v178; // ecx
  int v179; // ecx
  int v180; // ecx
  int v181; // eax
  UINT *v182; // rdx
  int DeviceFlipMode; // eax
  __int64 v184; // rdx
  __int64 v185; // rcx
  __int64 v186; // r8
  _QWORD *v187; // rax
  __int64 v188; // rsi
  __int64 v189; // rax
  __int64 v190; // rcx
  __int64 v191; // r8
  int v192; // r9d
  __int64 v193; // rcx
  __int64 v194; // rsi
  int v195; // edx
  struct VIDSCH_SUBMIT_DATA_BASE *v196; // rax
  __int64 v197; // rcx
  __int64 v198; // rax
  int v199; // eax
  __int64 v200; // rcx
  __int64 v201; // rsi
  __int64 v202; // rax
  unsigned int v203; // eax
  _QWORD *v204; // rax
  __int64 v205; // rcx
  __int64 v206; // r8
  struct VIDSCH_SUBMIT_DATA_BASE *v207; // rbx
  __int64 v208; // rcx
  __int64 v209; // rbx
  __int64 v210; // rax
  __int64 v211; // rcx
  __int64 v212; // rcx
  __int64 v213; // rax
  __int64 v214; // rcx
  __int64 v215; // rcx
  int v216; // ebx
  int v217; // eax
  int v218; // ecx
  int v219; // eax
  __int64 v220; // rdx
  __int64 v221; // rcx
  struct DXGPRESENTMUTEX *v222; // r8
  __int64 v223; // rax
  const struct _CDDDXGK_INTERFACE *CddInterface; // rax
  int v225; // eax
  __int64 v226; // rdx
  __int64 v227; // rcx
  struct DXGPRESENTMUTEX *v228; // r8
  struct DXGALLOCATION *v229; // rdi
  __int64 v230; // rax
  __int64 v231; // rcx
  __int64 v232; // rdx
  int v233; // edi
  __int64 v234; // rdx
  __int64 v235; // r8
  __int64 v236; // rcx
  __int64 v237; // rbx
  __int64 v238; // r8
  __int64 v239; // rax
  _QWORD *v240; // rax
  __int64 v241; // rax
  __int64 v242; // rax
  __int64 v243; // rax
  _QWORD *v244; // rbx
  __int64 v245; // rcx
  __int64 v246; // rax
  __int64 v247; // rdi
  __int64 v248; // rbx
  __int64 v249; // rcx
  __int64 v250; // rax
  __int64 v251; // rax
  __int64 v252; // rcx
  __int64 v253; // rax
  __int64 v254; // rdi
  __int64 v255; // rbx
  __int64 v256; // rax
  __int64 v257; // rax
  _QWORD *v258; // rax
  unsigned int v259; // eax
  _QWORD *v260; // rax
  __int64 v261; // rax
  int v262; // edi
  struct DXGALLOCATION *v263; // rbx
  __int64 v264; // rax
  __int64 v265; // rdx
  __int64 v266; // rcx
  _QWORD *v267; // rax
  __int64 v268; // rcx
  int v269; // eax
  int v270; // ecx
  __int64 v271; // rcx
  __int64 v272; // rdx
  __int64 v273; // rcx
  __int64 (__fastcall *v274)(__int64, _QWORD); // rax
  __int64 v275; // r8
  __int64 v276; // rdx
  __int64 v277; // r8
  const RECT *v278; // r11
  UINT v279; // eax
  UINT v280; // edi
  __int64 v281; // rsi
  unsigned int v282; // r9d
  unsigned int v283; // r10d
  __int64 v284; // rcx
  __int64 v285; // rcx
  __int64 v286; // rax
  __int64 v287; // rcx
  __int64 v288; // r8
  __int64 v289; // rbx
  __int64 v290; // rax
  __int64 v291; // rcx
  __int64 v292; // r8
  int v293; // r9d
  __int64 v294; // rax
  struct DXGALLOCATION *v295; // rbx
  __int64 v296; // rcx
  __int64 v297; // rcx
  __int64 v298; // rax
  struct _KTHREAD *v299; // rcx
  __int64 v300; // rax
  _QWORD *v301; // rax
  __int64 v302; // rbx
  __int64 v303; // rcx
  int v304; // eax
  __int64 v305; // rax
  int v306; // eax
  __int64 v307; // rcx
  __int64 v308; // r8
  int v309; // r9d
  __int64 v310; // rax
  __int64 v311; // rax
  __int64 v312; // rcx
  __int64 v313; // rsi
  __int64 v314; // rax
  _QWORD *v315; // rax
  __int64 v316; // rbx
  _QWORD *v317; // rax
  int v318; // eax
  __int64 v319; // rax
  int v320; // eax
  struct _LIST_ENTRY *v321; // rbx
  __int64 v322; // rdx
  __int64 v323; // rcx
  struct DXGPROCESS *v324; // rax
  struct COREDEVICEACCESS *v325; // r13
  struct _EX_RUNDOWN_REF *v326; // rbx
  __int64 v327; // rax
  __int64 v328; // rsi
  __int64 v329; // rcx
  ULONG v330; // eax
  _OWORD *v331; // r14
  D3DKMT_HANDLE *BroadcastContext; // rax
  __int128 v333; // xmm1
  int v334; // eax
  __int64 v335; // rcx
  __int64 v336; // rax
  __int64 v337; // rax
  _QWORD *v338; // rax
  __int64 v339; // rdx
  __int64 v340; // rcx
  _QWORD *v341; // rbx
  __int64 v342; // rcx
  __int64 v343; // rcx
  __int64 v344; // rcx
  __int64 v345; // r8
  struct VIDSCH_SUBMIT_DATA_BASE *v346; // rbx
  struct DXGALLOCATION *v347; // rbx
  int v348; // eax
  __int64 v349; // rdx
  _QWORD *v350; // rax
  __int128 v351; // xmm0
  __int64 v352; // rax
  int v353; // eax
  __int64 v354; // rdx
  __int64 Format; // rcx
  __int64 v356; // rsi
  _QWORD *v357; // rax
  _QWORD *v358; // rax
  __int64 v359; // rcx
  __int64 v360; // r8
  __int64 v361; // rax
  _QWORD *v362; // rax
  __int64 v363; // rdx
  __int64 v364; // rcx
  _QWORD *v365; // rbx
  __int64 v366; // rcx
  _QWORD *v367; // rax
  unsigned int v368; // eax
  __int64 v369; // rcx
  DXGADAPTER **v370; // rsi
  __int64 v371; // rax
  _QWORD *v372; // rax
  _QWORD *v373; // rax
  _QWORD *v374; // rax
  __int64 v375; // rax
  __int64 v376; // rax
  __int64 v377; // rcx
  _QWORD *v378; // rax
  _DWORD *v379; // rcx
  int v380; // esi
  __int64 v381; // rcx
  __int64 v382; // rdx
  __int64 v383; // rax
  unsigned int i; // r13d
  int v385; // ebx
  struct _KTHREAD ***v386; // rdx
  __int64 v387; // rcx
  __int64 v388; // r8
  DXGADAPTER **v389; // rbx
  DXGADAPTER **v390; // rdi
  _QWORD *v391; // rax
  struct _KTHREAD **v392; // rcx
  __int64 v393; // rax
  __int64 v394; // rdx
  __int64 v395; // rcx
  __int64 v396; // rax
  COREDEVICEACCESS *v397; // rsi
  __int64 v398; // rcx
  __int64 v399; // rax
  __int64 v400; // rax
  __int64 v401; // rax
  struct _KTHREAD *v402; // rcx
  __int64 v403; // rax
  BOOL v404; // ebx
  int v405; // eax
  __int64 v406; // rdx
  __int64 v407; // rcx
  __int64 v408; // rax
  __int64 v409; // rdx
  __int64 v410; // rcx
  __int64 v411; // rax
  __int64 v412; // rax
  int v413; // eax
  __int64 v414; // rdx
  __int64 v415; // rcx
  __int64 v416; // rax
  ULONG_PTR Count; // rcx
  int v418; // eax
  unsigned int v419; // esi
  HANDLE CurrentThreadId; // rax
  struct DXGPRESENTMUTEX *v421; // r8
  __int64 v422; // rcx
  DXGADAPTER **v423; // rbx
  _QWORD *v424; // rax
  struct _KTHREAD **v425; // rcx
  CWin32kLocks *v426; // rsi
  __int16 v427; // di
  int v428; // edi
  __int64 v429; // rcx
  __int64 v430; // rax
  __int64 v431; // rax
  int v432; // esi
  __int64 v433; // rdx
  __int64 v434; // rcx
  __int64 v435; // r8
  CWin32kLocks *v436; // rax
  CWin32kLocks *v437; // r8
  __int64 v438; // rcx
  HDEV v439; // rdx
  CWin32kLocks *v440; // rdi
  __int64 v441; // rax
  __int64 v442; // rax
  __int64 v443; // rdx
  __int64 v444; // rcx
  __int64 v445; // rax
  __int64 v446; // rax
  __int64 v447; // rbx
  __int64 v448; // rdx
  __int64 v449; // rcx
  __int64 v450; // rax
  __int64 v451; // rcx
  HDC v452; // rsi
  const struct DXGDEVICE *v453; // rax
  HDC v454; // r8
  int v455; // eax
  __int64 v456; // rdx
  __int64 v457; // rcx
  __int64 v458; // rbx
  __int64 v459; // rax
  __int64 v460; // rcx
  unsigned __int8 v461; // si
  int v462; // ebx
  struct DXGPRESENTMUTEX *v463; // r8
  int v464; // ecx
  unsigned int v465; // edx
  __int64 v466; // r8
  __int64 v467; // rax
  __int64 v468; // rcx
  __int64 v469; // rax
  __int64 v470; // rax
  int v471; // eax
  struct _EX_RUNDOWN_REF *v472; // rsi
  LONG v473; // eax
  LONG v474; // eax
  LONG v475; // eax
  LONG v476; // eax
  __int64 v477; // rcx
  __int64 v478; // rax
  __int64 v479; // rax
  struct tagRECT *DdiSubRectList; // rax
  __int64 SubRectCnt; // rcx
  unsigned int v482; // ebx
  unsigned int v483; // edx
  __int64 v484; // rdx
  __int64 v485; // rcx
  __int64 v486; // r8
  struct DXGPROCESS *Current; // rbx
  unsigned int v488; // ecx
  __int64 v489; // r9
  int v490; // edx
  struct _EX_RUNDOWN_REF *v491; // rdx
  __int64 v492; // rdx
  __int64 v493; // rcx
  __int64 v494; // rax
  __int64 v495; // rcx
  __int64 v496; // rbx
  struct DXGPROCESS *v497; // rax
  int v498; // ebx
  D3DKMT_HANDLE v499; // edi
  __int64 v500; // rax
  __int64 v501; // rdx
  __int64 v502; // r8
  const RECT *pDstSubRects; // rdi
  UINT v504; // esi
  __int64 v505; // r9
  UINT v506; // ebx
  DXGADAPTER **v507; // r13
  unsigned int v508; // r9d
  unsigned int v509; // r10d
  __int64 v510; // rcx
  DXGDEVICE *v511; // rbx
  unsigned __int8 v512; // si
  char v513; // bl
  CWin32kLocks *v514; // rsi
  COREDEVICEACCESS *v515; // r13
  __int64 v516; // rdx
  __int64 v517; // rcx
  __int64 v518; // rbx
  __int64 v519; // rbx
  struct DXGPROCESS *v520; // rax
  __int64 v521; // rax
  __int64 v522; // rcx
  __int64 v523; // rax
  __int64 v524; // rax
  __int64 v525; // rbx
  int v526; // eax
  CWin32kLocks *v527; // rsi
  __int64 v528; // rdx
  __int64 v529; // rdx
  __int64 v530; // rcx
  __int64 v531; // rax
  __int64 v532; // rdx
  __int64 v533; // rcx
  struct DXGDEVICE *v534; // rsi
  __int64 v535; // rax
  __int64 v536; // rbx
  struct DXGPROCESS *v537; // rax
  __int64 v538; // rax
  DXGDEVICE *v539; // rbx
  unsigned __int8 v540; // di
  char v541; // bl
  __int64 v542; // rcx
  __int64 v543; // rax
  __int64 v544; // rbx
  int v545; // eax
  int v546; // eax
  HDEV v547; // rcx
  __int64 v548; // rdx
  __int64 v549; // rcx
  __int64 v550; // rax
  int v551; // eax
  __int64 v552; // rdx
  __int64 v553; // rcx
  __int64 v554; // rax
  __int64 v555; // rdx
  __int64 v556; // rcx
  __int64 v557; // rax
  HDEV v558; // r13
  __int64 v559; // rax
  __int64 v560; // rax
  __int64 v561; // rbx
  __int64 *v562; // rax
  __int64 *v563; // rsi
  __int64 v564; // rbx
  __int64 v565; // rcx
  _QWORD *v566; // rax
  struct _KTHREAD **v567; // rcx
  unsigned int v568; // edx
  __int64 v569; // r8
  __int64 v570; // rax
  __int64 v571; // rbx
  __int64 v572; // rdx
  __int64 v573; // rcx
  __int64 v574; // rax
  unsigned int v575; // r13d
  unsigned int *v576; // rbx
  unsigned int v577; // ecx
  __int64 v578; // rax
  unsigned int v579; // ecx
  __int64 v580; // rcx
  const RECT *v581; // rcx
  int CurrentOrientation; // eax
  int v583; // ecx
  const struct tagRECT *ContentRect; // r9
  _DWORD *v585; // r8
  __int64 v586; // rdx
  struct _VIDMM_DMA_BUFFER **v587; // rcx
  __int64 v588; // r8
  const RECT *v589; // rsi
  UINT v590; // r13d
  __int64 v591; // r9
  UINT v592; // edi
  struct _D3DKMT_UNLOCK2 v593; // rbx
  unsigned int v594; // r9d
  unsigned int v595; // r10d
  __int64 v596; // rcx
  __int64 v597; // rcx
  __int64 v598; // rdi
  struct DXGPROCESS *v599; // rax
  int v600; // eax
  struct COREDEVICEACCESS *v601; // rsi
  UINT j; // edx
  __int64 v603; // rcx
  __int64 v604; // r8
  __int64 v605; // rcx
  __int64 v606; // rax
  __int64 v607; // rax
  __int64 v608; // rax
  _QWORD *v609; // rax
  struct _DXGKARG_PRESENT *v610; // [rsp+20h] [rbp-100h]
  struct _DXGKARG_PRESENT *v611; // [rsp+20h] [rbp-100h]
  struct tagRECT *v612; // [rsp+28h] [rbp-F8h]
  unsigned int v613; // [rsp+28h] [rbp-F8h]
  unsigned int v614; // [rsp+30h] [rbp-F0h]
  int Src; // [rsp+40h] [rbp-E0h]
  size_t Size; // [rsp+48h] [rbp-D8h]
  int Sizea; // [rsp+48h] [rbp-D8h]
  struct VIDSCH_SUBMIT_DATA_BASE *v618; // [rsp+58h] [rbp-C8h]
  enum _D3DDDIFORMAT v619; // [rsp+60h] [rbp-C0h]
  UINT Width; // [rsp+A0h] [rbp-80h]
  unsigned int v621; // [rsp+A0h] [rbp-80h]
  unsigned int v622; // [rsp+A0h] [rbp-80h]
  UINT v623; // [rsp+A0h] [rbp-80h]
  unsigned int v624; // [rsp+A0h] [rbp-80h]
  unsigned int v625; // [rsp+A0h] [rbp-80h]
  unsigned int v626; // [rsp+A0h] [rbp-80h]
  char v627; // [rsp+A4h] [rbp-7Ch]
  char v628; // [rsp+A4h] [rbp-7Ch]
  unsigned int v630; // [rsp+B0h] [rbp-70h]
  unsigned int v631; // [rsp+B0h] [rbp-70h]
  DXGADAPTERSTOPRESETLOCKSHARED *v633; // [rsp+B8h] [rbp-68h]
  unsigned int v634; // [rsp+C0h] [rbp-60h] BYREF
  enum _D3DDDIFORMAT v635; // [rsp+C4h] [rbp-5Ch]
  CWin32kLocks *v636; // [rsp+C8h] [rbp-58h]
  struct DXGALLOCATION *v637; // [rsp+D0h] [rbp-50h] BYREF
  unsigned int v638; // [rsp+D8h] [rbp-48h]
  unsigned int v639[2]; // [rsp+E0h] [rbp-40h]
  __int64 v640; // [rsp+E8h] [rbp-38h]
  HANDLE v641; // [rsp+F0h] [rbp-30h]
  struct VIDSCH_SUBMIT_DATA_BASE *v642; // [rsp+F8h] [rbp-28h]
  __int64 CurrentIrql; // [rsp+100h] [rbp-20h]
  D3DKMT_HANDLE v644; // [rsp+108h] [rbp-18h]
  struct _EX_RUNDOWN_REF *v645; // [rsp+110h] [rbp-10h] BYREF
  DXGADAPTER **v646; // [rsp+118h] [rbp-8h]
  __int64 v647; // [rsp+120h] [rbp+0h]
  char v648[8]; // [rsp+128h] [rbp+8h] BYREF
  __int64 v649; // [rsp+130h] [rbp+10h]
  char v650; // [rsp+138h] [rbp+18h]
  __int64 v651; // [rsp+140h] [rbp+20h] BYREF
  char v652; // [rsp+148h] [rbp+28h]
  struct _EX_RUNDOWN_REF *v653; // [rsp+150h] [rbp+30h] BYREF
  struct _D3DKMT_UNLOCK2 v654; // [rsp+158h] [rbp+38h] BYREF
  HDEV v655; // [rsp+160h] [rbp+40h]
  struct _EX_RUNDOWN_REF *v656; // [rsp+168h] [rbp+48h] BYREF
  struct DXGCONTEXT **v657; // [rsp+170h] [rbp+50h]
  struct _EX_RUNDOWN_REF *v658; // [rsp+178h] [rbp+58h] BYREF
  unsigned int v659[4]; // [rsp+180h] [rbp+60h] BYREF
  __int128 v660; // [rsp+190h] [rbp+70h]
  __int128 v661; // [rsp+1A0h] [rbp+80h]
  int v662; // [rsp+1B0h] [rbp+90h] BYREF
  __int64 v663; // [rsp+1B8h] [rbp+98h]
  struct _EX_RUNDOWN_REF *v664; // [rsp+1C0h] [rbp+A0h] BYREF
  struct _EX_RUNDOWN_REF *v665; // [rsp+1C8h] [rbp+A8h] BYREF
  struct _EX_RUNDOWN_REF *v666; // [rsp+1D0h] [rbp+B0h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v667; // [rsp+1D8h] [rbp+B8h] BYREF
  __int64 v668; // [rsp+208h] [rbp+E8h] BYREF
  struct _D3DKMT_LOCK2 v669; // [rsp+210h] [rbp+F0h] BYREF
  struct _D3DKMT_UNLOCK v670; // [rsp+228h] [rbp+108h] BYREF
  struct _D3DKMT_LOCK v671; // [rsp+238h] [rbp+118h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v672; // [rsp+268h] [rbp+148h] BYREF
  _BYTE v673[24]; // [rsp+298h] [rbp+178h] BYREF
  _BYTE v674[24]; // [rsp+2B0h] [rbp+190h] BYREF
  __int128 v675; // [rsp+2C8h] [rbp+1A8h]
  _QWORD v676[70]; // [rsp+300h] [rbp+1E0h] BYREF
  struct _DXGKARG_PRESENT v677; // [rsp+530h] [rbp+410h] BYREF
  struct tagRECT v678; // [rsp+5E0h] [rbp+4C0h] BYREF
  _QWORD v679[2]; // [rsp+5F0h] [rbp+4D0h] BYREF
  struct tagRECT Source1; // [rsp+600h] [rbp+4E0h] BYREF
  struct tagRECT v681; // [rsp+610h] [rbp+4F0h] BYREF
  struct tagRECT v682; // [rsp+620h] [rbp+500h] BYREF
  char v683[8]; // [rsp+630h] [rbp+510h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+638h] [rbp+518h] BYREF
  _D3DKMT_OUTPUTDUPLPRESENT v685; // [rsp+670h] [rbp+550h] BYREF
  _BYTE v687[64]; // [rsp+7B0h] [rbp+690h] BYREF
  _BYTE v688[64]; // [rsp+7F0h] [rbp+6D0h] BYREF
  _BYTE v689[64]; // [rsp+830h] [rbp+710h] BYREF
  _BYTE v690[64]; // [rsp+870h] [rbp+750h] BYREF
  _BYTE v691[64]; // [rsp+8B0h] [rbp+790h] BYREF
  _BYTE v692[64]; // [rsp+8F0h] [rbp+7D0h] BYREF
  _BYTE v693[64]; // [rsp+930h] [rbp+810h] BYREF
  _BYTE v694[64]; // [rsp+970h] [rbp+850h] BYREF
  _BYTE v695[64]; // [rsp+9B0h] [rbp+890h] BYREF
  _BYTE v696[64]; // [rsp+9F0h] [rbp+8D0h] BYREF
  _BYTE v697[64]; // [rsp+A30h] [rbp+910h] BYREF
  _BYTE v698[64]; // [rsp+A70h] [rbp+950h] BYREF

  v636 = a5;
  v657 = a6;
  v9 = *((_QWORD *)this + 2);
  v642 = a7;
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 16) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v10 + 160)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v10 + 144)) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v11 + 24) = 3062LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( *((_QWORD *)this + 40) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v12 + 24) = 3063LL;
    WdLogEvent5_WdAssertion(v12);
  }
  v13 = *((unsigned int *)a2 + 22);
  if ( (v13 & 0x4000) != 0
    || (v13 &= 0x12000u,
        v10 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL),
        v640 = *(_QWORD *)(v10 + 104),
        (_DWORD)v13 == 73728) )
  {
    v14 = WdLogNewEntry5_WdWarning(v10, v13, a3);
    *(_QWORD *)(v14 + 24) = this;
    *(_QWORD *)(v14 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v14);
    return 3221225485LL;
  }
  memset(&v677, 0, sizeof(v677));
  v17 = *(_DWORD *)a7 | 0x10020u;
  v638 = *((_DWORD *)a2 + 5);
  v18 = *((_DWORD *)a2 + 6);
  *(_DWORD *)a7 = v17;
  v19 = (*((_DWORD *)a2 + 22) & 0x10000) == 0;
  v634 = v18;
  if ( v19 )
  {
    v17 = (unsigned int)v17 | 1;
    *(_DWORD *)a7 = v17;
  }
  LODWORD(v17) = v17 | 0x100;
  *(_DWORD *)a7 = v17;
  *(_DWORD *)a7 = v17 ^ (v17 ^ (32 * *((_DWORD *)a2 + 22))) & 0x20000;
  if ( (*((_DWORD *)a2 + 22) & 0x1000) != 0 )
    *((_DWORD *)a7 + 28) = *((_DWORD *)a2 + 20);
  v20 = 0;
  if ( *(_QWORD *)(*((_QWORD *)this + 2) + 1688LL) != *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) )
    *((_DWORD *)a7 + 29) = 0;
  v21 = *((_DWORD *)a2 + 6);
  v22 = 0LL;
  v637 = 0LL;
  v23 = 0;
  v639[0] = 0;
  v24 = 0LL;
  v630 = 0;
  v635 = D3DDDIFMT_UNKNOWN;
  Width = 0;
  LODWORD(v641) = 0;
  v645 = 0LL;
  v656 = 0LL;
  v644 = 0;
  if ( v21 )
  {
    v25 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v25 + 208, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v28 = *(_DWORD *)(v25 + 224);
        if ( v28 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v26, &EventBlockThread, v27, v28);
      }
      ExAcquirePushLockSharedEx(v25 + 208, 0LL);
    }
    v29 = v21;
    v30 = v21 >> 30;
    v31 = (v29 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v31 < *(_DWORD *)(v25 + 248)
      && (v32 = *(_QWORD *)(v25 + 232), v33 = *(_DWORD *)(v32 + 16 * v31 + 8), v30 == ((v33 >> 5) & 3))
      && (v33 & 0x2000) == 0
      && (v33 & 0x1F) == 5 )
    {
      v34 = *(struct _EX_RUNDOWN_REF **)(v32 + 16LL * (unsigned int)v31);
    }
    else
    {
      v34 = 0LL;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v665, v34);
    ExReleasePushLockSharedEx(v25 + 208, 0LL);
    KeLeaveCriticalRegion();
    DXGALLOCATIONREFERENCE::MoveAssign((struct DXGALLOCATION **)&v645, (struct DXGALLOCATION **)&v665);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v665);
    v24 = (__int64)v645;
    if ( !v645 )
    {
      v38 = (_QWORD *)WdLogNewEntry5_WdWarning(v36, v35, v37);
      v38[3] = -1073741811LL;
      v38[4] = this;
      v38[5] = *((unsigned int *)a2 + 6);
      WdLogEvent5_WdWarning(v38);
      LODWORD(v24) = -1073741811;
      goto LABEL_902;
    }
    v39 = *((_QWORD *)this + 2);
    if ( *(_QWORD *)(*(_QWORD *)(v645[1].Count + 16) + 16LL) != *(_QWORD *)(*(_QWORD *)(v39 + 16) + 16LL) )
    {
      v40 = (_QWORD *)WdLogNewEntry5_WdError(v39);
      v40[3] = *((_QWORD *)this + 2);
      v40[4] = v24;
      v40[5] = -1073741811LL;
      WdLogEvent5_WdError(v40);
      LODWORD(v24) = -1073741811;
      goto LABEL_902;
    }
    memset(&v672, 0, sizeof(v672));
    v672.hAllocation = *(HANDLE *)(v645[6].Count + 16);
    v41 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL), &v672);
    v42 = v41;
    if ( v41 < 0 )
    {
      v43 = (_QWORD *)WdLogNewEntry5_WdError(v17);
      v43[3] = v42;
      v43[4] = this;
      v43[5] = *(_QWORD *)(*(_QWORD *)(v24 + 48) + 16LL);
      v43[6] = v24;
      WdLogEvent5_WdError(v43);
      LODWORD(v24) = v42;
      goto LABEL_902;
    }
    v23 = 0;
    Width = v672.Width;
    LODWORD(v641) = v672.Height;
  }
  if ( (*((_DWORD *)a2 + 22) & 0x8002) == 0 )
  {
    v44 = *((_DWORD *)a2 + 5);
    v45 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v45 + 208, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v48 = *(_DWORD *)(v45 + 224);
        if ( v48 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v46, &EventBlockThread, v47, v48);
      }
      ExAcquirePushLockSharedEx(v45 + 208, 0LL);
    }
    v49 = v44;
    v50 = v44 >> 30;
    v51 = (v49 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v51 < *(_DWORD *)(v45 + 248)
      && (v52 = *(_QWORD *)(v45 + 232), v53 = *(_DWORD *)(v52 + 16 * v51 + 8), v50 == ((v53 >> 5) & 3))
      && (v53 & 0x2000) == 0
      && (v53 & 0x1F) == 5 )
    {
      v54 = *(struct _EX_RUNDOWN_REF **)(v52 + 16LL * (unsigned int)v51);
    }
    else
    {
      v54 = 0LL;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v666, v54);
    ExReleasePushLockSharedEx(v45 + 208, 0LL);
    KeLeaveCriticalRegion();
    DXGALLOCATIONREFERENCE::MoveAssign(&v637, (struct DXGALLOCATION **)&v666);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v666);
    v22 = (struct _EX_RUNDOWN_REF *)v637;
    if ( !v637 )
    {
      v57 = (_QWORD *)WdLogNewEntry5_WdWarning(v56, v55, v16);
      v57[3] = -1073741811LL;
      v57[4] = this;
      v57[5] = *((unsigned int *)a2 + 5);
      WdLogEvent5_WdWarning(v57);
      LODWORD(v24) = -1073741811;
      goto LABEL_902;
    }
    memset(v659, 0, sizeof(v659));
    v660 = 0uLL;
    v661 = 0uLL;
    v17 = *(_QWORD *)(*((_QWORD *)v637 + 6) + 16LL);
    *(_QWORD *)v659 = v17;
    if ( (*((_DWORD *)a2 + 22) & 0x10000000) != 0 )
    {
      v659[2] = *((_DWORD *)a2 + 377);
      v659[3] = *((_DWORD *)a2 + 378);
      LODWORD(v660) = *((_DWORD *)a2 + 379);
LABEL_108:
      v23 = v659[2];
      v97 = v659[3];
      v639[0] = v659[2];
      v630 = v659[3];
      v635 = (int)v660;
      goto LABEL_110;
    }
    v58 = *((_QWORD *)this + 2);
    v59 = *(_QWORD *)(*((_QWORD *)v637 + 1) + 16LL);
    v60 = *(_QWORD *)(v58 + 16);
    *(_QWORD *)v639 = v60;
    if ( *(_QWORD *)(v59 + 16) != *(_QWORD *)(v60 + 16) )
    {
      v61 = (_QWORD *)WdLogNewEntry5_WdError(v58);
      v61[3] = *((_QWORD *)this + 2);
      v61[4] = v22;
      v61[5] = -1073741811LL;
      WdLogEvent5_WdError(v61);
      LODWORD(v24) = -1073741811;
      goto LABEL_902;
    }
    v663 = 0LL;
    v662 = 5003;
    if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q(v58, &EventProfilerEnter, v16, 5003);
    DXGETWPROFILER_BASE_PushProfilerEntry((__int64)&v662, 5003);
    if ( *(_BYTE *)(*(_QWORD *)(v60 + 16) + 185LL) )
    {
      v64 = *(_QWORD *)v659;
      *(_OWORD *)v659 = *(_OWORD *)(*(_QWORD *)v659 + 64LL);
      v660 = *(_OWORD *)(v64 + 80);
      v661 = *(_OWORD *)(v64 + 96);
      HIDWORD(v661) = -1;
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v662);
      if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v17, &EventProfilerExit, v16, v662);
      goto LABEL_108;
    }
    CurrentProcess = PsGetCurrentProcess(v63, v62);
    ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
    v68 = ProcessDxgProcess;
    if ( ProcessDxgProcess )
    {
      if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
      {
        ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
        v70 = ThreadProperty;
        if ( ThreadProperty )
        {
          ObfDereferenceObject(ThreadProperty);
          v68 = *v70;
        }
      }
    }
    v631 = 0;
    v71 = v68 + 120;
    if ( !v68 )
      v71 = 0LL;
    if ( v71 && *(struct _KTHREAD **)(v71 + 8) == KeGetCurrentThread() )
    {
      v72 = WdLogNewEntry5_WdAssertion(v67);
      *(_QWORD *)(v72 + 24) = 1306LL;
      WdLogEvent5_WdAssertion(v72);
    }
    if ( v68 )
    {
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v71, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v75 = *(_DWORD *)(v71 + 16);
          if ( v75 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q(v73, &EventBlockThread, v74, v75);
        }
        ExAcquirePushLockExclusiveEx(v71, 0LL);
      }
      *(_QWORD *)(v71 + 8) = KeGetCurrentThread();
      v631 = 2;
    }
    DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v60 + 16), 1);
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v60 + 16) + 4168LL));
    CurrentIrql = KeGetCurrentIrql();
    v77 = 0LL;
    if ( (unsigned __int8)CurrentIrql < 2u )
    {
      CurrentThread = KeGetCurrentThread();
      if ( !CurrentThread )
      {
        v79 = WdLogNewEntry5_WdAssertion(v76);
        *(_QWORD *)(v79 + 24) = 94LL;
        WdLogEvent5_WdAssertion(v79);
      }
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v76);
      if ( !CurrentProcessSessionId || (unsigned int)PsGetThreadSessionId(CurrentThread) != CurrentProcessSessionId )
        goto LABEL_89;
      v81 = 0LL;
      if ( !IsThreadCrossSessionAttached() )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v81 = *ThreadWin32Thread;
      }
      if ( v81 )
      {
        v77 = *(_QWORD *)(v81 + 80);
        if ( v77 )
        {
          v635 = *(_DWORD *)(v77 + 136);
LABEL_91:
          v83 = *(_QWORD *)v639;
          DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
            (DXGVALIDATIONPROCESSATTACH *)v683,
            *(struct DXGADAPTER **)(*(_QWORD *)v639 + 16LL));
          v87 = (*(int (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)(v83 + 16) + 344LL))(
                  *(_QWORD *)(*(_QWORD *)(v83 + 16) + 240LL),
                  v659);
          if ( v683[0] )
            KeUnstackDetachProcess(&ApcState);
          v88 = KeGetCurrentIrql();
          if ( (_BYTE)CurrentIrql != (_BYTE)v88 )
          {
            v89 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v88);
            v90 = *(_QWORD *)v639;
            v89[3] = 275LL;
            v89[4] = 16LL;
            v89[5] = v90;
            v89[6] = (unsigned __int8)CurrentIrql;
            LOBYTE(v90) = KeGetCurrentIrql();
            v89[7] = (unsigned __int8)v90;
            WdLogEvent5_WdCriticalError(v89);
          }
          if ( v77 && *(_DWORD *)(v77 + 136) != v635 )
          {
            v91 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v88);
            v91[3] = 275LL;
            v91[4] = 38LL;
            v91[5] = *(int *)(v77 + 136);
            v91[6] = v635;
            v91[7] = 0LL;
            WdLogEvent5_WdCriticalError(v91);
          }
          _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)v639 + 16LL) + 4168LL));
          v92 = (_QWORD *)WdLogNewEntry5_WdTrace(v88, v84, v85, v86);
          v92[3] = v87;
          v92[4] = *(_QWORD *)v659;
          v92[5] = v659[2];
          v92[6] = v659[3];
          v93 = (int)v660;
          v92[7] = (int)v660;
          if ( (_DWORD)v87 )
          {
            v94 = WdLogNewEntry5_WdError(v93);
            *(_QWORD *)(v94 + 24) = v87;
            WdLogEvent5_WdError(v94);
          }
          DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(*(_QWORD *)v639 + 16LL));
          if ( v631 == 2 )
          {
            *(_QWORD *)(v71 + 8) = 0LL;
            ExReleasePushLockExclusiveEx(v71, 0LL);
            KeLeaveCriticalRegion();
          }
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v662);
          if ( (qword_1C0079010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q(v17, &EventProfilerExit, v16, v662);
          if ( (int)v87 < 0 )
          {
            v95 = (_QWORD *)WdLogNewEntry5_WdError(v17);
            v95[3] = v87;
            v95[4] = this;
            v96 = v637;
            v95[5] = *(_QWORD *)(v22[6].Count + 16);
            v95[6] = v96;
            WdLogEvent5_WdError(v95);
            LODWORD(v24) = v87;
            goto LABEL_902;
          }
          v22 = (struct _EX_RUNDOWN_REF *)v637;
          v24 = (__int64)v645;
          goto LABEL_108;
        }
      }
      else
      {
LABEL_89:
        v77 = 0LL;
      }
    }
    v635 = D3DDDIFMT_UNKNOWN;
    goto LABEL_91;
  }
  v97 = 0;
LABEL_110:
  v98 = *((_DWORD *)a2 + 6);
  v647 = -1073741130LL;
  if ( !v98 || (v99 = *((unsigned int *)a2 + 22), (v99 & 0x10000) != 0) )
  {
    v99 = *((unsigned int *)a2 + 22);
    if ( (v99 & 4) == 0 )
    {
      if ( (v99 & 3) == 0 )
      {
        if ( (v99 & 0x8000) != 0 )
        {
          if ( (v99 & 0x27EF) != 0
            || (v368 = *((_DWORD *)a2 + 90), v368 > 9)
            || (v17 = 644LL, !_bittest((const int *)&v17, v368))
            || v368 == 2 && *((_DWORD *)a2 + 295) > 0x10u )
          {
            v372 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v99, v16);
            LODWORD(v370) = -1073741811;
            v372[3] = this;
            v372[4] = *((unsigned int *)a2 + 22);
            v372[5] = -1073741811LL;
            WdLogEvent5_WdWarning(v372);
            goto LABEL_901;
          }
          v325 = (struct COREDEVICEACCESS *)a3;
          LODWORD(v370) = SubmitPresentHistoryTokenPreparation(
                            a4,
                            (struct COREDEVICEACCESS *)a3,
                            *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL),
                            (struct _D3DKMT_PRESENTHISTORYTOKEN *)((char *)a2 + 360),
                            *((HANDLE *)a2 + 44),
                            (*((_DWORD *)a2 + 22) & 0x10) != 0);
          if ( (int)v370 < 0 )
          {
LABEL_901:
            LODWORD(v24) = (_DWORD)v370;
            goto LABEL_902;
          }
          if ( a2 == (const struct DXGK_PRESENT_PARAMS *)-360LL )
          {
            v371 = WdLogNewEntry5_WdAssertion(v369);
            *(_QWORD *)(v371 + 24) = 124LL;
            WdLogEvent5_WdAssertion(v371);
          }
          LODWORD(v24) = SubmitPresentHistoryToken(
                           (const struct _D3DKMT_PRESENTHISTORYTOKEN *)((char *)a2 + 360),
                           (struct COREDEVICEACCESS *)a3,
                           a4,
                           v636,
                           1,
                           0LL,
                           a2,
                           v642,
                           this,
                           0LL);
          if ( (int)v24 < 0 )
          {
            DxgkCancelSwapChainBinding((struct _D3DKMT_PRESENTHISTORYTOKEN *)((char *)a2 + 360));
            v244 = (_QWORD *)((char *)this + 320);
            goto LABEL_443;
          }
        }
        else
        {
          v373 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v99, v16);
          v373[3] = -1073741811LL;
          v373[4] = this;
          v373[5] = *((_QWORD *)a2 + 9);
          v373[6] = *((unsigned int *)a2 + 16);
          v373[7] = *((unsigned int *)a2 + 22);
          WdLogEvent5_WdWarning(v373);
          LODWORD(v24) = -1073741811;
        }
        goto LABEL_453;
      }
      if ( (v99 & 0x100) != 0 )
      {
        v17 = *((_QWORD *)this + 2);
        if ( !*(_QWORD *)(v17 + 1688) )
        {
          v374 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v99, v16);
          v374[3] = *((_QWORD *)this + 2);
          v374[4] = -1073741811LL;
LABEL_899:
          WdLogEvent5_WdWarning(v374);
          LODWORD(v229) = -1073741811;
          goto LABEL_900;
        }
        if ( *(_DWORD *)(v17 + 1696) <= *((_DWORD *)a2 + 4) )
        {
          v375 = WdLogNewEntry5_WdWarning(v17, v99, v16);
          *(_QWORD *)(v375 + 24) = *((unsigned int *)a2 + 4);
          *(_QWORD *)(v375 + 32) = *(unsigned int *)(*((_QWORD *)this + 2) + 1696LL);
          WdLogEvent5_WdWarning(v375);
          LODWORD(v229) = -1073741811;
          goto LABEL_900;
        }
      }
      v376 = *((_QWORD *)a2 + 9);
      if ( (v99 & 2) != 0 )
      {
        if ( v376 && *((_DWORD *)a2 + 16) && (v99 & 0x86BD) == 0 )
        {
          v638 = 0;
          goto LABEL_540;
        }
      }
      else if ( v376 && *((_DWORD *)a2 + 16) && v23 && v97 && (v99 & 0x802E) == 0 )
      {
        v377 = ((unsigned int)v99 >> 9) & 1;
        if ( (((unsigned int)v99 >> 9) & 1) != 0 || (v99 & 0x400) != 0 )
        {
          if ( (_DWORD)v377 == (((unsigned int)v99 >> 10) & 1) )
          {
            v378 = (_QWORD *)WdLogNewEntry5_WdWarning(v377, v99, v16);
            LODWORD(v370) = -1073741811;
            v378[3] = -1073741811LL;
            v378[4] = this;
            v378[5] = *((_QWORD *)a2 + 9);
            v378[6] = *((unsigned int *)a2 + 16);
            v378[7] = *((unsigned int *)a2 + 22);
            WdLogEvent5_WdWarning(v378);
            goto LABEL_901;
          }
          if ( (v99 & 0x100) == 0
            || !ADAPTER_DISPLAY::IsVidPnSourceOwner(
                  *(DXGADAPTER ***)(*(_QWORD *)(*((_QWORD *)this + 2) + 1688LL) + 2456LL),
                  *((const struct DXGDEVICE **)this + 2),
                  *((_DWORD *)a2 + 4)) )
          {
            v609 = (_QWORD *)WdLogNewEntry5_WdWarning(v377, v99, v16);
            LODWORD(v370) = -1073741811;
            v609[3] = this;
            v609[4] = *((_QWORD *)a2 + 9);
            v609[5] = *((unsigned int *)a2 + 16);
            v609[6] = *((unsigned int *)a2 + 22);
            v609[7] = -1073741811LL;
            WdLogEvent5_WdWarning(v609);
            goto LABEL_901;
          }
        }
LABEL_540:
        v677.Flags.Value ^= (*(_BYTE *)&v677.Flags.0 ^ (unsigned __int8)*((_DWORD *)a2 + 22)) & 2;
        v677.Flags.Value ^= (*(_BYTE *)&v677.Flags.0 ^ (unsigned __int8)*((_DWORD *)a2 + 22)) & 1;
        v677.Flags.Value ^= (*(_BYTE *)&v677.Flags.0 ^ (unsigned __int8)(*((_DWORD *)a2 + 22) >> 5)) & 0x10;
        v677.Flags.Value ^= (*(_BYTE *)&v677.Flags.0 ^ (unsigned __int8)(*((_DWORD *)a2 + 22) >> 5)) & 0x20;
        v677.Flags.Value ^= (*(_BYTE *)&v677.Flags.0 ^ (unsigned __int8)(*((_DWORD *)a2 + 22) >> 5)) & 0x40;
        v677.Color = *((_DWORD *)a2 + 7);
        LODWORD(v24) = DXGPRESENT::CheckInput(*((DXGPRESENT **)this + 19), (const struct _D3DKMT_PRESENT *)a2, v23, v97);
        if ( (int)v24 < 0 )
          goto LABEL_453;
        v379 = (_DWORD *)*((_QWORD *)this + 19);
        if ( (v379[1] & 4) != 0 )
        {
LABEL_441:
          v244 = (_QWORD *)((char *)this + 320);
LABEL_442:
          v325 = (struct COREDEVICEACCESS *)a3;
LABEL_443:
          if ( (int)v24 < 0 )
            goto LABEL_454;
          v326 = v656;
          if ( v656 )
          {
            if ( (*((_DWORD *)a2 + 22) & 0x10000000) == 0 )
            {
              v327 = *((_QWORD *)this + 2);
              v328 = *(_QWORD *)(v327 + 1688);
              if ( v328 )
              {
                if ( !*(_BYTE *)(*(_QWORD *)(v327 + 40) + 322LL) )
                {
                  memset(&v685, 0, sizeof(v685));
                  v685.hContext = *(_DWORD *)a2;
                  v685.hSource = v644;
                  v685.VidPnSourceId = (*(_DWORD *)(v656[6].Count + 4) >> 6) & 0xF;
                  v329 = 2LL;
                  v330 = *((_DWORD *)a2 + 23);
                  v331 = (_OWORD *)((char *)a2 + 96);
                  v685.BroadcastContextCount = v330;
                  BroadcastContext = v685.BroadcastContext;
                  do
                  {
                    *(_OWORD *)BroadcastContext = *v331;
                    *((_OWORD *)BroadcastContext + 1) = v331[1];
                    *((_OWORD *)BroadcastContext + 2) = v331[2];
                    *((_OWORD *)BroadcastContext + 3) = v331[3];
                    *((_OWORD *)BroadcastContext + 4) = v331[4];
                    *((_OWORD *)BroadcastContext + 5) = v331[5];
                    *((_OWORD *)BroadcastContext + 6) = v331[6];
                    BroadcastContext += 32;
                    v333 = v331[7];
                    v331 += 8;
                    *((_OWORD *)BroadcastContext - 1) = v333;
                    --v329;
                  }
                  while ( v329 );
                  v685.PresentRegions.DirtyRectCount = 0;
                  v685.PresentRegions.MoveRectCount = 0;
                  v685.Flags.Value = 4;
                  v334 = OUTPUTDUPL_MGR::ProcessPresent(
                           *(OUTPUTDUPL_MGR **)(*(_QWORD *)(v328 + 2456) + 104LL),
                           this,
                           &v685,
                           (*(_DWORD *)(v326[6].Count + 4) >> 6) & 0xF,
                           v657,
                           v325);
                  if ( v334 == 259 )
                    v334 = 0;
                  LODWORD(v24) = v334;
                }
              }
            }
          }
          goto LABEL_453;
        }
        if ( (v379[18] & 0x10000) != 0 )
        {
          v380 = (int)v641;
          if ( v379[108] != Width || v379[109] != (_DWORD)v641 )
          {
            v379[108] = Width;
            v379[109] = v380;
            v379[1] |= 0x100u;
          }
        }
        v381 = *((_QWORD *)this + 2);
        v382 = *(_QWORD *)(v381 + 1688);
        if ( v382 && *(_QWORD *)(v382 + 2464) )
        {
          if ( v382 != *(_QWORD *)(*(_QWORD *)(v381 + 16) + 16LL) )
          {
            v383 = WdLogNewEntry5_WdAssertion(v381);
            *(_QWORD *)(v383 + 24) = 4279LL;
            WdLogEvent5_WdAssertion(v383);
            v381 = *((_QWORD *)this + 2);
          }
          for ( i = 0; i < *(_DWORD *)(v381 + 1696); ++i )
          {
            v385 = *((_DWORD *)a2 + 22) & 0x10;
            ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v381 + 104));
            if ( !*((_BYTE *)this + 401) )
            {
              LODWORD(v370) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 520LL)
                                                                                            + 8LL)
                                                                                + 184LL))(
                                *(_QWORD *)(*((_QWORD *)this + 2) + 616LL),
                                i,
                                0LL);
              if ( (_DWORD)v370 == -1071775486 )
              {
                if ( v385 )
                  goto LABEL_564;
                v389 = (DXGADAPTER **)(a3 + 5);
                if ( *((_BYTE *)a3 + 80) )
                  COREACCESS::Release(a3 + 5);
                v390 = (DXGADAPTER **)(a3 + 1);
                if ( !*((_BYTE *)a3 + 32) )
                {
                  v391 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v387);
                  v391[3] = 275LL;
                  v391[4] = 4LL;
                  v391[5] = v390;
                  v391[6] = 0LL;
                  v391[7] = 0LL;
                  WdLogEvent5_WdCriticalError(v391);
                }
                *((_BYTE *)a3 + 32) = 0;
                v392 = a3[3];
                if ( KeGetCurrentThread() != v392[20] )
                  DXGADAPTER::ReleaseCoreResource((DXGADAPTER *)v392);
                LOBYTE(v388) = 1;
                v370 = (DXGADAPTER **)(*(int (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 520LL)
                                                                                                 + 8LL)
                                                                                     + 184LL))(
                                        *(_QWORD *)(*((_QWORD *)this + 2) + 616LL),
                                        i,
                                        v388);
                COREACCESS::AcquireShared(v390);
                v386 = a3;
                v387 = *((unsigned int *)a3[9] + 106);
                if ( (_DWORD)v387 != 1 )
                  goto LABEL_582;
                if ( *((_BYTE *)a3 + 80) )
                {
                  COREACCESS::AcquireShared(v389);
                  v387 = *((unsigned int *)a3[7] + 44);
                  if ( (_DWORD)v387 != 1 )
                  {
                    COREACCESS::Release((struct _KTHREAD ***)v389);
LABEL_582:
                    COREACCESS::Release((struct _KTHREAD ***)v390);
                    v411 = WdLogNewEntry5_WdEvent(v410, v409);
                    *(_QWORD *)(v411 + 24) = v370;
                    WdLogEvent5_WdEvent(v411);
                    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a3);
                    LODWORD(v370) = -1073741130;
LABEL_583:
                    v412 = WdLogNewEntry5_WdEvent(v395, v394);
                    *(_QWORD *)(v412 + 24) = (int)v370;
                    *(_QWORD *)(v412 + 32) = this;
                    WdLogEvent5_WdEvent(v412);
                    goto LABEL_901;
                  }
                }
              }
              if ( (int)v370 < 0 )
              {
LABEL_564:
                v393 = WdLogNewEntry5_WdEvent(v387, v386);
                *(_QWORD *)(v393 + 24) = (int)v370;
                *(_QWORD *)(v393 + 32) = this;
                WdLogEvent5_WdEvent(v393);
                if ( (_DWORD)v370 != -1071775486 && (_DWORD)v370 != -1073741130 && (_DWORD)v370 != -1071775232 )
                {
                  v396 = WdLogNewEntry5_WdAssertion(v395);
                  *(_QWORD *)(v396 + 24) = 2779LL;
                  WdLogEvent5_WdAssertion(v396);
                }
                goto LABEL_583;
              }
            }
            v381 = *((_QWORD *)this + 2);
          }
        }
        else
        {
          v413 = DXGCONTEXT::WaitForQueuedPresentLimit(
                   this,
                   0,
                   (*((_DWORD *)a2 + 22) & 0x10) == 0,
                   (struct COREDEVICEACCESS *)a3);
          v370 = (DXGADAPTER **)v413;
          if ( v413 < 0 )
          {
            v416 = WdLogNewEntry5_WdEvent(v415, v414);
            *(_QWORD *)(v416 + 24) = v370;
            *(_QWORD *)(v416 + 32) = this;
            WdLogEvent5_WdEvent(v416);
            goto LABEL_901;
          }
        }
        v397 = (COREDEVICEACCESS *)a3;
        v244 = (_QWORD *)((char *)this + 320);
        LODWORD(v24) = DXGCONTEXT::AcquireDmaBuffer(
                         this,
                         (struct _VIDMM_DMA_BUFFER **)this + 40,
                         (struct COREDEVICEACCESS *)a3,
                         0);
        if ( (int)v24 < 0 )
        {
LABEL_454:
          v335 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL);
          if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v335 + 160)
            && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v335 + 144))
            && (_DWORD)v24 != -1073741130 )
          {
            v336 = WdLogNewEntry5_WdAssertion(v335);
            *(_QWORD *)(v336 + 24) = 5295LL;
            WdLogEvent5_WdAssertion(v336);
          }
          if ( *v244 )
          {
            v337 = WdLogNewEntry5_WdAssertion(v335);
            *(_QWORD *)(v337 + 24) = 5296LL;
            WdLogEvent5_WdAssertion(v337);
          }
          goto LABEL_902;
        }
        if ( !*v244 && !*((_BYTE *)this + 401) )
        {
          v399 = WdLogNewEntry5_WdAssertion(v398);
          *(_QWORD *)(v399 + 24) = 4317LL;
          WdLogEvent5_WdAssertion(v399);
        }
        v400 = *((_QWORD *)this + 2);
        v650 = 0;
        v649 = *(_QWORD *)(v400 + 16);
        if ( !v649 )
        {
          v401 = WdLogNewEntry5_WdAssertion(0LL);
          *(_QWORD *)(v401 + 24) = 6736LL;
          WdLogEvent5_WdAssertion(v401);
        }
        v402 = KeGetCurrentThread();
        if ( *(struct _KTHREAD **)(v649 + 568) == v402 )
        {
          v403 = WdLogNewEntry5_WdAssertion(v402);
          *(_QWORD *)(v403 + 24) = 6741LL;
          WdLogEvent5_WdAssertion(v403);
        }
        v404 = 0;
        if ( (*((_DWORD *)a2 + 22) & 0x10000) != 0 )
        {
          if ( *((_DWORD *)a2 + 6) )
          {
            Count = v645[6].Count;
            v418 = *(_DWORD *)(Count + 4);
            *(_DWORD *)(Count + 4) = v418 | 0x400;
            v404 = (v418 & 0x400) == 0;
          }
        }
        else
        {
          COREDEVICEACCESS::Release((COREDEVICEACCESS *)a3);
          DXGADAPTERSTOPRESETLOCKSHARED::Release(a4);
          DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)v648);
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire(a4);
          v405 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)a3);
          v24 = v405;
          if ( v405 < 0 )
          {
            v408 = WdLogNewEntry5_WdEvent(v407, v406);
            *(_QWORD *)(v408 + 24) = v24;
            *(_QWORD *)(v408 + 32) = this;
            WdLogEvent5_WdEvent(v408);
LABEL_638:
            COREDEVICEACCESS::AcquireSharedUncheck(v397);
            v20 = v24;
LABEL_639:
            LODWORD(v647) = v20;
            DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v648);
            LODWORD(v370) = v20;
            goto LABEL_901;
          }
        }
        v419 = (*(__int64 (**)(void))(v640 + 8))();
        v625 = v419;
        CurrentThreadId = PsGetCurrentThreadId();
        v641 = CurrentThreadId;
        if ( !*((_BYTE *)this + 401) )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 520LL)
                                                     + 8LL)
                                         + 536LL))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 528LL));
          CurrentThreadId = v641;
        }
        v422 = *((_QWORD *)this + 19);
        if ( *(_DWORD *)(v422 + 8) == v419
          && *(HANDLE *)(v422 + 56) == CurrentThreadId
          && *(_QWORD *)(v422 + 48) == *((_QWORD *)a2 + 1)
          && !*(_DWORD *)(v422 + 64)
          && !v404 )
        {
          v422 = *(unsigned int *)(v422 + 4);
          if ( (v422 & 0x108) == 0 )
          {
            if ( (v422 & 1) != 0 )
            {
              LODWORD(v24) = -1071775738;
            }
            else if ( (*((_DWORD *)a2 + 22) & 0x10000) == 0 && (v422 & 0x10) == 0 )
            {
              DXGDEVICE::SynchronizePresentToPrimary(*((DXGDEVICE **)this + 2), this, v421, 0);
            }
            goto LABEL_662;
          }
        }
        if ( v650 )
        {
          v650 = 0;
          DXGFASTMUTEX::Release((struct _KTHREAD **)(v649 + 560));
        }
        if ( *((_BYTE *)a4 + 16) )
        {
          *((_BYTE *)a4 + 16) = 0;
          ExReleasePushLockSharedEx(*((_QWORD *)a4 + 1) + 120LL, 0LL);
          KeLeaveCriticalRegion();
          v422 = *((_QWORD *)a4 + 1);
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v422 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v422 + 16), (struct DXGADAPTER *)v422);
        }
        if ( *((_BYTE *)a3 + 80) )
          COREACCESS::Release(a3 + 5);
        v423 = (DXGADAPTER **)(a3 + 1);
        v646 = (DXGADAPTER **)(a3 + 1);
        if ( !*((_BYTE *)a3 + 32) )
        {
          v424 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v422);
          v424[3] = 275LL;
          v424[4] = 4LL;
          v424[5] = v423;
          v424[6] = 0LL;
          v424[7] = 0LL;
          WdLogEvent5_WdCriticalError(v424);
        }
        *((_BYTE *)a3 + 32) = 0;
        v425 = a3[3];
        if ( KeGetCurrentThread() != v425[20] )
          DXGADAPTER::ReleaseCoreResource((DXGADAPTER *)v425);
        v426 = v636;
        v427 = *((_WORD *)a2 + 45);
        CurrentIrql = *((_QWORD *)a2 + 1);
        v428 = v427 & 1;
        v429 = *((_QWORD *)v636 + 7);
        if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v429 + 160)
          || ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v429 + 144)) )
        {
          v430 = WdLogNewEntry5_WdAssertion(v429);
          *(_QWORD *)(v430 + 24) = 557LL;
          WdLogEvent5_WdAssertion(v430);
        }
        if ( *(_QWORD *)v426 || *((_QWORD *)v426 + 1) || *((_QWORD *)v426 + 2) )
        {
          v431 = WdLogNewEntry5_WdAssertion(v429);
          *(_QWORD *)(v431 + 24) = 559LL;
          WdLogEvent5_WdAssertion(v431);
        }
        v432 = 0;
        v435 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*((_QWORD *)v636 + 3) + 48LL))(CurrentIrql, 0LL);
        v436 = v636;
        *(_QWORD *)v636 = v435;
        if ( v435 )
        {
          (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v436 + 3) + 296LL))(v435, 1LL);
          v437 = v636;
          v438 = *((_QWORD *)v636 + 7);
          v439 = *(HDEV *)v636;
          *((_QWORD *)v636 + 4) = *((_QWORD *)v636 + 3);
          *((_QWORD *)v437 + 5) = 0LL;
          *((_DWORD *)v437 + 12) = v428;
          v440 = v437;
          CurrentIrql = v438;
          v655 = v439;
          if ( *((_DWORD *)v437 + 13) )
          {
            v441 = WdLogNewEntry5_WdAssertion(v438);
            *(_QWORD *)(v441 + 24) = 455LL;
            WdLogEvent5_WdAssertion(v441);
            v438 = CurrentIrql;
            v439 = v655;
          }
          if ( v439 && v438 )
          {
            *((_QWORD *)v440 + 5) = v438;
            (*(void (__fastcall **)(HDEV))(*((_QWORD *)v440 + 4) + 264LL))(v439);
            (*(void (__fastcall **)(_QWORD, bool))(*((_QWORD *)v440 + 4) + 280LL))(
              *((_QWORD *)v440 + 5),
              *((_DWORD *)v440 + 12) == 0);
            *((_DWORD *)v440 + 13) = 1;
          }
          v442 = (*(__int64 (__fastcall **)(_QWORD))(*((_QWORD *)v440 + 3) + 16LL))(*(_QWORD *)v440);
          *((_QWORD *)v440 + 2) = v442;
          if ( !v442 )
          {
            v445 = WdLogNewEntry5_WdEvent(v444, v443);
            *(_QWORD *)(v445 + 24) = *(_QWORD *)v440;
            WdLogEvent5_WdEvent(v445);
            CWin32kLocks::Unlock(v440);
            v432 = -1073741811;
          }
        }
        else
        {
          v432 = -1071775731;
          v446 = WdLogNewEntry5_WdEvent(v434, v433);
          *(_QWORD *)(v446 + 24) = CurrentIrql;
          WdLogEvent5_WdEvent(v446);
        }
        LODWORD(v24) = v432;
        if ( (*((_DWORD *)a2 + 22) & 0x10000) == 0
          || ((*(void (__fastcall **)(_QWORD, __int64 *))(v640 + 232))(*(_QWORD *)v636, &v668),
              *(_QWORD *)(*((_QWORD *)this + 19) + 440LL) = v668,
              (*((_DWORD *)a2 + 22) & 0x10000) == 0) )
        {
          DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)v648);
        }
        if ( !*((_BYTE *)a4 + 16) )
        {
          _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)a4 + 1) + 24LL));
          *(_QWORD *)a4 = -1LL;
          v447 = *((_QWORD *)a4 + 1);
          KeEnterCriticalRegion();
          ExAcquirePushLockSharedEx(v447 + 120, 0LL);
          v423 = v646;
          *((_BYTE *)a4 + 16) = 1;
        }
        COREACCESS::AcquireShared(v423);
        v449 = *((unsigned int *)a3[9] + 106);
        if ( (_DWORD)v449 == 1 )
        {
          if ( !*((_BYTE *)a3 + 80)
            || (COREACCESS::AcquireShared((DXGADAPTER **)a3 + 5), v448 = *((unsigned int *)a3[7] + 44),
                                                                  (_DWORD)v448 == 1) )
          {
            if ( v432 >= 0 )
            {
              if ( (*((_DWORD *)a2 + 22) & 0x10000) != 0
                && *((_DWORD *)a2 + 6)
                && !*(_QWORD *)(*((_QWORD *)this + 19) + 440LL) )
              {
                v450 = WdLogNewEntry5_WdEvent(v449, v448);
                *(_QWORD *)(v450 + 24) = 0LL;
                *(_QWORD *)(v450 + 32) = this;
                WdLogEvent5_WdEvent(v450);
                v451 = *((_QWORD *)this + 40);
                if ( v451 )
                {
                  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                              + 16LL)
                                                                                  + 544LL)
                                                                      + 8LL)
                                                          + 496LL))(
                    v451,
                    0LL);
                  *((_QWORD *)this + 40) = 0LL;
                }
                goto LABEL_639;
              }
              v452 = *(HDC *)v636;
              v453 = (const struct DXGDEVICE *)*((_QWORD *)this + 2);
              v454 = *(HDC *)v636;
              v655 = (HDEV)*((_QWORD *)v636 + 2);
              LODWORD(v24) = DXGPRESENT::CheckVisRgn(
                               *((DXGPRESENT **)this + 19),
                               (const struct _D3DKMT_PRESENT *)a2,
                               v454,
                               v655,
                               v453,
                               v639[0],
                               v630,
                               v635,
                               1);
              if ( (_DWORD)v24 == 261 )
              {
                DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v648);
                COREDEVICEACCESS::Release((COREDEVICEACCESS *)a3);
                DXGADAPTERSTOPRESETLOCKSHARED::Release(a4);
                if ( DXGPRESENT::CheckOcclusion(*((DXGPRESENT **)this + 19)) )
                  LODWORD(v24) = -1071775738;
                if ( (*((_DWORD *)a2 + 22) & 0x10000) == 0 )
                  DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)v648);
                DXGADAPTERSTOPRESETLOCKSHARED::Acquire(a4);
                v455 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)a3);
                v458 = v455;
                if ( v455 < 0 )
                {
                  v459 = WdLogNewEntry5_WdEvent(v457, v456);
                  *(_QWORD *)(v459 + 24) = v458;
                  WdLogEvent5_WdEvent(v459);
                  COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a3);
                  LODWORD(v647) = v458;
                  DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v648);
                  LODWORD(v370) = v458;
                  goto LABEL_901;
                }
                if ( (_DWORD)v24 != -1071775738 )
                  LODWORD(v24) = DXGPRESENT::CheckVisRgn(
                                   *((DXGPRESENT **)this + 19),
                                   (const struct _D3DKMT_PRESENT *)a2,
                                   v452,
                                   v655,
                                   *((const struct DXGDEVICE **)this + 2),
                                   v639[0],
                                   v630,
                                   v635,
                                   0);
              }
              v460 = *((_QWORD *)this + 19);
              if ( (int)v24 < 0 )
              {
                if ( (*(_BYTE *)(v460 + 4) & 1) != 0 )
                {
                  *(_QWORD *)(v460 + 56) = v641;
                  *(_DWORD *)(*((_QWORD *)this + 19) + 8LL) = v625;
                }
              }
              else
              {
                *(_QWORD *)(v460 + 56) = v641;
                if ( (*((_DWORD *)a2 + 22) & 0x10000) == 0 )
                {
                  *(_DWORD *)(*((_QWORD *)this + 19) + 8LL) = v625;
                  DXGDEVICE::FlushScheduler(*((_QWORD **)this + 2), 2u);
                  v461 = 0;
                  v462 = *(_DWORD *)(*((_QWORD *)this + 19) + 8LL);
                  if ( v462 != (*(unsigned int (**)(void))(v640 + 8))() )
                  {
                    *(_DWORD *)(*((_QWORD *)this + 19) + 8LL) = v625;
                    ADAPTER_RENDER::FlushScheduler(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL), 3, 0xFFFFFFFF, 0);
                    v461 = 1;
                  }
                  DXGDEVICE::SynchronizePresentToPrimary(*((DXGDEVICE **)this + 2), this, v463, v461);
                }
              }
            }
LABEL_662:
            v628 = 0;
            v464 = *(_DWORD *)(*((_QWORD *)this + 19) + 4LL);
            if ( (v464 & 0x10) != 0 )
            {
              DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v648);
              if ( (int)v24 < 0 )
                goto LABEL_738;
              v467 = *((_QWORD *)this + 19);
              v468 = *(_DWORD *)(v467 + 4) >> 1;
              LOBYTE(v468) = (*(_DWORD *)(v467 + 4) & 2) != 0;
              if ( (*(_DWORD *)(v467 + 4) & 2) == 0 && *((_DWORD *)a2 + 23) )
              {
                v469 = WdLogNewEntry5_WdError(v468);
                *(_QWORD *)(v469 + 24) = 4598LL;
                WdLogEvent5_WdError(v469);
                LODWORD(v24) = -1071774910;
                goto LABEL_738;
              }
              if ( (*(_DWORD *)(v467 + 4) & 2) != 0 )
                goto LABEL_738;
              if ( (*((_DWORD *)a2 + 22) & 0x10000) != 0 && *((_DWORD *)a2 + 6) )
              {
                v470 = WdLogNewEntry5_WdAssertion(v468);
                *(_QWORD *)(v470 + 24) = 4604LL;
                WdLogEvent5_WdAssertion(v470);
              }
              if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                McTemplateK0q(v468, &EventPerformanceWarning, v466, 0);
              v471 = *((_DWORD *)a2 + 22);
              if ( (v471 & 0x100) != 0 )
              {
                v472 = (struct _EX_RUNDOWN_REF *)&v682;
                v682 = *ADAPTER_DISPLAY::GetContentRect(
                          *(DXGADAPTER ***)(*(_QWORD *)(*((_QWORD *)this + 2) + 1688LL) + 2456LL),
                          *((_DWORD *)a2 + 4));
                v471 = *((_DWORD *)a2 + 22);
              }
              else
              {
                v472 = 0LL;
              }
              v653 = v472;
              if ( (v471 & 1) != 0 )
              {
                if ( (v471 & 0x80u) == 0 )
                {
                  v677.SrcRect.bottom = v630;
                  v476 = v639[0];
                  *(_QWORD *)&v677.SrcRect.left = 0LL;
                }
                else
                {
                  v473 = *((_DWORD *)a2 + 13);
                  if ( v473 < 0 )
                    v473 = 0;
                  v677.SrcRect.top = v473;
                  v474 = *((_DWORD *)a2 + 12);
                  if ( v474 < 0 )
                    v474 = 0;
                  v677.SrcRect.left = v474;
                  v475 = *((_DWORD *)a2 + 15);
                  if ( (int)v630 < v475 )
                    v475 = v630;
                  v677.SrcRect.bottom = v475;
                  v476 = *((_DWORD *)a2 + 14);
                  if ( (int)v639[0] < v476 )
                    v476 = v639[0];
                }
                v677.SrcRect.right = v476;
                v677.DstRect = v677.SrcRect;
                v477 = (*(_WORD *)&v677.Flags.0 ^ (unsigned __int16)(*((_DWORD *)a2 + 22) >> 9)) & 0x800;
                v677.Flags.Value ^= v477;
                if ( !*((_DWORD *)a2 + 16) )
                {
                  v478 = WdLogNewEntry5_WdAssertion(v477);
                  *(_QWORD *)(v478 + 24) = 4651LL;
                  WdLogEvent5_WdAssertion(v478);
                }
                if ( !*((_QWORD *)a2 + 9) )
                {
                  v479 = WdLogNewEntry5_WdAssertion(v477);
                  *(_QWORD *)(v479 + 24) = 4652LL;
                  WdLogEvent5_WdAssertion(v479);
                }
                LODWORD(v24) = DXGPRESENT::GrowRectList(*((DXGPRESENT **)this + 19), *((_DWORD *)a2 + 16));
                if ( (int)v24 < 0 )
                  goto LABEL_738;
                DdiSubRectList = DXGPRESENT::GetDdiSubRectList(*((DXGPRESENT **)this + 19), 0);
                SubRectCnt = 0LL;
                v482 = 0;
                v677.SubRectCnt = 0;
                v677.pDstSubRects = DdiSubRectList;
                if ( *((_DWORD *)a2 + 16) <= v483 )
                  goto LABEL_738;
                while ( 1 )
                {
                  if ( DXGPRESENT::IntersectRect(
                         &DdiSubRectList[SubRectCnt],
                         (const struct tagRECT *)(*((_QWORD *)a2 + 9) + 16LL * v482),
                         &v677.SrcRect) )
                  {
                    SubRectCnt = ++v677.SubRectCnt;
                  }
                  else
                  {
                    SubRectCnt = v677.SubRectCnt;
                  }
                  if ( ++v482 >= *((_DWORD *)a2 + 16) )
                    break;
                  DdiSubRectList = (struct tagRECT *)v677.pDstSubRects;
                }
                if ( !(_DWORD)SubRectCnt )
                  goto LABEL_738;
                if ( DXGPRESENT::PrepareStagingBuffer(
                       *((DXGPRESENT **)this + 19),
                       *((struct DXGDEVICE **)this + 2),
                       *((_DWORD *)a2 + 5),
                       (struct COREDEVICEACCESS *)a3,
                       &v634) < 0 )
                  goto LABEL_771;
                if ( *((_BYTE *)this + 401) )
                {
                  Current = DXGPROCESS::GetCurrent(v485, v484);
                  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 208));
                  v488 = (v634 >> 6) & 0xFFFFFF;
                  if ( v488 < *((_DWORD *)Current + 62)
                    && (v489 = *((_QWORD *)Current + 29),
                        v490 = *(_DWORD *)(v489 + 16LL * v488 + 8),
                        ((v634 >> 25) & 0x60) == (v490 & 0x60))
                    && (v490 & 0x2000) == 0
                    && (v490 & 0x1F) == 5 )
                  {
                    v491 = *(struct _EX_RUNDOWN_REF **)(v489 + 16LL * v488);
                  }
                  else
                  {
                    v491 = 0LL;
                  }
                  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v658, v491);
                  ExReleasePushLockSharedEx((char *)Current + 208, 0LL);
                  KeLeaveCriticalRegion();
                  if ( !v658 )
                  {
                    v494 = WdLogNewEntry5_WdAssertion(v493);
                    *(_QWORD *)(v494 + 24) = 4684LL;
                    WdLogEvent5_WdAssertion(v494);
                  }
                  v495 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
                  v496 = *(_QWORD *)(v495 + 16);
                  v497 = DXGPROCESS::GetCurrent(v495, v492);
                  LODWORD(Size) = *((_DWORD *)a2 + 368);
                  v498 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendBlt(
                           (DXG_GUEST_VIRTUALGPU_VMBUS *)(v496 + 4080),
                           v497,
                           this,
                           *((_DWORD *)v637 + 24),
                           v658[12].Count,
                           &v677.SrcRect,
                           &v677.DstRect,
                           v677.SubRectCnt,
                           v677.pDstSubRects,
                           Size,
                           *((unsigned __int8 **)a2 + 185));
                  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v658);
                  v499 = v634;
LABEL_729:
                  if ( v498 >= 0 )
                  {
                    v511 = (DXGDEVICE *)*((_QWORD *)this + 2);
                    v512 = 0;
                    if ( (*((_DWORD *)a2 + 22) & 0x100) != 0
                      && ADAPTER_DISPLAY::IsVidPnSourceOwner(
                           *(DXGADAPTER ***)(*((_QWORD *)v511 + 211) + 2456LL),
                           *((const struct DXGDEVICE **)this + 2),
                           *((_DWORD *)a2 + 4)) )
                    {
                      v512 = 1;
                    }
                    else if ( !DXGDEVICE::AllowLegacyPresent(v511, v484) )
                    {
                      v513 = 0;
                      goto LABEL_734;
                    }
                    v513 = 1;
LABEL_734:
                    DXGADAPTERSTOPRESETLOCKSHARED::Release(a4);
                    COREDEVICEACCESS::Release((COREDEVICEACCESS *)a3);
                    if ( !v513 && DXGPRESENT::CheckOcclusion(*((DXGPRESENT **)this + 19)) )
                    {
                      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a3);
LABEL_737:
                      LODWORD(v24) = -1071775738;
                      goto LABEL_738;
                    }
                    CWin32kLocks::Unlock(v636);
                    DXGADAPTERSTOPRESETLOCKSHARED::Acquire(a4);
                    v515 = (COREDEVICEACCESS *)a3;
                    LODWORD(v518) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)a3);
                    if ( (int)v518 >= 0 )
                    {
                      memset(&v671, 0, sizeof(v671));
                      if ( *((_BYTE *)this + 401) )
                      {
                        v669.hDevice = 0;
                        *(_QWORD *)&v669.Flags.0 = 0LL;
                        v669.pData = 0LL;
                        v669.hAllocation = v499;
                        v24 = *((_QWORD *)this + 2);
                        v519 = *(_QWORD *)(*(_QWORD *)(v24 + 16) + 16LL);
                        v520 = DXGPROCESS::GetCurrent(v517, v516);
                        LODWORD(v24) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendLock2(
                                         (DXG_GUEST_VIRTUALGPU_VMBUS *)(v519 + 4080),
                                         v520,
                                         (struct DXGDEVICE *)v24,
                                         &v669,
                                         0,
                                         v613,
                                         v614);
                        v671.pData = v669.pData;
                      }
                      else
                      {
                        if ( !v499 )
                        {
                          v521 = WdLogNewEntry5_WdAssertion(v517);
                          *(_QWORD *)(v521 + 24) = 4773LL;
                          WdLogEvent5_WdAssertion(v521);
                        }
                        v671.hAllocation = v499;
                        LODWORD(v24) = DXGDEVICE::Lock(*((PERESOURCE **)this + 2), &v671, (struct COREDEVICEACCESS *)a3);
                      }
                      if ( (int)v24 < 0 )
                        goto LABEL_738;
                      DXGADAPTERSTOPRESETLOCKSHARED::Release(a4);
                      COREDEVICEACCESS::Release((COREDEVICEACCESS *)a3);
                      if ( !v671.pData )
                      {
                        v523 = WdLogNewEntry5_WdAssertion(v522);
                        *(_QWORD *)(v523 + 24) = 4786LL;
                        WdLogEvent5_WdAssertion(v523);
                      }
                      if ( (*((_DWORD *)a2 + 22) & 0x10000) != 0 && *((_DWORD *)a2 + 6) )
                      {
                        v524 = WdLogNewEntry5_WdAssertion(v522);
                        *(_QWORD *)(v524 + 24) = 4787LL;
                        WdLogEvent5_WdAssertion(v524);
                      }
                      v525 = v640;
                      v19 = (*(unsigned int (__fastcall **)(_QWORD))(v640 + 312))(0LL) == 0;
                      v526 = v512;
                      if ( v19 )
                        v526 = 0;
                      v527 = v636;
                      LODWORD(v24) = CWin32kLocks::Lock(v636, *((HWND *)a2 + 1), 0, 0, v526);
                      if ( (int)v24 >= 0 )
                      {
                        v528 = *((_QWORD *)v527 + 1);
                        if ( !v528 )
                          v528 = *(_QWORD *)v527;
                        LOBYTE(Sizea) = (*((_DWORD *)a2 + 22) & 0x200) != 0;
                        LOBYTE(Src) = 0;
                        if ( !(*(unsigned int (__fastcall **)(const struct DXGK_PRESENT_PARAMS *, __int64, struct _EX_RUNDOWN_REF *, const RECT *, void *, _DWORD, unsigned int, unsigned int, int, int, _DWORD, void (__fastcall *)(const struct tagRECT *, const struct tagRECT *, struct tagRECT *, const struct tagRECT *, unsigned int, unsigned int), __int64 (__fastcall *)(struct tagRECT *, struct tagRECT *, const struct tagRECT *, const struct tagRECT *)))(v525 + 144))(
                                a2,
                                v528,
                                v653,
                                v677.pDstSubRects,
                                v671.pData,
                                *(_DWORD *)(*((_QWORD *)this + 19) + 424LL),
                                v639[0],
                                v630,
                                Src,
                                Sizea,
                                *((_DWORD *)a2 + 7),
                                DXGPRESENT::XformRect,
                                DXGPRESENT::ClipRects) )
                        {
                          v531 = WdLogNewEntry5_WdEvent(v530, v529);
                          *(_QWORD *)(v531 + 24) = -1071775737LL;
                          *(_QWORD *)(v531 + 32) = this;
                          WdLogEvent5_WdEvent(v531);
                          LODWORD(v24) = -1071775737;
                        }
                      }
                      DXGADAPTERSTOPRESETLOCKSHARED::Acquire(a4);
                      LODWORD(v518) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)a3);
                      if ( (int)v518 >= 0 )
                      {
                        v534 = (struct DXGDEVICE *)*((_QWORD *)this + 2);
                        if ( *((_BYTE *)this + 401) )
                        {
                          v654 = 0LL;
                          v535 = *((_QWORD *)v534 + 2);
                          v654.hAllocation = v634;
                          v536 = *(_QWORD *)(v535 + 16);
                          v537 = DXGPROCESS::GetCurrent(v533, v532);
                          DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendUnlock2(
                            (DXG_GUEST_VIRTUALGPU_VMBUS *)(v536 + 4080),
                            v537,
                            v534,
                            &v654,
                            0);
                        }
                        else
                        {
                          v670.hDevice = 0;
                          v670.phAllocations = &v671.hAllocation;
                          v670.NumAllocations = 1;
                          DXGDEVICE::Unlock(v534, &v670, 0LL);
                        }
                        if ( (int)v24 >= 0 && (*((_DWORD *)a2 + 22) & 0x10000) != 0 )
                        {
                          *((_DWORD *)a2 + 90) = 3;
                          *((_QWORD *)a2 + 48) = *(_QWORD *)(*((_QWORD *)this + 19) + 440LL);
                          *((_DWORD *)a2 + 100) = 0;
                          *((_DWORD *)a2 + 91) = 48;
                          DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v648);
                          v514 = v636;
                          LODWORD(v24) = SubmitPresentHistoryToken(
                                           (const struct _D3DKMT_PRESENTHISTORYTOKEN *)((char *)a2 + 360),
                                           (struct COREDEVICEACCESS *)a3,
                                           a4,
                                           v636,
                                           0,
                                           0LL,
                                           0LL,
                                           0LL,
                                           this,
                                           0LL);
                          goto LABEL_739;
                        }
LABEL_738:
                        v514 = v636;
LABEL_739:
                        if ( v650 )
                        {
                          v650 = 0;
                          DXGFASTMUTEX::Release((struct _KTHREAD **)(v649 + 560));
                        }
                        if ( v628 )
                        {
                          CWin32kLocks::Unlock(v514);
                          v325 = (struct COREDEVICEACCESS *)a3;
                          COREDEVICEACCESS::Release((COREDEVICEACCESS *)a3);
                          DXGDEVICE::FlushScheduler(*((_QWORD **)this + 2), 1u);
                          LODWORD(v24) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)a3);
                        }
                        else
                        {
                          v325 = (struct COREDEVICEACCESS *)a3;
                        }
                        v244 = (_QWORD *)((char *)this + 320);
                        if ( *((_QWORD *)this + 40) )
                        {
                          v604 = *((_QWORD *)this + 40);
                          if ( (int)v24 >= 0 )
                          {
                            v605 = *(unsigned int *)(*((_QWORD *)this + 19) + 4LL);
                            LOBYTE(v605) = v605 & 0x12;
                            if ( (_BYTE)v605 == 16 && (*((_DWORD *)a2 + 22) & 2) == 0 )
                            {
                              v606 = WdLogNewEntry5_WdAssertion(v605);
                              *(_QWORD *)(v606 + 24) = 5185LL;
                              WdLogEvent5_WdAssertion(v606);
                              v604 = *((_QWORD *)this + 40);
                            }
                          }
                          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                          + 544LL)
                                                                              + 8LL)
                                                                  + 496LL))(
                            v604,
                            0LL);
                          *v244 = 0LL;
                        }
                        v607 = *((_QWORD *)this + 19);
                        if ( (*(_DWORD *)(v607 + 4) & 0x80) != 0 )
                        {
                          if ( (unsigned int)(v24 + 1071775738) > 1 )
                          {
                            v608 = WdLogNewEntry5_WdAssertion(*(_DWORD *)(v607 + 4) >> 7);
                            *(_QWORD *)(v608 + 24) = 5193LL;
                            WdLogEvent5_WdAssertion(v608);
                          }
                          LODWORD(v24) = 0;
                        }
                        DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v648);
                        goto LABEL_443;
                      }
                    }
LABEL_792:
                    COREDEVICEACCESS::AcquireSharedUncheck(v515);
                    LODWORD(v647) = v518;
                    DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v648);
                    LODWORD(v370) = v518;
                    goto LABEL_901;
                  }
LABEL_771:
                  v538 = WdLogNewEntry5_WdWarning(v485, v484, v486);
                  *(_QWORD *)(v538 + 24) = -1071775738LL;
                  *(_QWORD *)(v538 + 32) = this;
                  WdLogEvent5_WdWarning(v538);
                  goto LABEL_737;
                }
                v499 = v634;
                if ( !v634 )
                {
                  v500 = WdLogNewEntry5_WdAssertion(v485);
                  *(_QWORD *)(v500 + 24) = 4698LL;
                  WdLogEvent5_WdAssertion(v500);
                }
                if ( bTracingEnabled )
                {
                  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                             + 16LL)
                                                                                 + 544LL)
                                                                     + 8LL)
                                                         + 336LL))(
                    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 552LL),
                    v499);
                  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                             + 16LL)
                                                                                 + 544LL)
                                                                     + 8LL)
                                                         + 336LL))(
                    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 552LL),
                    v638);
                  pDstSubRects = v677.pDstSubRects;
                  v504 = v677.SubRectCnt;
                  v505 = *((_QWORD *)a2 + 1);
                  v646 = (DXGADAPTER **)*((_QWORD *)this + 40);
                  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
                    McTemplateK0ppxppttqddddddddq(
                      HIDWORD(*(_QWORD *)&v677.DstRect.left),
                      HIDWORD(*(_QWORD *)&v677.DstRect.right),
                      HIDWORD(*(_QWORD *)&v677.SrcRect.left),
                      v505,
                      v646);
                  v506 = 0;
                  if ( v504 )
                  {
                    v507 = v646;
                    while ( 1 )
                    {
                      v508 = v504 - v506;
                      if ( v504 - v506 > 0x10 )
                        break;
                      v509 = v504 - v506;
                      if ( v508 )
                        goto LABEL_722;
LABEL_724:
                      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
                      {
                        LODWORD(v612) = v509;
                        LODWORD(v611) = v508 <= 0x10;
                        McTemplateK0ptqDR2DR2DR2DR2((__int64)v698, v501, v502, v507, v611, v612, v698, v692, v691, v690);
                      }
                      v506 += 16;
                      if ( v506 >= v504 )
                        goto LABEL_727;
                    }
                    v509 = 16;
LABEL_722:
                    v501 = 0LL;
                    LODWORD(v502) = 0;
                    do
                    {
                      v510 = (unsigned int)v502 + v506;
                      v502 = (unsigned int)(v502 + 1);
                      v510 *= 2LL;
                      v501 += 4LL;
                      *(_DWORD *)&v697[v501 + 60] = *(&pDstSubRects->left + 2 * v510);
                      *(_DWORD *)&v691[v501 + 60] = *(&pDstSubRects->right + 2 * v510);
                      *(_DWORD *)&v690[v501 + 60] = *(&pDstSubRects->top + 2 * v510);
                      *(_DWORD *)&v689[v501 + 60] = *(&pDstSubRects->bottom + 2 * v510);
                    }
                    while ( (unsigned int)v502 < v509 );
                    goto LABEL_724;
                  }
LABEL_727:
                  v499 = v634;
                }
                v498 = DXGCONTEXT::SubmitPresent(
                         this,
                         (struct _D3DKMT_PRESENT *)a2,
                         a2,
                         *((_DWORD *)a2 + 23),
                         v657,
                         v637,
                         v638,
                         v499,
                         &v677,
                         0LL,
                         *((struct _VIDMM_DMA_BUFFER **)this + 40),
                         v642,
                         v635,
                         (struct _D3DKMT_PRESENT *)a3);
                *((_QWORD *)this + 40) = 0LL;
                goto LABEL_729;
              }
              if ( (v471 & 2) == 0 )
                goto LABEL_738;
              v539 = (DXGDEVICE *)*((_QWORD *)this + 2);
              v540 = 0;
              if ( (v471 & 0x100) != 0
                && ADAPTER_DISPLAY::IsVidPnSourceOwner(
                     *(DXGADAPTER ***)(*((_QWORD *)v539 + 211) + 2456LL),
                     *((const struct DXGDEVICE **)this + 2),
                     *((_DWORD *)a2 + 4)) )
              {
                v540 = 1;
              }
              else if ( !DXGDEVICE::AllowLegacyPresent(v539, v465) )
              {
                v541 = 0;
LABEL_777:
                DXGADAPTERSTOPRESETLOCKSHARED::Release(a4);
                COREDEVICEACCESS::Release((COREDEVICEACCESS *)a3);
                if ( v541 || !DXGPRESENT::CheckOcclusion(*((DXGPRESENT **)this + 19)) )
                {
                  if ( (*((_DWORD *)a2 + 22) & 0x10000) != 0 )
                  {
                    v543 = WdLogNewEntry5_WdAssertion(v542);
                    *(_QWORD *)(v543 + 24) = 4907LL;
                    WdLogEvent5_WdAssertion(v543);
                  }
                  CWin32kLocks::Unlock(v636);
                  v544 = v640;
                  v19 = (*(unsigned int (__fastcall **)(_QWORD))(v640 + 312))(0LL) == 0;
                  v545 = v540;
                  if ( v19 )
                    v545 = 0;
                  v546 = CWin32kLocks::Lock(v636, *((HWND *)a2 + 1), 0, 0, v545);
                  v547 = (HDEV)*((_QWORD *)v636 + 1);
                  LODWORD(v24) = v546;
                  if ( !v547 )
                    v547 = *(HDEV *)v636;
                  if ( !(*(unsigned int (__fastcall **)(HDEV, struct _EX_RUNDOWN_REF *, _QWORD, _QWORD, _DWORD))(v544 + 152))(
                          v547,
                          v472,
                          *((_QWORD *)a2 + 9),
                          *((unsigned int *)a2 + 16),
                          *((_DWORD *)a2 + 7)) )
                  {
                    v550 = WdLogNewEntry5_WdEvent(v549, v548);
                    *(_QWORD *)(v550 + 24) = -1071775737LL;
                    *(_QWORD *)(v550 + 32) = this;
                    WdLogEvent5_WdEvent(v550);
                    LODWORD(v24) = -1071775737;
                  }
                }
                else
                {
                  LODWORD(v24) = -1071775738;
                }
                DXGADAPTERSTOPRESETLOCKSHARED::Acquire(a4);
                v515 = (COREDEVICEACCESS *)a3;
                v551 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)a3);
                v518 = v551;
                if ( v551 >= 0 )
                  goto LABEL_738;
                v554 = WdLogNewEntry5_WdEvent(v553, v552);
                *(_QWORD *)(v554 + 24) = v518;
                *(_QWORD *)(v554 + 32) = this;
                WdLogEvent5_WdEvent(v554);
                goto LABEL_792;
              }
              v541 = 1;
              goto LABEL_777;
            }
            if ( (int)v24 < 0 || (v464 & 2) != 0 )
              goto LABEL_738;
            if ( (*(unsigned int (__fastcall **)(_QWORD))(v640 + 224))(0LL) )
            {
              if ( (*((_DWORD *)a2 + 22) & 0x12100) == 0x10000 )
                goto LABEL_802;
              v557 = WdLogNewEntry5_WdAssertion(v556);
              *(_QWORD *)(v557 + 24) = 4945LL;
            }
            else
            {
              if ( *(_QWORD *)(*((_QWORD *)this + 2) + 1688LL) || (*((_DWORD *)a2 + 22) & 0x4000000) != 0 )
              {
LABEL_802:
                if ( (*((_DWORD *)a2 + 22) & 0x10000) != 0 )
                {
                  v558 = *(HDEV *)v636;
                  v559 = PsGetCurrentProcess(v556, v555);
                  v560 = PsGetProcessDxgProcess(v559);
                  v561 = v560;
                  if ( v560 )
                  {
                    if ( (*(_BYTE *)(v560 + 323) & 4) != 0 )
                    {
                      v562 = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
                      v563 = v562;
                      if ( v562 )
                      {
                        ObfDereferenceObject(v562);
                        v561 = *v563;
                      }
                    }
                  }
                  if ( v558 )
                  {
                    v564 = *(_QWORD *)(v561 + 104);
                    if ( v564 )
                    {
                      v565 = *((_QWORD *)this + 19);
                      if ( *(_DWORD *)(v565 + 440) == *((_DWORD *)a2 + 96) )
                      {
                        if ( *((_BYTE *)a4 + 16) )
                        {
                          *((_BYTE *)a4 + 16) = 0;
                          ExReleasePushLockSharedEx(*((_QWORD *)a4 + 1) + 120LL, 0LL);
                          KeLeaveCriticalRegion();
                          v565 = *((_QWORD *)a4 + 1);
                          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v565 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                            DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v565 + 16), (struct DXGADAPTER *)v565);
                        }
                        if ( *((_BYTE *)a3 + 80) )
                          COREACCESS::Release(a3 + 5);
                        v370 = (DXGADAPTER **)(a3 + 1);
                        if ( !*((_BYTE *)a3 + 32) )
                        {
                          v566 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v565);
                          v566[3] = 275LL;
                          v566[4] = 4LL;
                          v566[5] = v370;
                          v566[6] = 0LL;
                          v566[7] = 0LL;
                          WdLogEvent5_WdCriticalError(v566);
                        }
                        *((_BYTE *)a3 + 32) = 0;
                        v567 = a3[3];
                        if ( KeGetCurrentThread() != v567[20] )
                          DXGADAPTER::ReleaseCoreResource((DXGADAPTER *)v567);
                        memset(v676, 0, 0x228uLL);
                        v568 = 1;
                        v569 = 0LL;
                        LODWORD(v676[0]) = *(_DWORD *)(*((_QWORD *)this + 19) + 352LL);
                        v676[1] = *(_QWORD *)(*((_QWORD *)this + 19) + 224LL);
                        v676[3] = *((unsigned int *)this + 6);
                        for ( LODWORD(v676[2]) = 1; (unsigned int)v569 < *((_DWORD *)a2 + 23); ++LODWORD(v676[2]) )
                        {
                          v570 = (unsigned int)v569;
                          v569 = (unsigned int)(v569 + 1);
                          v676[v568 + 3] = *((unsigned int *)a2 + v570 + 24);
                          v568 = LODWORD(v676[2]) + 1;
                        }
                        if ( !*((_BYTE *)this + 401)
                          && (*(unsigned int (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 520LL)
                                                                                                 + 8LL)
                                                                                     + 1032LL))(
                               *(_QWORD *)(*((_QWORD *)this + 2) + 616LL),
                               *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 520LL),
                               v569) )
                        {
                          v628 = 1;
                          LOBYTE(v676[68]) = 1;
                        }
                        (*(void (__fastcall **)(HDEV, _QWORD *, __int64))(v564 + 240))(v558, v676, v569);
                        if ( !*((_BYTE *)a4 + 16) )
                        {
                          _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)a4 + 1) + 24LL));
                          *(_QWORD *)a4 = -1LL;
                          v571 = *((_QWORD *)a4 + 1);
                          KeEnterCriticalRegion();
                          ExAcquirePushLockSharedEx(v571 + 120, 0LL);
                          *((_BYTE *)a4 + 16) = 1;
                        }
                        COREACCESS::AcquireShared(v370);
                        if ( *((_DWORD *)a3[9] + 106) != 1 )
                          goto LABEL_830;
                        if ( *((_BYTE *)a3 + 80) )
                        {
                          COREACCESS::AcquireShared((DXGADAPTER **)a3 + 5);
                          if ( *((_DWORD *)a3[7] + 44) != 1 )
                          {
                            COREACCESS::Release(a3 + 5);
LABEL_830:
                            COREACCESS::Release((struct _KTHREAD ***)v370);
                            v574 = WdLogNewEntry5_WdEvent(v573, v572);
                            *(_QWORD *)(v574 + 24) = -1073741130LL;
                            *(_QWORD *)(v574 + 32) = this;
                            WdLogEvent5_WdEvent(v574);
                            COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a3);
                            DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v648);
                            LODWORD(v370) = v647;
                            goto LABEL_901;
                          }
                        }
                      }
                    }
                  }
                }
                v575 = 0;
                v576 = (unsigned int *)v637;
                v626 = v634;
                for ( LODWORD(v641) = 0; ; LODWORD(v641) = v575 )
                {
                  while ( 1 )
                  {
                    if ( (*((_DWORD *)a2 + 22) & 0x10000) != 0 )
                      v577 = 1;
                    else
                      v577 = *(_DWORD *)(*((_QWORD *)this + 2) + 1696LL);
                    if ( v575 >= v577 )
                      goto LABEL_738;
                    v578 = *((_QWORD *)this + 19);
                    if ( v575 < *(_DWORD *)(v578 + 68) || !v575 )
                      break;
                    ++v575;
                    v677.SubRectCnt = 0;
                    LODWORD(v641) = v575;
                  }
                  v677.SubRectCnt = *(_DWORD *)(v578 + 4LL * v575 + 352);
                  if ( v677.SubRectCnt )
                  {
                    if ( (*((_DWORD *)a2 + 22) & 0x10000) != 0 )
                    {
                      v579 = v626;
                    }
                    else
                    {
                      v579 = DXGDEVICE::OpenCddPrimaryHandle(
                               *((DXGDEVICE **)this + 2),
                               v575,
                               *((_BYTE *)this + 400),
                               *((_DWORD *)this + 90));
                      v626 = v579;
                    }
                    if ( v579 )
                    {
                      v580 = *((_QWORD *)this + 19);
                      if ( v575 >= *(_DWORD *)(v580 + 68) && v575 )
                        v581 = 0LL;
                      else
                        v581 = *(const RECT **)(v580 + 8LL * v575 + 224);
                      v677.pDstSubRects = v581;
                      if ( (*((_DWORD *)a2 + 22) & 0x2000) != 0 )
                      {
                        CurrentOrientation = ADAPTER_DISPLAY::GetCurrentOrientation(
                                               *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1688LL) + 2456LL),
                                               v575,
                                               1);
                        v583 = 0;
                        if ( CurrentOrientation != 1 )
                          v583 = 128;
                        v677.Flags.Value = v583 | v677.Flags.Value & 0xFFFFFF7F;
                      }
                      v679[0] = 0LL;
                      v679[1] = 0LL;
                      if ( (*((_DWORD *)a2 + 22) & 0x10000) != 0 )
                        ContentRect = (const struct tagRECT *)v679;
                      else
                        ContentRect = ADAPTER_DISPLAY::GetContentRect(
                                        *(DXGADAPTER ***)(*(_QWORD *)(*((_QWORD *)this + 2) + 1688LL) + 2456LL),
                                        v575);
                      v677.SrcRect = *(RECT *)(*((_QWORD *)this + 19) + 144LL);
                      v585 = (_DWORD *)*((_QWORD *)this + 19);
                      v586 = (unsigned int)(v585[33] - ContentRect->top);
                      v677.DstRect.top = v585[33] - ContentRect->top;
                      v677.DstRect.bottom = v585[35] - ContentRect->top;
                      v677.DstRect.left = v585[32] - ContentRect->left;
                      v677.DstRect.right = v585[34] - ContentRect->left;
                      v587 = (struct _VIDMM_DMA_BUFFER **)((char *)this + 320);
                      if ( bTracingEnabled && *v587 )
                      {
                        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                       + 544LL)
                                                                           + 8LL)
                                                               + 336LL))(
                          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 552LL),
                          v626);
                        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                       + 544LL)
                                                                           + 8LL)
                                                               + 336LL))(
                          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 552LL),
                          v638);
                        v589 = v677.pDstSubRects;
                        v590 = v677.SubRectCnt;
                        v591 = *((_QWORD *)a2 + 1);
                        v654 = (struct _D3DKMT_UNLOCK2)*((_QWORD *)this + 40);
                        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
                          McTemplateK0ppxppttqddddddddq(
                            HIDWORD(*(_QWORD *)&v677.DstRect.left),
                            HIDWORD(*(_QWORD *)&v677.DstRect.right),
                            HIDWORD(*(_QWORD *)&v677.SrcRect.left),
                            v591,
                            v654);
                        v592 = 0;
                        if ( v590 )
                        {
                          v593 = v654;
                          while ( 1 )
                          {
                            v594 = v590 - v592;
                            if ( v590 - v592 > 0x10 )
                              break;
                            v595 = v590 - v592;
                            if ( v594 )
                              goto LABEL_864;
LABEL_866:
                            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
                            {
                              LODWORD(v612) = v595;
                              LODWORD(v610) = v594 <= 0x10;
                              McTemplateK0ptqDR2DR2DR2DR2(
                                (__int64)v697,
                                v586,
                                v588,
                                v593,
                                v610,
                                v612,
                                v697,
                                v696,
                                v695,
                                v694);
                            }
                            v592 += 16;
                            if ( v592 >= v590 )
                            {
                              v576 = (unsigned int *)v637;
                              goto LABEL_870;
                            }
                          }
                          v595 = 16;
LABEL_864:
                          v586 = 0LL;
                          LODWORD(v588) = 0;
                          do
                          {
                            v596 = (unsigned int)v588 + v592;
                            v588 = (unsigned int)(v588 + 1);
                            v596 *= 2LL;
                            v586 += 4LL;
                            *(_DWORD *)&v696[v586 + 60] = *(&v589->left + 2 * v596);
                            *(_DWORD *)&v695[v586 + 60] = *(&v589->right + 2 * v596);
                            *(_DWORD *)&v694[v586 + 60] = *(&v589->top + 2 * v596);
                            *(_DWORD *)&v693[v586 + 60] = *(&v589->bottom + 2 * v596);
                          }
                          while ( (unsigned int)v588 < v595 );
                          goto LABEL_866;
                        }
LABEL_870:
                        v575 = (unsigned int)v641;
                        v587 = (struct _VIDMM_DMA_BUFFER **)((char *)this + 320);
                      }
                      if ( *((_BYTE *)this + 401) )
                      {
                        v597 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
                        v598 = *(_QWORD *)(v597 + 16);
                        v599 = DXGPROCESS::GetCurrent(v597, v586);
                        LODWORD(Size) = v677.PrivateDriverDataSize;
                        v600 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendBlt(
                                 (DXG_GUEST_VIRTUALGPU_VMBUS *)(v598 + 4080),
                                 v599,
                                 this,
                                 v576[24],
                                 v645[12].Count,
                                 &v677.SrcRect,
                                 &v677.DstRect,
                                 v677.SubRectCnt,
                                 v677.pDstSubRects,
                                 Size,
                                 (unsigned __int8 *)v677.pPrivateDriverData);
                        v601 = (struct COREDEVICEACCESS *)a3;
                      }
                      else
                      {
                        v601 = (struct COREDEVICEACCESS *)a3;
                        v619 = v635;
                        v618 = v642;
                        *((_DWORD *)v642 + 29) = v575;
                        v600 = DXGCONTEXT::SubmitPresent(
                                 this,
                                 (struct _D3DKMT_PRESENT *)a2,
                                 a2,
                                 *((_DWORD *)a2 + 23),
                                 v657,
                                 (struct DXGALLOCATION *)v576,
                                 v638,
                                 v626,
                                 &v677,
                                 0LL,
                                 *v587,
                                 v618,
                                 v619,
                                 (struct _D3DKMT_PRESENT *)a3);
                      }
                      *((_QWORD *)this + 40) = 0LL;
                      LODWORD(v24) = v600;
                      if ( (*((_DWORD *)a2 + 22) & 0x10000) != 0
                        && *(_DWORD *)(*((_QWORD *)this + 19) + 440LL) == *((_DWORD *)a2 + 96) )
                      {
                        *((_DWORD *)a2 + 90) = 3;
                        *((_QWORD *)a2 + 48) = *(_QWORD *)(*((_QWORD *)this + 19) + 440LL);
                        if ( v677.SubRectCnt <= 0x10 )
                        {
                          *((_DWORD *)a2 + 100) = v677.SubRectCnt;
                          for ( j = 0;
                                j < v677.SubRectCnt;
                                *(RECT *)((char *)a2 + 16 * v603 + 404) = v677.pDstSubRects[v603] )
                          {
                            v603 = j++;
                          }
                        }
                        else
                        {
                          *((_DWORD *)a2 + 100) = 1;
                          *(RECT *)((char *)a2 + 404) = v677.DstRect;
                        }
                        *((_DWORD *)a2 + 91) = 16 * (*((_DWORD *)a2 + 100) + 3);
                        if ( v650 )
                        {
                          v650 = 0;
                          DXGFASTMUTEX::Release((struct _KTHREAD **)(v649 + 560));
                        }
                        LODWORD(v24) = SubmitPresentHistoryToken(
                                         (const struct _D3DKMT_PRESENTHISTORYTOKEN *)((char *)a2 + 360),
                                         v601,
                                         a4,
                                         v636,
                                         0,
                                         0LL,
                                         0LL,
                                         0LL,
                                         this,
                                         0LL);
                      }
                      if ( (int)v24 < 0 )
                        goto LABEL_738;
                    }
                  }
                  ++v575;
                }
              }
              v557 = WdLogNewEntry5_WdAssertion(v556);
              *(_QWORD *)(v557 + 24) = 4950LL;
            }
            WdLogEvent5_WdAssertion(v557);
            goto LABEL_802;
          }
          COREACCESS::Release(a3 + 5);
          v423 = v646;
        }
        COREACCESS::Release((struct _KTHREAD ***)v423);
        v397 = (COREDEVICEACCESS *)a3;
        LODWORD(v24) = -1073741130;
        goto LABEL_638;
      }
      v374 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v99, v16);
      v374[3] = this;
      v374[4] = *((_QWORD *)a2 + 9);
      v374[5] = *((unsigned int *)a2 + 16);
      v374[6] = *((unsigned int *)a2 + 22);
      v374[7] = -1073741811LL;
      goto LABEL_899;
    }
  }
  if ( !v98 )
  {
    if ( (v99 & 0x10A7C3) != 0 )
    {
      v367 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v99, v16);
      v367[3] = this;
      v367[4] = *((unsigned int *)a2 + 22);
      v367[5] = -1073741811LL;
      WdLogEvent5_WdWarning(v367);
      v20 = -1073741811;
      goto LABEL_504;
    }
    v157 = v99 & 0x10000000;
    if ( v157 )
    {
      v158 = v22[5].Count;
      if ( !v158 || !*(_QWORD *)(v158 + 56) )
      {
        v159 = WdLogNewEntry5_WdError(v17);
        *(_QWORD *)(v159 + 24) = 3565LL;
LABEL_211:
        WdLogEvent5_WdError(v159);
        LODWORD(v24) = -1073741811;
        goto LABEL_902;
      }
    }
    else
    {
      v160 = *(unsigned int *)(v22[6].Count + 4);
      if ( (v160 & 2) == 0 && (v160 & 1) == 0 && (v160 & 0x2000) == 0 )
        goto LABEL_215;
    }
    if ( v157 )
    {
      v162 = *(_QWORD *)(*((_QWORD *)this + 2) + 1688LL);
      if ( !v162
        || (v163 = *(_QWORD *)(v162 + 2456)) == 0
        || (v106 = *((_DWORD *)a2 + 4), v106 >= *(_DWORD *)(v163 + 80)) )
      {
        v159 = WdLogNewEntry5_WdError(v162);
        *(_QWORD *)(v159 + 24) = *((unsigned int *)a2 + 4);
        goto LABEL_211;
      }
    }
    else
    {
      v106 = (*(_DWORD *)(v22[6].Count + 4) >> 6) & 0xF;
    }
    v653 = v22;
    if ( !ExAcquireRundownProtection(v22 + 11) )
    {
      v165 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v164);
      v165[3] = 275LL;
      v165[4] = 38LL;
      v165[5] = v22;
      v165[6] = 0LL;
      v165[7] = 0LL;
      WdLogEvent5_WdCriticalError(v165);
    }
    DXGALLOCATIONREFERENCE::MoveAssign((struct DXGALLOCATION **)&v656, (struct DXGALLOCATION **)&v653);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v653);
    v644 = *((_DWORD *)a2 + 5);
    v166 = *(_QWORD *)(*((_QWORD *)this + 2) + 1688LL);
    if ( v166 )
    {
      v167 = *(_QWORD *)(v166 + 2456);
      if ( v167 )
      {
        v160 = *(_QWORD *)(v167 + 16);
        if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v160 + 160)
          || ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v160 + 144)) )
        {
          v22 = (struct _EX_RUNDOWN_REF *)v637;
          goto LABEL_230;
        }
        v22 = (struct _EX_RUNDOWN_REF *)v637;
      }
    }
    v168 = WdLogNewEntry5_WdAssertion(v160);
    *(_QWORD *)(v168 + 24) = 3606LL;
    WdLogEvent5_WdAssertion(v168);
LABEL_230:
    v169 = *(_DWORD *)(v22[6].Count + 4);
    if ( (v169 & 0x2000) == 0 || (v160 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL), *(_BYTE *)(v160 + 322)) )
    {
      v111 = *((unsigned int *)a2 + 22);
      if ( (*((_DWORD *)a2 + 22) & 0x60000) != 0 )
      {
        if ( (*((_DWORD *)a2 + 22) & 0x60000) == 0x60000 )
        {
          v159 = WdLogNewEntry5_WdError(v160);
          *(_QWORD *)(v159 + 24) = 3625LL;
          goto LABEL_211;
        }
        if ( (v169 & 0x1000) == 0 )
        {
          v159 = WdLogNewEntry5_WdError(v160);
          *(_QWORD *)(v159 + 24) = 3631LL;
          goto LABEL_211;
        }
        v171 = *((unsigned int *)ADAPTER_DISPLAY::GetDisplayModeInfo(
                                   *(DXGADAPTER ***)(*(_QWORD *)(*((_QWORD *)this + 2) + 1688LL) + 2456LL),
                                   v106)
               + 10);
        if ( (v171 & 0x10) == 0 )
        {
          v173 = WdLogNewEntry5_WdWarning(v171, v170, v172);
          *(_QWORD *)(v173 + 24) = 3638LL;
LABEL_240:
          WdLogEvent5_WdWarning(v173);
          LODWORD(v24) = -1071775739;
          goto LABEL_902;
        }
        v111 = *((unsigned int *)a2 + 22);
        if ( (v111 & 0x40000) != 0 && (v171 & 0x20) == 0 )
        {
          v173 = WdLogNewEntry5_WdWarning(v171, v170, v111);
          *(_QWORD *)(v173 + 24) = 3644LL;
          goto LABEL_240;
        }
        if ( (v111 & 0xC0000) == 0xC0000 )
        {
          v174 = WdLogNewEntry5_WdError(v171);
          *(_QWORD *)(v174 + 24) = 3650LL;
          WdLogEvent5_WdError(v174);
          LODWORD(v24) = -1073741811;
          goto LABEL_902;
        }
      }
      v109 = *((_QWORD *)this + 2);
      if ( *(_QWORD *)(v109 + 1688) != *(_QWORD *)(*(_QWORD *)(v109 + 16) + 16LL) )
        goto LABEL_189;
      v175 = v642;
      v176 = *(_DWORD *)v642 ^ ((unsigned __int8)v111 ^ (unsigned __int8)*(_DWORD *)v642) & 4;
      *(_DWORD *)v642 = v176;
      v177 = ((unsigned __int8)v176 ^ (unsigned __int8)*((_DWORD *)a2 + 22)) & 8 ^ v176;
      *(_DWORD *)v175 = v177;
      v178 = ((unsigned __int8)v177 ^ (unsigned __int8)(*((_DWORD *)a2 + 22) >> 1)) & 0x10 ^ v177;
      *(_DWORD *)v175 = v178;
      v179 = (v178 ^ (4 * *((_DWORD *)a2 + 22))) & 0x80000 ^ v178;
      *(_DWORD *)v175 = v179;
      v180 = (v179 ^ (4 * *((_DWORD *)a2 + 22))) & 0x100000 ^ v179;
      *(_DWORD *)v175 = v180;
      *(_DWORD *)v175 = v180 ^ (v180 ^ (4 * *((_DWORD *)a2 + 22))) & 0x200000;
      if ( (*((_DWORD *)a2 + 22) & 0x8000000) != 0 )
        v181 = *((_DWORD *)a2 + 363);
      else
        v181 = 0;
      *((_DWORD *)v175 + 36) = v181;
      *(_DWORD *)v175 ^= (*((_DWORD *)a2 + 22) ^ *(_DWORD *)v175) & 0x20000000;
      v677.Flags.Value ^= (*(_BYTE *)&v677.Flags.0 ^ (unsigned __int8)*((_DWORD *)a2 + 22)) & 4;
      v677.Flags.Value ^= (*(_WORD *)&v677.Flags.0 ^ (unsigned __int16)(*((_DWORD *)a2 + 22) >> 9)) & 0x100;
      v677.Flags.Value ^= (*(_WORD *)&v677.Flags.0 ^ (unsigned __int16)(*((_DWORD *)a2 + 22) >> 9)) & 0x200;
      v677.Flags.Value ^= (*(_WORD *)&v677.Flags.0 ^ (unsigned __int16)(*((_DWORD *)a2 + 22) >> 9)) & 0x400;
      v182 = (UINT *)*((_QWORD *)a2 + 180);
      if ( v182 && !v182[4] && *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40LL) + 322LL) )
      {
        v677.SubRectCnt = *v182;
        v677.pDstSubRects = *(const RECT **)(*((_QWORD *)a2 + 180) + 8LL);
      }
      DeviceFlipMode = VIDSCH_EXPORT::VidSchGetDeviceFlipMode(
                         *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 520LL),
                         *(_QWORD *)(*((_QWORD *)this + 2) + 616LL),
                         v106,
                         (__int64)a2 + 84);
      *((_DWORD *)v175 + 30) = DeviceFlipMode;
      if ( !DeviceFlipMode )
      {
        v187 = (_QWORD *)WdLogNewEntry5_WdWarning(v185, v184, v186);
        v187[3] = this;
        v187[4] = *((int *)a2 + 21);
        v187[5] = -1073741811LL;
        WdLogEvent5_WdWarning(v187);
        LODWORD(v24) = -1073741811;
        goto LABEL_902;
      }
      if ( ((DeviceFlipMode - 1) & 0xFFFFFFFD) != 0 )
      {
        v677.FlipInterval = *((_DWORD *)a2 + 21);
        if ( *((_DWORD *)v175 + 30) == 2 )
          goto LABEL_261;
      }
      else
      {
        v677.FlipInterval = D3DDDI_FLIPINTERVAL_IMMEDIATE;
      }
      v677.Flags.Value |= 8u;
LABEL_261:
      *((_DWORD *)v175 + 31) = *((_DWORD *)a2 + 21);
      *((_DWORD *)v175 + 29) = v106;
      v188 = *((_QWORD *)this + 2);
      if ( v188 != -232 && *(struct _KTHREAD **)(v188 + 240) == KeGetCurrentThread() )
      {
        v189 = WdLogNewEntry5_WdAssertion(v185);
        *(_QWORD *)(v189 + 24) = 1306LL;
        WdLogEvent5_WdAssertion(v189);
      }
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v188 + 232, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v192 = *(_DWORD *)(v188 + 248);
          if ( v192 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q(v190, &EventBlockThread, v191, v192);
        }
        ExAcquirePushLockSharedEx(v188 + 232, 0LL);
      }
      v193 = v188 + 232;
      v194 = *(_QWORD *)(v188 + 8LL * v106 + 856);
      ExReleasePushLockSharedEx(v193, 0LL);
      KeLeaveCriticalRegion();
      v195 = *(_DWORD *)(v22[6].Count + 4) & 0x2000;
      if ( v195 && v194 && (*(_DWORD *)(*(_QWORD *)(v194 + 48) + 4LL) & 0x2000) == 0 )
      {
        v196 = v642;
        *(_DWORD *)v642 |= 0x400000u;
      }
      else if ( !v195 && v194 && (*(_DWORD *)(*(_QWORD *)(v194 + 48) + 4LL) & 0x2000) != 0 )
      {
        v196 = v642;
        *(_DWORD *)v642 |= 0x400000u;
      }
      else
      {
        v196 = v642;
        *(_DWORD *)v642 &= ~0x400000u;
      }
      v109 = *((unsigned int *)v196 + 30);
      if ( !(_DWORD)v109 )
        goto LABEL_189;
      v197 = *(unsigned int *)(*((_QWORD *)this + 2) + 4LL * v106 + 1624);
      if ( (_DWORD)v109 == (_DWORD)v197 )
        goto LABEL_189;
      v198 = WdLogNewEntry5_WdEvent(v197, v109);
      *(_QWORD *)(v198 + 24) = *((_QWORD *)this + 2);
      WdLogEvent5_WdEvent(v198);
      COREDEVICEACCESS::Release((COREDEVICEACCESS *)a3);
      DXGDEVICE::FlushScheduler(*((_QWORD **)this + 2), 3u);
      v199 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)a3);
      v201 = v199;
      if ( v199 >= 0 )
        goto LABEL_189;
      v202 = WdLogNewEntry5_WdEvent(v200, v109);
      *(_QWORD *)(v202 + 24) = v201;
      WdLogEvent5_WdEvent(v202);
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a3);
      LODWORD(v24) = v201;
      goto LABEL_902;
    }
LABEL_215:
    v161 = (_QWORD *)WdLogNewEntry5_WdError(v160);
    v161[3] = -1073741811LL;
    v161[4] = this;
    v161[5] = v22;
    v161[6] = v22[6].Count;
    v161[7] = *((unsigned int *)a2 + 5);
    WdLogEvent5_WdError(v161);
    LODWORD(v24) = -1073741811;
    goto LABEL_902;
  }
  if ( !*((_QWORD *)a2 + 9) || !*((_DWORD *)a2 + 16) || (v99 & 3) == 0 || (v99 & 0x100E803C) != 0 )
    goto LABEL_120;
  if ( (v99 & 2) != 0 )
  {
    if ( (v99 & 0x100681) != 0 )
    {
LABEL_120:
      v100 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v99, v16);
      v101 = -1073741811;
      v100[3] = this;
      v100[4] = *((_QWORD *)a2 + 9);
      v100[5] = *((unsigned int *)a2 + 16);
      v100[6] = *((unsigned int *)a2 + 22);
      v100[7] = -1073741811LL;
LABEL_121:
      WdLogEvent5_WdWarning(v100);
      goto LABEL_122;
    }
  }
  else
  {
    if ( !v23 || !v97 || (v99 & 0x80u) == 0LL )
      goto LABEL_120;
    v102 = v99 & 0x600;
    if ( (_DWORD)v102 == 1536 )
    {
      v100 = (_QWORD *)WdLogNewEntry5_WdWarning(v17, v102, v16);
      v101 = -1073741811;
      v100[3] = -1073741811LL;
      v100[4] = this;
      v100[5] = *((_QWORD *)a2 + 9);
      v100[6] = *((unsigned int *)a2 + 16);
      v100[7] = *((unsigned int *)a2 + 22);
      goto LABEL_121;
    }
  }
  v103 = *(_DWORD *)(*(_QWORD *)(v24 + 48) + 4LL);
  if ( (v103 & 2) == 0 && (v103 & 1) == 0 )
  {
    v104 = (_QWORD *)WdLogNewEntry5_WdError(v17);
    v101 = -1073741811;
    v104[3] = -1073741811LL;
    v104[4] = this;
    v104[5] = v24;
    v105 = *(_QWORD *)(v24 + 48);
LABEL_132:
    v104[6] = v105;
    v104[7] = *((unsigned int *)a2 + 6);
    WdLogEvent5_WdError(v104);
    goto LABEL_122;
  }
  v106 = (v103 >> 6) & 0xF;
  v107 = *(_QWORD *)(*((_QWORD *)this + 2) + 1688LL);
  if ( !v107
    || (v107 = *(_QWORD *)(v107 + 2456)) == 0
    || !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v107 + 16)) )
  {
    v108 = WdLogNewEntry5_WdAssertion(v107);
    *(_QWORD *)(v108 + 24) = 3314LL;
    WdLogEvent5_WdAssertion(v108);
  }
  *((_DWORD *)v642 + 29) = v106;
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v664, (struct _EX_RUNDOWN_REF *)v24);
  DXGALLOCATIONREFERENCE::MoveAssign((struct DXGALLOCATION **)&v656, (struct DXGALLOCATION **)&v664);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v664);
  v644 = *((_DWORD *)a2 + 6);
  if ( (*((_DWORD *)a2 + 22) & 1) == 0 )
  {
    v677.DstRect.right = Width;
    v677.DstRect.bottom = (int)v641;
    *(_QWORD *)&v677.DstRect.left = 0LL;
    if ( (*((_DWORD *)a2 + 22) & 0x40) != 0 )
    {
      v138 = *((_DWORD *)a2 + 10);
      if ( v138 <= *((_DWORD *)a2 + 8) )
        goto LABEL_170;
      v110 = (RECT *)*((unsigned int *)a2 + 11);
      if ( (int)v110 <= *((_DWORD *)a2 + 9) || v138 <= 0 || (int)v110 <= 0 )
        goto LABEL_170;
      if ( !DXGPRESENT::IntersectRect(&v677.DstRect, (const struct tagRECT *)a2 + 2, &v677.DstRect) )
        goto LABEL_123;
    }
    for ( k = 0; k < *((_DWORD *)a2 + 16); ++k )
    {
      v140 = 16LL * k;
      if ( !DXGPRESENT::IntersectRect(&v681, (const struct tagRECT *)(v140 + *((_QWORD *)a2 + 9)), &v677.DstRect)
        || RtlCompareMemory(&v681, (const void *)(v140 + *((_QWORD *)a2 + 9)), 0x10uLL) != 16 )
      {
        v154 = (_QWORD *)WdLogNewEntry5_WdError(v141);
        v154[3] = -1073741811LL;
        v154[4] = *((int *)a2 + 8);
        v154[5] = *((int *)a2 + 9);
        v154[6] = *((int *)a2 + 10);
        v154[7] = *((int *)a2 + 11);
        WdLogEvent5_WdError(v154);
        v156 = (_QWORD *)WdLogNewEntry5_WdError(v155);
        v156[3] = k;
        v156[4] = *(int *)(*((_QWORD *)a2 + 9) + 16LL * k);
        v156[5] = *(int *)(*((_QWORD *)a2 + 9) + 16LL * k + 4);
        v156[6] = *(int *)(*((_QWORD *)a2 + 9) + 16LL * k + 8);
        v156[7] = *(int *)(*((_QWORD *)a2 + 9) + 16LL * k + 12);
        WdLogEvent5_WdError(v156);
        LODWORD(v24) = -1073741811;
        goto LABEL_902;
      }
    }
    Value = v677.Flags.Value;
    v677.SrcRect = v677.DstRect;
    v677.pDstSubRects = (const RECT *)*((_QWORD *)a2 + 9);
    goto LABEL_188;
  }
  if ( (struct _EX_RUNDOWN_REF *)v24 == v22 )
  {
    v104 = (_QWORD *)WdLogNewEntry5_WdError(v110);
    v101 = -1073741811;
    v104[3] = -1073741811LL;
    v104[4] = this;
    v104[5] = v22;
    v105 = *((unsigned int *)a2 + 5);
    goto LABEL_132;
  }
  v112 = *(_DWORD *)(v22[6].Count + 4);
  if ( (v112 & 2) != 0 || (v112 & 1) != 0 )
  {
    v113 = (v112 >> 6) & 0xF;
    if ( (_DWORD)v113 != v106 )
    {
      v114 = (_QWORD *)WdLogNewEntry5_WdError(v113);
      v101 = -1073741811;
      v114[3] = -1073741811LL;
      v114[4] = this;
      v114[5] = v22;
      v114[6] = (*(_DWORD *)(v22[6].Count + 4) >> 6) & 0xF;
      v114[7] = v106;
      WdLogEvent5_WdError(v114);
      goto LABEL_122;
    }
  }
  v115 = *((_DWORD *)a2 + 12);
  v110 = (RECT *)((char *)a2 + 48);
  v111 = *((unsigned int *)a2 + 14);
  if ( (int)v111 <= v115
    || (v116 = *((_DWORD *)a2 + 15), v109 = *((unsigned int *)a2 + 13), v116 <= (int)v109)
    || (v117 = v639[0], v115 >= (int)v639[0])
    || (int)v109 >= v97
    || (int)v111 <= 0
    || v116 <= 0 )
  {
    v137 = (_QWORD *)WdLogNewEntry5_WdError(v110);
    v101 = -1073741811;
    v137[3] = -1073741811LL;
    v137[4] = *((int *)a2 + 12);
    v137[5] = *((int *)a2 + 13);
    v137[6] = *((int *)a2 + 14);
    v137[7] = *((int *)a2 + 15);
    WdLogEvent5_WdError(v137);
    goto LABEL_122;
  }
  v118 = 0;
  if ( !*((_DWORD *)a2 + 16) )
    goto LABEL_155;
  do
  {
    v119 = 16LL * v118;
    if ( !DXGPRESENT::IntersectRect(&Source1, (const struct tagRECT *)(v119 + *((_QWORD *)a2 + 9)), v110)
      || RtlCompareMemory(&Source1, (const void *)(v119 + *((_QWORD *)a2 + 9)), 0x10uLL) != 16 )
    {
      v129 = (_QWORD *)WdLogNewEntry5_WdError(v120);
      v101 = -1073741811;
      v129[3] = -1073741811LL;
      v129[4] = *((int *)a2 + 12);
      v129[5] = *((int *)a2 + 13);
      v129[6] = *((int *)a2 + 14);
      v129[7] = *((int *)a2 + 15);
      WdLogEvent5_WdError(v129);
      v131 = (_QWORD *)WdLogNewEntry5_WdError(v130);
      v131[3] = v118;
      v131[4] = *(int *)(*((_QWORD *)a2 + 9) + 16LL * v118);
      v131[5] = *(int *)(*((_QWORD *)a2 + 9) + 16LL * v118 + 4);
      v131[6] = *(int *)(*((_QWORD *)a2 + 9) + 16LL * v118 + 8);
      v131[7] = *(int *)(*((_QWORD *)a2 + 9) + 16LL * v118 + 12);
      WdLogEvent5_WdError(v131);
      goto LABEL_122;
    }
    ++v118;
    v110 = (RECT *)((char *)a2 + 48);
  }
  while ( v118 < *((_DWORD *)a2 + 16) );
  v117 = v639[0];
  v110 = (RECT *)((char *)a2 + 48);
LABEL_155:
  if ( (*((_DWORD *)a2 + 22) & 0x40) == 0 )
  {
    v133 = (unsigned int)v641;
    if ( Width == v117 && (_DWORD)v641 == v630 )
    {
      v677.DstRect = *v110;
      v677.pDstSubRects = (const RECT *)*((_QWORD *)a2 + 9);
      goto LABEL_174;
    }
    v135 = (_QWORD *)WdLogNewEntry5_WdWarning(v110, v109, v111);
    v136 = v639[0];
    v135[3] = this;
    v135[4] = Width;
    v135[5] = v133;
    v135[6] = v136;
    v135[7] = v630;
    WdLogEvent5_WdWarning(v135);
    v101 = -1073741811;
    goto LABEL_122;
  }
  v111 = *((unsigned int *)a2 + 10);
  v121 = *((_DWORD *)a2 + 8);
  if ( (int)v111 <= v121
    || (v109 = *((unsigned int *)a2 + 11), v122 = *((_DWORD *)a2 + 9), (int)v109 <= v122)
    || v121 >= (int)Width
    || v122 >= (int)v641
    || (int)v111 <= 0
    || (int)v109 <= 0 )
  {
LABEL_170:
    v100 = (_QWORD *)WdLogNewEntry5_WdWarning(v110, v109, v111);
    v101 = -1073741811;
    v100[3] = -1073741811LL;
    v100[4] = *((int *)a2 + 8);
    v100[5] = *((int *)a2 + 9);
    v100[6] = *((int *)a2 + 10);
    v100[7] = *((int *)a2 + 11);
    goto LABEL_121;
  }
  v123 = (unsigned int)(*((_DWORD *)a2 + 14) - v110->left);
  if ( (_DWORD)v123 != (_DWORD)v111 - v121
    || (v123 = (unsigned int)(*((_DWORD *)a2 + 15) - *((_DWORD *)a2 + 13)), (_DWORD)v123 != (_DWORD)v109 - v122) )
  {
    v132 = (_QWORD *)WdLogNewEntry5_WdError(v123);
    v101 = -1073741811;
    v132[3] = -1073741811LL;
    v132[4] = this;
    v132[5] = *((unsigned int *)a2 + 22);
    v132[6] = v24;
    v132[7] = v106;
    WdLogEvent5_WdError(v132);
    goto LABEL_122;
  }
  v101 = DXGPRESENT::GrowRectList(*((DXGPRESENT **)this + 19), *((_DWORD *)a2 + 16));
  if ( v101 < 0 )
  {
LABEL_122:
    v20 = v101;
LABEL_123:
    LODWORD(v24) = v20;
    goto LABEL_902;
  }
  v124 = DXGPRESENT::GetDdiSubRectList(*((DXGPRESENT **)this + 19), 0);
  v111 = 0LL;
  v125 = *((_DWORD *)a2 + 8) - *((_DWORD *)a2 + 12);
  v126 = *((_DWORD *)a2 + 9) - *((_DWORD *)a2 + 13);
  if ( *((_DWORD *)a2 + 16) > (unsigned int)v109 )
  {
    do
    {
      v127 = (unsigned int)v111;
      v111 = (unsigned int)(v111 + 1);
      v109 = 2 * v127;
      *(&v124->left + 2 * v109) = v125 + *(_DWORD *)(*((_QWORD *)a2 + 9) + 8 * v109);
      *(&v124->right + 2 * v109) = v125 + *(_DWORD *)(*((_QWORD *)a2 + 9) + 8 * v109 + 8);
      *(&v124->top + 2 * v109) = v126 + *(_DWORD *)(*((_QWORD *)a2 + 9) + 8 * v109 + 4);
      *(&v124->bottom + 2 * v109) = v126 + *(_DWORD *)(*((_QWORD *)a2 + 9) + 8 * v109 + 12);
    }
    while ( (unsigned int)v111 < *((_DWORD *)a2 + 16) );
  }
  v128 = (RECT)*((_OWORD *)a2 + 2);
  v677.pDstSubRects = v124;
  v110 = (RECT *)((char *)a2 + 48);
  v677.DstRect = v128;
LABEL_174:
  v677.SrcRect = *v110;
  Value = (*(_WORD *)&v677.Flags.0 ^ (unsigned __int16)(*((_DWORD *)a2 + 22) >> 9)) & 0x800 ^ v677.Flags.Value;
  v677.Flags.Value = Value;
LABEL_188:
  v677.SubRectCnt = *((_DWORD *)a2 + 16);
  v677.Flags.Value = ((unsigned __int8)Value ^ (unsigned __int8)*((_DWORD *)a2 + 22)) & 1 ^ Value;
  v677.Flags.Value ^= (*(_BYTE *)&v677.Flags.0 ^ (unsigned __int8)*((_DWORD *)a2 + 22)) & 2;
  v677.Flags.Value ^= (*(_BYTE *)&v677.Flags.0 ^ (unsigned __int8)(*((_DWORD *)a2 + 22) >> 5)) & 0x10;
  v677.Flags.Value ^= (*(_BYTE *)&v677.Flags.0 ^ (unsigned __int8)(*((_DWORD *)a2 + 22) >> 5)) & 0x20;
  v677.Flags.Value ^= (*(_BYTE *)&v677.Flags.0 ^ (unsigned __int8)(*((_DWORD *)a2 + 22) >> 5)) & 0x40;
  v677.Color = *((_DWORD *)a2 + 7);
  v677.Flags.Value ^= (*(_WORD *)&v677.Flags.0 ^ (unsigned __int16)(*((_DWORD *)a2 + 22) >> 9)) & 0x800;
LABEL_189:
  v142 = *((_QWORD *)this + 2);
  v621 = *((_DWORD *)a2 + 22);
  v143 = *(_QWORD *)(*(_QWORD *)(v142 + 1688) + 2456LL);
  v144 = *(_QWORD *)(v143 + 16);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v144 + 160)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v144 + 144)) )
  {
    v145 = WdLogNewEntry5_WdAssertion(v144);
    *(_QWORD *)(v145 + 24) = 5391LL;
    WdLogEvent5_WdAssertion(v145);
  }
  v146 = *(_DWORD *)(v143 + 80);
  if ( v106 >= v146 )
  {
    v147 = WdLogNewEntry5_WdAssertion(v144);
    *(_QWORD *)(v147 + 24) = 5392LL;
    WdLogEvent5_WdAssertion(v147);
    v146 = *(_DWORD *)(v143 + 80);
  }
  v148 = v106;
  if ( v106 >= v146 || (v144 = 3760LL * v106, v142 != *(_QWORD *)(v144 + *(_QWORD *)(v143 + 112) + 688)) )
  {
    v362 = (_QWORD *)WdLogNewEntry5_WdWarning(v144, v109, v111);
    v362[3] = -1071775744LL;
    v362[4] = this;
    v362[5] = v106;
    WdLogEvent5_WdWarning(v362);
    v363 = *((_QWORD *)this + 2);
    if ( *(_BYTE *)(*(_QWORD *)(v363 + 40) + 322LL) )
    {
      if ( (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(
                           *(DXGADAPTER ***)(*(_QWORD *)(v363 + 1688) + 2456LL),
                           v106) == 1 )
      {
        v364 = *(_QWORD *)(3760LL * v106
                         + *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1688LL) + 2456LL) + 112LL)
                         + 712);
        if ( *(_BYTE *)(v364 + 322) )
        {
          v365 = (_QWORD *)WdLogNewEntry5_WdError(v364);
          v365[3] = *((_QWORD *)this + 2);
          v365[4] = v106;
          v365[5] = ADAPTER_DISPLAY::GetVidPnSourceOwner(
                      *(DXGADAPTER ***)(*(_QWORD *)(*((_QWORD *)this + 2) + 1688LL) + 2456LL),
                      v106);
          WdLogEvent5_WdError(v365);
          LOBYTE(v366) = 1;
          *(_BYTE *)(*((_QWORD *)this + 2) + 1746LL) = 1;
          if ( (unsigned __int8)WdIsDebuggerPresent(v366) )
          {
            DbgPrintEx(0x65u, 0, "Breaking in to allow debug of potential DWM swap chain leak");
            __debugbreak();
          }
        }
      }
    }
    LODWORD(v24) = -1071775744;
    goto LABEL_902;
  }
  v149 = *(_QWORD *)(*((_QWORD *)this + 2) + 1688LL);
  if ( !v149 )
    goto LABEL_288;
  v150 = *(_QWORD *)(v149 + 2456);
  if ( !v150 )
  {
    v151 = WdLogNewEntry5_WdAssertion(v144);
    *(_QWORD *)(v151 + 24) = 8641LL;
    WdLogEvent5_WdAssertion(v151);
    v150 = *(_QWORD *)(v149 + 2456);
    if ( !v150 )
      goto LABEL_202;
  }
  if ( v106 >= *(_DWORD *)(v150 + 80) )
  {
    v152 = WdLogNewEntry5_WdAssertion(v144);
    *(_QWORD *)(v152 + 24) = 5429LL;
    WdLogEvent5_WdAssertion(v152);
  }
  v144 = *(unsigned __int8 *)(*(_QWORD *)(v150 + 112) + 3760LL * v106 + 720);
  if ( (_BYTE)v144 )
  {
LABEL_288:
    v203 = v621;
  }
  else
  {
LABEL_202:
    if ( *(_DWORD *)(*((_QWORD *)this + 2) + 328LL) == 1 )
    {
      v153 = (_QWORD *)WdLogNewEntry5_WdEvent(v144, v109);
      v24 = -1071775738LL;
      goto LABEL_204;
    }
    v203 = v621;
    if ( (v621 & 4) != 0 )
    {
      v204 = (_QWORD *)WdLogNewEntry5_WdEvent(v144, v109);
      v204[3] = 0LL;
      v204[4] = this;
      v204[5] = v106;
      WdLogEvent5_WdEvent(v204);
      if ( (*((_DWORD *)a2 + 22) & 4) != 0 )
      {
        v205 = *((_QWORD *)this + 2);
        v206 = *(_QWORD *)(v205 + 1688);
        if ( v206 == *(_QWORD *)(*(_QWORD *)(v205 + 16) + 16LL) )
        {
          ADAPTER_DISPLAY::DisableOverlayPlanes(*(ADAPTER_DISPLAY **)(v206 + 2456), v106);
          v207 = v642;
          DXGDEVICE::SetDisplayedPrimary(*((struct _KTHREAD ***)this + 2), v106, v637, *((_DWORD *)v642 + 34), 1u);
          LODWORD(v24) = 0;
          *(_DWORD *)(*((_QWORD *)this + 2) + 4LL * v106 + 1624) = *((_DWORD *)v207 + 30);
        }
        else
        {
          DXGDEVICE::SetDisplayedPrimary((struct _KTHREAD **)v205, v106, v637, 0, 1u);
          LODWORD(v24) = 0;
        }
        goto LABEL_902;
      }
LABEL_504:
      LODWORD(v24) = v20;
      goto LABEL_902;
    }
  }
  if ( (v203 & 0x10000000) != 0
    || (v144 = *((_QWORD *)this + 2), *(_DWORD *)(v144 + 328) != 1)
    || (*(_DWORD *)(v144 + 4LL * v106 + 1048) & 0x100) != 0 )
  {
    if ( (*((_DWORD *)a2 + 22) & 4) != 0 )
    {
      if ( *((_QWORD *)a2 + 180) )
      {
        LODWORD(v24) = DXGCONTEXT::ValidatePresentRegions(
                         (DXGCONTEXT *)v144,
                         (const struct _D3DKMT_PRESENT *)a2,
                         v639[0],
                         v630);
        if ( (int)v24 < 0 )
          goto LABEL_902;
      }
    }
    v208 = *(_QWORD *)(*((_QWORD *)this + 2) + 1688LL);
    v209 = *(_QWORD *)(v208 + 2456);
    if ( v106 >= *(_DWORD *)(v209 + 80) )
    {
      v210 = WdLogNewEntry5_WdAssertion(v208);
      *(_QWORD *)(v210 + 24) = 1236LL;
      WdLogEvent5_WdAssertion(v210);
    }
    v211 = *(_QWORD *)(v209 + 16);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v211 + 160)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v211 + 144)) )
    {
      v213 = WdLogNewEntry5_WdAssertion(v212);
      *(_QWORD *)(v213 + 24) = 1237LL;
      WdLogEvent5_WdAssertion(v213);
    }
    v214 = *(_QWORD *)(*(_QWORD *)(v209 + 112) + 3760LL * v106 + 88);
    if ( v214 )
    {
      v215 = *(_QWORD *)(v214 + 48);
      if ( (*(_DWORD *)(v215 + 4) & 0x10) == 0 )
      {
        if ( v215 )
        {
          v216 = *(_DWORD *)(*((_QWORD *)this + 19) + 8LL);
          v217 = (*(__int64 (**)(void))(v640 + 8))();
          v218 = *((_DWORD *)a2 + 22) & 4;
          if ( v216 != v217 )
          {
            if ( !v218 )
            {
              DXGDEVICE::FlushScheduler(*((_QWORD **)this + 2), 2u);
              DXGADAPTERSTOPRESETLOCKSHARED::Release(a4);
              COREDEVICEACCESS::Release((COREDEVICEACCESS *)a3);
              DXGPRESENTMUTEX::DXGPRESENTMUTEX(
                (DXGPRESENTMUTEX *)v673,
                *(struct _KTHREAD ***)(*((_QWORD *)this + 2) + 16LL));
              DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)v673);
              DXGADAPTERSTOPRESETLOCKSHARED::Acquire(a4);
              v219 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)a3);
              v24 = v219;
              if ( v219 < 0 )
              {
                v223 = WdLogNewEntry5_WdEvent(v221, v220);
                *(_QWORD *)(v223 + 24) = v24;
                *(_QWORD *)(v223 + 32) = this;
                WdLogEvent5_WdEvent(v223);
                COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a3);
                DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v673);
                goto LABEL_902;
              }
              DXGDEVICE::SynchronizePresentToPrimary(*((DXGDEVICE **)this + 2), this, v222, 1u);
              DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v673);
            }
            *(_DWORD *)(*((_QWORD *)this + 19) + 8LL) = (*(__int64 (**)(void))(v640 + 8))();
            CddInterface = ADAPTER_DISPLAY::GetCddInterface(
                             *(DXGADAPTER ***)(*(_QWORD *)(*((_QWORD *)this + 2) + 1688LL) + 2456LL),
                             v106);
            if ( CddInterface )
              (*((void (__fastcall **)(_QWORD, _QWORD))CddInterface + 1))(*(_QWORD *)CddInterface, 0LL);
            goto LABEL_315;
          }
          if ( !v218 )
          {
            COREDEVICEACCESS::Release((COREDEVICEACCESS *)a3);
            DXGADAPTERSTOPRESETLOCKSHARED::Release(a4);
            DXGPRESENTMUTEX::DXGPRESENTMUTEX(
              (DXGPRESENTMUTEX *)v674,
              *(struct _KTHREAD ***)(*((_QWORD *)this + 2) + 16LL));
            DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)v674);
            DXGADAPTERSTOPRESETLOCKSHARED::Acquire(a4);
            v225 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)a3);
            v229 = (struct DXGALLOCATION *)v225;
            if ( v225 < 0 )
            {
              v230 = WdLogNewEntry5_WdEvent(v227, v226);
              *(_QWORD *)(v230 + 24) = v229;
              *(_QWORD *)(v230 + 32) = this;
              WdLogEvent5_WdEvent(v230);
              COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a3);
              DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v674);
              goto LABEL_900;
            }
            DXGDEVICE::SynchronizePresentToPrimary(*((DXGDEVICE **)this + 2), this, v228, 0);
            DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v674);
          }
LABEL_315:
          v231 = *((_QWORD *)this + 2);
          goto LABEL_316;
        }
      }
    }
    v231 = *((_QWORD *)this + 2);
    if ( (*(_DWORD *)(v231 + 4LL * v106 + 1048) & 0x200) != 0 || (*((_DWORD *)a2 + 22) & 0x10000000) != 0 )
    {
LABEL_316:
      v232 = *(_QWORD *)(v231 + 1688);
      if ( v232 == *(_QWORD *)(*(_QWORD *)(v231 + 16) + 16LL) )
      {
        v233 = *((_DWORD *)a2 + 22) & 0x10;
        ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v231 + 104));
        if ( *((_BYTE *)this + 401) )
        {
LABEL_333:
          if ( ((*((_DWORD *)v642 + 30) - 3) & 0xFFFFFFFD) != 0 )
          {
            v244 = (_QWORD *)((char *)this + 320);
            LODWORD(v24) = DXGCONTEXT::AcquireDmaBuffer(
                             this,
                             (struct _VIDMM_DMA_BUFFER **)this + 40,
                             (struct COREDEVICEACCESS *)a3,
                             0);
            if ( (int)v24 < 0 )
              goto LABEL_454;
            if ( !*v244 )
            {
              v246 = WdLogNewEntry5_WdAssertion(v245);
              *(_QWORD *)(v246 + 24) = 3928LL;
              WdLogEvent5_WdAssertion(v246);
            }
          }
          v247 = *((_QWORD *)this + 2);
          v622 = *((_DWORD *)a2 + 22);
          v248 = *(_QWORD *)(*(_QWORD *)(v247 + 1688) + 2456LL);
          v249 = *(_QWORD *)(v248 + 16);
          if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v249 + 160)
            && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v249 + 144)) )
          {
            v250 = WdLogNewEntry5_WdAssertion(v249);
            *(_QWORD *)(v250 + 24) = 5391LL;
            WdLogEvent5_WdAssertion(v250);
          }
          if ( v106 >= *(_DWORD *)(v248 + 80)
            && (v251 = WdLogNewEntry5_WdAssertion(v249),
                *(_QWORD *)(v251 + 24) = 5392LL,
                WdLogEvent5_WdAssertion(v251),
                v106 >= *(_DWORD *)(v248 + 80))
            || (v253 = *(_QWORD *)(v248 + 112), v252 = 3760LL * v106,
                                                v640 = v252,
                                                v247 != *(_QWORD *)(v253 + v252 + 688)) )
          {
            v338 = (_QWORD *)WdLogNewEntry5_WdWarning(v252, v234, v235);
            v338[3] = -1071775744LL;
            v338[4] = this;
            v338[5] = v106;
            WdLogEvent5_WdWarning(v338);
            v339 = *((_QWORD *)this + 2);
            if ( *(_BYTE *)(*(_QWORD *)(v339 + 40) + 322LL) )
            {
              if ( (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(
                                   *(DXGADAPTER ***)(*(_QWORD *)(v339 + 1688) + 2456LL),
                                   v106) == 1 )
              {
                v340 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1688LL) + 2456LL) + 112LL)
                                 + 3760LL * v106
                                 + 712);
                if ( *(_BYTE *)(v340 + 322) )
                {
                  v341 = (_QWORD *)WdLogNewEntry5_WdError(v340);
                  v341[3] = *((_QWORD *)this + 2);
                  v341[4] = v106;
                  v341[5] = ADAPTER_DISPLAY::GetVidPnSourceOwner(
                              *(DXGADAPTER ***)(*(_QWORD *)(*((_QWORD *)this + 2) + 1688LL) + 2456LL),
                              v106);
                  WdLogEvent5_WdError(v341);
                  LOBYTE(v342) = 1;
                  *(_BYTE *)(*((_QWORD *)this + 2) + 1746LL) = 1;
                  if ( (unsigned __int8)WdIsDebuggerPresent(v342) )
                  {
                    DbgPrintEx(0x65u, 0, "Breaking in to allow debug of potential DWM swap chain leak");
                    __debugbreak();
                  }
                }
              }
            }
            LODWORD(v24) = -1071775744;
LABEL_466:
            v244 = (_QWORD *)((char *)this + 320);
            v343 = *((_QWORD *)this + 40);
            if ( v343 )
            {
              (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                              + 544LL)
                                                                  + 8LL)
                                                      + 496LL))(
                v343,
                0LL);
              *v244 = 0LL;
            }
            if ( (_DWORD)v24 == -1071774920 )
            {
              if ( (*((_DWORD *)a2 + 22) & 4) != 0 )
              {
                v344 = *((_QWORD *)this + 2);
                v345 = *(_QWORD *)(v344 + 1688);
                if ( v345 == *(_QWORD *)(*(_QWORD *)(v344 + 16) + 16LL) )
                {
                  ADAPTER_DISPLAY::DisableOverlayPlanes(*(ADAPTER_DISPLAY **)(v345 + 2456), v106);
                  v346 = v642;
                  DXGDEVICE::SetDisplayedPrimary(
                    *((struct _KTHREAD ***)this + 2),
                    v106,
                    v637,
                    *((_DWORD *)v642 + 34),
                    1u);
                  LODWORD(v229) = 0;
                  *(_DWORD *)(*((_QWORD *)this + 2) + 4LL * v106 + 1624) = *((_DWORD *)v346 + 30);
                  goto LABEL_900;
                }
                DXGDEVICE::SetDisplayedPrimary((struct _KTHREAD **)v344, v106, v637, 0, 1u);
              }
              LODWORD(v229) = 0;
              goto LABEL_900;
            }
            goto LABEL_442;
          }
          v254 = *(_QWORD *)(*((_QWORD *)this + 2) + 1688LL);
          if ( !v254 )
            goto LABEL_354;
          v255 = *(_QWORD *)(v254 + 2456);
          if ( !v255 )
          {
            v256 = WdLogNewEntry5_WdAssertion(v252);
            *(_QWORD *)(v256 + 24) = 8641LL;
            WdLogEvent5_WdAssertion(v256);
            v255 = *(_QWORD *)(v254 + 2456);
            v252 = v640;
            if ( !v255 )
              goto LABEL_349;
          }
          if ( v106 >= *(_DWORD *)(v255 + 80) )
          {
            v257 = WdLogNewEntry5_WdAssertion(v252);
            *(_QWORD *)(v257 + 24) = 5429LL;
            WdLogEvent5_WdAssertion(v257);
            v252 = v640;
          }
          if ( *(_BYTE *)(*(_QWORD *)(v255 + 112) + v252 + 720) )
          {
LABEL_354:
            v259 = v622;
          }
          else
          {
LABEL_349:
            if ( *(_DWORD *)(*((_QWORD *)this + 2) + 328LL) == 1 )
            {
              v258 = (_QWORD *)WdLogNewEntry5_WdEvent(v252, v234);
              v24 = -1071775738LL;
LABEL_351:
              v258[3] = v24;
              v258[4] = this;
              v258[5] = v106;
              WdLogEvent5_WdEvent(v258);
              goto LABEL_466;
            }
            v259 = v622;
            if ( (v622 & 4) != 0 )
            {
              v260 = (_QWORD *)WdLogNewEntry5_WdEvent(v252, v234);
              v260[3] = 0LL;
              v260[4] = this;
              v260[5] = v106;
              WdLogEvent5_WdEvent(v260);
              LODWORD(v24) = -1071774920;
              goto LABEL_466;
            }
          }
          if ( (v259 & 0x10000000) == 0 )
          {
            v261 = *((_QWORD *)this + 2);
            if ( *(_DWORD *)(v261 + 328) == 1 && (*(_DWORD *)(v261 + 4LL * v106 + 1048) & 0x100) == 0 )
            {
              v258 = (_QWORD *)WdLogNewEntry5_WdEvent(v252, v234);
              v24 = -1071775739LL;
              goto LABEL_351;
            }
          }
          v262 = *((_DWORD *)a2 + 22);
          v263 = v637;
          if ( (v262 & 4) != 0 )
          {
            if ( v637 )
            {
              v264 = *((_QWORD *)v637 + 6);
              if ( v264 )
              {
                if ( (*(_DWORD *)(v264 + 4) & 0x2000) != 0
                  && !DXGDEVICE::IsDirectFlipAllocationPinned(*((DXGDEVICE **)this + 2), v637) )
                {
                  v267 = (_QWORD *)WdLogNewEntry5_WdEvent(v266, v265);
                  LODWORD(v229) = -1071775739;
                  v267[3] = -1071775739LL;
                  v267[4] = this;
                  v267[5] = v263;
                  WdLogEvent5_WdEvent(v267);
                  v268 = *((_QWORD *)this + 40);
                  if ( v268 )
                  {
                    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                                + 16LL)
                                                                                    + 544LL)
                                                                        + 8LL)
                                                            + 496LL))(
                      v268,
                      0LL);
                    *((_QWORD *)this + 40) = 0LL;
                  }
                  goto LABEL_900;
                }
              }
            }
          }
          if ( (v262 & 0x2000) != 0 )
          {
            v269 = ADAPTER_DISPLAY::GetCurrentOrientation(
                     *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1688LL) + 2456LL),
                     v106,
                     1);
            v270 = 0;
            if ( v269 != 1 )
              v270 = 128;
            v677.Flags.Value = v270 | v677.Flags.Value & 0xFFFFFF7F;
          }
          if ( !bTracingEnabled )
            goto LABEL_387;
          v271 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
          v272 = *(_QWORD *)(v271 + 544);
          v273 = *(_QWORD *)(v271 + 552);
          v274 = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(v272 + 8) + 336LL);
          if ( (*((_DWORD *)a2 + 22) & 4) != 0 )
          {
            v275 = v274(v273, v638);
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0pqpqtt((v677.Flags.Value >> 3) & 1, *((_QWORD *)this + 40) == 0LL, v275);
LABEL_387:
            LODWORD(v24) = DXGCONTEXT::SubmitPresent(
                             this,
                             (struct _D3DKMT_PRESENT *)a2,
                             a2,
                             *((_DWORD *)a2 + 23),
                             v657,
                             v263,
                             v638,
                             v634,
                             &v677,
                             *((struct _D3DKMT_PRESENT_RGNS **)a2 + 180),
                             *((struct _VIDMM_DMA_BUFFER **)this + 40),
                             v642,
                             v635,
                             (struct _D3DKMT_PRESENT *)a3);
            if ( (int)v24 >= 0 )
            {
              v285 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1688LL) + 2456LL) + 112LL);
              if ( *(_DWORD *)(v285 + v640 + 1068) == -1 )
              {
                v286 = WdLogNewEntry5_WdAssertion(v285);
                *(_QWORD *)(v286 + 24) = 4042LL;
                WdLogEvent5_WdAssertion(v286);
              }
            }
            v244 = (_QWORD *)((char *)this + 320);
            *((_QWORD *)this + 40) = 0LL;
            if ( (int)v24 < 0 )
              goto LABEL_454;
            if ( (*((_DWORD *)a2 + 22) & 4) == 0 )
              goto LABEL_442;
            v287 = *((_QWORD *)this + 2);
            v640 = v287;
            v288 = *(_QWORD *)(v287 + 1688);
            if ( v288 == *(_QWORD *)(*(_QWORD *)(v287 + 16) + 16LL) )
            {
              ADAPTER_DISPLAY::DisableOverlayPlanes(*(ADAPTER_DISPLAY **)(v288 + 2456), v106);
              v287 = *((_QWORD *)this + 2);
              v640 = v287;
            }
            v289 = v287 + 232;
            v624 = *((_DWORD *)v642 + 34);
            if ( v287 != -232 && *(struct _KTHREAD **)(v287 + 240) == KeGetCurrentThread() )
            {
              v290 = WdLogNewEntry5_WdAssertion(v287);
              *(_QWORD *)(v290 + 24) = 1306LL;
              WdLogEvent5_WdAssertion(v290);
            }
            KeEnterCriticalRegion();
            if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v289, 0LL) )
            {
              if ( bTracingEnabled )
              {
                v293 = *(_DWORD *)(v289 + 16);
                if ( v293 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                  McTemplateK0q(v291, &EventBlockThread, v292, v293);
              }
              ExAcquirePushLockExclusiveEx(v289, 0LL);
            }
            *(_QWORD *)(v289 + 8) = KeGetCurrentThread();
            v294 = v640;
            v295 = v637;
            *(_QWORD *)(v640 + 8 * v148 + 856) = v637;
            *(_DWORD *)(v294 + 4 * v148 + 984) = v624;
            *(_QWORD *)(v294 + 240) = 0LL;
            ExReleasePushLockExclusiveEx(v294 + 232, 0LL);
            KeLeaveCriticalRegion();
            if ( v295 )
            {
              v296 = *(_QWORD *)(v640 + 1688);
              if ( v296 == *(_QWORD *)(*(_QWORD *)(v640 + 16) + 16LL) )
                ADAPTER_DISPLAY::SetAllocationForSinglePlanePresent(*(ADAPTER_DISPLAY **)(v296 + 2456), v106, v295);
            }
            v627 = 0;
            *(_DWORD *)(*((_QWORD *)this + 2) + 4 * v148 + 1624) = *((_DWORD *)v642 + 30);
            v297 = *(_QWORD *)(*((_QWORD *)this + 2) + 1688LL);
            v647 = *(_QWORD *)(v297 + 2456);
            v651 = v647 + 280;
            v652 = 0;
            if ( v647 == -280 )
            {
              v298 = WdLogNewEntry5_WdAssertion(v297);
              *(_QWORD *)(v298 + 24) = 508LL;
              WdLogEvent5_WdAssertion(v298);
            }
            v299 = KeGetCurrentThread();
            if ( *(struct _KTHREAD **)(v651 + 8) == v299 )
            {
              v300 = WdLogNewEntry5_WdAssertion(v299);
              *(_QWORD *)(v300 + 24) = 515LL;
              WdLogEvent5_WdAssertion(v300);
            }
            if ( v652 )
            {
              v301 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v299);
              v301[3] = 275LL;
              v301[4] = 4LL;
              v301[5] = &v651;
              v301[6] = 0LL;
              v301[7] = 0LL;
              WdLogEvent5_WdCriticalError(v301);
            }
            v302 = v651;
            KeEnterCriticalRegion();
            if ( *(struct _KTHREAD **)(v302 + 8) == KeGetCurrentThread() )
            {
              v304 = *(_DWORD *)(v302 + 24);
              if ( v304 <= 0 )
              {
                v305 = WdLogNewEntry5_WdAssertion(v303);
                *(_QWORD *)(v305 + 24) = 406LL;
                WdLogEvent5_WdAssertion(v305);
                v304 = *(_DWORD *)(v302 + 24);
              }
              v306 = v304 + 1;
            }
            else
            {
              if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v302 + 16, 0LL) )
              {
                if ( bTracingEnabled )
                {
                  v309 = *(_DWORD *)(v302 + 28);
                  if ( v309 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                    McTemplateK0q(v307, &EventBlockThread, v308, v309);
                }
                _InterlockedIncrement64((volatile signed __int64 *)v302);
                ExAcquirePushLockExclusiveEx(v302 + 16, 0LL);
              }
              if ( *(_QWORD *)(v302 + 8) )
              {
                v310 = WdLogNewEntry5_WdAssertion(v307);
                *(_QWORD *)(v310 + 24) = 430LL;
                WdLogEvent5_WdAssertion(v310);
              }
              if ( *(_DWORD *)(v302 + 24) )
              {
                v311 = WdLogNewEntry5_WdAssertion(v307);
                *(_QWORD *)(v311 + 24) = 431LL;
                WdLogEvent5_WdAssertion(v311);
              }
              *(_QWORD *)(v302 + 8) = KeGetCurrentThread();
              v306 = 1;
            }
            *(_DWORD *)(v302 + 24) = v306;
            v312 = 3760 * v148;
            v313 = v647;
            v652 = 1;
            v314 = *(_QWORD *)(v647 + 112);
            if ( *(_BYTE *)(v312 + v314 + 668) )
            {
              *(_DWORD *)(v312 + v314 + 672) = 0;
              v627 = 1;
              *(_DWORD *)(v312 + *(_QWORD *)(v313 + 112) + 676) = 0;
              *(_BYTE *)(v312 + *(_QWORD *)(v313 + 112) + 668) = 0;
              if ( !v652 )
              {
                v315 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v312);
                v315[3] = 275LL;
                v315[4] = 4LL;
                v315[5] = &v651;
                v315[6] = 0LL;
                v315[7] = 0LL;
                WdLogEvent5_WdCriticalError(v315);
              }
            }
            v316 = v651;
            v652 = 0;
            if ( *(struct _KTHREAD **)(v651 + 8) != KeGetCurrentThread() )
            {
              v317 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v312);
              v317[3] = 275LL;
              v317[4] = 4LL;
              v317[5] = v316;
              v317[6] = 0LL;
              v317[7] = 0LL;
              WdLogEvent5_WdCriticalError(v317);
            }
            v318 = *(_DWORD *)(v316 + 24);
            if ( v318 <= 0 )
            {
              v319 = WdLogNewEntry5_WdAssertion(v312);
              *(_QWORD *)(v319 + 24) = 450LL;
              WdLogEvent5_WdAssertion(v319);
              v318 = *(_DWORD *)(v316 + 24);
            }
            v320 = v318 - 1;
            *(_DWORD *)(v316 + 24) = v320;
            if ( !v320 )
            {
              *(_QWORD *)(v316 + 8) = 0LL;
              ExReleasePushLockExclusiveEx(v316 + 16, 0LL);
            }
            KeLeaveCriticalRegion();
            if ( v627 )
            {
              v321 = (struct _LIST_ENTRY *)operator new[](0x18uLL, 0x4B677844u, PagedPool);
              if ( v321 )
              {
                v321->Blink = 0LL;
                v321[1].Flink = 0LL;
                v321->Flink = 0LL;
                DXGADAPTER_REFERENCE::Assign((DXGADAPTER **)v321, *(struct DXGADAPTER **)(v313 + 16));
                LODWORD(v321[1].Flink) = v106;
                v324 = DXGPROCESS::GetCurrent(v323, v322);
                DXGWORKQUEUE::QueueWork(
                  (PLIST_ENTRY)(*((_QWORD *)v324 + 9) + 88LL),
                  (struct _LIST_ENTRY *)lambda_ed10ad305aea6a5ff601fc5b120cc334_::_lambda_invoker_cdecl_,
                  v321);
              }
            }
            if ( v652 )
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v651);
            goto LABEL_441;
          }
          v274(v273, v634);
          (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                         + 544LL)
                                                             + 8LL)
                                                 + 336LL))(
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 552LL),
            v638);
          v278 = v677.pDstSubRects;
          v279 = v677.SubRectCnt;
          CurrentIrql = *((_QWORD *)this + 40);
          v647 = *((_QWORD *)a2 + 1);
          v633 = (DXGADAPTERSTOPRESETLOCKSHARED *)v677.pDstSubRects;
          v623 = v677.SubRectCnt;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
          {
            McTemplateK0ppxppttqddddddddq(
              HIDWORD(*(_QWORD *)&v677.DstRect.left),
              HIDWORD(*(_QWORD *)&v677.DstRect.right),
              HIDWORD(*(_QWORD *)&v677.SrcRect.left),
              v647,
              CurrentIrql);
            v278 = (const RECT *)v633;
            v279 = v623;
          }
          v280 = 0;
          if ( !v279 )
            goto LABEL_387;
          v281 = CurrentIrql;
          while ( 1 )
          {
            v282 = v279 - v280;
            if ( v279 - v280 > 0x10 )
              break;
            v283 = v279 - v280;
            if ( v282 )
              goto LABEL_381;
LABEL_383:
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
            {
              LODWORD(v612) = v283;
              LODWORD(v610) = v282 <= 0x10;
              McTemplateK0ptqDR2DR2DR2DR2((__int64)v689, v276, v277, v281, v610, v612, v689, v688, v687, v693);
            }
            v279 = v623;
            v280 += 16;
            v278 = (const RECT *)v633;
            if ( v280 >= v623 )
            {
              v148 = v106;
              goto LABEL_387;
            }
          }
          v283 = 16;
LABEL_381:
          v276 = 0LL;
          LODWORD(v277) = 0;
          do
          {
            v284 = (unsigned int)v277 + v280;
            v277 = (unsigned int)(v277 + 1);
            v284 *= 2LL;
            v276 += 4LL;
            *(_DWORD *)&v688[v276 + 60] = *(&v278->left + 2 * v284);
            *(_DWORD *)&v687[v276 + 60] = *(&v278->right + 2 * v284);
            *(_DWORD *)&v687[v276 - 4] = *(&v278->top + 2 * v284);
            *(_DWORD *)&v692[v276 + 60] = *(&v278->bottom + 2 * v284);
          }
          while ( (unsigned int)v277 < v283 );
          goto LABEL_383;
        }
        LODWORD(v237) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                                  + 520LL)
                                                                                      + 8LL)
                                                                          + 184LL))(
                          *(_QWORD *)(*((_QWORD *)this + 2) + 616LL),
                          v106,
                          0LL);
        if ( (_DWORD)v237 == -1071775486 )
        {
          if ( v233 )
            goto LABEL_326;
          COREDEVICEACCESS::Release((COREDEVICEACCESS *)a3);
          LOBYTE(v238) = 1;
          v237 = (*(int (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                        + 520LL)
                                                                            + 8LL)
                                                                + 184LL))(
                   *(_QWORD *)(*((_QWORD *)this + 2) + 616LL),
                   v106,
                   v238);
          LODWORD(v229) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)a3);
          if ( (int)v229 < 0 )
          {
            v239 = WdLogNewEntry5_WdEvent(v236, v234);
            *(_QWORD *)(v239 + 24) = v237;
            WdLogEvent5_WdEvent(v239);
            COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a3);
            goto LABEL_331;
          }
        }
        if ( (int)v237 >= 0 )
        {
LABEL_330:
          LODWORD(v229) = v237;
LABEL_331:
          if ( (int)v229 < 0 )
          {
            v243 = WdLogNewEntry5_WdEvent(v236, v234);
            *(_QWORD *)(v243 + 24) = (int)v229;
            *(_QWORD *)(v243 + 32) = this;
            WdLogEvent5_WdEvent(v243);
            goto LABEL_900;
          }
          goto LABEL_333;
        }
LABEL_326:
        v241 = WdLogNewEntry5_WdEvent(v236, v234);
        *(_QWORD *)(v241 + 24) = (int)v237;
        *(_QWORD *)(v241 + 32) = this;
        WdLogEvent5_WdEvent(v241);
        if ( (_DWORD)v237 != -1071775486 && (_DWORD)v237 != -1073741130 && (_DWORD)v237 != -1071775232 )
        {
          v242 = WdLogNewEntry5_WdAssertion(v236);
          *(_QWORD *)(v242 + 24) = 2779LL;
          WdLogEvent5_WdAssertion(v242);
        }
        goto LABEL_330;
      }
      if ( !v232 )
      {
        v361 = WdLogNewEntry5_WdAssertion(v231);
        *(_QWORD *)(v361 + 24) = *((_QWORD *)this + 2);
        *(_QWORD *)(v361 + 32) = -1073741822LL;
        WdLogEvent5_WdAssertion(v361);
        LODWORD(v229) = -1073741811;
        goto LABEL_900;
      }
      v347 = v637;
      *(_QWORD *)&v678.left = 0LL;
      v348 = *((_DWORD *)a2 + 22);
      if ( (v348 & 0x10000000) != 0 )
      {
        v678.right = *((_DWORD *)a2 + 377);
        v678.bottom = *((_DWORD *)a2 + 378);
      }
      else
      {
        v229 = (struct DXGALLOCATION *)v645;
        if ( (v348 & 4) != 0 )
          v229 = v637;
        v349 = *(unsigned int *)(*((_QWORD *)v229 + 6) + 4LL);
        if ( (v349 & 0x10) != 0 )
        {
          v350 = (_QWORD *)WdLogNewEntry5_WdEvent(v231, v349);
          v350[3] = -1071775482LL;
          v350[4] = this;
          v350[5] = v229;
          WdLogEvent5_WdEvent(v350);
          LODWORD(v229) = -1071775482;
          goto LABEL_900;
        }
        v351 = *(_OWORD *)ADAPTER_DISPLAY::GetDisplayModeInfo(
                            *(DXGADAPTER ***)(*(_QWORD *)(*((_QWORD *)this + 2) + 1688LL) + 2456LL),
                            ((unsigned int)v349 >> 6) & 0xF);
        memset(&v667, 0, 40);
        v667.Flags.Value = 1;
        v667.Rotation = -1;
        v352 = *((_QWORD *)v229 + 6);
        v675 = v351;
        v667.hAllocation = *(HANDLE *)(v352 + 16);
        v353 = ADAPTER_RENDER::DdiDescribeAllocation(
                 *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 2464LL),
                 &v667);
        v356 = v353;
        if ( v353 < 0 )
        {
          v357 = (_QWORD *)WdLogNewEntry5_WdError(Format);
          v357[3] = v356;
          v357[4] = this;
          v357[5] = *((unsigned int *)v229 + 4);
          v357[6] = v229;
          v357[7] = (*(_DWORD *)(*((_QWORD *)v229 + 6) + 4LL) >> 6) & 0xF;
          WdLogEvent5_WdError(v357);
          LODWORD(v229) = -1073741811;
          goto LABEL_900;
        }
        if ( *(_QWORD *)&v667.Width != (_QWORD)v675 )
          goto LABEL_489;
        v354 = 22LL;
        Format = 22LL;
        if ( v667.Format != D3DDDIFMT_A8R8G8B8 )
          Format = (unsigned int)v667.Format;
        if ( DWORD2(v675) != 21 )
          v354 = DWORD2(v675);
        if ( (_DWORD)Format != (_DWORD)v354 )
        {
LABEL_489:
          v358 = (_QWORD *)WdLogNewEntry5_WdEvent(Format, v354);
          v358[3] = -1071775482LL;
          v358[4] = this;
          v358[5] = v229;
          WdLogEvent5_WdEvent(v358);
          LODWORD(v229) = -1071775739;
          goto LABEL_900;
        }
        v678.right = v667.Width;
        v678.bottom = v667.Height;
      }
      LODWORD(v24) = ADAPTER_DISPLAY::PresentDisplayOnly(
                       *(ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1688LL) + 2456LL),
                       this,
                       v106,
                       (const struct _D3DKMT_PRESENT *)a2,
                       &v677,
                       (struct COREDEVICEACCESS *)a3,
                       &v678);
      if ( (int)v24 >= 0 )
      {
        if ( (*((_DWORD *)a2 + 22) & 4) != 0 )
        {
          v359 = *((_QWORD *)this + 2);
          v360 = *(_QWORD *)(v359 + 1688);
          if ( v360 == *(_QWORD *)(*(_QWORD *)(v359 + 16) + 16LL) )
          {
            ADAPTER_DISPLAY::DisableOverlayPlanes(*(ADAPTER_DISPLAY **)(v360 + 2456), v106);
            v359 = *((_QWORD *)this + 2);
          }
          DXGDEVICE::SetDisplayedPrimary((struct _KTHREAD **)v359, v106, v347, 0, 1u);
          UpdatePostComposition(
            v106,
            0,
            0,
            0,
            *(struct ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1688LL) + 2456LL));
        }
        goto LABEL_441;
      }
LABEL_453:
      v244 = (_QWORD *)((char *)this + 320);
      goto LABEL_454;
    }
    v240 = (_QWORD *)WdLogNewEntry5_WdWarning(v231, v109, v111);
    LODWORD(v229) = -1071775739;
    v240[3] = -1071775739LL;
    v240[4] = this;
    v240[5] = *((unsigned int *)a2 + 5);
    v240[6] = v637;
    v240[7] = v106;
    WdLogEvent5_WdWarning(v240);
LABEL_900:
    LODWORD(v370) = (_DWORD)v229;
    goto LABEL_901;
  }
  v153 = (_QWORD *)WdLogNewEntry5_WdEvent(v144, v109);
  v24 = -1071775739LL;
LABEL_204:
  v153[3] = v24;
  v153[4] = this;
  v153[5] = v106;
  WdLogEvent5_WdEvent(v153);
LABEL_902:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v656);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v645);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v637);
  return (unsigned int)v24;
}
