/*
 * XREFs of ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00C6330
 * Callers:
 *     DxgkPresent @ 0x1C00BD0B0 (DxgkPresent.c)
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@IPEAIPEAPEAV1@@Z @ 0x1C01B5800 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KHPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@.c)
 * Callees:
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0001A40 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C0001B00 (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001D2C (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0001DA0 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0001E90 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0001ED0 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00027C0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0002890 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C0002900 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003310 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0003360 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1C0003E74 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     ?GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA?AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z @ 0x1C000757C (-GetVidPnSourceOwnerType@ADAPTER_DISPLAY@@QEBA-AW4_D3DKMT_VIDPNSOURCEOWNER_TYPE@@I@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C00075FC (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z @ 0x1C00077B8 (-GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0007858 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C000796C (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0DXGPRESENTMUTEX@@QEAA@QEAVADAPTER_RENDER@@@Z @ 0x1C0008AB0 (--0DXGPRESENTMUTEX@@QEAA@QEAVADAPTER_RENDER@@@Z.c)
 *     ??1DXGPRESENTMUTEX@@QEAA@XZ @ 0x1C0008AF4 (--1DXGPRESENTMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGPRESENTMUTEX@@QEAAXXZ @ 0x1C0008B08 (-Release@DXGPRESENTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGPRESENTMUTEX@@QEAAXXZ @ 0x1C0008B34 (-Acquire@DXGPRESENTMUTEX@@QEAAXXZ.c)
 *     ?GetContentRect@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z @ 0x1C000F5F4 (-GetContentRect@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0q @ 0x1C00152E0 (McTemplateK0q.c)
 *     IsThreadCrossSessionAttached @ 0x1C001557C (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     McTemplateK0ppxppttqddddddddq @ 0x1C0029160 (McTemplateK0ppxppttqddddddddq.c)
 *     McTemplateK0pqpqtt @ 0x1C0029310 (McTemplateK0pqpqtt.c)
 *     McTemplateK0ptqDR2DR2DR2DR2 @ 0x1C00293D0 (McTemplateK0ptqDR2DR2DR2DR2.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C002AB38 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?QueueWork@DXGWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z @ 0x1C002BB1C (-QueueWork@DXGWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00799D8 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C00833BC (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0083A38 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C0084890 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C0084A30 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0086DD0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0086E10 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0094290 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C0094B50 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C009DF28 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ?SynchronizePresentToPrimary@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVDXGPRESENTMUTEX@@E@Z @ 0x1C009E2EC (-SynchronizePresentToPrimary@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVDXGPRESENTMUTEX@@E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C00ABDC0 (-DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?SetAllocationForSinglePlanePresent@ADAPTER_DISPLAY@@QEAAXIPEBVDXGALLOCATION@@@Z @ 0x1C00ABF00 (-SetAllocationForSinglePlanePresent@ADAPTER_DISPLAY@@QEAAXIPEBVDXGALLOCATION@@@Z.c)
 *     ?PresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@PEAUtagRECT@@@Z @ 0x1C00AC1A8 (-PresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRE.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C00AC29C (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?GrowRectList@DXGPRESENT@@QEAAJI@Z @ 0x1C00BE8DC (-GrowRectList@DXGPRESENT@@QEAAJI@Z.c)
 *     ?ValidatePresentRegions@DXGCONTEXT@@AEBAJPEBU_D3DKMT_PRESENT@@II@Z @ 0x1C00C39EC (-ValidatePresentRegions@DXGCONTEXT@@AEBAJPEBU_D3DKMT_PRESENT@@II@Z.c)
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00C4D00 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG.c)
 *     ?SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVDXGCONTEXT@@PEAVDXGADAPTER@@I@Z @ 0x1C00CD300 (-SubmitPresentHistoryToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADA.c)
 *     ?SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTER@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAX_NQEBU_DXGKWIN32KENG_INTERFACE@@@Z @ 0x1C00EEF80 (-SubmitPresentHistoryTokenPreparation@@YAJPEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCOREDEVICEACCES.c)
 *     ?IntersectRect@DXGPRESENT@@SAEPEAUtagRECT@@PEBU2@1@Z @ 0x1C00F2794 (-IntersectRect@DXGPRESENT@@SAEPEAUtagRECT@@PEBU2@1@Z.c)
 *     ?UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z @ 0x1C00F2FB4 (-UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z.c)
 *     ?CheckInput@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@II@Z @ 0x1C00FC4F0 (-CheckInput@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@II@Z.c)
 *     ?CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3DDDIFORMAT@@H@Z @ 0x1C00FCB10 (-CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3.c)
 *     ?IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z @ 0x1C0100168 (-IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z.c)
 *     ?GetDdiSubRectList@DXGPRESENT@@QEBAPEAUtagRECT@@I@Z @ 0x1C016F028 (-GetDdiSubRectList@DXGPRESENT@@QEBAPEAUtagRECT@@I@Z.c)
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C016F500 (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 *     ?WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z @ 0x1C016F668 (-WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Unlock@CWin32kLocks@@QEAAXXZ @ 0x1C0170384 (-Unlock@CWin32kLocks@@QEAAXXZ.c)
 *     ?Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z @ 0x1C01703F4 (-Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z.c)
 *     ?VmBusSendBlt@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@IIPEAUtagRECT@@2IPEBU4@IPEAE@Z @ 0x1C0195038 (-VmBusSendBlt@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@IIPEAUtagRECT@@2I.c)
 *     ?VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK2@@EII@Z @ 0x1C0196A80 (-VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK.c)
 *     ?VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UNLOCK2@@E@Z @ 0x1C0198C20 (-VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UN.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C01A9EA0 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?AllowLegacyPresent@DXGDEVICE@@QEBAEI@Z @ 0x1C01B45E8 (-AllowLegacyPresent@DXGDEVICE@@QEBAEI@Z.c)
 *     ?CheckOcclusion@DXGPRESENT@@QEAAEXZ @ 0x1C01B5494 (-CheckOcclusion@DXGPRESENT@@QEAAEXZ.c)
 *     ?OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z @ 0x1C01B60AC (-OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z.c)
 *     ?PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z @ 0x1C01B6D94 (-PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z.c)
 *     ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@IPEAPEAV2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01C8480 (-ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@IPEAPEAV2@PE.c)
 */

__int64 __fastcall DXGCONTEXT::Present(
        DXGCONTEXT *this,
        struct _D3DKMT_PRESENT *a2,
        DXGADAPTER **a3,
        struct DXGADAPTERSTOPRESETLOCKSHARED *a4,
        HDEV *a5,
        struct DXGCONTEXT **a6,
        struct VIDSCH_SUBMIT_DATA_BASE *a7)
{
  DXGCONTEXT *v7; // r15
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 Value; // rdx
  __int64 v15; // rax
  _OWORD *v17; // r8
  int v18; // ecx
  D3DKMT_HANDLE hDestination; // eax
  bool v20; // zf
  __int64 v21; // rcx
  int v22; // r13d
  D3DKMT_HANDLE v23; // esi
  struct _EX_RUNDOWN_REF *v24; // rbx
  unsigned int v25; // r12d
  struct _EX_RUNDOWN_REF *v26; // rdi
  __int64 v27; // rdi
  __int64 v28; // rcx
  __int64 v29; // r8
  int v30; // r9d
  D3DKMT_HANDLE v31; // eax
  D3DKMT_HANDLE v32; // esi
  __int64 v33; // rax
  __int64 v34; // r8
  unsigned int v35; // edx
  struct _EX_RUNDOWN_REF *v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rcx
  _QWORD *v39; // rax
  __int64 v40; // rcx
  _QWORD *v41; // rax
  _OWORD *v42; // rdx
  __int64 v43; // r12
  __int64 CurrentProcess; // rax
  __int64 v45; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v47; // rcx
  __int64 v48; // rbx
  __int64 *ThreadProperty; // rax
  __int64 *v50; // rsi
  __int64 v51; // rsi
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // r8
  int v55; // r9d
  __int64 v56; // rcx
  __int64 v57; // rbx
  struct _KTHREAD *CurrentThread; // r12
  __int64 v59; // rax
  int CurrentProcessSessionId; // ebx
  __int64 v61; // rbx
  __int64 *ThreadWin32Thread; // rax
  int v63; // r12d
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // rcx
  _QWORD *v67; // rax
  struct DXGADAPTER **v68; // rcx
  _QWORD *v69; // rax
  _QWORD *v70; // rax
  __int64 v71; // r12
  __int64 v72; // rcx
  __int64 v73; // rax
  _QWORD *v74; // rax
  __int64 v75; // rdx
  struct DXGALLOCATION *v76; // rcx
  D3DKMT_HANDLE v77; // ebx
  __int64 v78; // rsi
  __int64 v79; // rcx
  __int64 v80; // r8
  int v81; // r9d
  D3DKMT_HANDLE v82; // eax
  D3DKMT_HANDLE v83; // ebx
  __int64 v84; // rax
  __int64 v85; // r8
  unsigned int v86; // edx
  struct _EX_RUNDOWN_REF *v87; // rdx
  __int64 v88; // rdx
  __int64 v89; // r8
  _QWORD *v90; // rax
  __int64 v91; // rcx
  __int64 v92; // rdx
  __int64 v93; // r12
  _QWORD *v94; // rax
  __int64 v95; // rax
  __int64 v96; // rdx
  __int64 v97; // rax
  __int64 v98; // rcx
  __int64 v99; // rdi
  __int64 *v100; // rax
  __int64 *v101; // rsi
  __int64 v102; // rsi
  __int64 v103; // rax
  __int64 v104; // rcx
  __int64 v105; // r8
  int v106; // r9d
  __int64 v107; // rcx
  __int64 v108; // rdi
  struct _KTHREAD *v109; // r12
  __int64 v110; // rax
  int v111; // edi
  __int64 v112; // rdi
  __int64 *v113; // rax
  __int64 v114; // r12
  __int64 v115; // rdx
  __int64 v116; // r8
  __int64 v117; // rcx
  _QWORD *v118; // rax
  __int64 v119; // rcx
  _QWORD *v120; // rax
  _QWORD *v121; // rax
  __int64 v122; // rcx
  __int64 v123; // rax
  signed int v124; // esi
  D3DKMT_HANDLE v125; // eax
  __int64 v126; // rdx
  _QWORD *v127; // rax
  int v128; // esi
  __int64 v129; // rdx
  unsigned int v130; // r12d
  _QWORD *v131; // rax
  ULONG_PTR v132; // rcx
  __int64 v133; // rax
  unsigned int VidPnSourceId; // r12d
  __int64 v135; // rax
  __int64 v136; // rax
  __int64 v137; // rdx
  RECT *p_SrcRect; // rcx
  __int64 v139; // r8
  __int64 v140; // r9
  unsigned int v141; // ecx
  __int64 v142; // rcx
  _QWORD *v143; // rax
  LONG v144; // eax
  signed int v145; // r10d
  UINT v146; // ebx
  __int64 v147; // rsi
  __int64 v148; // rcx
  LONG v149; // r9d
  LONG v150; // r10d
  __int64 v151; // rcx
  const RECT *v152; // r11
  int v153; // r10d
  __int64 v154; // rdx
  RECT v155; // xmm0
  _QWORD *v156; // rax
  __int64 v157; // rcx
  _QWORD *v158; // rax
  _QWORD *v159; // rax
  unsigned int v160; // esi
  UINT v161; // ecx
  _QWORD *v162; // rax
  _QWORD *v163; // rax
  LONG v164; // eax
  UINT k; // ebx
  __int64 v166; // rdi
  __int64 v167; // rcx
  __int64 v168; // rsi
  __int64 v169; // rbx
  __int64 v170; // rcx
  __int64 v171; // rax
  __int64 v172; // rax
  __int64 v173; // rcx
  __int64 v174; // rax
  HDEV v175; // rdi
  __int64 v176; // rbx
  __int64 v177; // rax
  __int64 v178; // rbx
  __int64 v179; // rax
  __int64 v180; // rsi
  _QWORD *v181; // rax
  __int64 v182; // rcx
  _QWORD *v183; // rax
  ULONG_PTR v184; // rax
  __int64 v185; // rax
  __int64 v186; // rax
  __int64 v187; // rax
  unsigned int v188; // r12d
  _QWORD *v189; // rax
  __int64 v190; // rdx
  __int64 v191; // rcx
  __int64 v192; // r8
  _QWORD *v193; // rax
  __int64 v194; // rax
  __int64 v195; // rax
  int v196; // edx
  __int64 v197; // rdx
  __int64 v198; // rcx
  __int64 v199; // r8
  __int64 v200; // rax
  __int64 v201; // rax
  struct VIDSCH_SUBMIT_DATA_BASE *v202; // rsi
  int v203; // ecx
  int v204; // ecx
  int v205; // ecx
  UINT v206; // ecx
  UINT v207; // ecx
  UINT Duration; // eax
  D3DKMT_PRESENT_RGNS *pPresentRegions; // rdx
  int v210; // eax
  __int64 v211; // rdx
  __int64 v212; // rcx
  __int64 v213; // r8
  _QWORD *v214; // rax
  __int64 v215; // rsi
  __int64 v216; // rax
  __int64 v217; // rcx
  __int64 v218; // r8
  int v219; // r9d
  __int64 v220; // rcx
  __int64 v221; // rsi
  int v222; // edx
  struct VIDSCH_SUBMIT_DATA_BASE *v223; // rax
  __int64 v224; // rax
  int v225; // eax
  __int64 v226; // rsi
  __int64 v227; // rax
  _QWORD *v228; // rax
  unsigned int v229; // eax
  _QWORD *v230; // rax
  __int64 v231; // rcx
  __int64 v232; // r8
  int v233; // eax
  _QWORD *v234; // rax
  __int64 v235; // rcx
  __int64 v236; // rbx
  __int64 v237; // rax
  __int64 v238; // rcx
  __int64 v239; // rcx
  __int64 v240; // rax
  __int64 v241; // rcx
  __int64 v242; // rcx
  struct _DXGKWIN32KENG_INTERFACE *v243; // rsi
  int v244; // ebx
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v245; // eax
  int v246; // eax
  struct DXGPRESENTMUTEX *v247; // r8
  __int64 v248; // rax
  const struct _CDDDXGK_INTERFACE *CddInterface; // rax
  __int64 v250; // rcx
  __int64 v251; // rdx
  UINT v252; // esi
  __int64 v253; // rdx
  __int64 v254; // r8
  __int64 v255; // rbx
  __int64 v256; // r8
  int v257; // edi
  __int64 v258; // rax
  int v259; // eax
  struct DXGPRESENTMUTEX *v260; // r8
  struct DXGADAPTERSTOPRESETLOCKSHARED *v261; // r12
  __int64 v262; // rax
  __int64 v263; // rax
  _QWORD *v264; // rax
  __int64 v265; // rax
  __int64 v266; // rcx
  __int64 v267; // rax
  __int64 v268; // rax
  _QWORD *v269; // rbx
  __int64 v270; // rcx
  __int64 v271; // rax
  __int64 v272; // r12
  __int64 v273; // rbx
  __int64 v274; // rcx
  __int64 v275; // rax
  __int64 v276; // rsi
  __int64 v277; // rax
  __int64 v278; // rax
  CWin32kLocks *v279; // rbx
  __int64 v280; // rbx
  __int64 v281; // rax
  __int64 v282; // rbx
  __int64 v283; // rax
  _QWORD *v284; // rax
  unsigned int v285; // eax
  _QWORD *v286; // rax
  __int64 v287; // rax
  _QWORD *v288; // rax
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v289; // edi
  struct DXGALLOCATION *v290; // rbx
  __int64 v291; // rax
  _QWORD *v292; // rax
  __int64 v293; // rcx
  int v294; // eax
  int v295; // ecx
  __int64 v296; // rax
  __int64 v297; // rcx
  __int64 (__fastcall *v298)(__int64, _QWORD); // rax
  __int64 v299; // r8
  __int64 v300; // rdx
  __int64 v301; // r8
  UINT v302; // eax
  const RECT *v303; // r12
  HWND v304; // r11
  UINT v305; // edi
  HDEV v306; // rbx
  unsigned int v307; // r9d
  unsigned int v308; // r10d
  __int64 v309; // rcx
  struct VIDSCH_SUBMIT_DATA_BASE *v310; // rdi
  __int64 v311; // r8
  __int64 v312; // rcx
  __int64 v313; // rax
  __int64 v314; // rax
  __int64 v315; // rcx
  __int64 v316; // rcx
  HDEV v317; // rdi
  __int64 v318; // rax
  __int64 v319; // rcx
  __int64 v320; // r8
  int v321; // r9d
  HDEV v322; // rax
  __int64 v323; // rdx
  __int64 v324; // r8
  __int64 v325; // rcx
  __int64 v326; // rcx
  __int64 v327; // rdi
  __int64 v328; // rax
  struct _KTHREAD *v329; // rcx
  __int64 v330; // rax
  _QWORD *v331; // rax
  __int64 v332; // rbx
  __int64 v333; // rdx
  __int64 v334; // rcx
  __int64 v335; // r8
  __int64 v336; // rax
  __int64 v337; // rcx
  int v338; // r9d
  __int64 v339; // rax
  __int64 v340; // rax
  CWin32kLocks *v341; // rcx
  __int64 v342; // rax
  _QWORD *v343; // rax
  __int64 v344; // rbx
  _QWORD *v345; // rax
  __int64 v346; // rax
  struct _LIST_ENTRY *v347; // rbx
  __int64 v348; // rdx
  __int64 v349; // rcx
  struct DXGPROCESS *v350; // rax
  struct _EX_RUNDOWN_REF *v351; // rbx
  __int64 v352; // rax
  __int64 v353; // rdi
  __int64 v354; // rcx
  ULONG BroadcastContextCount; // eax
  D3DKMT_HANDLE *BroadcastContext; // r14
  D3DKMT_HANDLE *v357; // rax
  __int128 v358; // xmm1
  int v359; // eax
  __int64 v360; // rcx
  __int64 v361; // rax
  __int64 v362; // rax
  _QWORD *v363; // rax
  __int64 v364; // rdx
  __int64 v365; // rcx
  _QWORD *v366; // rbx
  __int64 v367; // rcx
  __int64 v368; // rcx
  __int64 v369; // rcx
  __int64 v370; // r8
  struct VIDSCH_SUBMIT_DATA_BASE *v371; // rbx
  struct DXGALLOCATION *v372; // rbx
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v373; // eax
  struct DXGALLOCATION *v374; // rdi
  unsigned int v375; // edx
  _QWORD *v376; // rax
  __int128 v377; // xmm0
  __int64 v378; // rax
  __int64 v379; // r8
  int v380; // eax
  __int64 v381; // rcx
  __int64 v382; // rsi
  _QWORD *v383; // rax
  int v384; // edx
  D3DDDIFORMAT Format; // ecx
  _QWORD *v386; // rax
  __int64 v387; // r8
  __int64 v388; // rax
  unsigned int v389; // esi
  __int64 v390; // rcx
  __int64 v391; // rax
  _QWORD *v392; // rax
  __int64 v393; // rdx
  __int64 v394; // rcx
  _QWORD *v395; // rbx
  __int64 v396; // rcx
  _QWORD *v397; // rax
  D3DKMT_PRESENT_MODEL Model; // eax
  __int64 v399; // rsi
  _QWORD *v400; // rax
  _QWORD *v401; // rax
  __int64 v402; // r8
  _QWORD *v403; // rax
  __int64 v404; // rax
  unsigned int v405; // eax
  __int64 v406; // rdx
  _QWORD *v407; // rax
  _DWORD *v408; // rcx
  int v409; // esi
  __int64 v410; // rax
  __int64 v411; // rcx
  __int64 v412; // rax
  __int64 v413; // rax
  unsigned int i; // r12d
  UINT v415; // edi
  __int64 v416; // rbx
  __int64 v417; // r8
  __int64 v418; // rax
  __int64 v419; // rax
  __int64 v420; // rax
  _QWORD *v421; // rax
  __int64 v422; // rax
  int v423; // eax
  __int64 v424; // rax
  __int64 v425; // rdx
  __int64 v426; // rcx
  __int64 v427; // r8
  int v428; // edi
  int v429; // esi
  __int64 v430; // rax
  __int64 v431; // rdx
  __int64 v432; // r8
  __int64 v433; // rax
  __int64 v434; // rax
  __int64 v435; // rdi
  int v436; // eax
  __int64 v437; // rbx
  int v438; // eax
  __int64 v439; // rdi
  __int64 v440; // rax
  __int64 v441; // rax
  __int64 v442; // rax
  __int64 v443; // rax
  __int64 v444; // rax
  struct _KTHREAD *v445; // rcx
  __int64 v446; // rax
  BOOL v447; // ebx
  int v448; // eax
  __int64 v449; // rax
  ULONG_PTR Count; // rcx
  int v451; // eax
  unsigned int v452; // edi
  struct DXGADAPTER **CurrentThreadId; // rax
  __int64 v454; // rdx
  struct DXGPRESENTMUTEX *v455; // r8
  __int64 v456; // rcx
  DXGADAPTERSTOPRESETLOCKSHARED *v457; // rbx
  COREACCESS *v458; // rdi
  _QWORD *v459; // rax
  DXGADAPTER *v460; // rcx
  HWND hWindow; // rbx
  HDEV v462; // rcx
  __int64 v463; // rax
  __int64 v464; // rax
  int v465; // esi
  __int64 v466; // rax
  HDEV v467; // rbx
  HDEV *v468; // rcx
  HDEV v469; // r12
  unsigned int v470; // eax
  __int64 v471; // rax
  __int64 v472; // rax
  HDEV *v473; // rbx
  __int64 v474; // rax
  __int64 v475; // rax
  __int64 v476; // rdx
  __int64 v477; // r8
  DXGADAPTERSTOPRESETLOCKSHARED *v478; // rcx
  __int64 v479; // rbx
  _QWORD *v480; // rax
  DXGADAPTER *v481; // rcx
  __int64 v482; // rcx
  __int64 v483; // r8
  COREDEVICEACCESS *v484; // rcx
  __int64 v485; // rax
  __int64 v486; // rcx
  HDC v487; // rdi
  const struct DXGDEVICE *v488; // rax
  HDC v489; // r8
  int v490; // eax
  __int64 v491; // rbx
  __int64 v492; // rax
  char v493; // di
  int v494; // ebx
  struct DXGPRESENTMUTEX *v495; // r8
  __int64 v496; // rcx
  int v497; // ecx
  unsigned int v498; // edx
  __int64 v499; // r8
  __int64 v500; // rax
  __int64 v501; // rcx
  __int64 v502; // rax
  __int64 v503; // rax
  const struct tagRECT *ContentRect; // rax
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v505; // eax
  int top; // eax
  int left; // eax
  int bottom; // eax
  LONG right; // eax
  __int64 v510; // rcx
  __int64 v511; // rax
  __int64 v512; // rax
  struct tagRECT *DdiSubRectList; // rax
  __int64 SubRectCnt; // rcx
  int v515; // ebx
  UINT v516; // edx
  COREDEVICEACCESS *v517; // r12
  __int64 v518; // rdx
  __int64 v519; // rcx
  __int64 v520; // r8
  struct DXGPROCESS *Current; // rbx
  unsigned int v522; // ecx
  __int64 v523; // r9
  int v524; // r8d
  struct _EX_RUNDOWN_REF *v525; // rdx
  __int64 v526; // rdx
  __int64 v527; // rcx
  __int64 v528; // rax
  __int64 v529; // rcx
  __int64 v530; // rbx
  struct DXGPROCESS *v531; // rax
  int v532; // ebx
  D3DKMT_HANDLE v533; // edi
  __int64 v534; // rax
  __int64 v535; // rdx
  __int64 v536; // r8
  HDEV v537; // rax
  const RECT *pDstSubRects; // rdi
  UINT v539; // r12d
  HWND v540; // r9
  UINT v541; // ebx
  HDEV v542; // r15
  unsigned int v543; // r9d
  unsigned int v544; // r10d
  __int64 v545; // rcx
  DXGDEVICE *v546; // rbx
  char v547; // bl
  __int64 v548; // rcx
  __int64 v549; // rax
  __int64 v550; // rax
  __int64 v551; // rax
  COREDEVICEACCESS *v552; // rsi
  __int64 v553; // rdx
  __int64 v554; // rcx
  __int64 v555; // rbx
  struct DXGDEVICE *v556; // rdi
  __int64 v557; // rbx
  struct DXGPROCESS *v558; // rax
  int v559; // eax
  __int64 v560; // rax
  __int64 v561; // rcx
  __int64 v562; // rax
  __int64 v563; // rax
  struct _DXGKWIN32KENG_INTERFACE *v564; // rbx
  int v565; // eax
  HDEV *v566; // rdx
  __int64 v567; // rax
  __int64 v568; // rdx
  __int64 v569; // rcx
  struct DXGDEVICE *v570; // rdi
  __int64 v571; // rbx
  struct DXGPROCESS *v572; // rax
  DXGDEVICE *v573; // rcx
  __int64 v574; // rax
  DXGDEVICE *v575; // rbx
  unsigned __int8 v576; // di
  char v577; // bl
  __int64 v578; // rcx
  __int64 v579; // rax
  struct _DXGKWIN32KENG_INTERFACE *v580; // rbx
  int v581; // eax
  int v582; // eax
  HDEV *v583; // rcx
  __int64 v584; // rax
  int v585; // eax
  __int64 v586; // rax
  __int64 v587; // rdx
  __int64 v588; // rcx
  __int64 v589; // rax
  HDEV v590; // rsi
  __int64 v591; // rax
  __int64 v592; // rdx
  __int64 v593; // rax
  __int64 v594; // rdx
  __int64 v595; // r8
  __int64 v596; // rbx
  __int64 *v597; // rax
  __int64 *v598; // rdi
  __int64 v599; // rbx
  __int64 v600; // rcx
  DXGADAPTERSTOPRESETLOCKSHARED *v601; // rdi
  COREACCESS *v602; // rdi
  _QWORD *v603; // rax
  DXGADAPTER *v604; // rcx
  __int64 v605; // r8
  __int64 v606; // r9
  __int64 v607; // rax
  __int64 v608; // rdx
  __int64 v609; // rcx
  __int64 v610; // r8
  DXGADAPTERSTOPRESETLOCKSHARED *v611; // rsi
  __int64 v612; // rbx
  _QWORD *v613; // rax
  DXGADAPTER *v614; // rcx
  __int64 v615; // rcx
  __int64 v616; // r8
  __int64 v617; // rax
  unsigned int v618; // esi
  unsigned int *v619; // rbx
  unsigned int v620; // ecx
  __int64 v621; // rax
  unsigned int v622; // ecx
  __int64 v623; // rcx
  const RECT *v624; // rcx
  int CurrentOrientation; // eax
  int v626; // ecx
  const struct tagRECT *v627; // r9
  _DWORD *v628; // r8
  struct _VIDMM_DMA_BUFFER **v629; // rdx
  __int64 v630; // r8
  const RECT *v631; // rsi
  UINT v632; // r12d
  HWND v633; // r9
  UINT v634; // edi
  struct _D3DKMT_UNLOCK2 v635; // rbx
  unsigned int v636; // r9d
  unsigned int v637; // r10d
  __int64 v638; // rcx
  __int64 v639; // rcx
  __int64 v640; // rdi
  struct DXGPROCESS *v641; // rax
  int v642; // eax
  struct DXGCONTEXT **v643; // r9
  UINT j; // edx
  __int64 v645; // rcx
  _QWORD *v646; // rax
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-100h]
  PLARGE_INTEGER Timeouta; // [rsp+20h] [rbp-100h]
  struct tagRECT *v649; // [rsp+28h] [rbp-F8h]
  unsigned int v650; // [rsp+28h] [rbp-F8h]
  unsigned int v651; // [rsp+30h] [rbp-F0h]
  int Src; // [rsp+40h] [rbp-E0h]
  size_t Size; // [rsp+48h] [rbp-D8h]
  int Sizea; // [rsp+48h] [rbp-D8h]
  struct VIDSCH_SUBMIT_DATA_BASE *v655; // [rsp+50h] [rbp-D0h]
  LONG v656; // [rsp+A0h] [rbp-80h]
  unsigned int v657; // [rsp+A0h] [rbp-80h]
  unsigned int v658; // [rsp+A0h] [rbp-80h]
  unsigned int v659; // [rsp+A0h] [rbp-80h]
  UINT v660; // [rsp+A0h] [rbp-80h]
  unsigned int v661; // [rsp+A0h] [rbp-80h]
  unsigned int v662; // [rsp+A0h] [rbp-80h]
  unsigned int v663; // [rsp+A0h] [rbp-80h]
  char v664; // [rsp+A8h] [rbp-78h]
  unsigned __int8 v665; // [rsp+A8h] [rbp-78h]
  CWin32kLocks *v667; // [rsp+B8h] [rbp-68h]
  signed int v668; // [rsp+C0h] [rbp-60h]
  enum _D3DDDIFORMAT v669; // [rsp+C4h] [rbp-5Ch]
  enum _D3DDDIFORMAT v670; // [rsp+C4h] [rbp-5Ch]
  struct DXGALLOCATION *v671; // [rsp+C8h] [rbp-58h] BYREF
  unsigned int v672; // [rsp+D0h] [rbp-50h] BYREF
  unsigned int v673[2]; // [rsp+D8h] [rbp-48h]
  DXGADAPTERSTOPRESETLOCKSHARED *v674; // [rsp+E0h] [rbp-40h]
  HDEV CurrentIrql; // [rsp+E8h] [rbp-38h]
  unsigned int hSource; // [rsp+F0h] [rbp-30h]
  struct DXGADAPTER **v677; // [rsp+F8h] [rbp-28h]
  unsigned int v678[2]; // [rsp+100h] [rbp-20h]
  struct VIDSCH_SUBMIT_DATA_BASE *v679; // [rsp+108h] [rbp-18h]
  struct _EX_RUNDOWN_REF *v680; // [rsp+110h] [rbp-10h] BYREF
  struct _DXGKWIN32KENG_INTERFACE *v681; // [rsp+118h] [rbp-8h]
  D3DKMT_HANDLE v682; // [rsp+120h] [rbp+0h]
  char v683[8]; // [rsp+128h] [rbp+8h] BYREF
  __int64 v684; // [rsp+130h] [rbp+10h]
  char v685; // [rsp+138h] [rbp+18h]
  __int64 v686; // [rsp+140h] [rbp+20h] BYREF
  char v687; // [rsp+148h] [rbp+28h]
  struct _D3DKMT_UNLOCK2 v688; // [rsp+150h] [rbp+30h] BYREF
  struct DXGCONTEXT **v689; // [rsp+158h] [rbp+38h]
  struct _EX_RUNDOWN_REF *v690; // [rsp+160h] [rbp+40h] BYREF
  struct _EX_RUNDOWN_REF *v691; // [rsp+168h] [rbp+48h] BYREF
  unsigned int v692[4]; // [rsp+170h] [rbp+50h] BYREF
  __int128 v693; // [rsp+180h] [rbp+60h]
  __int128 v694; // [rsp+190h] [rbp+70h]
  __int128 v695; // [rsp+1A0h] [rbp+80h] BYREF
  __int128 v696; // [rsp+1B0h] [rbp+90h]
  __int128 v697; // [rsp+1C0h] [rbp+A0h]
  struct _EX_RUNDOWN_REF *v698; // [rsp+1D0h] [rbp+B0h] BYREF
  struct _EX_RUNDOWN_REF *v699; // [rsp+1D8h] [rbp+B8h] BYREF
  struct _EX_RUNDOWN_REF *v700; // [rsp+1E0h] [rbp+C0h] BYREF
  struct _EX_RUNDOWN_REF *v701; // [rsp+1E8h] [rbp+C8h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v702; // [rsp+1F0h] [rbp+D0h] BYREF
  __int64 v703; // [rsp+220h] [rbp+100h] BYREF
  DXGCONTEXT *v704; // [rsp+228h] [rbp+108h]
  struct _D3DKMT_UNLOCK v705; // [rsp+238h] [rbp+118h] BYREF
  struct _D3DKMT_LOCK2 v706; // [rsp+248h] [rbp+128h] BYREF
  struct _D3DKMT_LOCK v707; // [rsp+260h] [rbp+140h] BYREF
  _BYTE v708[24]; // [rsp+290h] [rbp+170h] BYREF
  _BYTE v709[24]; // [rsp+2A8h] [rbp+188h] BYREF
  __int128 v710; // [rsp+2C0h] [rbp+1A0h]
  RECT SrcRect; // [rsp+2F8h] [rbp+1D8h]
  RECT DstRect; // [rsp+308h] [rbp+1E8h]
  _QWORD v713[68]; // [rsp+320h] [rbp+200h] BYREF
  struct _DXGKARG_PRESENT v714; // [rsp+540h] [rbp+420h] BYREF
  struct tagRECT v715; // [rsp+5F0h] [rbp+4D0h] BYREF
  _QWORD v716[2]; // [rsp+600h] [rbp+4E0h] BYREF
  struct tagRECT Source1; // [rsp+610h] [rbp+4F0h] BYREF
  struct tagRECT v718; // [rsp+620h] [rbp+500h] BYREF
  struct tagRECT v719; // [rsp+630h] [rbp+510h] BYREF
  char v720[8]; // [rsp+640h] [rbp+520h] BYREF
  struct _KAPC_STATE v721; // [rsp+648h] [rbp+528h] BYREF
  char v722[8]; // [rsp+678h] [rbp+558h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+680h] [rbp+560h] BYREF
  _D3DKMT_OUTPUTDUPLPRESENT v724; // [rsp+6B0h] [rbp+590h] BYREF
  _BYTE v726[64]; // [rsp+7F0h] [rbp+6D0h] BYREF
  _BYTE v727[64]; // [rsp+830h] [rbp+710h] BYREF
  _BYTE v728[64]; // [rsp+870h] [rbp+750h] BYREF
  _BYTE v729[64]; // [rsp+8B0h] [rbp+790h] BYREF
  _BYTE v730[64]; // [rsp+8F0h] [rbp+7D0h] BYREF
  _BYTE v731[64]; // [rsp+930h] [rbp+810h] BYREF
  _BYTE v732[64]; // [rsp+970h] [rbp+850h] BYREF
  _BYTE v733[64]; // [rsp+9B0h] [rbp+890h] BYREF
  _BYTE v734[64]; // [rsp+9F0h] [rbp+8D0h] BYREF
  _BYTE v735[64]; // [rsp+A30h] [rbp+910h] BYREF
  _BYTE v736[64]; // [rsp+A70h] [rbp+950h] BYREF
  char v737[64]; // [rsp+AB0h] [rbp+990h] BYREF

  v7 = this;
  v689 = a6;
  v9 = *((_QWORD *)this + 2);
  v704 = this;
  v674 = a4;
  v10 = *(_QWORD *)(v9 + 16);
  v679 = a7;
  v11 = *(_QWORD *)(v10 + 16);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v11 + 160)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v11 + 144)) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v12 + 24) = 3065LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( *((_QWORD *)v7 + 40) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v11);
    *(_QWORD *)(v13 + 24) = 3066LL;
    WdLogEvent5_WdAssertion(v13);
  }
  Value = a2->Flags.Value;
  if ( (Value & 0x4000) != 0
    || (Value &= 0x12000u,
        v11 = *(_QWORD *)(*((_QWORD *)v7 + 2) + 40LL),
        v681 = *(struct _DXGKWIN32KENG_INTERFACE **)(v11 + 96),
        (_DWORD)Value == 73728) )
  {
    v15 = WdLogNewEntry5_WdWarning(v11, Value, a3);
    *(_QWORD *)(v15 + 24) = v7;
    *(_QWORD *)(v15 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v15);
    return 3221225485LL;
  }
  memset(&v714, 0, sizeof(v714));
  v18 = *(_DWORD *)a7 | 0x10020;
  hSource = a2->hSource;
  hDestination = a2->hDestination;
  *(_DWORD *)a7 = v18;
  v20 = (a2->Flags.Value & 0x10000) == 0;
  v672 = hDestination;
  if ( v20 )
    *(_DWORD *)a7 = v18 | 1;
  v21 = *(unsigned int *)a7;
  LODWORD(v21) = v21 | 0x100;
  *(_DWORD *)a7 = v21;
  *(_DWORD *)a7 = v21 ^ (v21 ^ (32 * a2->Flags.Value)) & 0x20000;
  if ( (a2->Flags.Value & 0x1000) != 0 )
    *((_DWORD *)a7 + 28) = a2->PresentCount;
  v22 = 0;
  if ( *(_QWORD *)(*((_QWORD *)v7 + 2) + 1672LL) != *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 16LL) )
    *((_DWORD *)a7 + 29) = 0;
  v23 = a2->hDestination;
  v24 = 0LL;
  v671 = 0LL;
  v25 = 0;
  v668 = 0;
  v26 = 0LL;
  v678[0] = 0;
  v669 = D3DDDIFMT_UNKNOWN;
  v656 = 0;
  LODWORD(v677) = 0;
  v680 = 0LL;
  v690 = 0LL;
  v682 = 0;
  if ( v23 )
  {
    v27 = *(_QWORD *)(*((_QWORD *)v7 + 2) + 40LL);
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v27 + 200, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v30 = *(_DWORD *)(v27 + 216);
        if ( v30 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v28, &EventBlockThread, v29, v30);
      }
      ExAcquirePushLockSharedEx(v27 + 200, 0LL);
    }
    v31 = v23;
    v32 = v23 >> 30;
    v33 = (v31 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v33 < *(_DWORD *)(v27 + 240)
      && (v34 = *(_QWORD *)(v27 + 224), v35 = *(_DWORD *)(v34 + 16 * v33 + 8), v32 == ((v35 >> 5) & 3))
      && (v35 & 0x2000) == 0
      && (v35 & 0x1F) != 0
      && (*(_BYTE *)(v34 + 16LL * (unsigned int)v33 + 8) & 0x1F) == 5 )
    {
      v36 = *(struct _EX_RUNDOWN_REF **)(v34 + 16LL * (unsigned int)v33);
    }
    else
    {
      v36 = 0LL;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v700, v36);
    ExReleasePushLockSharedEx(v27 + 200, 0LL);
    KeLeaveCriticalRegion();
    DXGALLOCATIONREFERENCE::MoveAssign((struct DXGALLOCATION **)&v680, (struct DXGALLOCATION **)&v700);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v700);
    v26 = v680;
    if ( !v680 )
    {
      v39 = (_QWORD *)WdLogNewEntry5_WdWarning(v38, v37, v17);
      v39[3] = -1073741811LL;
      v39[4] = v7;
      v39[5] = a2->hDestination;
      WdLogEvent5_WdWarning(v39);
      LODWORD(v24) = -1073741811;
      goto LABEL_985;
    }
    v40 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 16LL);
    if ( *(_QWORD *)(*(_QWORD *)(v680[1].Count + 16) + 16LL) != v40 )
    {
      v41 = (_QWORD *)WdLogNewEntry5_WdError(v40);
      v41[3] = *((_QWORD *)v7 + 2);
      v41[4] = v26;
      v41[5] = -1073741811LL;
      WdLogEvent5_WdError(v41);
      LODWORD(v24) = -1073741811;
      goto LABEL_985;
    }
    v695 = 0uLL;
    v696 = 0uLL;
    v697 = 0uLL;
    v42 = *(_OWORD **)(v680[6].Count + 16);
    *(_QWORD *)&v695 = v42;
    v43 = *(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL);
    v677 = (struct DXGADAPTER **)v43;
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    {
      McTemplateK0q(v40, &EventProfilerEnter, (__int64)v17, 5003);
      v42 = (_OWORD *)v695;
    }
    v21 = *(unsigned __int8 *)(*(_QWORD *)(v43 + 16) + 185LL);
    if ( (_BYTE)v21 )
    {
      v695 = v42[4];
      v696 = v42[5];
      v697 = v42[6];
      HIDWORD(v697) = -1;
      if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v21, &EventProfilerExit, (__int64)v17, 5003);
LABEL_87:
      v25 = 0;
      LODWORD(v677) = HIDWORD(v695);
      v656 = DWORD2(v695);
      goto LABEL_88;
    }
    CurrentProcess = PsGetCurrentProcess(v21, v42);
    ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v45);
    v48 = ProcessDxgProcess;
    if ( ProcessDxgProcess )
    {
      if ( (*(_BYTE *)(ProcessDxgProcess + 307) & 4) != 0 )
      {
        ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
        v50 = ThreadProperty;
        if ( ThreadProperty )
        {
          ObfDereferenceObject(ThreadProperty);
          v48 = *v50;
        }
      }
    }
    v657 = 0;
    v51 = v48 + 112;
    if ( !v48 )
      v51 = 0LL;
    if ( v51 && *(struct _KTHREAD **)(v51 + 8) == KeGetCurrentThread() )
    {
      v52 = WdLogNewEntry5_WdAssertion(v47);
      *(_QWORD *)(v52 + 24) = 1214LL;
      WdLogEvent5_WdAssertion(v52);
    }
    if ( v48 )
    {
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v51, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v55 = *(_DWORD *)(v51 + 16);
          if ( v55 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q(v53, &EventBlockThread, v54, v55);
        }
        ExAcquirePushLockExclusiveEx(v51, 0LL);
      }
      *(_QWORD *)(v51 + 8) = KeGetCurrentThread();
      v657 = 2;
    }
    DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v43 + 16), 1);
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v43 + 16) + 3924LL));
    CurrentIrql = (HDEV)KeGetCurrentIrql();
    v57 = 0LL;
    if ( (unsigned __int8)CurrentIrql < 2u )
    {
      CurrentThread = KeGetCurrentThread();
      if ( !CurrentThread )
      {
        v59 = WdLogNewEntry5_WdAssertion(v56);
        *(_QWORD *)(v59 + 24) = 94LL;
        WdLogEvent5_WdAssertion(v59);
      }
      CurrentProcessSessionId = PsGetCurrentProcessSessionId(v56);
      if ( !CurrentProcessSessionId || (unsigned int)PsGetThreadSessionId(CurrentThread) != CurrentProcessSessionId )
        goto LABEL_68;
      v61 = 0LL;
      if ( !IsThreadCrossSessionAttached() )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v61 = *ThreadWin32Thread;
      }
      if ( v61 )
      {
        v57 = *(_QWORD *)(v61 + 80);
        if ( v57 )
        {
          v63 = *(_DWORD *)(v57 + 136);
LABEL_70:
          DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH((DXGVALIDATIONPROCESSATTACH *)v722, v677[2]);
          v673[0] = (*((__int64 (__fastcall **)(_QWORD, __int128 *))v677[2] + 43))(*((_QWORD *)v677[2] + 30), &v695);
          if ( v722[0] )
            KeUnstackDetachProcess(&ApcState);
          v66 = KeGetCurrentIrql();
          if ( (_BYTE)CurrentIrql != (_BYTE)v66 )
          {
            v67 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v66, v64, v65);
            v68 = v677;
            v67[3] = 275LL;
            v67[4] = 16LL;
            v67[5] = v68;
            v67[6] = (unsigned __int8)CurrentIrql;
            LOBYTE(v68) = KeGetCurrentIrql();
            v67[7] = (unsigned __int8)v68;
            WdLogEvent5_WdCriticalError(v67);
          }
          if ( v57 && *(_DWORD *)(v57 + 136) != v63 )
          {
            v69 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v66, v64, v65);
            v69[3] = 275LL;
            v69[4] = 25LL;
            v69[5] = *(int *)(v57 + 136);
            v69[6] = v63;
            v69[7] = 0LL;
            WdLogEvent5_WdCriticalError(v69);
          }
          _InterlockedDecrement((volatile signed __int32 *)v677[2] + 981);
          v70 = (_QWORD *)WdLogNewEntry5_WdTrace(v66, v64);
          v71 = (int)v673[0];
          v70[3] = (int)v673[0];
          v70[4] = v695;
          v70[5] = DWORD2(v695);
          v70[6] = HIDWORD(v695);
          v72 = (int)v696;
          v70[7] = (int)v696;
          if ( (_DWORD)v71 )
          {
            v73 = WdLogNewEntry5_WdError(v72);
            *(_QWORD *)(v73 + 24) = v71;
            WdLogEvent5_WdError(v73);
          }
          DXGADAPTER::ReleaseDdiSync(v677[2]);
          if ( v657 == 2 )
          {
            *(_QWORD *)(v51 + 8) = 0LL;
            ExReleasePushLockExclusiveEx(v51, 0LL);
            KeLeaveCriticalRegion();
          }
          if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q(v21, &EventProfilerExit, (__int64)v17, 5003);
          if ( (int)v71 < 0 )
          {
            v74 = (_QWORD *)WdLogNewEntry5_WdError(v21);
            v74[3] = v71;
            v74[4] = v7;
            v75 = *(_QWORD *)(v26[6].Count + 16);
            v76 = (struct DXGALLOCATION *)v680;
            goto LABEL_161;
          }
          v24 = (struct _EX_RUNDOWN_REF *)v671;
          v26 = v680;
          goto LABEL_87;
        }
      }
      else
      {
LABEL_68:
        v57 = 0LL;
      }
    }
    v63 = 0;
    goto LABEL_70;
  }
LABEL_88:
  if ( (a2->Flags.Value & 0x8002) == 0 )
  {
    v77 = a2->hSource;
    v78 = *(_QWORD *)(*((_QWORD *)v7 + 2) + 40LL);
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v78 + 200, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v81 = *(_DWORD *)(v78 + 216);
        if ( v81 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q(v79, &EventBlockThread, v80, v81);
      }
      ExAcquirePushLockSharedEx(v78 + 200, 0LL);
    }
    v82 = v77;
    v83 = v77 >> 30;
    v84 = (v82 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v84 < *(_DWORD *)(v78 + 240)
      && (v85 = *(_QWORD *)(v78 + 224), v86 = *(_DWORD *)(v85 + 16 * v84 + 8), v83 == ((v86 >> 5) & 3))
      && (v86 & 0x2000) == 0
      && (v86 & 0x1F) != 0
      && (*(_BYTE *)(v85 + 16LL * (unsigned int)v84 + 8) & 0x1F) == 5 )
    {
      v87 = *(struct _EX_RUNDOWN_REF **)(v85 + 16LL * (unsigned int)v84);
    }
    else
    {
      v87 = 0LL;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v701, v87);
    ExReleasePushLockSharedEx(v78 + 200, 0LL);
    KeLeaveCriticalRegion();
    DXGALLOCATIONREFERENCE::MoveAssign(&v671, (struct DXGALLOCATION **)&v701);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v701);
    v24 = (struct _EX_RUNDOWN_REF *)v671;
    if ( !v671 )
    {
      v90 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v88, v89);
      v90[3] = -1073741811LL;
      v90[4] = v7;
      v90[5] = a2->hSource;
      WdLogEvent5_WdWarning(v90);
      LODWORD(v24) = -1073741811;
      goto LABEL_985;
    }
    memset(v692, 0, sizeof(v692));
    v693 = 0uLL;
    v694 = 0uLL;
    v17 = *(_OWORD **)(*((_QWORD *)v671 + 6) + 16LL);
    *(_QWORD *)v692 = v17;
    if ( (a2->Flags.Value & 0x10000000) != 0 )
    {
      v692[2] = HIDWORD(a2[1].hWindow);
      v692[3] = a2[1].VidPnSourceId;
      LODWORD(v693) = a2[1].hSource;
LABEL_163:
      v25 = v692[2];
      v124 = v692[3];
      v668 = v692[2];
      v678[0] = v692[3];
      v669 = (int)v693;
      goto LABEL_165;
    }
    v91 = *((_QWORD *)v7 + 2);
    v92 = *(_QWORD *)(*((_QWORD *)v671 + 1) + 16LL);
    v93 = *(_QWORD *)(v91 + 16);
    *(_QWORD *)v678 = v93;
    if ( *(_QWORD *)(v92 + 16) != *(_QWORD *)(v93 + 16) )
    {
      v94 = (_QWORD *)WdLogNewEntry5_WdError(v91);
      v94[3] = *((_QWORD *)v7 + 2);
      v94[4] = v24;
      v94[5] = -1073741811LL;
      WdLogEvent5_WdError(v94);
      LODWORD(v24) = -1073741811;
      goto LABEL_985;
    }
    if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    {
      McTemplateK0q(v91, &EventProfilerEnter, (__int64)v17, 5003);
      v17 = *(_OWORD **)v692;
    }
    v21 = *(unsigned __int8 *)(*(_QWORD *)(v93 + 16) + 185LL);
    if ( (_BYTE)v21 )
    {
      *(_OWORD *)v692 = v17[4];
      v693 = v17[5];
      v694 = v17[6];
      HIDWORD(v694) = -1;
      if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q(v21, &EventProfilerExit, (__int64)v17, 5003);
      goto LABEL_163;
    }
    v95 = PsGetCurrentProcess(v21, v92);
    v97 = PsGetProcessDxgProcess(v95, v96);
    v99 = v97;
    if ( v97 )
    {
      if ( (*(_BYTE *)(v97 + 307) & 4) != 0 )
      {
        v100 = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
        v101 = v100;
        if ( v100 )
        {
          ObfDereferenceObject(v100);
          v99 = *v101;
        }
      }
    }
    v673[0] = 0;
    v102 = v99 + 112;
    if ( !v99 )
      v102 = 0LL;
    if ( v102 && *(struct _KTHREAD **)(v102 + 8) == KeGetCurrentThread() )
    {
      v103 = WdLogNewEntry5_WdAssertion(v98);
      *(_QWORD *)(v103 + 24) = 1214LL;
      WdLogEvent5_WdAssertion(v103);
    }
    if ( v99 )
    {
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v102, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v106 = *(_DWORD *)(v102 + 16);
          if ( v106 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q(v104, &EventBlockThread, v105, v106);
        }
        ExAcquirePushLockExclusiveEx(v102, 0LL);
      }
      *(_QWORD *)(v102 + 8) = KeGetCurrentThread();
      v673[0] = 2;
    }
    DXGADAPTER::AcquireDdiSync(*(_QWORD *)(v93 + 16), 1);
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v93 + 16) + 3924LL));
    CurrentIrql = (HDEV)KeGetCurrentIrql();
    v108 = 0LL;
    if ( (unsigned __int8)CurrentIrql < 2u )
    {
      v109 = KeGetCurrentThread();
      if ( !v109 )
      {
        v110 = WdLogNewEntry5_WdAssertion(v107);
        *(_QWORD *)(v110 + 24) = 94LL;
        WdLogEvent5_WdAssertion(v110);
      }
      v111 = PsGetCurrentProcessSessionId(v107);
      if ( !v111 || (unsigned int)PsGetThreadSessionId(v109) != v111 )
        goto LABEL_143;
      v112 = 0LL;
      if ( !IsThreadCrossSessionAttached() )
      {
        v113 = (__int64 *)PsGetThreadWin32Thread(v109);
        if ( v113 )
          v112 = *v113;
      }
      if ( v112 )
      {
        v108 = *(_QWORD *)(v112 + 80);
        if ( v108 )
        {
          v670 = *(_DWORD *)(v108 + 136);
LABEL_145:
          v114 = *(_QWORD *)v678;
          DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
            (DXGVALIDATIONPROCESSATTACH *)v720,
            *(struct DXGADAPTER **)(*(_QWORD *)v678 + 16LL));
          v71 = (*(int (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)(v114 + 16) + 344LL))(
                  *(_QWORD *)(*(_QWORD *)(v114 + 16) + 240LL),
                  v692);
          if ( v720[0] )
            KeUnstackDetachProcess(&v721);
          v117 = KeGetCurrentIrql();
          if ( (_BYTE)CurrentIrql != (_BYTE)v117 )
          {
            v118 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v117, v115, v116);
            v119 = *(_QWORD *)v678;
            v118[3] = 275LL;
            v118[4] = 16LL;
            v118[5] = v119;
            v118[6] = (unsigned __int8)CurrentIrql;
            LOBYTE(v119) = KeGetCurrentIrql();
            v118[7] = (unsigned __int8)v119;
            WdLogEvent5_WdCriticalError(v118);
          }
          if ( v108 && *(_DWORD *)(v108 + 136) != v670 )
          {
            v120 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v117, v115, v116);
            v120[3] = 275LL;
            v120[4] = 25LL;
            v120[5] = *(int *)(v108 + 136);
            v120[6] = v670;
            v120[7] = 0LL;
            WdLogEvent5_WdCriticalError(v120);
          }
          _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)v678 + 16LL) + 3924LL));
          v121 = (_QWORD *)WdLogNewEntry5_WdTrace(v117, v115);
          v121[3] = v71;
          v121[4] = *(_QWORD *)v692;
          v121[5] = v692[2];
          v121[6] = v692[3];
          v122 = (int)v693;
          v121[7] = (int)v693;
          if ( (_DWORD)v71 )
          {
            v123 = WdLogNewEntry5_WdError(v122);
            *(_QWORD *)(v123 + 24) = v71;
            WdLogEvent5_WdError(v123);
          }
          DXGADAPTER::ReleaseDdiSync(*(DXGADAPTER **)(*(_QWORD *)v678 + 16LL));
          if ( v673[0] == 2 )
          {
            *(_QWORD *)(v102 + 8) = 0LL;
            ExReleasePushLockExclusiveEx(v102, 0LL);
            KeLeaveCriticalRegion();
          }
          if ( (qword_1C005F010 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q(v21, &EventProfilerExit, (__int64)v17, 5003);
          if ( (int)v71 >= 0 )
          {
            v24 = (struct _EX_RUNDOWN_REF *)v671;
            v26 = v680;
            goto LABEL_163;
          }
          v74 = (_QWORD *)WdLogNewEntry5_WdError(v21);
          v74[3] = v71;
          v74[4] = v7;
          v75 = *(_QWORD *)(v24[6].Count + 16);
          v76 = v671;
LABEL_161:
          v74[5] = v75;
          v74[6] = v76;
          WdLogEvent5_WdError(v74);
          LODWORD(v24) = v71;
          goto LABEL_985;
        }
      }
      else
      {
LABEL_143:
        v108 = 0LL;
      }
    }
    v670 = D3DDDIFMT_UNKNOWN;
    goto LABEL_145;
  }
  v124 = 0;
LABEL_165:
  v125 = a2->hDestination;
  if ( !v125 || (v126 = a2->Flags.Value, (v126 & 0x10000) != 0) )
  {
    v126 = a2->Flags.Value;
    if ( (v126 & 4) == 0 )
    {
      if ( (v126 & 3) == 0 )
      {
        if ( (v126 & 0x8000) == 0 )
        {
          v401 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v126, v17);
          v401[3] = -1073741811LL;
          v401[4] = v7;
          v401[5] = a2->pSrcSubRects;
          v401[6] = a2->SubRectCnt;
          v401[7] = a2->Flags.Value;
          WdLogEvent5_WdWarning(v401);
          LODWORD(v261) = -1073741811;
          goto LABEL_509;
        }
        if ( (v126 & 0x27EF) == 0 )
        {
          Model = a2->PresentHistoryToken.Model;
          if ( Model == D3DKMT_PM_REDIRECTED_FLIP )
          {
            if ( a2->PresentHistoryToken.Token.Flip.DirtyRegions.NumRects <= 0x10 )
              goto LABEL_570;
          }
          else if ( Model == D3DKMT_PM_REDIRECTED_COMPOSITION )
          {
LABEL_570:
            v261 = v674;
            LODWORD(v399) = SubmitPresentHistoryTokenPreparation(
                              v674,
                              (struct COREDEVICEACCESS *)a3,
                              *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 16LL),
                              &a2->PresentHistoryToken,
                              a2->PresentLimitSemaphore,
                              (a2->Flags.Value & 0x10) != 0,
                              v681);
            if ( (int)v399 >= 0 )
            {
              LODWORD(v261) = SubmitPresentHistoryToken(
                                &a2->PresentHistoryToken,
                                (struct COREDEVICEACCESS *)a3,
                                v261,
                                (struct CWin32kLocks *)a5,
                                1,
                                0LL,
                                (struct DXGK_PRESENT_PARAMS *)a2,
                                v679,
                                v7,
                                *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 16LL),
                                0);
LABEL_498:
              v269 = (_QWORD *)((char *)v7 + 320);
LABEL_499:
              if ( (int)v261 < 0 )
                goto LABEL_510;
              v351 = v690;
              if ( v690 )
              {
                if ( (a2->Flags.Value & 0x10000000) == 0 )
                {
                  v352 = *((_QWORD *)v7 + 2);
                  v353 = *(_QWORD *)(v352 + 1672);
                  if ( v353 )
                  {
                    if ( !*(_BYTE *)(*(_QWORD *)(v352 + 40) + 306LL) )
                    {
                      memset(&v724, 0, sizeof(v724));
                      v724.hContext = a2->hDevice;
                      v724.hSource = v682;
                      v724.VidPnSourceId = (*(_DWORD *)(v690[6].Count + 4) >> 6) & 0xF;
                      v354 = 2LL;
                      BroadcastContextCount = a2->BroadcastContextCount;
                      BroadcastContext = a2->BroadcastContext;
                      v724.BroadcastContextCount = BroadcastContextCount;
                      v357 = v724.BroadcastContext;
                      do
                      {
                        *(_OWORD *)v357 = *(_OWORD *)BroadcastContext;
                        *((_OWORD *)v357 + 1) = *((_OWORD *)BroadcastContext + 1);
                        *((_OWORD *)v357 + 2) = *((_OWORD *)BroadcastContext + 2);
                        *((_OWORD *)v357 + 3) = *((_OWORD *)BroadcastContext + 3);
                        *((_OWORD *)v357 + 4) = *((_OWORD *)BroadcastContext + 4);
                        *((_OWORD *)v357 + 5) = *((_OWORD *)BroadcastContext + 5);
                        *((_OWORD *)v357 + 6) = *((_OWORD *)BroadcastContext + 6);
                        v357 += 32;
                        v358 = *((_OWORD *)BroadcastContext + 7);
                        BroadcastContext += 32;
                        *((_OWORD *)v357 - 1) = v358;
                        --v354;
                      }
                      while ( v354 );
                      v724.PresentRegions.DirtyRectCount = 0;
                      v724.PresentRegions.MoveRectCount = 0;
                      v724.Flags.Value = 4;
                      v359 = OUTPUTDUPL_MGR::ProcessPresent(
                               *(OUTPUTDUPL_MGR **)(*(_QWORD *)(v353 + 2304) + 104LL),
                               v7,
                               &v724,
                               (*(_DWORD *)(v351[6].Count + 4) >> 6) & 0xF,
                               v689,
                               (struct COREDEVICEACCESS *)a3);
                      if ( v359 == 259 )
                        v359 = 0;
                      LODWORD(v261) = v359;
                    }
                  }
                }
              }
              goto LABEL_509;
            }
LABEL_984:
            LODWORD(v24) = v399;
            goto LABEL_985;
          }
        }
        v400 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v126, v17);
        LODWORD(v399) = -1073741811;
        v400[3] = v7;
        v400[4] = a2->Flags.Value;
        v400[5] = -1073741811LL;
        WdLogEvent5_WdWarning(v400);
        goto LABEL_984;
      }
      v402 = v126 & 0x100;
      if ( (v126 & 0x100) != 0 )
      {
        v21 = *((_QWORD *)v7 + 2);
        if ( !*(_QWORD *)(v21 + 1672) )
        {
          v403 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v126, v402);
          v403[3] = *((_QWORD *)v7 + 2);
          v403[4] = -1073741811LL;
LABEL_982:
          WdLogEvent5_WdWarning(v403);
          LODWORD(v261) = -1073741811;
          goto LABEL_983;
        }
        if ( *(_DWORD *)(v21 + 1680) <= a2->VidPnSourceId )
        {
          v404 = WdLogNewEntry5_WdWarning(v21, v126, v402);
          *(_QWORD *)(v404 + 24) = a2->VidPnSourceId;
          *(_QWORD *)(v404 + 32) = *(unsigned int *)(*((_QWORD *)v7 + 2) + 1680LL);
          WdLogEvent5_WdWarning(v404);
          LODWORD(v261) = -1073741811;
          goto LABEL_983;
        }
      }
      if ( (v126 & 2) != 0 )
      {
        if ( a2->pSrcSubRects && a2->SubRectCnt && (v126 & 0x86BD) == 0 )
        {
          hSource = 0;
          goto LABEL_595;
        }
      }
      else if ( a2->pSrcSubRects && a2->SubRectCnt && v25 && v124 && (v126 & 0x802E) == 0 )
      {
        v405 = ((unsigned int)v126 >> 9) & 1;
        if ( v405 || (v126 & 0x400) != 0 )
        {
          v406 = ((unsigned int)v126 >> 10) & 1;
          if ( v405 == (_DWORD)v406 )
          {
            v407 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v406, v402);
            LODWORD(v399) = -1073741811;
            v407[3] = -1073741811LL;
            v407[4] = v7;
            v407[5] = a2->pSrcSubRects;
            v407[6] = a2->SubRectCnt;
            v407[7] = a2->Flags.Value;
            WdLogEvent5_WdWarning(v407);
            goto LABEL_984;
          }
          if ( !(_DWORD)v402
            || !ADAPTER_DISPLAY::IsVidPnSourceOwner(
                  *(DXGADAPTER ***)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 1672LL) + 2304LL),
                  *((const struct DXGDEVICE **)v7 + 2),
                  a2->VidPnSourceId) )
          {
            v646 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v406, v402);
            LODWORD(v399) = -1073741811;
            v646[3] = v7;
            v646[4] = a2->pSrcSubRects;
            v646[5] = a2->SubRectCnt;
            v646[6] = a2->Flags.Value;
            v646[7] = -1073741811LL;
            WdLogEvent5_WdWarning(v646);
            goto LABEL_984;
          }
        }
LABEL_595:
        v714.Flags.Value ^= (*(_BYTE *)&v714.Flags.0 ^ (unsigned __int8)*(_DWORD *)&a2->Flags.0) & 2;
        v714.Flags.Value ^= (*(_BYTE *)&v714.Flags.0 ^ (unsigned __int8)*(_DWORD *)&a2->Flags.0) & 1;
        v714.Flags.Value ^= (*(_BYTE *)&v714.Flags.0 ^ (unsigned __int8)(a2->Flags.Value >> 5)) & 0x10;
        v714.Flags.Value ^= (*(_BYTE *)&v714.Flags.0 ^ (unsigned __int8)(a2->Flags.Value >> 5)) & 0x20;
        v714.Flags.Value ^= (*(_BYTE *)&v714.Flags.0 ^ (unsigned __int8)(a2->Flags.Value >> 5)) & 0x40;
        v714.Color = a2->Color;
        LODWORD(v261) = DXGPRESENT::CheckInput(*((DXGPRESENT **)v7 + 19), a2, v25, v124);
        if ( (int)v261 < 0 )
          goto LABEL_509;
        v408 = (_DWORD *)*((_QWORD *)v7 + 19);
        if ( (v408[1] & 4) != 0 )
          goto LABEL_498;
        if ( (v408[18] & 0x10000) != 0 )
        {
          v409 = (int)v677;
          if ( v408[108] != v656 || v408[109] != (_DWORD)v677 )
          {
            v408[108] = v656;
            v408[109] = v409;
            v408[1] |= 0x100u;
          }
        }
        v410 = *((_QWORD *)v7 + 2);
        v411 = *(_QWORD *)(v410 + 1672);
        if ( v411 && *(_QWORD *)(v411 + 2312) )
        {
          if ( v411 != *(_QWORD *)(*(_QWORD *)(v410 + 16) + 16LL) )
          {
            v412 = WdLogNewEntry5_WdAssertion(v411);
            *(_QWORD *)(v412 + 24) = 4281LL;
            WdLogEvent5_WdAssertion(v412);
          }
          v413 = *((_QWORD *)v7 + 2);
          for ( i = 0; i < *(_DWORD *)(v413 + 1680); ++i )
          {
            v415 = a2->Flags.Value & 0x10;
            ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v413 + 104));
            if ( *((_BYTE *)v7 + 401) )
              goto LABEL_620;
            LODWORD(v416) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 504LL)
                                                                                          + 8LL)
                                                                              + 184LL))(
                              *(_QWORD *)(*((_QWORD *)v7 + 2) + 600LL),
                              i,
                              0LL);
            if ( (_DWORD)v416 == -1071775486 )
            {
              if ( v415 )
                goto LABEL_614;
              if ( *((_BYTE *)a3 + 80) )
                COREACCESS::Release((COREACCESS *)(a3 + 5));
              COREACCESS::Release((COREACCESS *)(a3 + 1));
              LOBYTE(v417) = 1;
              v416 = (*(int (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL)
                                                                                            + 504LL)
                                                                                + 8LL)
                                                                    + 184LL))(
                       *(_QWORD *)(*((_QWORD *)v7 + 2) + 600LL),
                       i,
                       v417);
              LODWORD(v399) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)a3);
              if ( (int)v399 < 0 )
              {
                v418 = ((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
                *(_QWORD *)(v418 + 24) = v416;
                WdLogEvent5_WdEvent(v418);
                COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a3);
                goto LABEL_619;
              }
            }
            if ( (int)v416 < 0 )
            {
LABEL_614:
              v419 = ((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
              *(_QWORD *)(v419 + 24) = (int)v416;
              *(_QWORD *)(v419 + 32) = v7;
              WdLogEvent5_WdEvent(v419);
              if ( (_DWORD)v416 != -1071775486 && (_DWORD)v416 != -1073741130 && (_DWORD)v416 != -1071775232 )
              {
                v420 = WdLogNewEntry5_WdAssertion(v411);
                *(_QWORD *)(v420 + 24) = 2790LL;
                WdLogEvent5_WdAssertion(v420);
              }
            }
            LODWORD(v399) = v416;
LABEL_619:
            if ( (int)v399 < 0 )
            {
              v422 = ((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
              *(_QWORD *)(v422 + 24) = (int)v399;
              *(_QWORD *)(v422 + 32) = v7;
              WdLogEvent5_WdEvent(v422);
              goto LABEL_984;
            }
LABEL_620:
            v413 = *((_QWORD *)v7 + 2);
          }
        }
        else
        {
          v423 = DXGCONTEXT::WaitForQueuedPresentLimit(
                   v7,
                   0,
                   (a2->Flags.Value & 0x10) == 0,
                   (struct COREDEVICEACCESS *)a3);
          v399 = v423;
          if ( v423 < 0 )
          {
            v424 = ((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
            *(_QWORD *)(v424 + 24) = v399;
            *(_QWORD *)(v424 + 32) = v7;
            WdLogEvent5_WdEvent(v424);
            goto LABEL_984;
          }
        }
        if ( *((_BYTE *)v7 + 401) )
        {
          v421 = (_QWORD *)((char *)v7 + 320);
          LODWORD(v261) = 0;
          *((_QWORD *)v7 + 40) = 0LL;
          goto LABEL_645;
        }
        ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(*((_QWORD *)v7 + 2) + 104LL));
        v428 = 3;
        LODWORD(v261) = 0;
        if ( *((_DWORD *)v7 + 18) > 3u )
          v428 = *((_DWORD *)v7 + 18);
        if ( !*((_QWORD *)v7 + 28) )
        {
          v429 = *((_DWORD *)v7 + 26);
          v430 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, DXGCONTEXT *, char, _DWORD, int, int, _DWORD, _DWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 528LL) + 8LL) + 432LL))(
                   *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 536LL),
                   *((unsigned int *)v7 + 90),
                   *(_QWORD *)(*((_QWORD *)v7 + 2) + 592LL),
                   v7,
                   1,
                   *((_DWORD *)v7 + 48),
                   v428,
                   v429,
                   *((_DWORD *)v7 + 49),
                   *((_DWORD *)v7 + 50));
          *((_QWORD *)v7 + 28) = v430;
          if ( !v430 )
          {
            v433 = WdLogNewEntry5_WdWarning(0LL, v431, v432);
            LODWORD(v261) = -1073741801;
            *(_QWORD *)(v433 + 24) = v7;
            *(_QWORD *)(v433 + 32) = -1073741801LL;
            WdLogEvent5_WdWarning(v433);
            goto LABEL_635;
          }
          LODWORD(v261) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2)
                                                                                                 + 16LL)
                                                                                     + 528LL)
                                                                         + 8LL)
                                                             + 440LL))(v430);
          if ( (int)v261 < 0 )
          {
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 528LL)
                                                       + 8LL)
                                           + 448LL))(*((_QWORD *)v7 + 28));
            *((_QWORD *)v7 + 28) = 0LL;
          }
          else
          {
            *((_DWORD *)v7 + 51) = v428;
            *((_DWORD *)v7 + 52) = v429;
          }
        }
        if ( (int)v261 >= 0 )
        {
          v435 = *((_QWORD *)v7 + 28);
          LOBYTE(v425) = 1;
          v436 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 528LL)
                                                                                          + 8LL)
                                                                              + 488LL))(
                   v435,
                   v425,
                   0LL,
                   (__int64)v7 + 320);
          v437 = v436;
          if ( v436 == -1071775486 )
          {
            if ( a3 )
            {
              COREDEVICEACCESS::Release((COREDEVICEACCESS *)a3);
              LODWORD(v437) = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 528LL) + 8LL)
                                                                                          + 488LL))(
                                v435,
                                0LL,
                                0LL,
                                (__int64)v7 + 320);
              v438 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)a3);
              v439 = v438;
              if ( v438 < 0 )
              {
                v440 = ((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
                *(_QWORD *)(v440 + 24) = v7;
                *(_QWORD *)(v440 + 32) = v439;
                WdLogEvent5_WdEvent(v440);
                COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a3);
                LODWORD(v261) = v439;
                goto LABEL_643;
              }
            }
          }
          else if ( v436 < 0 )
          {
            v441 = ((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
            *(_QWORD *)(v441 + 24) = v7;
            *(_QWORD *)(v441 + 32) = v437;
            WdLogEvent5_WdEvent(v441);
          }
          LODWORD(v261) = v437;
          goto LABEL_643;
        }
LABEL_635:
        v434 = WdLogNewEntry5_WdWarning(v426, v425, v427);
        *(_QWORD *)(v434 + 24) = v7;
        WdLogEvent5_WdWarning(v434);
LABEL_643:
        if ( (int)v261 < 0 )
          goto LABEL_509;
        v421 = (_QWORD *)((char *)v7 + 320);
LABEL_645:
        if ( !*v421 && !*((_BYTE *)v7 + 401) )
        {
          v442 = WdLogNewEntry5_WdAssertion(v411);
          *(_QWORD *)(v442 + 24) = 4319LL;
          WdLogEvent5_WdAssertion(v442);
        }
        v443 = *((_QWORD *)v7 + 2);
        v685 = 0;
        v684 = *(_QWORD *)(v443 + 16);
        if ( !v684 )
        {
          v444 = WdLogNewEntry5_WdAssertion(0LL);
          *(_QWORD *)(v444 + 24) = 6301LL;
          WdLogEvent5_WdAssertion(v444);
        }
        v445 = KeGetCurrentThread();
        if ( *(struct _KTHREAD **)(v684 + 552) == v445 )
        {
          v446 = WdLogNewEntry5_WdAssertion(v445);
          *(_QWORD *)(v446 + 24) = 6306LL;
          WdLogEvent5_WdAssertion(v446);
        }
        v447 = 0;
        if ( (a2->Flags.Value & 0x10000) != 0 )
        {
          if ( a2->hDestination )
          {
            Count = v680[6].Count;
            v451 = *(_DWORD *)(Count + 4);
            *(_DWORD *)(Count + 4) = v451 | 0x400;
            v447 = (v451 & 0x400) == 0;
          }
        }
        else
        {
          COREDEVICEACCESS::Release((COREDEVICEACCESS *)a3);
          DXGADAPTERSTOPRESETLOCKSHARED::Release(v674);
          DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)v683);
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v674);
          v448 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)a3);
          v261 = (struct DXGADAPTERSTOPRESETLOCKSHARED *)v448;
          if ( v448 < 0 )
          {
            v449 = ((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
            *(_QWORD *)(v449 + 24) = v261;
            *(_QWORD *)(v449 + 32) = v7;
            WdLogEvent5_WdEvent(v449);
            COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a3);
            DXGPRESENTMUTEX::~DXGPRESENTMUTEX((DXGPRESENTMUTEX *)v683);
            goto LABEL_983;
          }
          v447 = 0;
        }
        v452 = (*((__int64 (**)(void))v681 + 1))();
        v662 = v452;
        CurrentThreadId = (struct DXGADAPTER **)PsGetCurrentThreadId();
        v677 = CurrentThreadId;
        if ( !*((_BYTE *)v7 + 401) )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 504LL) + 8LL)
                                         + 440LL))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 512LL));
          CurrentThreadId = v677;
        }
        v456 = *((_QWORD *)v7 + 19);
        if ( *(_DWORD *)(v456 + 8) == v452
          && *(struct DXGADAPTER ***)(v456 + 56) == CurrentThreadId
          && *(HWND *)(v456 + 48) == a2->hWindow
          && !*(_DWORD *)(v456 + 64)
          && !v447 )
        {
          v454 = *(unsigned int *)(v456 + 4);
          if ( (v454 & 0x108) == 0 )
          {
            if ( (v454 & 1) != 0 )
            {
              LODWORD(v261) = -1071775738;
            }
            else if ( (a2->Flags.Value & 0x10000) == 0 && (v454 & 0x10) == 0 )
            {
              DXGDEVICE::SynchronizePresentToPrimary(*((DXGDEVICE **)v7 + 2), v7, v455, 0);
            }
            goto LABEL_740;
          }
        }
        if ( v685 )
        {
          v685 = 0;
          DXGFASTMUTEX::Release((struct _KTHREAD **)(v684 + 544));
        }
        v457 = v674;
        if ( *((_BYTE *)v674 + 16) )
        {
          *((_BYTE *)v674 + 16) = 0;
          ExReleasePushLockSharedEx(*((_QWORD *)v457 + 1) + 120LL, 0LL);
          KeLeaveCriticalRegion();
          v456 = *((_QWORD *)v457 + 1);
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v456 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v456 + 16), (struct DXGADAPTER *)v456);
        }
        if ( *((_BYTE *)a3 + 80) )
          COREACCESS::Release((COREACCESS *)(a3 + 5));
        v458 = (COREACCESS *)(a3 + 1);
        if ( !*((_BYTE *)a3 + 32) )
        {
          v459 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v456, v454, v455);
          v459[3] = 275LL;
          v459[4] = 4LL;
          v459[5] = v458;
          v459[6] = 0LL;
          v459[7] = 0LL;
          WdLogEvent5_WdCriticalError(v459);
        }
        *((_BYTE *)a3 + 32) = 0;
        v460 = a3[3];
        if ( KeGetCurrentThread() != *((struct _KTHREAD **)v460 + 20) )
          DXGADAPTER::ReleaseCoreResource((PERESOURCE *)v460);
        hWindow = a2->hWindow;
        v673[0] = HIWORD(a2->Flags.Value) & 1;
        v462 = a5[7];
        if ( KeGetCurrentThread() == *((struct _KTHREAD **)v462 + 20)
          || ExIsResourceAcquiredSharedLite(*((PERESOURCE *)v462 + 18)) )
        {
          v463 = WdLogNewEntry5_WdAssertion(v462);
          *(_QWORD *)(v463 + 24) = 704LL;
          WdLogEvent5_WdAssertion(v463);
        }
        if ( *a5 || a5[1] || a5[2] )
        {
          v464 = WdLogNewEntry5_WdAssertion(v462);
          *(_QWORD *)(v464 + 24) = 706LL;
          WdLogEvent5_WdAssertion(v464);
        }
        v465 = 0;
        v466 = (*((__int64 (__fastcall **)(HWND, _QWORD))a5[3] + 6))(hWindow, 0LL);
        *a5 = (HDEV)v466;
        if ( v466 )
        {
          (*((void (__fastcall **)(__int64, __int64))a5[3] + 37))(v466, 1LL);
          v467 = a5[7];
          v468 = a5;
          v469 = *a5;
          a5[4] = a5[3];
          v470 = v673[0];
          a5[5] = 0LL;
          *((_DWORD *)a5 + 12) = v470;
          if ( *((_DWORD *)a5 + 13) )
          {
            v471 = WdLogNewEntry5_WdAssertion(a5);
            *(_QWORD *)(v471 + 24) = 603LL;
            WdLogEvent5_WdAssertion(v471);
            v468 = a5;
          }
          if ( v469 && v467 )
          {
            v468[5] = v467;
            (*((void (__fastcall **)(HDEV))v468[4] + 33))(v469);
            (*((void (__fastcall **)(HDEV, bool))a5[4] + 35))(a5[5], *((_DWORD *)a5 + 12) == 0);
            v468 = a5;
            *((_DWORD *)a5 + 13) = 1;
          }
          v472 = (*((__int64 (__fastcall **)(HDEV))v468[3] + 2))(*v468);
          v473 = a5;
          a5[2] = (HDEV)v472;
          if ( !v472 )
          {
            v474 = ((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
            *(_QWORD *)(v474 + 24) = *a5;
            WdLogEvent5_WdEvent(v474);
            CWin32kLocks::Unlock((CWin32kLocks *)a5);
            v465 = -1073741811;
          }
        }
        else
        {
          v465 = -1071775731;
          v475 = ((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
          *(_QWORD *)(v475 + 24) = hWindow;
          WdLogEvent5_WdEvent(v475);
          v473 = a5;
        }
        LODWORD(v261) = v465;
        if ( (a2->Flags.Value & 0x10000) == 0
          || ((*((void (__fastcall **)(HDEV, __int64 *))v681 + 29))(*v473, &v703),
              *(_QWORD *)(*((_QWORD *)v7 + 19) + 440LL) = v703,
              (a2->Flags.Value & 0x10000) == 0) )
        {
          DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)v683);
        }
        v478 = v674;
        if ( !*((_BYTE *)v674 + 16) )
        {
          _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)v674 + 1) + 24LL));
          *(_QWORD *)v478 = -1LL;
          v479 = *((_QWORD *)v478 + 1);
          KeEnterCriticalRegion();
          ExAcquirePushLockSharedEx(v479 + 120, 0LL);
          *((_BYTE *)v674 + 16) = 1;
        }
        if ( *((_BYTE *)a3 + 32) )
        {
          v480 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v478, v476, v477);
          v480[3] = 275LL;
          v480[4] = 4LL;
          v480[5] = v458;
          v480[6] = 0LL;
          v480[7] = 0LL;
          WdLogEvent5_WdCriticalError(v480);
        }
        v481 = a3[3];
        if ( KeGetCurrentThread() != *((struct _KTHREAD **)v481 + 20) )
        {
          if ( !KeReadStateEvent((PRKEVENT)v481 + 2) )
          {
            if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              McTemplateK0q(v482, &EventBlockThread, v483, 72);
            KeWaitForSingleObject((char *)a3[3] + 48, Executive, 0, 0, 0LL);
          }
          DXGADAPTER::AcquireCoreResourceShared(a3[3]);
        }
        *((_BYTE *)a3 + 32) = 1;
        if ( *((_DWORD *)a3[9] + 102) == 1 )
        {
          if ( !*((_BYTE *)a3 + 80) || (COREACCESS::AcquireShared((COREACCESS *)(a3 + 5)), *((_DWORD *)a3[7] + 44) == 1) )
          {
            if ( v465 >= 0 )
            {
              if ( (a2->Flags.Value & 0x10000) != 0 && a2->hDestination && !*(_QWORD *)(*((_QWORD *)v7 + 19) + 440LL) )
              {
                v485 = ((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
                *(_QWORD *)(v485 + 24) = 0LL;
                *(_QWORD *)(v485 + 32) = v7;
                WdLogEvent5_WdEvent(v485);
                v486 = *((_QWORD *)v7 + 40);
                if ( v486 )
                {
                  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2)
                                                                                              + 16LL)
                                                                                  + 528LL)
                                                                      + 8LL)
                                                          + 496LL))(
                    v486,
                    0LL);
                  *((_QWORD *)v7 + 40) = 0LL;
                }
                LODWORD(v261) = 0;
                DXGPRESENTMUTEX::~DXGPRESENTMUTEX((DXGPRESENTMUTEX *)v683);
                goto LABEL_983;
              }
              v487 = (HDC)*a5;
              v488 = (const struct DXGDEVICE *)*((_QWORD *)v7 + 2);
              v489 = (HDC)*a5;
              CurrentIrql = a5[2];
              LODWORD(v261) = DXGPRESENT::CheckVisRgn(
                                *((DXGPRESENT **)v7 + 19),
                                a2,
                                v489,
                                CurrentIrql,
                                v488,
                                v668,
                                v678[0],
                                v669,
                                1);
              if ( (_DWORD)v261 == 261 )
              {
                DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v683);
                COREDEVICEACCESS::Release((COREDEVICEACCESS *)a3);
                DXGADAPTERSTOPRESETLOCKSHARED::Release(v674);
                if ( DXGPRESENT::CheckOcclusion(*((DXGPRESENT **)v7 + 19)) )
                  LODWORD(v261) = -1071775738;
                if ( (a2->Flags.Value & 0x10000) == 0 )
                  DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)v683);
                DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v674);
                v490 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)a3);
                v491 = v490;
                if ( v490 < 0 )
                {
                  v492 = ((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
                  *(_QWORD *)(v492 + 24) = v491;
                  WdLogEvent5_WdEvent(v492);
                  COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a3);
                  LODWORD(v261) = v491;
                  DXGPRESENTMUTEX::~DXGPRESENTMUTEX((DXGPRESENTMUTEX *)v683);
                  goto LABEL_983;
                }
                if ( (_DWORD)v261 != -1071775738 )
                  LODWORD(v261) = DXGPRESENT::CheckVisRgn(
                                    *((DXGPRESENT **)v7 + 19),
                                    a2,
                                    v487,
                                    CurrentIrql,
                                    *((const struct DXGDEVICE **)v7 + 2),
                                    v668,
                                    v678[0],
                                    v669,
                                    0);
              }
              if ( (int)v261 < 0 )
              {
                v496 = *((_QWORD *)v7 + 19);
                if ( (*(_BYTE *)(v496 + 4) & 1) != 0 )
                {
                  *(_QWORD *)(v496 + 56) = v677;
                  *(_DWORD *)(*((_QWORD *)v7 + 19) + 8LL) = v662;
                }
              }
              else
              {
                *(_QWORD *)(*((_QWORD *)v7 + 19) + 56LL) = v677;
                if ( (a2->Flags.Value & 0x10000) == 0 )
                {
                  *(_DWORD *)(*((_QWORD *)v7 + 19) + 8LL) = v662;
                  DXGDEVICE::FlushScheduler(*((_QWORD **)v7 + 2), 2u);
                  v493 = 0;
                  v494 = *(_DWORD *)(*((_QWORD *)v7 + 19) + 8LL);
                  if ( v494 != (*((unsigned int (**)(void))v681 + 1))() )
                  {
                    *(_DWORD *)(*((_QWORD *)v7 + 19) + 8LL) = v662;
                    ADAPTER_RENDER::FlushScheduler(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL), 3, 0xFFFFFFFF, 0);
                    v493 = 1;
                  }
                  DXGDEVICE::SynchronizePresentToPrimary(*((DXGDEVICE **)v7 + 2), v7, v495, v493);
                }
              }
            }
LABEL_740:
            v497 = *(_DWORD *)(*((_QWORD *)v7 + 19) + 4LL);
            if ( (v497 & 0x10) != 0 )
            {
              DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v683);
              if ( (int)v261 < 0 )
              {
LABEL_818:
                if ( v685 )
                {
                  v685 = 0;
                  DXGFASTMUTEX::Release((struct _KTHREAD **)(v684 + 544));
                }
                v269 = (_QWORD *)((char *)v7 + 320);
                if ( *((_QWORD *)v7 + 40) )
                {
                  if ( (int)v261 >= 0 )
                  {
                    v548 = *(unsigned int *)(*((_QWORD *)v7 + 19) + 4LL);
                    LOBYTE(v548) = v548 & 0x12;
                    if ( (_BYTE)v548 == 16 && (a2->Flags.Value & 2) == 0 )
                    {
                      v549 = WdLogNewEntry5_WdAssertion(v548);
                      *(_QWORD *)(v549 + 24) = 5158LL;
                      WdLogEvent5_WdAssertion(v549);
                    }
                  }
                  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL)
                                                                                 + 528LL)
                                                                     + 8LL)
                                                         + 496LL))(
                    *v269,
                    0LL);
                  *v269 = 0LL;
                }
                v550 = *((_QWORD *)v7 + 19);
                if ( (*(_DWORD *)(v550 + 4) & 0x80) != 0 )
                {
                  if ( (unsigned int)((_DWORD)v261 + 1071775738) > 1 )
                  {
                    v551 = WdLogNewEntry5_WdAssertion(*(_DWORD *)(v550 + 4) >> 7);
                    *(_QWORD *)(v551 + 24) = 5166LL;
                    WdLogEvent5_WdAssertion(v551);
                  }
                  LODWORD(v261) = 0;
                }
                DXGPRESENTMUTEX::~DXGPRESENTMUTEX((DXGPRESENTMUTEX *)v683);
                goto LABEL_499;
              }
              v500 = *((_QWORD *)v7 + 19);
              v501 = *(_DWORD *)(v500 + 4) >> 1;
              LOBYTE(v501) = (*(_DWORD *)(v500 + 4) & 2) != 0;
              if ( (*(_DWORD *)(v500 + 4) & 2) == 0 && a2->BroadcastContextCount )
              {
                v502 = WdLogNewEntry5_WdError(v501);
                *(_QWORD *)(v502 + 24) = 4598LL;
                WdLogEvent5_WdError(v502);
                LODWORD(v261) = -1071774910;
                goto LABEL_818;
              }
              if ( (*(_DWORD *)(v500 + 4) & 2) != 0 )
                goto LABEL_818;
              if ( (a2->Flags.Value & 0x10000) != 0 && a2->hDestination )
              {
                v503 = WdLogNewEntry5_WdAssertion(v501);
                *(_QWORD *)(v503 + 24) = 4604LL;
                WdLogEvent5_WdAssertion(v503);
              }
              if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                McTemplateK0q(v501, &EventPerformanceWarning, v499, 0);
              if ( (a2->Flags.Value & 0x100) != 0 )
              {
                ContentRect = ADAPTER_DISPLAY::GetContentRect(
                                *(DXGADAPTER ***)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 1672LL) + 2304LL),
                                a2->VidPnSourceId);
                *(_QWORD *)v673 = &v719;
                v719 = *ContentRect;
              }
              else
              {
                *(_QWORD *)v673 = 0LL;
              }
              v505 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
              if ( (*(_BYTE *)&v505 & 1) != 0 )
              {
                if ( *(_BYTE *)&v505 >= 0 )
                {
                  v714.SrcRect.bottom = v678[0];
                  right = v668;
                  *(_QWORD *)&v714.SrcRect.left = 0LL;
                }
                else
                {
                  top = a2->SrcRect.top;
                  if ( top < 0 )
                    top = 0;
                  v714.SrcRect.top = top;
                  left = a2->SrcRect.left;
                  if ( left < 0 )
                    left = 0;
                  v714.SrcRect.left = left;
                  bottom = a2->SrcRect.bottom;
                  if ( (int)v678[0] < bottom )
                    bottom = v678[0];
                  v714.SrcRect.bottom = bottom;
                  right = a2->SrcRect.right;
                  if ( v668 < right )
                    right = v668;
                }
                v714.SrcRect.right = right;
                v714.DstRect = v714.SrcRect;
                v510 = (*(_WORD *)&v714.Flags.0 ^ (unsigned __int16)(a2->Flags.Value >> 9)) & 0x800;
                v714.Flags.Value ^= v510;
                if ( !a2->SubRectCnt )
                {
                  v511 = WdLogNewEntry5_WdAssertion(v510);
                  *(_QWORD *)(v511 + 24) = 4651LL;
                  WdLogEvent5_WdAssertion(v511);
                }
                if ( !a2->pSrcSubRects )
                {
                  v512 = WdLogNewEntry5_WdAssertion(v510);
                  *(_QWORD *)(v512 + 24) = 4652LL;
                  WdLogEvent5_WdAssertion(v512);
                }
                LODWORD(v261) = DXGPRESENT::GrowRectList(*((DXGPRESENT **)v7 + 19), a2->SubRectCnt);
                if ( (int)v261 < 0 )
                  goto LABEL_818;
                DdiSubRectList = DXGPRESENT::GetDdiSubRectList(*((DXGPRESENT **)v7 + 19), 0);
                SubRectCnt = 0LL;
                v515 = 0;
                v714.SubRectCnt = 0;
                v714.pDstSubRects = DdiSubRectList;
                if ( a2->SubRectCnt <= v516 )
                  goto LABEL_818;
                while ( 1 )
                {
                  if ( DXGPRESENT::IntersectRect(&DdiSubRectList[SubRectCnt], &a2->pSrcSubRects[v515], &v714.SrcRect) )
                    SubRectCnt = ++v714.SubRectCnt;
                  else
                    SubRectCnt = v714.SubRectCnt;
                  if ( ++v515 >= a2->SubRectCnt )
                    break;
                  DdiSubRectList = (struct tagRECT *)v714.pDstSubRects;
                }
                if ( !(_DWORD)SubRectCnt )
                  goto LABEL_818;
                v517 = (COREDEVICEACCESS *)a3;
                if ( DXGPRESENT::PrepareStagingBuffer(
                       *((DXGPRESENT **)v7 + 19),
                       *((struct DXGDEVICE **)v7 + 2),
                       a2->hSource,
                       (struct COREDEVICEACCESS *)a3,
                       &v672) < 0 )
                  goto LABEL_859;
                if ( *((_BYTE *)v7 + 401) )
                {
                  Current = DXGPROCESS::GetCurrent(v519, v518);
                  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 200));
                  v522 = (v672 >> 6) & 0xFFFFFF;
                  if ( v522 < *((_DWORD *)Current + 60)
                    && (v523 = *((_QWORD *)Current + 28),
                        v524 = *(_DWORD *)(v523 + 16LL * v522 + 8),
                        ((v672 >> 25) & 0x60) == (v524 & 0x60))
                    && (v524 & 0x2000) == 0
                    && (v524 & 0x1F) != 0
                    && (*(_BYTE *)(v523 + 16LL * v522 + 8) & 0x1F) == 5 )
                  {
                    v525 = *(struct _EX_RUNDOWN_REF **)(v523 + 16LL * v522);
                  }
                  else
                  {
                    v525 = 0LL;
                  }
                  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v691, v525);
                  ExReleasePushLockSharedEx((char *)Current + 200, 0LL);
                  KeLeaveCriticalRegion();
                  if ( !v691 )
                  {
                    v528 = WdLogNewEntry5_WdAssertion(v527);
                    *(_QWORD *)(v528 + 24) = 4684LL;
                    WdLogEvent5_WdAssertion(v528);
                  }
                  v529 = *(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL);
                  v530 = *(_QWORD *)(v529 + 16);
                  v531 = DXGPROCESS::GetCurrent(v529, v526);
                  LODWORD(Size) = a2->PrivateDriverDataSize;
                  v532 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendBlt(
                           (DXG_GUEST_VIRTUALGPU_VMBUS *)(v530 + 3888),
                           v531,
                           v7,
                           *((_DWORD *)v671 + 24),
                           v691[12].Count,
                           &v714.SrcRect,
                           &v714.DstRect,
                           v714.SubRectCnt,
                           v714.pDstSubRects,
                           Size,
                           (unsigned __int8 *)a2->pPrivateDriverData);
                  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v691);
                  v533 = v672;
LABEL_809:
                  if ( v532 >= 0 )
                  {
                    v546 = (DXGDEVICE *)*((_QWORD *)v7 + 2);
                    v665 = 0;
                    if ( (a2->Flags.Value & 0x100) != 0
                      && ADAPTER_DISPLAY::IsVidPnSourceOwner(
                           *(DXGADAPTER ***)(*((_QWORD *)v546 + 209) + 2304LL),
                           v546,
                           a2->VidPnSourceId) )
                    {
                      v665 = 1;
                    }
                    else if ( !DXGDEVICE::AllowLegacyPresent(v546, v518) )
                    {
                      v547 = 0;
LABEL_814:
                      DXGADAPTERSTOPRESETLOCKSHARED::Release(v674);
                      COREDEVICEACCESS::Release(v517);
                      if ( !v547 && DXGPRESENT::CheckOcclusion(*((DXGPRESENT **)v7 + 19)) )
                      {
                        COREDEVICEACCESS::AcquireSharedUncheck(v517);
LABEL_817:
                        LODWORD(v261) = -1071775738;
                        goto LABEL_818;
                      }
                      CWin32kLocks::Unlock((CWin32kLocks *)a5);
                      DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v674);
                      v552 = (COREDEVICEACCESS *)a3;
                      LODWORD(v555) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)a3);
                      if ( (int)v555 >= 0 )
                      {
                        memset(&v707, 0, sizeof(v707));
                        if ( *((_BYTE *)v7 + 401) )
                        {
                          v706.hDevice = 0;
                          *(_QWORD *)&v706.Flags.0 = 0LL;
                          v706.pData = 0LL;
                          v706.hAllocation = v533;
                          v556 = (struct DXGDEVICE *)*((_QWORD *)v7 + 2);
                          v557 = *(_QWORD *)(*((_QWORD *)v556 + 2) + 16LL);
                          v558 = DXGPROCESS::GetCurrent(v554, v553);
                          v559 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendLock2(
                                   (DXG_GUEST_VIRTUALGPU_VMBUS *)(v557 + 3888),
                                   v558,
                                   v556,
                                   &v706,
                                   0,
                                   v650,
                                   v651);
                          v533 = v672;
                          LODWORD(v261) = v559;
                          v707.pData = v706.pData;
                        }
                        else
                        {
                          if ( !v533 )
                          {
                            v560 = WdLogNewEntry5_WdAssertion(v554);
                            *(_QWORD *)(v560 + 24) = 4773LL;
                            WdLogEvent5_WdAssertion(v560);
                          }
                          v707.hAllocation = v533;
                          LODWORD(v261) = DXGDEVICE::Lock(
                                            *((PERESOURCE **)v7 + 2),
                                            &v707,
                                            (struct COREDEVICEACCESS *)a3);
                        }
                        if ( (int)v261 < 0 )
                          goto LABEL_818;
                        DXGADAPTERSTOPRESETLOCKSHARED::Release(v674);
                        COREDEVICEACCESS::Release((COREDEVICEACCESS *)a3);
                        if ( !v707.pData )
                        {
                          v562 = WdLogNewEntry5_WdAssertion(v561);
                          *(_QWORD *)(v562 + 24) = 4786LL;
                          WdLogEvent5_WdAssertion(v562);
                        }
                        if ( (a2->Flags.Value & 0x10000) != 0 && a2->hDestination )
                        {
                          v563 = WdLogNewEntry5_WdAssertion(v561);
                          *(_QWORD *)(v563 + 24) = 4787LL;
                          WdLogEvent5_WdAssertion(v563);
                        }
                        v564 = v681;
                        v20 = (*((unsigned int (__fastcall **)(_QWORD))v681 + 39))(0LL) == 0;
                        v565 = v665;
                        if ( v20 )
                          v565 = 0;
                        LODWORD(v261) = CWin32kLocks::Lock((CWin32kLocks *)a5, a2->hWindow, 0, 0, v565);
                        if ( (int)v261 >= 0 )
                        {
                          v566 = a5 + 1;
                          if ( !a5[1] )
                            v566 = a5;
                          LOBYTE(Src) = 0;
                          LOBYTE(Sizea) = (a2->Flags.Value & 0x200) != 0;
                          if ( !(*((unsigned int (__fastcall **)(struct _D3DKMT_PRESENT *, HDEV, _QWORD, const RECT *, void *, _DWORD, signed int, unsigned int, int, int, UINT, void (__fastcall *)(const struct tagRECT *, const struct tagRECT *, struct tagRECT *, const struct tagRECT *, unsigned int, unsigned int), __int64 (__fastcall *)(struct tagRECT *, struct tagRECT *, const struct tagRECT *, const struct tagRECT *)))v564
                                 + 18))(
                                  a2,
                                  *v566,
                                  *(_QWORD *)v673,
                                  v714.pDstSubRects,
                                  v707.pData,
                                  *(_DWORD *)(*((_QWORD *)v7 + 19) + 424LL),
                                  v668,
                                  v678[0],
                                  Src,
                                  Sizea,
                                  a2->Color,
                                  DXGPRESENT::XformRect,
                                  DXGPRESENT::ClipRects) )
                          {
                            v567 = ((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
                            *(_QWORD *)(v567 + 24) = -1071775737LL;
                            *(_QWORD *)(v567 + 32) = v7;
                            WdLogEvent5_WdEvent(v567);
                            LODWORD(v261) = -1071775737;
                          }
                        }
                        DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v674);
                        LODWORD(v555) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)a3);
                        if ( (int)v555 >= 0 )
                        {
                          if ( *((_BYTE *)v7 + 401) )
                          {
                            v688.hDevice = 0;
                            v688.hAllocation = v533;
                            v570 = (struct DXGDEVICE *)*((_QWORD *)v7 + 2);
                            v571 = *(_QWORD *)(*((_QWORD *)v570 + 2) + 16LL);
                            v572 = DXGPROCESS::GetCurrent(v569, v568);
                            DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendUnlock2(
                              (DXG_GUEST_VIRTUALGPU_VMBUS *)(v571 + 3888),
                              v572,
                              v570,
                              &v688,
                              0);
                          }
                          else
                          {
                            v573 = (DXGDEVICE *)*((_QWORD *)v7 + 2);
                            v705.phAllocations = &v707.hAllocation;
                            v705.hDevice = 0;
                            v705.NumAllocations = 1;
                            DXGDEVICE::Unlock(v573, &v705, 0LL);
                          }
                          if ( (int)v261 >= 0 && (a2->Flags.Value & 0x10000) != 0 )
                          {
                            a2->PresentHistoryToken.Model = D3DKMT_PM_REDIRECTED_BLT;
                            a2->PresentHistoryToken.Token.Flip.hLogicalSurface = *(_QWORD *)(*((_QWORD *)v7 + 19) + 440LL);
                            a2->PresentHistoryToken.Token.Flip.VidPnSourceId = 0;
                            a2->PresentHistoryToken.TokenSize = 48;
                            DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v683);
                            LODWORD(v261) = SubmitPresentHistoryToken(
                                              &a2->PresentHistoryToken,
                                              (struct COREDEVICEACCESS *)a3,
                                              v674,
                                              (struct CWin32kLocks *)a5,
                                              0,
                                              0LL,
                                              0LL,
                                              0LL,
                                              v7,
                                              *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 16LL),
                                              0);
                          }
                          goto LABEL_818;
                        }
                      }
LABEL_880:
                      COREDEVICEACCESS::AcquireSharedUncheck(v552);
                      LODWORD(v261) = v555;
                      DXGPRESENTMUTEX::~DXGPRESENTMUTEX((DXGPRESENTMUTEX *)v683);
                      goto LABEL_983;
                    }
                    v547 = 1;
                    goto LABEL_814;
                  }
LABEL_859:
                  v574 = WdLogNewEntry5_WdWarning(v519, v518, v520);
                  *(_QWORD *)(v574 + 24) = -1071775738LL;
                  *(_QWORD *)(v574 + 32) = v7;
                  WdLogEvent5_WdWarning(v574);
                  goto LABEL_817;
                }
                v533 = v672;
                if ( !v672 )
                {
                  v534 = WdLogNewEntry5_WdAssertion(v519);
                  *(_QWORD *)(v534 + 24) = 4698LL;
                  WdLogEvent5_WdAssertion(v534);
                }
                if ( bTracingEnabled )
                {
                  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL)
                                                                                 + 528LL)
                                                                     + 8LL)
                                                         + 336LL))(
                    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 536LL),
                    v533);
                  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL)
                                                                                 + 528LL)
                                                                     + 8LL)
                                                         + 336LL))(
                    *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 536LL),
                    hSource);
                  v537 = (HDEV)*((_QWORD *)v7 + 40);
                  pDstSubRects = v714.pDstSubRects;
                  v539 = v714.SubRectCnt;
                  v540 = a2->hWindow;
                  SrcRect = v714.SrcRect;
                  CurrentIrql = v537;
                  DstRect = v714.DstRect;
                  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
                    McTemplateK0ppxppttqddddddddq(
                      HIDWORD(*(_QWORD *)&v714.DstRect.right),
                      HIDWORD(*(_QWORD *)&v714.SrcRect.left),
                      HIDWORD(*(_QWORD *)&v714.SrcRect.right),
                      v540,
                      CurrentIrql);
                  v541 = 0;
                  if ( v539 )
                  {
                    v542 = CurrentIrql;
                    while ( 1 )
                    {
                      v543 = v539 - v541;
                      if ( v539 - v541 > 0x10 )
                        break;
                      v544 = v539 - v541;
                      if ( v543 )
                        goto LABEL_801;
LABEL_803:
                      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
                      {
                        LODWORD(v649) = v544;
                        LODWORD(Timeouta) = v543 <= 0x10;
                        McTemplateK0ptqDR2DR2DR2DR2(
                          (__int64)v732,
                          v535,
                          v536,
                          v542,
                          Timeouta,
                          v649,
                          v732,
                          v737,
                          v731,
                          v730);
                      }
                      v541 += 16;
                      if ( v541 >= v539 )
                      {
                        v7 = v704;
                        goto LABEL_807;
                      }
                    }
                    v544 = 16;
LABEL_801:
                    v535 = 0LL;
                    LODWORD(v536) = 0;
                    do
                    {
                      v545 = (unsigned int)v536 + v541;
                      v536 = (unsigned int)(v536 + 1);
                      v545 *= 2LL;
                      v535 += 4LL;
                      *(_DWORD *)&v731[v535 + 60] = *(&pDstSubRects->left + 2 * v545);
                      *(_DWORD *)&v736[v535 + 60] = *(&pDstSubRects->right + 2 * v545);
                      *(_DWORD *)&v730[v535 + 60] = *(&pDstSubRects->top + 2 * v545);
                      *(_DWORD *)&v729[v535 + 60] = *(&pDstSubRects->bottom + 2 * v545);
                    }
                    while ( (unsigned int)v536 < v544 );
                    goto LABEL_803;
                  }
LABEL_807:
                  v517 = (COREDEVICEACCESS *)a3;
                  v533 = v672;
                }
                v532 = DXGCONTEXT::SubmitPresent(
                         v7,
                         a2,
                         a2->BroadcastContextCount,
                         v689,
                         v671,
                         hSource,
                         v533,
                         &v714,
                         0LL,
                         *((struct _VIDMM_DMA_BUFFER **)v7 + 40),
                         v679,
                         v669,
                         (struct _D3DKMT_PRESENT *)v517);
                *((_QWORD *)v7 + 40) = 0LL;
                goto LABEL_809;
              }
              if ( (*(_BYTE *)&v505 & 2) == 0 )
                goto LABEL_818;
              v575 = (DXGDEVICE *)*((_QWORD *)v7 + 2);
              v576 = 0;
              if ( (*(_WORD *)&v505 & 0x100) != 0
                && ADAPTER_DISPLAY::IsVidPnSourceOwner(
                     *(DXGADAPTER ***)(*((_QWORD *)v575 + 209) + 2304LL),
                     *((const struct DXGDEVICE **)v7 + 2),
                     a2->VidPnSourceId) )
              {
                v576 = 1;
              }
              else if ( !DXGDEVICE::AllowLegacyPresent(v575, v498) )
              {
                v577 = 0;
LABEL_865:
                DXGADAPTERSTOPRESETLOCKSHARED::Release(v674);
                COREDEVICEACCESS::Release((COREDEVICEACCESS *)a3);
                if ( v577 || !DXGPRESENT::CheckOcclusion(*((DXGPRESENT **)v7 + 19)) )
                {
                  if ( (a2->Flags.Value & 0x10000) != 0 )
                  {
                    v579 = WdLogNewEntry5_WdAssertion(v578);
                    *(_QWORD *)(v579 + 24) = 4908LL;
                    WdLogEvent5_WdAssertion(v579);
                  }
                  CWin32kLocks::Unlock((CWin32kLocks *)a5);
                  v580 = v681;
                  v20 = (*((unsigned int (__fastcall **)(_QWORD))v681 + 39))(0LL) == 0;
                  v581 = v576;
                  if ( v20 )
                    v581 = 0;
                  v582 = CWin32kLocks::Lock((CWin32kLocks *)a5, a2->hWindow, 0, 0, v581);
                  v583 = a5 + 1;
                  LODWORD(v261) = v582;
                  if ( !a5[1] )
                    v583 = a5;
                  if ( !(*((unsigned int (__fastcall **)(HDEV, _QWORD, const RECT *, _QWORD, UINT))v580 + 19))(
                          *v583,
                          *(_QWORD *)v673,
                          a2->pSrcSubRects,
                          a2->SubRectCnt,
                          a2->Color) )
                  {
                    v584 = ((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
                    *(_QWORD *)(v584 + 24) = -1071775737LL;
                    *(_QWORD *)(v584 + 32) = v7;
                    WdLogEvent5_WdEvent(v584);
                    LODWORD(v261) = -1071775737;
                  }
                }
                else
                {
                  LODWORD(v261) = -1071775738;
                }
                DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v674);
                v552 = (COREDEVICEACCESS *)a3;
                v585 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)a3);
                v555 = v585;
                if ( v585 >= 0 )
                  goto LABEL_818;
                v586 = ((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
                *(_QWORD *)(v586 + 24) = v555;
                *(_QWORD *)(v586 + 32) = v7;
                WdLogEvent5_WdEvent(v586);
                goto LABEL_880;
              }
              v577 = 1;
              goto LABEL_865;
            }
            if ( (int)v261 < 0 || (v497 & 2) != 0 )
              goto LABEL_818;
            if ( (*((unsigned int (__fastcall **)(_QWORD))v681 + 28))(0LL) )
            {
              if ( (a2->Flags.Value & 0x12100) == 0x10000 )
                goto LABEL_890;
              v589 = WdLogNewEntry5_WdAssertion(v588);
              *(_QWORD *)(v589 + 24) = 4946LL;
            }
            else
            {
              if ( *(_QWORD *)(*((_QWORD *)v7 + 2) + 1672LL) || (a2->Flags.Value & 0x4000000) != 0 )
              {
LABEL_890:
                if ( (a2->Flags.Value & 0x10000) != 0 )
                {
                  v590 = *a5;
                  v591 = PsGetCurrentProcess(v588, v587);
                  v593 = PsGetProcessDxgProcess(v591, v592);
                  v596 = v593;
                  if ( v593 )
                  {
                    if ( (*(_BYTE *)(v593 + 307) & 4) != 0 )
                    {
                      v597 = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
                      v598 = v597;
                      if ( v597 )
                      {
                        ObfDereferenceObject(v597);
                        v596 = *v598;
                      }
                    }
                  }
                  if ( v590 )
                  {
                    v599 = *(_QWORD *)(v596 + 96);
                    if ( v599 )
                    {
                      v600 = *((_QWORD *)v7 + 19);
                      if ( *(_DWORD *)(v600 + 440) == a2->PresentHistoryToken.Token.GdiSysMem.dwDirtyFlags )
                      {
                        v601 = v674;
                        if ( *((_BYTE *)v674 + 16) )
                        {
                          *((_BYTE *)v674 + 16) = 0;
                          ExReleasePushLockSharedEx(*((_QWORD *)v601 + 1) + 120LL, 0LL);
                          KeLeaveCriticalRegion();
                          v600 = *((_QWORD *)v601 + 1);
                          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v600 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                            DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v600 + 16), (struct DXGADAPTER *)v600);
                        }
                        if ( *((_BYTE *)a3 + 80) )
                          COREACCESS::Release((COREACCESS *)(a3 + 5));
                        v602 = (COREACCESS *)(a3 + 1);
                        if ( !*((_BYTE *)a3 + 32) )
                        {
                          v603 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v600, v594, v595);
                          v603[3] = 275LL;
                          v603[4] = 4LL;
                          v603[5] = v602;
                          v603[6] = 0LL;
                          v603[7] = 0LL;
                          WdLogEvent5_WdCriticalError(v603);
                        }
                        *((_BYTE *)a3 + 32) = 0;
                        v604 = a3[3];
                        if ( KeGetCurrentThread() != *((struct _KTHREAD **)v604 + 20) )
                          DXGADAPTER::ReleaseCoreResource((PERESOURCE *)v604);
                        LODWORD(v713[0]) = 0;
                        memset(&v713[1], 0, 0x218uLL);
                        v605 = 1LL;
                        v606 = 0LL;
                        LODWORD(v713[0]) = *(_DWORD *)(*((_QWORD *)v7 + 19) + 352LL);
                        v713[1] = *(_QWORD *)(*((_QWORD *)v7 + 19) + 224LL);
                        v713[3] = *((unsigned int *)v7 + 6);
                        for ( LODWORD(v713[2]) = 1; (unsigned int)v606 < a2->BroadcastContextCount; ++LODWORD(v713[2]) )
                        {
                          v607 = (unsigned int)v606;
                          v606 = (unsigned int)(v606 + 1);
                          v713[(unsigned int)v605 + 3] = a2->BroadcastContext[v607];
                          v605 = (unsigned int)(LODWORD(v713[2]) + 1);
                        }
                        (*(void (__fastcall **)(HDEV, _QWORD *, __int64, __int64))(v599 + 240))(v590, v713, v605, v606);
                        v611 = v674;
                        if ( !*((_BYTE *)v674 + 16) )
                        {
                          _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)v674 + 1) + 24LL));
                          *(_QWORD *)v611 = -1LL;
                          v612 = *((_QWORD *)v611 + 1);
                          KeEnterCriticalRegion();
                          ExAcquirePushLockSharedEx(v612 + 120, 0LL);
                          *((_BYTE *)v611 + 16) = 1;
                        }
                        if ( *((_BYTE *)a3 + 32) )
                        {
                          v613 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v609, v608, v610);
                          v613[3] = 275LL;
                          v613[4] = 4LL;
                          v613[5] = v602;
                          v613[6] = 0LL;
                          v613[7] = 0LL;
                          WdLogEvent5_WdCriticalError(v613);
                        }
                        v614 = a3[3];
                        if ( KeGetCurrentThread() != *((struct _KTHREAD **)v614 + 20) )
                        {
                          if ( !KeReadStateEvent((PRKEVENT)v614 + 2) )
                          {
                            if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                              McTemplateK0q(v615, &EventBlockThread, v616, 72);
                            KeWaitForSingleObject((char *)a3[3] + 48, Executive, 0, 0, 0LL);
                          }
                          DXGADAPTER::AcquireCoreResourceShared(a3[3]);
                        }
                        *((_BYTE *)a3 + 32) = 1;
                        if ( *((_DWORD *)a3[9] + 102) != 1 )
                          goto LABEL_924;
                        if ( *((_BYTE *)a3 + 80) )
                        {
                          COREACCESS::AcquireShared((COREACCESS *)(a3 + 5));
                          if ( *((_DWORD *)a3[7] + 44) != 1 )
                          {
                            COREACCESS::Release((COREACCESS *)(a3 + 5));
LABEL_924:
                            COREACCESS::Release(v602);
                            v617 = ((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
                            *(_QWORD *)(v617 + 24) = -1073741130LL;
                            *(_QWORD *)(v617 + 32) = v7;
                            WdLogEvent5_WdEvent(v617);
                            v484 = (COREDEVICEACCESS *)a3;
                            goto LABEL_925;
                          }
                        }
                      }
                    }
                  }
                }
                v618 = 0;
                v619 = (unsigned int *)v671;
                v663 = v672;
                for ( v673[0] = 0; ; v673[0] = v618 )
                {
                  while ( 1 )
                  {
                    if ( (a2->Flags.Value & 0x10000) != 0 )
                      v620 = 1;
                    else
                      v620 = *(_DWORD *)(*((_QWORD *)v7 + 2) + 1680LL);
                    if ( v618 >= v620 )
                      goto LABEL_818;
                    v621 = *((_QWORD *)v7 + 19);
                    if ( v618 < *(_DWORD *)(v621 + 68) || !v618 )
                      break;
                    ++v618;
                    v714.SubRectCnt = 0;
                    v673[0] = v618;
                  }
                  v714.SubRectCnt = *(_DWORD *)(v621 + 4LL * v618 + 352);
                  if ( v714.SubRectCnt )
                  {
                    if ( (a2->Flags.Value & 0x10000) != 0 )
                    {
                      v622 = v663;
                    }
                    else
                    {
                      v622 = DXGDEVICE::OpenCddPrimaryHandle(
                               *((DXGDEVICE **)v7 + 2),
                               v618,
                               *((_BYTE *)v7 + 400),
                               *((_DWORD *)v7 + 90));
                      v663 = v622;
                    }
                    if ( v622 )
                    {
                      v623 = *((_QWORD *)v7 + 19);
                      if ( v618 >= *(_DWORD *)(v623 + 68) && v618 )
                        v624 = 0LL;
                      else
                        v624 = *(const RECT **)(v623 + 8LL * v618 + 224);
                      v714.pDstSubRects = v624;
                      if ( (a2->Flags.Value & 0x2000) != 0 )
                      {
                        CurrentOrientation = ADAPTER_DISPLAY::GetCurrentOrientation(
                                               *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 1672LL) + 2304LL),
                                               v618,
                                               1);
                        v626 = 0;
                        if ( CurrentOrientation != 1 )
                          v626 = 128;
                        v714.Flags.Value = v626 | v714.Flags.Value & 0xFFFFFF7F;
                      }
                      v716[0] = 0LL;
                      v716[1] = 0LL;
                      if ( (a2->Flags.Value & 0x10000) != 0 )
                        v627 = (const struct tagRECT *)v716;
                      else
                        v627 = ADAPTER_DISPLAY::GetContentRect(
                                 *(DXGADAPTER ***)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 1672LL) + 2304LL),
                                 v618);
                      v714.SrcRect = *(RECT *)(*((_QWORD *)v7 + 19) + 144LL);
                      v628 = (_DWORD *)*((_QWORD *)v7 + 19);
                      v714.DstRect.top = v628[33] - v627->top;
                      v629 = (struct _VIDMM_DMA_BUFFER **)((char *)v7 + 320);
                      v714.DstRect.bottom = v628[35] - v627->top;
                      v714.DstRect.left = v628[32] - v627->left;
                      v714.DstRect.right = v628[34] - v627->left;
                      if ( bTracingEnabled && *v629 )
                      {
                        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL)
                                                                                       + 528LL)
                                                                           + 8LL)
                                                               + 336LL))(
                          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 536LL),
                          v663);
                        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL)
                                                                                       + 528LL)
                                                                           + 8LL)
                                                               + 336LL))(
                          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 536LL),
                          hSource);
                        v629 = (struct _VIDMM_DMA_BUFFER **)((char *)v7 + 320);
                        v631 = v714.pDstSubRects;
                        v632 = v714.SubRectCnt;
                        v633 = a2->hWindow;
                        v688 = (struct _D3DKMT_UNLOCK2)*((_QWORD *)v7 + 40);
                        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
                        {
                          McTemplateK0ppxppttqddddddddq(
                            HIDWORD(*(_QWORD *)&v714.DstRect.left),
                            HIDWORD(*(_QWORD *)&v714.DstRect.right),
                            HIDWORD(*(_QWORD *)&v714.SrcRect.left),
                            v633,
                            v688);
                          v629 = (struct _VIDMM_DMA_BUFFER **)((char *)v7 + 320);
                        }
                        v634 = 0;
                        if ( v632 )
                        {
                          v635 = v688;
                          while ( 1 )
                          {
                            v636 = v632 - v634;
                            if ( v632 - v634 > 0x10 )
                              break;
                            v637 = v632 - v634;
                            if ( v636 )
                              goto LABEL_959;
LABEL_961:
                            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
                            {
                              LODWORD(v649) = v637;
                              LODWORD(Timeout) = v636 <= 0x10;
                              McTemplateK0ptqDR2DR2DR2DR2(
                                (__int64)v736,
                                (__int64)v629,
                                v630,
                                v635,
                                Timeout,
                                v649,
                                v736,
                                v735,
                                v734,
                                v733);
                            }
                            v634 += 16;
                            if ( v634 >= v632 )
                            {
                              v619 = (unsigned int *)v671;
                              v629 = (struct _VIDMM_DMA_BUFFER **)((char *)v7 + 320);
                              goto LABEL_965;
                            }
                          }
                          v637 = 16;
LABEL_959:
                          v629 = 0LL;
                          LODWORD(v630) = 0;
                          do
                          {
                            v638 = (unsigned int)v630 + v634;
                            v630 = (unsigned int)(v630 + 1);
                            v638 *= 2LL;
                            v629 = (struct _VIDMM_DMA_BUFFER **)((char *)v629 + 4);
                            *(_DWORD *)&v735[(_QWORD)v629 + 60] = *(&v631->left + 2 * v638);
                            *(_DWORD *)&v734[(_QWORD)v629 + 60] = *(&v631->right + 2 * v638);
                            *(_DWORD *)&v733[(_QWORD)v629 + 60] = *(&v631->top + 2 * v638);
                            *(_DWORD *)&v732[(_QWORD)v629 + 60] = *(&v631->bottom + 2 * v638);
                          }
                          while ( (unsigned int)v630 < v637 );
                          goto LABEL_961;
                        }
LABEL_965:
                        v618 = v673[0];
                      }
                      if ( *((_BYTE *)v7 + 401) )
                      {
                        v639 = *(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL);
                        v640 = *(_QWORD *)(v639 + 16);
                        v641 = DXGPROCESS::GetCurrent(v639, (__int64)v629);
                        LODWORD(Size) = v714.PrivateDriverDataSize;
                        v642 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendBlt(
                                 (DXG_GUEST_VIRTUALGPU_VMBUS *)(v640 + 3888),
                                 v641,
                                 v7,
                                 v619[24],
                                 v680[12].Count,
                                 &v714.SrcRect,
                                 &v714.DstRect,
                                 v714.SubRectCnt,
                                 v714.pDstSubRects,
                                 Size,
                                 (unsigned __int8 *)v714.pPrivateDriverData);
                      }
                      else
                      {
                        v643 = v689;
                        v655 = v679;
                        *((_DWORD *)v679 + 29) = v618;
                        v642 = DXGCONTEXT::SubmitPresent(
                                 v7,
                                 a2,
                                 a2->BroadcastContextCount,
                                 v643,
                                 (struct DXGALLOCATION *)v619,
                                 hSource,
                                 v663,
                                 &v714,
                                 0LL,
                                 *v629,
                                 v655,
                                 v669,
                                 (struct _D3DKMT_PRESENT *)a3);
                      }
                      *((_QWORD *)v7 + 40) = 0LL;
                      LODWORD(v261) = v642;
                      if ( (a2->Flags.Value & 0x10000) != 0
                        && *(_DWORD *)(*((_QWORD *)v7 + 19) + 440LL) == a2->PresentHistoryToken.Token.GdiSysMem.dwDirtyFlags )
                      {
                        a2->PresentHistoryToken.Model = D3DKMT_PM_REDIRECTED_BLT;
                        a2->PresentHistoryToken.Token.Flip.hLogicalSurface = *(_QWORD *)(*((_QWORD *)v7 + 19) + 440LL);
                        if ( v714.SubRectCnt <= 0x10 )
                        {
                          a2->PresentHistoryToken.Token.Flip.VidPnSourceId = v714.SubRectCnt;
                          for ( j = 0;
                                j < v714.SubRectCnt;
                                *(RECT *)((char *)&a2->PresentHistoryToken.Token.SurfaceComplete + 16 * v645 + 28) = v714.pDstSubRects[v645] )
                          {
                            v645 = j++;
                          }
                        }
                        else
                        {
                          a2->PresentHistoryToken.Token.Flip.VidPnSourceId = 1;
                          *(RECT *)((char *)&a2->PresentHistoryToken.Token.SurfaceComplete + 28) = v714.DstRect;
                        }
                        a2->PresentHistoryToken.TokenSize = 16 * (a2->PresentHistoryToken.Token.Flip.VidPnSourceId + 3);
                        if ( v685 )
                        {
                          v685 = 0;
                          DXGFASTMUTEX::Release((struct _KTHREAD **)(v684 + 544));
                        }
                        LODWORD(v261) = SubmitPresentHistoryToken(
                                          &a2->PresentHistoryToken,
                                          (struct COREDEVICEACCESS *)a3,
                                          v674,
                                          (struct CWin32kLocks *)a5,
                                          0,
                                          0LL,
                                          0LL,
                                          0LL,
                                          v7,
                                          *(struct DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 16LL),
                                          0);
                      }
                      if ( (int)v261 < 0 )
                        goto LABEL_818;
                    }
                  }
                  ++v618;
                }
              }
              v589 = WdLogNewEntry5_WdAssertion(v588);
              *(_QWORD *)(v589 + 24) = 4951LL;
            }
            WdLogEvent5_WdAssertion(v589);
            goto LABEL_890;
          }
          COREACCESS::Release((COREACCESS *)(a3 + 5));
        }
        COREACCESS::Release(v458);
        v484 = (COREDEVICEACCESS *)a3;
LABEL_925:
        COREDEVICEACCESS::AcquireSharedUncheck(v484);
        LODWORD(v261) = -1073741130;
        DXGPRESENTMUTEX::~DXGPRESENTMUTEX((DXGPRESENTMUTEX *)v683);
        goto LABEL_983;
      }
      v403 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v126, v402);
      v403[3] = v7;
      v403[4] = a2->pSrcSubRects;
      v403[5] = a2->SubRectCnt;
      v403[6] = a2->Flags.Value;
      v403[7] = -1073741811LL;
      goto LABEL_982;
    }
  }
  if ( !v125 )
  {
    if ( (v126 & 0x10A7C3) != 0 )
    {
      v397 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v126, v17);
      v397[3] = v7;
      v397[4] = a2->Flags.Value;
      v397[5] = -1073741811LL;
      WdLogEvent5_WdWarning(v397);
      v22 = -1073741811;
      goto LABEL_562;
    }
    if ( (v126 & 0x10000000) != 0 )
    {
      v184 = v24[5].Count;
      if ( !v184 || !*(_QWORD *)(v184 + 56) )
      {
        v187 = WdLogNewEntry5_WdError(v21);
        *(_QWORD *)(v187 + 24) = 3568LL;
        goto LABEL_268;
      }
      v185 = *(_QWORD *)(*((_QWORD *)v7 + 2) + 1672LL);
      if ( !v185
        || !*(_QWORD *)(v185 + 2304)
        || (VidPnSourceId = a2->VidPnSourceId,
            v186 = *(_QWORD *)(v185 + 2304),
            v673[0] = VidPnSourceId,
            VidPnSourceId >= *(_DWORD *)(v186 + 80)) )
      {
        v187 = WdLogNewEntry5_WdError(v21);
        *(_QWORD *)(v187 + 24) = a2->VidPnSourceId;
LABEL_268:
        WdLogEvent5_WdError(v187);
        LODWORD(v24) = -1073741811;
        goto LABEL_985;
      }
    }
    else
    {
      v188 = *(_DWORD *)(v24[6].Count + 4);
      if ( (v188 & 2) == 0 && (v188 & 1) == 0 && (v188 & 0x2000) == 0 )
        goto LABEL_272;
      VidPnSourceId = (v188 >> 6) & 0xF;
      v673[0] = VidPnSourceId;
    }
    v699 = v24;
    if ( !ExAcquireRundownProtection(v24 + 11) )
    {
      v193 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v191, v190, v192);
      v193[3] = 275LL;
      v193[4] = 25LL;
      v193[5] = v24;
      v193[6] = 0LL;
      v193[7] = 0LL;
      WdLogEvent5_WdCriticalError(v193);
    }
    DXGALLOCATIONREFERENCE::MoveAssign((struct DXGALLOCATION **)&v690, (struct DXGALLOCATION **)&v699);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v699);
    v682 = a2->hSource;
    v194 = *(_QWORD *)(*((_QWORD *)v7 + 2) + 1672LL);
    if ( v194 && *(_QWORD *)(v194 + 2304) )
    {
      v21 = *(_QWORD *)(*(_QWORD *)(v194 + 2304) + 16LL);
      if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v21 + 160)
        || ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v21 + 144)) )
      {
        v24 = (struct _EX_RUNDOWN_REF *)v671;
        goto LABEL_282;
      }
      v24 = (struct _EX_RUNDOWN_REF *)v671;
    }
    v195 = WdLogNewEntry5_WdAssertion(v21);
    *(_QWORD *)(v195 + 24) = 3609LL;
    WdLogEvent5_WdAssertion(v195);
LABEL_282:
    v196 = *(_DWORD *)(v24[6].Count + 4);
    if ( (v196 & 0x2000) == 0 || (v21 = *(_QWORD *)(*((_QWORD *)v7 + 2) + 40LL), *(_BYTE *)(v21 + 306)) )
    {
      v139 = a2->Flags.Value;
      if ( (a2->Flags.Value & 0x60000) != 0 )
      {
        if ( (a2->Flags.Value & 0x60000) == 0x60000 )
        {
          v187 = WdLogNewEntry5_WdError(v21);
          *(_QWORD *)(v187 + 24) = 3628LL;
          goto LABEL_268;
        }
        if ( (v196 & 0x1000) == 0 )
        {
          v187 = WdLogNewEntry5_WdError(v21);
          *(_QWORD *)(v187 + 24) = 3634LL;
          goto LABEL_268;
        }
        v198 = *((unsigned int *)ADAPTER_DISPLAY::GetDisplayModeInfo(
                                   *(DXGADAPTER ***)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 1672LL) + 2304LL),
                                   VidPnSourceId)
               + 10);
        if ( (v198 & 0x10) == 0 )
        {
          v200 = WdLogNewEntry5_WdWarning(v198, v197, v199);
          *(_QWORD *)(v200 + 24) = 3641LL;
LABEL_292:
          WdLogEvent5_WdWarning(v200);
          LODWORD(v24) = -1071775739;
          goto LABEL_985;
        }
        v139 = a2->Flags.Value;
        if ( (v139 & 0x40000) != 0 && (v198 & 0x20) == 0 )
        {
          v200 = WdLogNewEntry5_WdWarning(v198, v197, v139);
          *(_QWORD *)(v200 + 24) = 3647LL;
          goto LABEL_292;
        }
        if ( (v139 & 0xC0000) == 0xC0000 )
        {
          v201 = WdLogNewEntry5_WdError(v198);
          *(_QWORD *)(v201 + 24) = 3653LL;
          WdLogEvent5_WdError(v201);
          LODWORD(v24) = -1073741811;
          goto LABEL_985;
        }
      }
      v137 = *((_QWORD *)v7 + 2);
      if ( *(_QWORD *)(v137 + 1672) != *(_QWORD *)(*(_QWORD *)(v137 + 16) + 16LL) )
        goto LABEL_244;
      v202 = v679;
      v203 = *(_DWORD *)v679 ^ ((unsigned __int8)v139 ^ (unsigned __int8)*(_DWORD *)v679) & 4;
      *(_DWORD *)v679 = v203;
      v204 = ((unsigned __int8)v203 ^ (unsigned __int8)*(_DWORD *)&a2->Flags.0) & 8 ^ v203;
      *(_DWORD *)v202 = v204;
      v205 = ((unsigned __int8)v204 ^ (unsigned __int8)(a2->Flags.Value >> 1)) & 0x10 ^ v204;
      *(_DWORD *)v202 = v205;
      v206 = (v205 ^ (4 * a2->Flags.Value)) & 0x80000 ^ v205;
      *(_DWORD *)v202 = v206;
      v207 = (v206 ^ (4 * a2->Flags.Value)) & 0x100000 ^ v206;
      *(_DWORD *)v202 = v207;
      *(_DWORD *)v202 = v207 ^ (v207 ^ (4 * a2->Flags.Value)) & 0x200000;
      if ( (a2->Flags.Value & 0x8000000) != 0 )
        Duration = a2->Duration;
      else
        Duration = 0;
      *((_DWORD *)v202 + 36) = Duration;
      *(_DWORD *)v202 ^= (a2->Flags.Value ^ *(_DWORD *)v202) & 0x20000000;
      v714.Flags.Value ^= (*(_BYTE *)&v714.Flags.0 ^ (unsigned __int8)*(_DWORD *)&a2->Flags.0) & 4;
      v714.Flags.Value ^= (*(_WORD *)&v714.Flags.0 ^ (unsigned __int16)(a2->Flags.Value >> 9)) & 0x100;
      v714.Flags.Value ^= (*(_WORD *)&v714.Flags.0 ^ (unsigned __int16)(a2->Flags.Value >> 9)) & 0x200;
      v714.Flags.Value ^= (*(_WORD *)&v714.Flags.0 ^ (unsigned __int16)(a2->Flags.Value >> 9)) & 0x400;
      pPresentRegions = a2->pPresentRegions;
      if ( pPresentRegions
        && !pPresentRegions->MoveRectCount
        && *(_BYTE *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 40LL) + 306LL) )
      {
        v714.SubRectCnt = pPresentRegions->DirtyRectCount;
        v714.pDstSubRects = a2->pPresentRegions->pDirtyRects;
      }
      v210 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, D3DDDI_FLIPINTERVAL_TYPE *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 504LL)
                                                                                               + 8LL)
                                                                                   + 424LL))(
               *(_QWORD *)(*((_QWORD *)v7 + 2) + 600LL),
               VidPnSourceId,
               &a2->FlipInterval);
      *((_DWORD *)v202 + 30) = v210;
      if ( !v210 )
      {
        v214 = (_QWORD *)WdLogNewEntry5_WdWarning(v212, v211, v213);
        v214[3] = v7;
        v214[4] = a2->FlipInterval;
        v214[5] = -1073741811LL;
        WdLogEvent5_WdWarning(v214);
        LODWORD(v24) = -1073741811;
        goto LABEL_985;
      }
      if ( ((v210 - 1) & 0xFFFFFFFD) != 0 )
      {
        v714.FlipInterval = a2->FlipInterval;
        if ( *((_DWORD *)v202 + 30) == 2 )
          goto LABEL_313;
      }
      else
      {
        v714.FlipInterval = D3DDDI_FLIPINTERVAL_IMMEDIATE;
      }
      v714.Flags.Value |= 8u;
LABEL_313:
      *((_DWORD *)v202 + 31) = a2->FlipInterval;
      *((_DWORD *)v202 + 29) = VidPnSourceId;
      v215 = *((_QWORD *)v7 + 2);
      if ( v215 != -232 && *(struct _KTHREAD **)(v215 + 240) == KeGetCurrentThread() )
      {
        v216 = WdLogNewEntry5_WdAssertion(v212);
        *(_QWORD *)(v216 + 24) = 1214LL;
        WdLogEvent5_WdAssertion(v216);
      }
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v215 + 232, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v219 = *(_DWORD *)(v215 + 248);
          if ( v219 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0q(v217, &EventBlockThread, v218, v219);
        }
        ExAcquirePushLockSharedEx(v215 + 232, 0LL);
      }
      v220 = v215 + 232;
      v221 = *(_QWORD *)(v215 + 8LL * VidPnSourceId + 840);
      ExReleasePushLockSharedEx(v220, 0LL);
      KeLeaveCriticalRegion();
      v222 = *(_DWORD *)(v24[6].Count + 4) & 0x2000;
      if ( v222 && v221 && (*(_DWORD *)(*(_QWORD *)(v221 + 48) + 4LL) & 0x2000) == 0 )
      {
        v223 = v679;
        *(_DWORD *)v679 |= 0x400000u;
      }
      else if ( !v222 && v221 && (*(_DWORD *)(*(_QWORD *)(v221 + 48) + 4LL) & 0x2000) != 0 )
      {
        v223 = v679;
        *(_DWORD *)v679 |= 0x400000u;
      }
      else
      {
        v223 = v679;
        *(_DWORD *)v679 &= ~0x400000u;
      }
      v137 = *((unsigned int *)v223 + 30);
      if ( !(_DWORD)v137 )
        goto LABEL_244;
      if ( (_DWORD)v137 == *(_DWORD *)(*((_QWORD *)v7 + 2) + 4LL * VidPnSourceId + 1608) )
        goto LABEL_244;
      v224 = ((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
      *(_QWORD *)(v224 + 24) = *((_QWORD *)v7 + 2);
      WdLogEvent5_WdEvent(v224);
      COREDEVICEACCESS::Release((COREDEVICEACCESS *)a3);
      DXGDEVICE::FlushScheduler(*((_QWORD **)v7 + 2), 3u);
      v225 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)a3);
      v226 = v225;
      if ( v225 >= 0 )
        goto LABEL_244;
      v227 = ((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
      *(_QWORD *)(v227 + 24) = v226;
      WdLogEvent5_WdEvent(v227);
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a3);
      LODWORD(v24) = v226;
      goto LABEL_985;
    }
LABEL_272:
    v189 = (_QWORD *)WdLogNewEntry5_WdError(v21);
    v189[3] = -1073741811LL;
    v189[4] = v7;
    v189[5] = v24;
    v189[6] = v24[6].Count;
    v189[7] = a2->hSource;
    WdLogEvent5_WdError(v189);
    LODWORD(v24) = -1073741811;
    goto LABEL_985;
  }
  if ( !a2->pSrcSubRects || !a2->SubRectCnt || (v126 & 3) == 0 || (v126 & 0x100E803C) != 0 )
    goto LABEL_175;
  if ( (v126 & 2) != 0 )
  {
    if ( (v126 & 0x100681) != 0 )
    {
LABEL_175:
      v127 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v126, v17);
      v128 = -1073741811;
      v127[3] = v7;
      v127[4] = a2->pSrcSubRects;
      v127[5] = a2->SubRectCnt;
      v127[6] = a2->Flags.Value;
      v127[7] = -1073741811LL;
LABEL_176:
      WdLogEvent5_WdWarning(v127);
      goto LABEL_177;
    }
  }
  else
  {
    if ( !v25 || !v124 || (v126 & 0x80u) == 0LL )
      goto LABEL_175;
    v129 = v126 & 0x600;
    if ( (_DWORD)v129 == 1536 )
    {
      v127 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v129, v17);
      v128 = -1073741811;
      v127[3] = -1073741811LL;
      v127[4] = v7;
      v127[5] = a2->pSrcSubRects;
      v127[6] = a2->SubRectCnt;
      v127[7] = a2->Flags.Value;
      goto LABEL_176;
    }
  }
  v130 = *(_DWORD *)(v26[6].Count + 4);
  if ( (v130 & 2) == 0 && (v130 & 1) == 0 )
  {
    v131 = (_QWORD *)WdLogNewEntry5_WdError(v21);
    v128 = -1073741811;
    v131[3] = -1073741811LL;
    v131[4] = v7;
    v131[5] = v26;
    v132 = v26[6].Count;
LABEL_187:
    v131[6] = v132;
    v131[7] = a2->hDestination;
    WdLogEvent5_WdError(v131);
    goto LABEL_177;
  }
  v133 = *((_QWORD *)v7 + 2);
  VidPnSourceId = (v130 >> 6) & 0xF;
  v673[0] = VidPnSourceId;
  v135 = *(_QWORD *)(v133 + 1672);
  if ( !v135
    || !*(_QWORD *)(v135 + 2304)
    || !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(v135 + 2304) + 16LL)) )
  {
    v136 = WdLogNewEntry5_WdAssertion(v21);
    *(_QWORD *)(v136 + 24) = 3317LL;
    WdLogEvent5_WdAssertion(v136);
  }
  *((_DWORD *)v679 + 29) = VidPnSourceId;
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v698, v26);
  DXGALLOCATIONREFERENCE::MoveAssign((struct DXGALLOCATION **)&v690, (struct DXGALLOCATION **)&v698);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v698);
  v682 = a2->hDestination;
  if ( (a2->Flags.Value & 1) == 0 )
  {
    v714.DstRect.right = v656;
    v714.DstRect.bottom = (int)v677;
    *(_QWORD *)&v714.DstRect.left = 0LL;
    if ( (a2->Flags.Value & 0x40) != 0 )
    {
      v164 = a2->DstRect.right;
      if ( v164 <= a2->DstRect.left )
        goto LABEL_225;
      p_SrcRect = (RECT *)(unsigned int)a2->DstRect.bottom;
      if ( (int)p_SrcRect <= a2->DstRect.top || v164 <= 0 || (int)p_SrcRect <= 0 )
        goto LABEL_225;
      if ( !DXGPRESENT::IntersectRect(&v714.DstRect, &a2->DstRect, &v714.DstRect) )
        goto LABEL_178;
    }
    for ( k = 0; k < a2->SubRectCnt; ++k )
    {
      v166 = k;
      if ( !DXGPRESENT::IntersectRect(&v718, &a2->pSrcSubRects[v166], &v714.DstRect)
        || RtlCompareMemory(&v718, &a2->pSrcSubRects[v166], 0x10uLL) != 16 )
      {
        v181 = (_QWORD *)WdLogNewEntry5_WdError(v167);
        v181[3] = -1073741811LL;
        v181[4] = a2->DstRect.left;
        v181[5] = a2->DstRect.top;
        v181[6] = a2->DstRect.right;
        v181[7] = a2->DstRect.bottom;
        WdLogEvent5_WdError(v181);
        v183 = (_QWORD *)WdLogNewEntry5_WdError(v182);
        v183[3] = k;
        v183[4] = a2->pSrcSubRects[k].left;
        v183[5] = a2->pSrcSubRects[k].top;
        v183[6] = a2->pSrcSubRects[k].right;
        v183[7] = a2->pSrcSubRects[k].bottom;
        WdLogEvent5_WdError(v183);
        LODWORD(v24) = -1073741811;
        goto LABEL_985;
      }
    }
    v161 = v714.Flags.Value;
    v714.SrcRect = v714.DstRect;
    v714.pDstSubRects = a2->pSrcSubRects;
    goto LABEL_243;
  }
  if ( v26 == v24 )
  {
    v131 = (_QWORD *)WdLogNewEntry5_WdError(p_SrcRect);
    v128 = -1073741811;
    v131[3] = -1073741811LL;
    v131[4] = v7;
    v131[5] = v24;
    v132 = a2->hSource;
    goto LABEL_187;
  }
  v141 = *(_DWORD *)(v24[6].Count + 4);
  if ( (v141 & 2) != 0 || (v141 & 1) != 0 )
  {
    v142 = (v141 >> 6) & 0xF;
    if ( (_DWORD)v142 != VidPnSourceId )
    {
      v143 = (_QWORD *)WdLogNewEntry5_WdError(v142);
      v128 = -1073741811;
      v143[3] = -1073741811LL;
      v143[4] = v7;
      v143[5] = v24;
      v143[6] = (*(_DWORD *)(v24[6].Count + 4) >> 6) & 0xF;
      v143[7] = VidPnSourceId;
      WdLogEvent5_WdError(v143);
      goto LABEL_177;
    }
  }
  v144 = a2->SrcRect.left;
  p_SrcRect = &a2->SrcRect;
  v139 = (unsigned int)a2->SrcRect.right;
  if ( (int)v139 <= v144
    || (v140 = (unsigned int)a2->SrcRect.bottom, v137 = (unsigned int)a2->SrcRect.top, (int)v140 <= (int)v137)
    || (v145 = v668, v144 >= v668)
    || (int)v137 >= v124
    || (int)v139 <= 0
    || (int)v140 <= 0 )
  {
    v163 = (_QWORD *)WdLogNewEntry5_WdError(p_SrcRect);
    v128 = -1073741811;
    v163[3] = -1073741811LL;
    v163[4] = a2->SrcRect.left;
    v163[5] = a2->SrcRect.top;
    v163[6] = a2->SrcRect.right;
    v163[7] = a2->SrcRect.bottom;
    WdLogEvent5_WdError(v163);
    goto LABEL_177;
  }
  v146 = 0;
  if ( !a2->SubRectCnt )
    goto LABEL_210;
  do
  {
    v147 = v146;
    if ( !DXGPRESENT::IntersectRect(&Source1, &a2->pSrcSubRects[v147], p_SrcRect)
      || RtlCompareMemory(&Source1, &a2->pSrcSubRects[v147], 0x10uLL) != 16 )
    {
      v156 = (_QWORD *)WdLogNewEntry5_WdError(v148);
      v128 = -1073741811;
      v156[3] = -1073741811LL;
      v156[4] = a2->SrcRect.left;
      v156[5] = a2->SrcRect.top;
      v156[6] = a2->SrcRect.right;
      v156[7] = a2->SrcRect.bottom;
      WdLogEvent5_WdError(v156);
      v158 = (_QWORD *)WdLogNewEntry5_WdError(v157);
      v158[3] = v146;
      v158[4] = a2->pSrcSubRects[v146].left;
      v158[5] = a2->pSrcSubRects[v146].top;
      v158[6] = a2->pSrcSubRects[v146].right;
      v158[7] = a2->pSrcSubRects[v146].bottom;
      WdLogEvent5_WdError(v158);
      goto LABEL_177;
    }
    ++v146;
    p_SrcRect = &a2->SrcRect;
  }
  while ( v146 < a2->SubRectCnt );
  v145 = v668;
  p_SrcRect = &a2->SrcRect;
LABEL_210:
  if ( (a2->Flags.Value & 0x40) == 0 )
  {
    v160 = (unsigned int)v677;
    if ( v656 == v145 && (_DWORD)v677 == v678[0] )
    {
      v714.DstRect = *p_SrcRect;
      v714.pDstSubRects = a2->pSrcSubRects;
      goto LABEL_229;
    }
    v162 = (_QWORD *)WdLogNewEntry5_WdWarning(p_SrcRect, v137, v139);
    v162[3] = v7;
    v162[4] = (unsigned int)v656;
    v162[5] = v160;
    v162[6] = (unsigned int)v668;
    v162[7] = v678[0];
    WdLogEvent5_WdWarning(v162);
    v128 = -1073741811;
    goto LABEL_177;
  }
  v139 = (unsigned int)a2->DstRect.right;
  v149 = a2->DstRect.left;
  if ( (int)v139 <= v149
    || (v137 = (unsigned int)a2->DstRect.bottom, v150 = a2->DstRect.top, (int)v137 <= v150)
    || v149 >= v656
    || v150 >= (int)v677
    || (int)v139 <= 0
    || (int)v137 <= 0 )
  {
LABEL_225:
    v127 = (_QWORD *)WdLogNewEntry5_WdWarning(p_SrcRect, v137, v139);
    v128 = -1073741811;
    v127[3] = -1073741811LL;
    v127[4] = a2->DstRect.left;
    v127[5] = a2->DstRect.top;
    v127[6] = a2->DstRect.right;
    v127[7] = a2->DstRect.bottom;
    goto LABEL_176;
  }
  v151 = (unsigned int)(a2->SrcRect.right - p_SrcRect->left);
  if ( (_DWORD)v151 != (_DWORD)v139 - v149
    || (v151 = (unsigned int)(a2->SrcRect.bottom - a2->SrcRect.top), (_DWORD)v151 != (_DWORD)v137 - v150) )
  {
    v159 = (_QWORD *)WdLogNewEntry5_WdError(v151);
    v128 = -1073741811;
    v159[3] = -1073741811LL;
    v159[4] = v7;
    v159[5] = a2->Flags.Value;
    v159[6] = v26;
    v159[7] = VidPnSourceId;
    WdLogEvent5_WdError(v159);
    goto LABEL_177;
  }
  v128 = DXGPRESENT::GrowRectList(*((DXGPRESENT **)v7 + 19), a2->SubRectCnt);
  if ( v128 < 0 )
  {
LABEL_177:
    v22 = v128;
LABEL_178:
    LODWORD(v24) = v22;
    goto LABEL_985;
  }
  v152 = DXGPRESENT::GetDdiSubRectList(*((DXGPRESENT **)v7 + 19), 0);
  v139 = 0LL;
  v140 = (unsigned int)(a2->DstRect.left - a2->SrcRect.left);
  v153 = a2->DstRect.top - a2->SrcRect.top;
  if ( a2->SubRectCnt > (unsigned int)v137 )
  {
    do
    {
      v154 = (unsigned int)v139;
      v139 = (unsigned int)(v139 + 1);
      v137 = 2 * v154;
      *(&v152->left + 2 * v137) = v140 + *(&a2->pSrcSubRects->left + 2 * v137);
      *(&v152->right + 2 * v137) = v140 + *(&a2->pSrcSubRects->right + 2 * v137);
      *(&v152->top + 2 * v137) = v153 + *(&a2->pSrcSubRects->top + 2 * v137);
      *(&v152->bottom + 2 * v137) = v153 + *(&a2->pSrcSubRects->bottom + 2 * v137);
    }
    while ( (unsigned int)v139 < a2->SubRectCnt );
  }
  v155 = a2->DstRect;
  v714.pDstSubRects = v152;
  p_SrcRect = &a2->SrcRect;
  v714.DstRect = v155;
LABEL_229:
  v714.SrcRect = *p_SrcRect;
  v161 = (*(_WORD *)&v714.Flags.0 ^ (unsigned __int16)(a2->Flags.Value >> 9)) & 0x800 ^ v714.Flags.Value;
  v714.Flags.Value = v161;
LABEL_243:
  v714.SubRectCnt = a2->SubRectCnt;
  v714.Flags.Value = ((unsigned __int8)v161 ^ (unsigned __int8)*(_DWORD *)&a2->Flags.0) & 1 ^ v161;
  v714.Flags.Value ^= (*(_BYTE *)&v714.Flags.0 ^ (unsigned __int8)*(_DWORD *)&a2->Flags.0) & 2;
  v714.Flags.Value ^= (*(_BYTE *)&v714.Flags.0 ^ (unsigned __int8)(a2->Flags.Value >> 5)) & 0x10;
  v714.Flags.Value ^= (*(_BYTE *)&v714.Flags.0 ^ (unsigned __int8)(a2->Flags.Value >> 5)) & 0x20;
  v714.Flags.Value ^= (*(_BYTE *)&v714.Flags.0 ^ (unsigned __int8)(a2->Flags.Value >> 5)) & 0x40;
  v714.Color = a2->Color;
  v714.Flags.Value ^= (*(_WORD *)&v714.Flags.0 ^ (unsigned __int16)(a2->Flags.Value >> 9)) & 0x800;
LABEL_244:
  v168 = *((_QWORD *)v7 + 2);
  v658 = a2->Flags.Value;
  v169 = *(_QWORD *)(*(_QWORD *)(v168 + 1672) + 2304LL);
  v170 = *(_QWORD *)(v169 + 16);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v170 + 160)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v170 + 144)) )
  {
    v171 = WdLogNewEntry5_WdAssertion(v170);
    *(_QWORD *)(v171 + 24) = 5045LL;
    WdLogEvent5_WdAssertion(v171);
  }
  if ( VidPnSourceId >= *(_DWORD *)(v169 + 80) )
  {
    v172 = WdLogNewEntry5_WdAssertion(v170);
    *(_QWORD *)(v172 + 24) = 5046LL;
    WdLogEvent5_WdAssertion(v172);
    if ( VidPnSourceId >= *(_DWORD *)(v169 + 80) )
      goto LABEL_555;
  }
  v174 = *(_QWORD *)(v169 + 112);
  v175 = (HDEV)VidPnSourceId;
  v173 = 3760LL * VidPnSourceId;
  CurrentIrql = (HDEV)VidPnSourceId;
  v667 = (CWin32kLocks *)v173;
  if ( v168 != *(_QWORD *)(v174 + v173 + 688) )
  {
LABEL_555:
    v392 = (_QWORD *)WdLogNewEntry5_WdWarning(v173, v137, v139);
    v392[3] = -1071775744LL;
    v392[4] = v7;
    v392[5] = VidPnSourceId;
    WdLogEvent5_WdWarning(v392);
    v393 = *((_QWORD *)v7 + 2);
    if ( *(_BYTE *)(*(_QWORD *)(v393 + 40) + 306LL) )
    {
      if ( (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(
                           *(DXGADAPTER ***)(*(_QWORD *)(v393 + 1672) + 2304LL),
                           VidPnSourceId) == 1 )
      {
        v394 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 1672LL) + 2304LL) + 112LL)
                         + 3760LL * VidPnSourceId
                         + 712);
        if ( *(_BYTE *)(v394 + 306) )
        {
          v395 = (_QWORD *)WdLogNewEntry5_WdError(v394);
          v395[3] = *((_QWORD *)v7 + 2);
          v395[4] = VidPnSourceId;
          v395[5] = ADAPTER_DISPLAY::GetVidPnSourceOwner(
                      *(DXGADAPTER ***)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 1672LL) + 2304LL),
                      VidPnSourceId);
          WdLogEvent5_WdError(v395);
          LOBYTE(v396) = 1;
          *(_BYTE *)(*((_QWORD *)v7 + 2) + 1730LL) = 1;
          if ( (unsigned __int8)WdIsDebuggerPresent(v396) )
          {
            DbgPrintEx(0x65u, 0, "Breaking in to allow debug of potential DWM swap chain leak");
            __debugbreak();
          }
        }
      }
    }
    LODWORD(v24) = -1071775744;
    goto LABEL_985;
  }
  v176 = *(_QWORD *)(*((_QWORD *)v7 + 2) + 1672LL);
  if ( !v176 )
  {
    v180 = 3760LL * VidPnSourceId;
LABEL_344:
    v229 = v658;
    goto LABEL_345;
  }
  if ( !*(_QWORD *)(v176 + 2304) )
  {
    v177 = WdLogNewEntry5_WdAssertion(v173);
    *(_QWORD *)(v177 + 24) = 8208LL;
    WdLogEvent5_WdAssertion(v177);
  }
  v178 = *(_QWORD *)(v176 + 2304);
  if ( !v178 )
  {
    v180 = (__int64)v667;
    goto LABEL_336;
  }
  if ( VidPnSourceId >= *(_DWORD *)(v178 + 80) )
  {
    v179 = WdLogNewEntry5_WdAssertion(v173);
    *(_QWORD *)(v179 + 24) = 5083LL;
    WdLogEvent5_WdAssertion(v179);
  }
  v180 = (__int64)v667;
  v173 = *((unsigned __int8 *)v667 + *(_QWORD *)(v178 + 112) + 720);
  if ( (_BYTE)v173 )
    goto LABEL_344;
LABEL_336:
  if ( *(_DWORD *)(*((_QWORD *)v7 + 2) + 328LL) == 1 )
  {
    v228 = (_QWORD *)WdLogNewEntry5_WdEvent(v173, v137, v139, v140);
    v228[3] = -1071775738LL;
    v228[4] = v7;
    v228[5] = VidPnSourceId;
    WdLogEvent5_WdEvent(v228);
    LODWORD(v24) = -1071775738;
    goto LABEL_985;
  }
  v229 = v658;
  if ( (v658 & 4) != 0 )
  {
    v230 = (_QWORD *)WdLogNewEntry5_WdEvent(v173, v137, v139, v140);
    v230[3] = 0LL;
    v230[4] = v7;
    v230[5] = VidPnSourceId;
    WdLogEvent5_WdEvent(v230);
    if ( (a2->Flags.Value & 4) != 0 )
    {
      v231 = *((_QWORD *)v7 + 2);
      v232 = *(_QWORD *)(v231 + 1672);
      if ( v232 == *(_QWORD *)(*(_QWORD *)(v231 + 16) + 16LL) )
      {
        ADAPTER_DISPLAY::DisableOverlayPlanes(*(ADAPTER_DISPLAY **)(v232 + 2304), VidPnSourceId, v232);
        v24 = (struct _EX_RUNDOWN_REF *)v679;
        DXGDEVICE::SetDisplayedPrimary(*((struct _KTHREAD ***)v7 + 2), VidPnSourceId, v671, *((_DWORD *)v679 + 34), 1u);
        v233 = v24[15].Count;
        LODWORD(v24) = 0;
        *(_DWORD *)(*((_QWORD *)v7 + 2) + 4LL * VidPnSourceId + 1608) = v233;
      }
      else
      {
        DXGDEVICE::SetDisplayedPrimary((struct _KTHREAD **)v231, VidPnSourceId, v671, 0, 1u);
        LODWORD(v24) = 0;
      }
      goto LABEL_985;
    }
LABEL_562:
    LODWORD(v24) = v22;
    goto LABEL_985;
  }
LABEL_345:
  if ( (v229 & 0x10000000) == 0 )
  {
    v173 = *((_QWORD *)v7 + 2);
    if ( *(_DWORD *)(v173 + 328) == 1 && (*(_DWORD *)(v173 + 4LL * VidPnSourceId + 1032) & 0x100) == 0 )
    {
      v234 = (_QWORD *)WdLogNewEntry5_WdEvent(v173, v137, v139, v140);
      v234[3] = -1071775739LL;
      v234[4] = v7;
      v234[5] = VidPnSourceId;
      WdLogEvent5_WdEvent(v234);
      LODWORD(v24) = -1071775739;
      goto LABEL_985;
    }
  }
  if ( (a2->Flags.Value & 4) != 0 )
  {
    if ( a2->pPresentRegions )
    {
      LODWORD(v24) = DXGCONTEXT::ValidatePresentRegions((DXGCONTEXT *)v173, a2, v668, v678[0]);
      if ( (int)v24 < 0 )
        goto LABEL_985;
    }
  }
  v235 = *(_QWORD *)(*((_QWORD *)v7 + 2) + 1672LL);
  v236 = *(_QWORD *)(v235 + 2304);
  if ( VidPnSourceId >= *(_DWORD *)(v236 + 80) )
  {
    v237 = WdLogNewEntry5_WdAssertion(v235);
    *(_QWORD *)(v237 + 24) = 1235LL;
    WdLogEvent5_WdAssertion(v237);
  }
  v238 = *(_QWORD *)(v236 + 16);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v238 + 160)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v238 + 144)) )
  {
    v240 = WdLogNewEntry5_WdAssertion(v239);
    *(_QWORD *)(v240 + 24) = 1236LL;
    WdLogEvent5_WdAssertion(v240);
  }
  v241 = *(_QWORD *)(*(_QWORD *)(v236 + 112) + v180 + 88);
  if ( !v241 || (v242 = *(_QWORD *)(v241 + 48), (*(_DWORD *)(v242 + 4) & 0x10) != 0) || !v242 )
  {
    v263 = *((_QWORD *)v7 + 2);
    if ( (*(_DWORD *)(v263 + 4LL * VidPnSourceId + 1032) & 0x200) != 0 || (a2->Flags.Value & 0x10000000) != 0 )
      goto LABEL_367;
    v264 = (_QWORD *)WdLogNewEntry5_WdWarning(*(_DWORD *)(v263 + 4LL * VidPnSourceId + 1032) >> 9, v137, v139);
    LODWORD(v261) = -1071775739;
    v264[3] = -1071775739LL;
    v264[4] = v7;
    v264[5] = a2->hSource;
    v264[6] = v671;
    v264[7] = v175;
    WdLogEvent5_WdWarning(v264);
    goto LABEL_983;
  }
  v243 = v681;
  v244 = *(_DWORD *)(*((_QWORD *)v7 + 19) + 8LL);
  v20 = v244 == (*((unsigned int (__fastcall **)(__int64, __int64, __int64, __int64))v681 + 1))(v242, v137, v139, v140);
  v245 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
  if ( v20 )
  {
    if ( (*(_BYTE *)&v245 & 4) != 0 )
      goto LABEL_367;
    COREDEVICEACCESS::Release((COREDEVICEACCESS *)a3);
    DXGADAPTERSTOPRESETLOCKSHARED::Release(v674);
    DXGPRESENTMUTEX::DXGPRESENTMUTEX(
      (DXGPRESENTMUTEX *)v709,
      *(struct ADAPTER_RENDER *const *)(*((_QWORD *)v7 + 2) + 16LL));
    DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)v709);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v674);
    v259 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)a3);
    v261 = (struct DXGADAPTERSTOPRESETLOCKSHARED *)v259;
    if ( v259 >= 0 )
    {
      DXGDEVICE::SynchronizePresentToPrimary(*((DXGDEVICE **)v7 + 2), v7, v260, 0);
      DXGPRESENTMUTEX::~DXGPRESENTMUTEX((DXGPRESENTMUTEX *)v709);
      VidPnSourceId = v673[0];
      goto LABEL_367;
    }
    v262 = ((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
    *(_QWORD *)(v262 + 24) = v261;
    *(_QWORD *)(v262 + 32) = v7;
    WdLogEvent5_WdEvent(v262);
    COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a3);
    DXGPRESENTMUTEX::~DXGPRESENTMUTEX((DXGPRESENTMUTEX *)v709);
    goto LABEL_983;
  }
  if ( (*(_BYTE *)&v245 & 4) == 0 )
  {
    DXGDEVICE::FlushScheduler(*((_QWORD **)v7 + 2), 2u);
    DXGADAPTERSTOPRESETLOCKSHARED::Release(v674);
    COREDEVICEACCESS::Release((COREDEVICEACCESS *)a3);
    DXGPRESENTMUTEX::DXGPRESENTMUTEX(
      (DXGPRESENTMUTEX *)v708,
      *(struct ADAPTER_RENDER *const *)(*((_QWORD *)v7 + 2) + 16LL));
    DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)v708);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v674);
    v246 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)a3);
    v24 = (struct _EX_RUNDOWN_REF *)v246;
    if ( v246 < 0 )
    {
      v248 = ((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
      *(_QWORD *)(v248 + 24) = v24;
      *(_QWORD *)(v248 + 32) = v7;
      WdLogEvent5_WdEvent(v248);
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a3);
      DXGPRESENTMUTEX::~DXGPRESENTMUTEX((DXGPRESENTMUTEX *)v708);
      goto LABEL_985;
    }
    DXGDEVICE::SynchronizePresentToPrimary(*((DXGDEVICE **)v7 + 2), v7, v247, 1);
    DXGPRESENTMUTEX::~DXGPRESENTMUTEX((DXGPRESENTMUTEX *)v708);
  }
  *(_DWORD *)(*((_QWORD *)v7 + 19) + 8LL) = (*((__int64 (**)(void))v243 + 1))();
  CddInterface = ADAPTER_DISPLAY::GetCddInterface(
                   *(DXGADAPTER ***)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 1672LL) + 2304LL),
                   VidPnSourceId);
  if ( CddInterface )
    (*((void (__fastcall **)(_QWORD, _QWORD))CddInterface + 1))(*(_QWORD *)CddInterface, 0LL);
LABEL_367:
  v250 = *((_QWORD *)v7 + 2);
  v251 = *(_QWORD *)(v250 + 1672);
  if ( v251 != *(_QWORD *)(*(_QWORD *)(v250 + 16) + 16LL) )
  {
    if ( !v251 )
    {
      v391 = WdLogNewEntry5_WdAssertion(v250);
      *(_QWORD *)(v391 + 24) = *((_QWORD *)v7 + 2);
      *(_QWORD *)(v391 + 32) = -1073741822LL;
      WdLogEvent5_WdAssertion(v391);
      LODWORD(v261) = -1073741811;
      goto LABEL_983;
    }
    v372 = v671;
    *(_QWORD *)&v715.left = 0LL;
    v373 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
    if ( (*(_DWORD *)&v373 & 0x10000000) != 0 )
    {
      v715.right = HIDWORD(a2[1].hWindow);
      v715.bottom = a2[1].VidPnSourceId;
    }
    else
    {
      v374 = (struct DXGALLOCATION *)v680;
      if ( (*(_BYTE *)&v373 & 4) != 0 )
        v374 = v671;
      v375 = *(_DWORD *)(*((_QWORD *)v374 + 6) + 4LL);
      if ( (v375 & 0x10) != 0 )
      {
        v376 = (_QWORD *)((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
        v376[3] = -1071775482LL;
        v376[4] = v7;
        v376[5] = v374;
        WdLogEvent5_WdEvent(v376);
        LODWORD(v261) = -1071775482;
        goto LABEL_983;
      }
      v377 = *(_OWORD *)ADAPTER_DISPLAY::GetDisplayModeInfo(
                          *(DXGADAPTER ***)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 1672LL) + 2304LL),
                          (v375 >> 6) & 0xF);
      v702.Flags.Value = 1;
      memset(&v702, 0, 40);
      v702.Rotation = -1;
      v378 = *((_QWORD *)v374 + 6);
      v710 = v377;
      v702.hAllocation = *(HANDLE *)(v378 + 16);
      v380 = ADAPTER_RENDER::DdiDescribeAllocation(
               *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 16LL) + 2312LL),
               &v702,
               v379);
      v382 = v380;
      if ( v380 < 0 )
      {
        v383 = (_QWORD *)WdLogNewEntry5_WdError(v381);
        v383[3] = v382;
        v383[4] = v7;
        v383[5] = *((unsigned int *)v374 + 4);
        v383[6] = v374;
        v383[7] = (*(_DWORD *)(*((_QWORD *)v374 + 6) + 4LL) >> 6) & 0xF;
        WdLogEvent5_WdError(v383);
        LODWORD(v261) = -1073741811;
        goto LABEL_983;
      }
      if ( *(_QWORD *)&v702.Width != (_QWORD)v710 )
        goto LABEL_547;
      v384 = 22;
      Format = D3DDDIFMT_X8R8G8B8;
      if ( v702.Format != D3DDDIFMT_A8R8G8B8 )
        Format = v702.Format;
      if ( DWORD2(v710) != 21 )
        v384 = DWORD2(v710);
      if ( Format != v384 )
      {
LABEL_547:
        v386 = (_QWORD *)((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
        v386[3] = -1071775482LL;
        v386[4] = v7;
        v386[5] = v374;
        WdLogEvent5_WdEvent(v386);
        LODWORD(v261) = -1071775739;
        goto LABEL_983;
      }
      v715.right = v702.Width;
      v715.bottom = v702.Height;
    }
    LODWORD(v261) = ADAPTER_DISPLAY::PresentDisplayOnly(
                      *(ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 1672LL) + 2304LL),
                      v7,
                      VidPnSourceId,
                      a2,
                      &v714,
                      (struct COREDEVICEACCESS *)a3,
                      &v715);
    if ( (int)v261 < 0 )
    {
LABEL_509:
      v269 = (_QWORD *)((char *)v7 + 320);
      goto LABEL_510;
    }
    if ( (a2->Flags.Value & 4) != 0 )
    {
      v388 = *((_QWORD *)v7 + 2);
      v389 = v673[0];
      v390 = *(_QWORD *)(v388 + 1672);
      if ( v390 == *(_QWORD *)(*(_QWORD *)(v388 + 16) + 16LL) )
        ADAPTER_DISPLAY::DisableOverlayPlanes(*(ADAPTER_DISPLAY **)(v390 + 2304), v673[0], v387);
      DXGDEVICE::SetDisplayedPrimary(*((struct _KTHREAD ***)v7 + 2), v389, v372, 0, 1u);
      UpdatePostComposition(
        v389,
        0,
        0,
        0,
        *(struct ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 1672LL) + 2304LL));
    }
    goto LABEL_498;
  }
  v252 = a2->Flags.Value & 0x10;
  ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v250 + 104));
  if ( !*((_BYTE *)v7 + 401) )
  {
    LODWORD(v255) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL)
                                                                                              + 504LL)
                                                                                  + 8LL)
                                                                      + 184LL))(
                      *(_QWORD *)(*((_QWORD *)v7 + 2) + 600LL),
                      VidPnSourceId,
                      0LL);
    if ( (_DWORD)v255 != -1071775486 )
      goto LABEL_380;
    if ( v252 )
      goto LABEL_381;
    COREDEVICEACCESS::Release((COREDEVICEACCESS *)a3);
    LOBYTE(v256) = 1;
    v255 = (*(int (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2)
                                                                                              + 16LL)
                                                                                  + 504LL)
                                                                      + 8LL)
                                                          + 184LL))(
             *(_QWORD *)(*((_QWORD *)v7 + 2) + 600LL),
             VidPnSourceId,
             v256);
    v257 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)a3);
    if ( v257 < 0 )
    {
      v258 = ((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
      *(_QWORD *)(v258 + 24) = v255;
      WdLogEvent5_WdEvent(v258);
      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a3);
      goto LABEL_386;
    }
LABEL_380:
    if ( (int)v255 < 0 )
    {
LABEL_381:
      v265 = ((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
      *(_QWORD *)(v265 + 24) = (int)v255;
      *(_QWORD *)(v265 + 32) = v7;
      WdLogEvent5_WdEvent(v265);
      if ( (_DWORD)v255 != -1071775486 && (_DWORD)v255 != -1073741130 && (_DWORD)v255 != -1071775232 )
      {
        v267 = WdLogNewEntry5_WdAssertion(v266);
        *(_QWORD *)(v267 + 24) = 2790LL;
        WdLogEvent5_WdAssertion(v267);
      }
    }
    v257 = v255;
LABEL_386:
    if ( v257 < 0 )
    {
      v268 = ((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
      *(_QWORD *)(v268 + 24) = v257;
      *(_QWORD *)(v268 + 32) = v7;
      WdLogEvent5_WdEvent(v268);
      LODWORD(v261) = v257;
      goto LABEL_983;
    }
    v175 = CurrentIrql;
  }
  if ( ((*((_DWORD *)v679 + 30) - 3) & 0xFFFFFFFD) == 0 )
  {
LABEL_393:
    v272 = *((_QWORD *)v7 + 2);
    v659 = a2->Flags.Value;
    v273 = *(_QWORD *)(*(_QWORD *)(v272 + 1672) + 2304LL);
    v274 = *(_QWORD *)(v273 + 16);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v274 + 160)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v274 + 144)) )
    {
      v275 = WdLogNewEntry5_WdAssertion(v274);
      *(_QWORD *)(v275 + 24) = 5045LL;
      WdLogEvent5_WdAssertion(v275);
    }
    v276 = v673[0];
    if ( v673[0] >= *(_DWORD *)(v273 + 80)
      && (v277 = WdLogNewEntry5_WdAssertion(v274),
          *(_QWORD *)(v277 + 24) = 5046LL,
          WdLogEvent5_WdAssertion(v277),
          (unsigned int)v276 >= *(_DWORD *)(v273 + 80)) )
    {
      v279 = v667;
    }
    else
    {
      v278 = *(_QWORD *)(v273 + 112);
      v279 = v667;
      if ( v272 == *(_QWORD *)((char *)v667 + v278 + 688) )
      {
        v280 = *(_QWORD *)(*((_QWORD *)v7 + 2) + 1672LL);
        if ( !v280 )
          goto LABEL_410;
        if ( !*(_QWORD *)(v280 + 2304) )
        {
          v281 = WdLogNewEntry5_WdAssertion(v274);
          *(_QWORD *)(v281 + 24) = 8208LL;
          WdLogEvent5_WdAssertion(v281);
        }
        v282 = *(_QWORD *)(v280 + 2304);
        if ( !v282 )
          goto LABEL_406;
        if ( (unsigned int)v276 >= *(_DWORD *)(v282 + 80) )
        {
          v283 = WdLogNewEntry5_WdAssertion(v274);
          *(_QWORD *)(v283 + 24) = 5083LL;
          WdLogEvent5_WdAssertion(v283);
        }
        if ( *((_BYTE *)v667 + *(_QWORD *)(v282 + 112) + 720) )
        {
LABEL_410:
          v285 = v659;
        }
        else
        {
LABEL_406:
          if ( *(_DWORD *)(*((_QWORD *)v7 + 2) + 328LL) == 1 )
          {
            v284 = (_QWORD *)((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
            v284[3] = -1071775738LL;
            v284[4] = v7;
            v284[5] = v175;
            WdLogEvent5_WdEvent(v284);
            LODWORD(v261) = -1071775738;
            goto LABEL_524;
          }
          v285 = v659;
          if ( (v659 & 4) != 0 )
          {
            v286 = (_QWORD *)((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
            v286[3] = 0LL;
            v286[4] = v7;
            v286[5] = v175;
            WdLogEvent5_WdEvent(v286);
            LODWORD(v261) = -1071774920;
            goto LABEL_524;
          }
        }
        if ( (v285 & 0x10000000) == 0 )
        {
          v287 = *((_QWORD *)v7 + 2);
          if ( *(_DWORD *)(v287 + 328) == 1 && (*(_DWORD *)(v287 + 4LL * (_QWORD)v175 + 1032) & 0x100) == 0 )
          {
            v288 = (_QWORD *)((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
            LODWORD(v261) = -1071775739;
            v288[3] = -1071775739LL;
            v288[4] = v7;
            v288[5] = v175;
            WdLogEvent5_WdEvent(v288);
            goto LABEL_524;
          }
        }
        v289 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
        v290 = v671;
        if ( (*(_BYTE *)&v289 & 4) != 0 )
        {
          if ( v671 )
          {
            v291 = *((_QWORD *)v671 + 6);
            if ( v291 )
            {
              if ( (*(_DWORD *)(v291 + 4) & 0x2000) != 0
                && !DXGDEVICE::IsDirectFlipAllocationPinned(*((DXGDEVICE **)v7 + 2), v671) )
              {
                v292 = (_QWORD *)((__int64 (*)(void))WdLogNewEntry5_WdEvent)();
                LODWORD(v261) = -1071775739;
                v292[3] = -1071775739LL;
                v292[4] = v7;
                v292[5] = v290;
                WdLogEvent5_WdEvent(v292);
                v293 = *((_QWORD *)v7 + 40);
                if ( v293 )
                {
                  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2)
                                                                                              + 16LL)
                                                                                  + 528LL)
                                                                      + 8LL)
                                                          + 496LL))(
                    v293,
                    0LL);
                  *((_QWORD *)v7 + 40) = 0LL;
                }
                goto LABEL_983;
              }
            }
          }
        }
        if ( (*(_WORD *)&v289 & 0x2000) != 0 )
        {
          v294 = ADAPTER_DISPLAY::GetCurrentOrientation(
                   *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 1672LL) + 2304LL),
                   v276,
                   1);
          v295 = 0;
          if ( v294 != 1 )
            v295 = 128;
          v714.Flags.Value = v295 | v714.Flags.Value & 0xFFFFFF7F;
        }
        if ( !bTracingEnabled )
        {
LABEL_443:
          v310 = v679;
          LODWORD(v261) = DXGCONTEXT::SubmitPresent(
                            v7,
                            a2,
                            a2->BroadcastContextCount,
                            v689,
                            v290,
                            hSource,
                            v672,
                            &v714,
                            a2->pPresentRegions,
                            *((struct _VIDMM_DMA_BUFFER **)v7 + 40),
                            v679,
                            v669,
                            (struct _D3DKMT_PRESENT *)a3);
          if ( (int)v261 >= 0 )
          {
            v312 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 1672LL) + 2304LL) + 112LL);
            if ( *(_DWORD *)((char *)v667 + v312 + 1068) == -1 )
            {
              v313 = WdLogNewEntry5_WdAssertion(v312);
              *(_QWORD *)(v313 + 24) = 4044LL;
              WdLogEvent5_WdAssertion(v313);
            }
          }
          *((_QWORD *)v7 + 40) = 0LL;
          if ( (int)v261 < 0 )
            goto LABEL_509;
          if ( (a2->Flags.Value & 4) != 0 )
          {
            v314 = *((_QWORD *)v7 + 2);
            v315 = *(_QWORD *)(v314 + 1672);
            if ( v315 == *(_QWORD *)(*(_QWORD *)(v314 + 16) + 16LL) )
              ADAPTER_DISPLAY::DisableOverlayPlanes(*(ADAPTER_DISPLAY **)(v315 + 2304), (unsigned int)v276, v311);
            v316 = *((unsigned int *)v310 + 34);
            CurrentIrql = (HDEV)*((_QWORD *)v7 + 2);
            v661 = v316;
            v317 = CurrentIrql + 58;
            if ( CurrentIrql != (HDEV)-232LL )
            {
              if ( *((struct _KTHREAD **)CurrentIrql + 30) == KeGetCurrentThread() )
              {
                v318 = WdLogNewEntry5_WdAssertion(v316);
                *(_QWORD *)(v318 + 24) = 1214LL;
                WdLogEvent5_WdAssertion(v318);
              }
              v290 = v671;
            }
            KeEnterCriticalRegion();
            if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v317, 0LL) )
            {
              if ( bTracingEnabled )
              {
                v321 = *((_DWORD *)v317 + 4);
                if ( v321 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                  McTemplateK0q(v319, &EventBlockThread, v320, v321);
              }
              ExAcquirePushLockExclusiveEx(v317, 0LL);
            }
            v322 = CurrentIrql;
            *((_QWORD *)CurrentIrql + v276 + 105) = v290;
            *((_DWORD *)v322 + v276 + 242) = v661;
            *((_QWORD *)v317 + 1) = 0LL;
            ExReleasePushLockExclusiveEx(v317, 0LL);
            KeLeaveCriticalRegion();
            if ( v290 )
            {
              v325 = *((_QWORD *)CurrentIrql + 209);
              if ( v325 == *(_QWORD *)(*((_QWORD *)CurrentIrql + 2) + 16LL) )
                ADAPTER_DISPLAY::SetAllocationForSinglePlanePresent(
                  *(ADAPTER_DISPLAY **)(v325 + 2304),
                  (unsigned int)v276,
                  v290);
            }
            v664 = 0;
            *(_DWORD *)(*((_QWORD *)v7 + 2) + 4 * v276 + 1608) = *((_DWORD *)v679 + 30);
            v326 = *(_QWORD *)(*((_QWORD *)v7 + 2) + 1672LL);
            v327 = *(_QWORD *)(v326 + 2304);
            v687 = 0;
            v686 = v327 + 280;
            if ( v327 == -280 )
            {
              v328 = WdLogNewEntry5_WdAssertion(v326);
              *(_QWORD *)(v328 + 24) = 464LL;
              WdLogEvent5_WdAssertion(v328);
            }
            v329 = KeGetCurrentThread();
            if ( *(struct _KTHREAD **)(v686 + 8) == v329 )
            {
              v330 = WdLogNewEntry5_WdAssertion(v329);
              *(_QWORD *)(v330 + 24) = 471LL;
              WdLogEvent5_WdAssertion(v330);
            }
            if ( v687 )
            {
              v331 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v329, v323, v324);
              v331[3] = 275LL;
              v331[4] = 4LL;
              v331[5] = &v686;
              v331[6] = 0LL;
              v331[7] = 0LL;
              WdLogEvent5_WdCriticalError(v331);
            }
            v332 = v686;
            KeEnterCriticalRegion();
            if ( *(struct _KTHREAD **)(v332 + 8) == KeGetCurrentThread() )
            {
              if ( *(int *)(v332 + 24) <= 0 )
              {
                v336 = WdLogNewEntry5_WdAssertion(v334);
                *(_QWORD *)(v336 + 24) = 362LL;
                WdLogEvent5_WdAssertion(v336);
              }
              ++*(_DWORD *)(v332 + 24);
            }
            else
            {
              if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v332 + 16, 0LL) )
              {
                if ( bTracingEnabled )
                {
                  v338 = *(_DWORD *)(v332 + 28);
                  if ( v338 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                    McTemplateK0q(v337, &EventBlockThread, v335, v338);
                }
                _InterlockedIncrement64((volatile signed __int64 *)v332);
                ExAcquirePushLockExclusiveEx(v332 + 16, 0LL);
              }
              if ( *(_QWORD *)(v332 + 8) )
              {
                v339 = WdLogNewEntry5_WdAssertion(v337);
                *(_QWORD *)(v339 + 24) = 386LL;
                WdLogEvent5_WdAssertion(v339);
              }
              if ( *(_DWORD *)(v332 + 24) )
              {
                v340 = WdLogNewEntry5_WdAssertion(v337);
                *(_QWORD *)(v340 + 24) = 387LL;
                WdLogEvent5_WdAssertion(v340);
              }
              *(_QWORD *)(v332 + 8) = KeGetCurrentThread();
              *(_DWORD *)(v332 + 24) = 1;
            }
            v341 = v667;
            v687 = 1;
            v342 = *(_QWORD *)(v327 + 112);
            if ( *((_BYTE *)v667 + v342 + 668) )
            {
              *(_DWORD *)((char *)v667 + v342 + 672) = 0;
              v664 = 1;
              *(_DWORD *)((char *)v667 + *(_QWORD *)(v327 + 112) + 676) = 0;
              *((_BYTE *)v667 + *(_QWORD *)(v327 + 112) + 668) = 0;
              if ( !v687 )
              {
                v343 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v667, v333, v335);
                v343[3] = 275LL;
                v343[4] = 4LL;
                v343[5] = &v686;
                v343[6] = 0LL;
                v343[7] = 0LL;
                WdLogEvent5_WdCriticalError(v343);
              }
            }
            v344 = v686;
            v687 = 0;
            if ( *(struct _KTHREAD **)(v686 + 8) != KeGetCurrentThread() )
            {
              v345 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v341, v333, v335);
              v345[3] = 275LL;
              v345[4] = 4LL;
              v345[5] = v344;
              v345[6] = 0LL;
              v345[7] = 0LL;
              WdLogEvent5_WdCriticalError(v345);
            }
            if ( *(int *)(v344 + 24) <= 0 )
            {
              v346 = WdLogNewEntry5_WdAssertion(v341);
              *(_QWORD *)(v346 + 24) = 406LL;
              WdLogEvent5_WdAssertion(v346);
            }
            v20 = (*(_DWORD *)(v344 + 24))-- == 1;
            if ( v20 )
            {
              *(_QWORD *)(v344 + 8) = 0LL;
              ExReleasePushLockExclusiveEx(v344 + 16, 0LL);
            }
            KeLeaveCriticalRegion();
            if ( v664 )
            {
              v347 = (struct _LIST_ENTRY *)operator new(0x18uLL, 0x4B677844u, PagedPool);
              if ( v347 )
              {
                v347->Blink = 0LL;
                v347[1].Flink = 0LL;
                v347->Flink = 0LL;
                DXGADAPTER_REFERENCE::Assign((DXGADAPTER **)v347, *(struct DXGADAPTER **)(v327 + 16));
                LODWORD(v347[1].Flink) = v276;
                v350 = DXGPROCESS::GetCurrent(v349, v348);
                DXGWORKQUEUE::QueueWork(
                  (PLIST_ENTRY)(*((_QWORD *)v350 + 8) + 88LL),
                  (struct _LIST_ENTRY *)lambda_ed10ad305aea6a5ff601fc5b120cc334_::_lambda_invoker_cdecl_,
                  v347);
              }
            }
            if ( v687 )
              DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v686);
          }
          goto LABEL_498;
        }
        v296 = *(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL);
        v297 = *(_QWORD *)(v296 + 536);
        v298 = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(v296 + 528) + 8LL) + 336LL);
        if ( (a2->Flags.Value & 4) != 0 )
        {
          v299 = v298(v297, hSource);
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0pqpqtt((v714.Flags.Value >> 3) & 1, *((_QWORD *)v7 + 40) == 0LL, v299);
          goto LABEL_443;
        }
        v298(v297, v672);
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 528LL)
                                                           + 8LL)
                                               + 336LL))(
          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 536LL),
          hSource);
        v302 = v714.SubRectCnt;
        v303 = v714.pDstSubRects;
        v304 = a2->hWindow;
        CurrentIrql = (HDEV)*((_QWORD *)v7 + 40);
        v660 = v714.SubRectCnt;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
        {
          McTemplateK0ppxppttqddddddddq(
            HIDWORD(*(_QWORD *)&v714.DstRect.left),
            HIDWORD(*(_QWORD *)&v714.DstRect.right),
            HIDWORD(*(_QWORD *)&v714.SrcRect.left),
            v304,
            CurrentIrql);
          v302 = v660;
        }
        v305 = 0;
        if ( !v302 )
          goto LABEL_443;
        v306 = CurrentIrql;
        while ( 1 )
        {
          v307 = v302 - v305;
          if ( v302 - v305 > 0x10 )
            break;
          v308 = v302 - v305;
          if ( v307 )
            goto LABEL_437;
LABEL_439:
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
          {
            LODWORD(v649) = v308;
            LODWORD(Timeout) = v307 <= 0x10;
            McTemplateK0ptqDR2DR2DR2DR2((__int64)v729, v300, v301, v306, Timeout, v649, v729, v728, v727, v726);
          }
          v302 = v660;
          v305 += 16;
          if ( v305 >= v660 )
          {
            v290 = v671;
            goto LABEL_443;
          }
        }
        v308 = 16;
LABEL_437:
        v300 = 0LL;
        LODWORD(v301) = 0;
        do
        {
          v309 = (unsigned int)v301 + v305;
          v301 = (unsigned int)(v301 + 1);
          v309 *= 2LL;
          v300 += 4LL;
          *(_DWORD *)&v728[v300 + 60] = *(&v303->left + 2 * v309);
          *(_DWORD *)&v727[v300 + 60] = *(&v303->right + 2 * v309);
          *(_DWORD *)&v726[v300 + 60] = *(&v303->top + 2 * v309);
          *(_DWORD *)&v726[v300 - 4] = *(&v303->bottom + 2 * v309);
        }
        while ( (unsigned int)v301 < v308 );
        goto LABEL_439;
      }
    }
    v363 = (_QWORD *)WdLogNewEntry5_WdWarning(v274, v253, v254);
    v363[3] = -1071775744LL;
    v363[4] = v7;
    v363[5] = v175;
    WdLogEvent5_WdWarning(v363);
    v364 = *((_QWORD *)v7 + 2);
    if ( *(_BYTE *)(*(_QWORD *)(v364 + 40) + 306LL) )
    {
      if ( (unsigned int)ADAPTER_DISPLAY::GetVidPnSourceOwnerType(
                           *(DXGADAPTER ***)(*(_QWORD *)(v364 + 1672) + 2304LL),
                           v276) == 1 )
      {
        v365 = *(unsigned __int8 *)(*(_QWORD *)((char *)v279
                                              + *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 1672LL)
                                                                      + 2304LL)
                                                          + 112LL)
                                              + 712)
                                  + 306LL);
        if ( (_BYTE)v365 )
        {
          v366 = (_QWORD *)WdLogNewEntry5_WdError(v365);
          v366[3] = *((_QWORD *)v7 + 2);
          v366[4] = v175;
          v366[5] = ADAPTER_DISPLAY::GetVidPnSourceOwner(
                      *(DXGADAPTER ***)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 1672LL) + 2304LL),
                      v276);
          WdLogEvent5_WdError(v366);
          LOBYTE(v367) = 1;
          *(_BYTE *)(*((_QWORD *)v7 + 2) + 1730LL) = 1;
          if ( (unsigned __int8)WdIsDebuggerPresent(v367) )
          {
            DbgPrintEx(0x65u, 0, "Breaking in to allow debug of potential DWM swap chain leak");
            __debugbreak();
          }
        }
      }
    }
    LODWORD(v261) = -1071775744;
LABEL_524:
    v368 = *((_QWORD *)v7 + 40);
    if ( v368 )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 528LL)
                                                          + 8LL)
                                              + 496LL))(
        v368,
        0LL);
      *((_QWORD *)v7 + 40) = 0LL;
    }
    if ( (_DWORD)v261 == -1071774920 )
    {
      if ( (a2->Flags.Value & 4) != 0 )
      {
        v369 = *((_QWORD *)v7 + 2);
        v370 = *(_QWORD *)(v369 + 1672);
        if ( v370 == *(_QWORD *)(*(_QWORD *)(v369 + 16) + 16LL) )
        {
          ADAPTER_DISPLAY::DisableOverlayPlanes(*(ADAPTER_DISPLAY **)(v370 + 2304), (unsigned int)v276, v370);
          v371 = v679;
          DXGDEVICE::SetDisplayedPrimary(*((struct _KTHREAD ***)v7 + 2), v276, v671, *((_DWORD *)v679 + 34), 1u);
          LODWORD(v261) = 0;
          *(_DWORD *)(*((_QWORD *)v7 + 2) + 4LL * (_QWORD)v175 + 1608) = *((_DWORD *)v371 + 30);
LABEL_983:
          LODWORD(v399) = (_DWORD)v261;
          goto LABEL_984;
        }
        DXGDEVICE::SetDisplayedPrimary((struct _KTHREAD **)v369, v276, v671, 0, 1u);
      }
      LODWORD(v261) = 0;
      goto LABEL_983;
    }
    goto LABEL_498;
  }
  v269 = (_QWORD *)((char *)v7 + 320);
  LODWORD(v261) = DXGCONTEXT::AcquireDmaBuffer(
                    v7,
                    (struct _VIDMM_DMA_BUFFER **)v7 + 40,
                    (struct COREDEVICEACCESS *)a3,
                    0);
  if ( (int)v261 >= 0 )
  {
    if ( !*v269 )
    {
      v271 = WdLogNewEntry5_WdAssertion(v270);
      *(_QWORD *)(v271 + 24) = 3931LL;
      WdLogEvent5_WdAssertion(v271);
    }
    goto LABEL_393;
  }
LABEL_510:
  v360 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v360 + 160)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v360 + 144))
    && (_DWORD)v261 != -1073741130 )
  {
    v361 = WdLogNewEntry5_WdAssertion(v360);
    *(_QWORD *)(v361 + 24) = 5265LL;
    WdLogEvent5_WdAssertion(v361);
  }
  if ( *v269 )
  {
    v362 = WdLogNewEntry5_WdAssertion(v360);
    *(_QWORD *)(v362 + 24) = 5266LL;
    WdLogEvent5_WdAssertion(v362);
  }
  LODWORD(v24) = (_DWORD)v261;
LABEL_985:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v690);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v680);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v671);
  return (unsigned int)v24;
}
