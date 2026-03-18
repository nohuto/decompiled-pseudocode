/*
 * XREFs of ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00B43A0
 * Callers:
 *     DxgkPresent @ 0x1C008FA90 (DxgkPresent.c)
 *     ?HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C019EEA8 (-HandleVistaBltStub@DXGCONTEXT@@QEAAJ_KPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@.c)
 * Callees:
 *     ??0DXGPRESENTMUTEX@@QEAA@QEAVADAPTER_RENDER@@@Z @ 0x1C0004A28 (--0DXGPRESENTMUTEX@@QEAA@QEAVADAPTER_RENDER@@@Z.c)
 *     ??1DXGPRESENTMUTEX@@QEAA@XZ @ 0x1C0004A6C (--1DXGPRESENTMUTEX@@QEAA@XZ.c)
 *     ?Release@DXGPRESENTMUTEX@@QEAAXXZ @ 0x1C0004A78 (-Release@DXGPRESENTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGPRESENTMUTEX@@QEAAXXZ @ 0x1C0004A9C (-Acquire@DXGPRESENTMUTEX@@QEAAXXZ.c)
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1C0005208 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     ??0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0005450 (--0DXGVALIDATIONPROCESSATTACH@@QEAA@PEAVDXGADAPTER@@@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0005890 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJXZ @ 0x1C000590C (-AcquireShared@COREDEVICEACCESS@@QEAAJXZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ @ 0x1C0005B1C (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0005BF0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0005C34 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0006260 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?ReleaseDdiSync@DXGADAPTER@@QEAAXXZ @ 0x1C0006330 (-ReleaseDdiSync@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z @ 0x1C00063B0 (-AcquireDdiSync@DXGADAPTER@@QEAAXW4DXGADAPTERDDISYNC_LEVEL@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006E30 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000701C (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C000B4C0 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z @ 0x1C000B5F8 (-GetCddInterface@ADAPTER_DISPLAY@@QEBAPEBU_CDDDXGK_INTERFACE@@I@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C000B6D4 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D778 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D7E0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?GetContentRect@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z @ 0x1C0020820 (-GetContentRect@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z.c)
 *     ?VmBusSendBlt@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@IIPEAUtagRECT@@2IPEBU4@IPEAE@Z @ 0x1C002ECB0 (-VmBusSendBlt@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAVDXGCONTEXT@@IIPEAUtagRECT@@2IPEBU4@IPEAE@Z.c)
 *     ?VmBusSendLock2@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK2@@EII@Z @ 0x1C003056C (-VmBusSendLock2@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK2@@EII@Z.c)
 *     ?VmBusSendSetRedirectedFlipFenceValue@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAVDXGSYNCOBJECT@@_K@Z @ 0x1C0031730 (-VmBusSendSetRedirectedFlipFenceValue@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAVDXGSYNCOBJECT@@_K@Z.c)
 *     Template_ppxppttqddddddddq @ 0x1C0038EF8 (Template_ppxppttqddddddddq.c)
 *     Template_pqpqtt @ 0x1C00390AC (Template_pqpqtt.c)
 *     Template_ptqDR2DR2DR2DR2 @ 0x1C0039170 (Template_ptqDR2DR2DR2DR2.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C003A65C (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?QueueWork@DXGWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z @ 0x1C003B698 (-QueueWork@DXGWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C00871E4 (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?GrowRectList@DXGPRESENT@@QEAAJI@Z @ 0x1C0091364 (-GrowRectList@DXGPRESENT@@QEAAJI@Z.c)
 *     ?ValidatePresentRegions@DXGCONTEXT@@AEBAJPEBU_D3DKMT_PRESENT@@II@Z @ 0x1C00B23EC (-ValidatePresentRegions@DXGCONTEXT@@AEBAJPEBU_D3DKMT_PRESENT@@II@Z.c)
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00B2DA0 (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG.c)
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C00B9EE0 (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 *     ?SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@HPEAT_LARGE_INTEGER@@PEAUDXGK_PRESENT_PARAMS@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C00BDE10 (-SubmitPresentHistoryToken@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAVCOREDEVICEACCES.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SynchronizePresentToPrimary@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVDXGPRESENTMUTEX@@E@Z @ 0x1C00BF62C (-SynchronizePresentToPrimary@DXGDEVICE@@QEAAXPEAVDXGCONTEXT@@PEAVDXGPRESENTMUTEX@@E@Z.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00C12EC (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1C00C1704 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C00CA330 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00CCDB0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00CCDF0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00CCF24 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C00CFC9C (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C00D3290 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00D3410 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C00E6770 (-DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?SetAllocationForSinglePlanePresent@ADAPTER_DISPLAY@@QEAAXIPEBVDXGALLOCATION@@@Z @ 0x1C00E68B0 (-SetAllocationForSinglePlanePresent@ADAPTER_DISPLAY@@QEAAXIPEBVDXGALLOCATION@@@Z.c)
 *     ?GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATION_MODE_TYPE@@@Z @ 0x1C00E6AF0 (-GetCurrentOrientation@ADAPTER_DISPLAY@@QEAA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@IW4_ROTATI.c)
 *     ?ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@IPEAPEAV2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01010E4 (-ProcessPresent@OUTPUTDUPL_MGR@@QEAAJPEAVDXGCONTEXT@@PEBU_D3DKMT_OUTPUTDUPLPRESENT@@IPEAPEAV2@PE.c)
 *     ?CheckInput@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@II@Z @ 0x1C0101C2C (-CheckInput@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@II@Z.c)
 *     ?CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3DDDIFORMAT@@H@Z @ 0x1C0102280 (-CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3.c)
 *     ?GetDdiSubRectList@DXGPRESENT@@QEBAPEAUtagRECT@@I@Z @ 0x1C016B3A8 (-GetDdiSubRectList@DXGPRESENT@@QEBAPEAUtagRECT@@I@Z.c)
 *     ?UpdatePostComposition@DXGCONTEXT@@QEAAXIEII@Z @ 0x1C016B760 (-UpdatePostComposition@DXGCONTEXT@@QEAAXIEII@Z.c)
 *     ?WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z @ 0x1C016B93C (-WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Unlock@CWin32kLocks@@QEAAXXZ @ 0x1C016CC60 (-Unlock@CWin32kLocks@@QEAAXXZ.c)
 *     ?Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z @ 0x1C016CCD0 (-Lock@CWin32kLocks@@QEAAJPEAUHWND__@@HHH@Z.c)
 *     ?PresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@PEAUtagRECT@@@Z @ 0x1C01724E0 (-PresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRE.c)
 *     ?IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z @ 0x1C0188048 (-IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C019527C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ?AllowLegacyPresent@DXGDEVICE@@QEBAEI@Z @ 0x1C019DD14 (-AllowLegacyPresent@DXGDEVICE@@QEBAEI@Z.c)
 *     ?CheckOcclusion@DXGPRESENT@@QEAAEXZ @ 0x1C019EB30 (-CheckOcclusion@DXGPRESENT@@QEAAEXZ.c)
 *     ?IntersectRect@DXGPRESENT@@SAEPEAUtagRECT@@PEBU2@1@Z @ 0x1C019F2FC (-IntersectRect@DXGPRESENT@@SAEPEAUtagRECT@@PEBU2@1@Z.c)
 *     ?OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z @ 0x1C019F49C (-OpenCddPrimaryHandle@DXGDEVICE@@QEAAIIEI@Z.c)
 *     ?PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z @ 0x1C01A0068 (-PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z.c)
 */

__int64 __fastcall DXGCONTEXT::Present(
        DXGCONTEXT *this,
        struct _D3DKMT_PRESENT *a2,
        struct _KTHREAD ***a3,
        struct DXGADAPTERSTOPRESETLOCKSHARED *a4,
        struct CWin32kLocks *a5,
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
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // ecx
  D3DKMT_HANDLE hDestination; // eax
  bool v21; // zf
  int v22; // ecx
  int v23; // r12d
  D3DKMT_HANDLE v24; // esi
  __int64 v25; // rcx
  struct _EX_RUNDOWN_REF *v26; // rbx
  unsigned int v27; // r13d
  LONG *v28; // rdi
  __int64 v29; // r13
  __int64 v30; // rcx
  __int64 v31; // r8
  int v32; // r9d
  unsigned int v33; // ecx
  __int64 v34; // r8
  int v35; // edx
  struct DXGALLOCATION *v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rcx
  _QWORD *v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  _QWORD *v42; // rax
  D3DKMT_HANDLE v43; // ebx
  __int64 v44; // r13
  __int64 v45; // rcx
  __int64 v46; // r8
  int v47; // r9d
  unsigned int v48; // ecx
  __int64 v49; // r8
  int v50; // edx
  struct DXGALLOCATION *v51; // rdx
  __int64 v52; // rdx
  __int64 v53; // rcx
  _QWORD *v54; // rax
  _OWORD *v55; // rdx
  HDEV v56; // r13
  __int64 v57; // rax
  __int64 v58; // rcx
  _QWORD *v59; // rax
  __int64 v60; // rcx
  __int64 CurrentProcess; // rax
  __int64 v62; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rdi
  __int64 *ThreadProperty; // rax
  __int64 v70; // rsi
  __int64 v71; // rax
  __int64 v72; // rcx
  __int64 v73; // r8
  int v74; // r9d
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 v79; // rdi
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v81; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 v83; // rdx
  __int64 v84; // r8
  __int64 v85; // r9
  __int64 v86; // r13
  __int64 v87; // rcx
  _QWORD *v88; // rax
  HDEV v89; // rcx
  _QWORD *v90; // rax
  _QWORD *v91; // rax
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // rax
  __int64 v95; // rdx
  __int64 v96; // rcx
  _QWORD *v97; // rax
  struct DXGALLOCATION *v98; // rcx
  D3DKMT_HANDLE v99; // eax
  __int64 v100; // rdx
  _QWORD *v101; // rax
  __int64 v102; // rsi
  unsigned int v103; // r13d
  _QWORD *v104; // rax
  ULONG_PTR v105; // rcx
  unsigned int VidPnSourceId; // r13d
  __int64 v107; // rcx
  __int64 v108; // rax
  int v109; // eax
  __int64 v110; // rdx
  RECT *p_SrcRect; // rcx
  __int64 v112; // r8
  __int64 v113; // r9
  _QWORD *v114; // rax
  unsigned int v115; // ecx
  __int64 v116; // rcx
  _QWORD *v117; // rax
  LONG v118; // eax
  unsigned int v119; // r10d
  unsigned int v120; // esi
  UINT v121; // ebx
  __int64 v122; // rsi
  __int64 v123; // rcx
  LONG v124; // r10d
  __int64 v125; // rcx
  const RECT *v126; // r11
  int v127; // r10d
  __int64 v128; // rdx
  RECT DstRect; // xmm0
  _QWORD *v130; // rax
  __int64 v131; // rdx
  __int64 v132; // rcx
  _QWORD *v133; // rax
  _QWORD *v134; // rax
  UINT v135; // ecx
  _QWORD *v136; // rax
  __int64 v137; // rdx
  _QWORD *v138; // rax
  LONG v139; // eax
  UINT m; // ebx
  __int64 v141; // rdi
  __int64 v142; // rcx
  __int64 v143; // rdi
  __int64 v144; // rbx
  __int64 v145; // rcx
  __int64 v146; // rax
  __int64 v147; // rax
  CWin32kLocks *v148; // rcx
  __int64 v149; // rax
  __int64 v150; // rsi
  __int64 v151; // rbx
  __int64 v152; // rax
  __int64 v153; // rbx
  __int64 v154; // rax
  _QWORD *v155; // rax
  _QWORD *v156; // rax
  __int64 v157; // rdx
  __int64 v158; // rcx
  _QWORD *v159; // rax
  __int64 v160; // rdx
  ULONG_PTR Count; // rax
  __int64 v162; // rax
  _QWORD *v163; // rax
  __int64 v164; // rcx
  __int64 v165; // rax
  __int64 v166; // rdx
  __int64 v167; // rcx
  __int64 v168; // r8
  _QWORD *v169; // rax
  __int64 v170; // r8
  __int64 v171; // rax
  __int64 v172; // rax
  __int64 v173; // rax
  __int64 v174; // rdi
  __int64 v175; // rdx
  __int64 v176; // rcx
  __int64 v177; // r8
  __int64 v178; // rax
  __int64 v179; // rax
  struct VIDSCH_SUBMIT_DATA_BASE *v180; // rsi
  int v181; // ecx
  int v182; // ecx
  int v183; // ecx
  UINT v184; // ecx
  UINT v185; // ecx
  UINT Duration; // eax
  D3DKMT_PRESENT_RGNS *pPresentRegions; // rax
  int v188; // eax
  __int64 v189; // rdx
  __int64 v190; // rcx
  __int64 v191; // r8
  __int64 v192; // r9
  _QWORD *v193; // rax
  __int64 v194; // rsi
  __int64 v195; // rax
  __int64 v196; // rcx
  __int64 v197; // r8
  int v198; // r9d
  __int64 v199; // rcx
  __int64 v200; // rsi
  ULONG_PTR v201; // rax
  struct VIDSCH_SUBMIT_DATA_BASE *v202; // rax
  __int64 v203; // rcx
  __int64 v204; // rax
  int v205; // eax
  __int64 v206; // rcx
  __int64 v207; // rsi
  __int64 v208; // rax
  _QWORD *v209; // rax
  DXGDEVICE *v210; // r10
  __int64 v211; // rax
  __int64 v212; // rcx
  struct VIDSCH_SUBMIT_DATA_BASE *v213; // rbx
  DXGCONTEXT *v214; // rcx
  __int64 v215; // rax
  _QWORD *v216; // rax
  __int64 v217; // rcx
  __int64 v218; // rbx
  __int64 v219; // rax
  __int64 v220; // rcx
  __int64 v221; // rcx
  __int64 v222; // rax
  __int64 v223; // rcx
  __int64 v224; // rcx
  int v225; // ebx
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v226; // eax
  __int64 v227; // r8
  __int64 v228; // r9
  __int64 v229; // rdx
  __int64 v230; // r8
  __int64 v231; // r9
  int v232; // eax
  __int64 v233; // rcx
  struct DXGPRESENTMUTEX *v234; // r8
  __int64 v235; // rax
  const struct _CDDDXGK_INTERFACE *CddInterface; // rax
  __int64 v237; // rcx
  __int64 v238; // rdx
  UINT v239; // edi
  CWin32kLocks *v240; // rdx
  __int64 v241; // r8
  __int64 v242; // r9
  __int64 v243; // rcx
  __int64 v244; // rbx
  __int64 v245; // r8
  struct DXGALLOCATION *v246; // rdi
  __int64 v247; // rax
  __int64 v248; // r8
  __int64 v249; // r9
  __int64 v250; // rdx
  __int64 v251; // r8
  __int64 v252; // r9
  int v253; // eax
  __int64 v254; // rcx
  struct DXGPRESENTMUTEX *v255; // r8
  __int64 v256; // rax
  __int64 v257; // rax
  _QWORD *v258; // rax
  __int64 v259; // rax
  __int64 v260; // rax
  __int64 v261; // rax
  _QWORD *v262; // rbx
  __int64 v263; // rcx
  __int64 v264; // rax
  __int64 v265; // rdi
  CWin32kLocks *v266; // rcx
  __int64 v267; // rax
  __int64 v268; // rax
  struct DXGALLOCATION *v269; // rbx
  __int64 v270; // rdi
  __int64 v271; // rax
  __int64 v272; // rdi
  __int64 v273; // rax
  _QWORD *v274; // rax
  _QWORD *v275; // rax
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v276; // edi
  __int64 v277; // rax
  _QWORD *v278; // rax
  struct DXGALLOCATION *v279; // rbx
  __int64 v280; // rax
  __int64 v281; // rcx
  _QWORD *v282; // rax
  __int64 v283; // rcx
  int v284; // eax
  int v285; // ecx
  __int64 v286; // rax
  __int64 v287; // rcx
  __int64 (__fastcall *v288)(__int64, _QWORD); // rax
  __int64 v289; // r8
  __int64 v290; // rdx
  UINT v291; // eax
  const RECT *v292; // rsi
  HWND v293; // r9
  UINT v294; // edi
  __int64 v295; // rbx
  __int64 v296; // r8
  unsigned int v297; // r9d
  unsigned int v298; // r10d
  __int64 v299; // rcx
  struct VIDSCH_SUBMIT_DATA_BASE *v300; // rsi
  __int64 v301; // rcx
  __int64 v302; // rax
  __int64 v303; // rax
  __int64 v304; // rcx
  __int64 v305; // rcx
  __int64 v306; // rsi
  __int64 v307; // rax
  __int64 v308; // rcx
  __int64 v309; // r8
  int v310; // r9d
  __int64 v311; // rax
  __int64 v312; // r8
  __int64 v313; // r9
  __int64 v314; // rcx
  char v315; // si
  __int64 v316; // rdx
  __int64 v317; // rcx
  __int64 v318; // rcx
  __int64 v319; // rax
  __int64 v320; // rcx
  __int64 v321; // rax
  __int64 v322; // rax
  struct _KTHREAD *v323; // rcx
  __int64 v324; // rax
  _QWORD *v325; // rax
  __int64 v326; // rbx
  __int64 v327; // rdx
  __int64 v328; // rcx
  __int64 v329; // r8
  __int64 v330; // r9
  __int64 v331; // rax
  __int64 v332; // rdx
  __int64 v333; // rcx
  __int64 v334; // r8
  int v335; // r9d
  __int64 v336; // rax
  __int64 v337; // rax
  CWin32kLocks *v338; // r8
  __int64 v339; // rcx
  __int64 v340; // rdx
  __int64 v341; // rax
  _QWORD *v342; // rax
  __int64 v343; // rbx
  _QWORD *v344; // rax
  __int64 v345; // rax
  struct _LIST_ENTRY *v346; // rbx
  struct DXGPROCESS *v347; // rax
  struct DXGALLOCATION *v348; // rbx
  __int64 v349; // rsi
  __int64 v350; // rcx
  ULONG BroadcastContextCount; // eax
  D3DKMT_HANDLE *BroadcastContext; // r14
  D3DKMT_HANDLE *v353; // rax
  __int128 v354; // xmm1
  int v355; // eax
  __int64 v356; // rcx
  __int64 v357; // rax
  __int64 v358; // rax
  _QWORD *v359; // rax
  __int64 v360; // rcx
  DXGDEVICE *v361; // r10
  __int64 v362; // rax
  __int64 v363; // rcx
  int v364; // eax
  struct DXGALLOCATION *v365; // rbx
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v366; // eax
  unsigned int v367; // edx
  _QWORD *v368; // rax
  __int128 v369; // xmm0
  __int64 v370; // rax
  int v371; // eax
  __int64 v372; // rdx
  __int64 Format; // rcx
  __int64 v374; // rsi
  _QWORD *v375; // rax
  int v376; // edx
  _QWORD *v377; // rax
  __int64 v378; // rax
  __int64 v379; // rcx
  __int64 v380; // rax
  _QWORD *v381; // rax
  _QWORD *v382; // rax
  D3DKMT_PRESENT_MODEL Model; // eax
  __int64 v384; // rdi
  __int64 v385; // rax
  __int64 v386; // rcx
  __int64 v387; // r8
  int v388; // r9d
  __int64 v389; // rax
  unsigned int ProcessSessionId; // eax
  __int64 v391; // rdx
  BOOL v392; // r13d
  __int64 v393; // rdx
  __int64 v394; // rcx
  __int64 v395; // r8
  DXGADAPTERSTOPRESETLOCKSHARED *v396; // rbx
  _QWORD *v397; // rax
  struct _KTHREAD **v398; // rcx
  HANDLE PresentLimitSemaphore; // rcx
  NTSTATUS v400; // eax
  __int64 v401; // rcx
  PVOID v402; // rbx
  __int64 v403; // rsi
  int v404; // eax
  __int64 v405; // rdx
  __int64 v406; // r8
  __int64 v407; // rax
  DXGADAPTERSTOPRESETLOCKSHARED *v408; // r13
  __int64 v409; // rbx
  _QWORD *v410; // rax
  struct _KTHREAD **v411; // rcx
  __int64 v412; // rcx
  __int64 v413; // r8
  __int64 v414; // rax
  __int64 v415; // rdx
  __int64 v416; // rax
  __int64 v417; // rdx
  __int64 v418; // r8
  __int64 v419; // r9
  __int64 v420; // rdi
  __int64 *v421; // rax
  PERESOURCE *v422; // rcx
  __int64 v423; // rax
  __int64 v424; // rax
  __int64 v425; // rdx
  __int64 v426; // rcx
  __int64 v427; // r8
  __int64 v428; // r9
  __int64 v429; // rax
  _QWORD *v430; // rax
  PERESOURCE *v431; // rbx
  D3DKMT_HANDLE Reserved; // ebx
  __int64 v433; // rcx
  __int64 v434; // r8
  int v435; // r9d
  unsigned int v436; // ecx
  __int64 v437; // r8
  int v438; // edx
  __int64 v439; // rbx
  __int64 v440; // rdx
  __int64 v441; // rcx
  __int64 v442; // r8
  __int64 v443; // r9
  UINT64 FenceValue; // rsi
  __int64 v445; // rax
  _QWORD *v446; // rax
  _QWORD *v447; // rax
  __int64 v448; // r8
  __int64 v449; // rcx
  _QWORD *v450; // rax
  __int64 v451; // rax
  _QWORD *v452; // rax
  int v453; // esi
  __int64 v454; // rax
  __int64 v455; // rcx
  __int64 v456; // rax
  __int64 v457; // rax
  unsigned int v458; // r13d
  UINT v459; // edi
  COREACCESS *v460; // rdi
  _QWORD *v461; // rax
  struct _KTHREAD **v462; // rcx
  __int64 v463; // rax
  __int64 v464; // rdx
  __int64 v465; // rcx
  __int64 v466; // r8
  __int64 v467; // r9
  __int64 v468; // rax
  _QWORD *v469; // r13
  __int64 v470; // rcx
  __int64 v471; // rax
  __int64 v472; // rax
  int v473; // eax
  __int64 v474; // rax
  __int64 v475; // rdx
  int v476; // r13d
  __int64 v477; // rax
  __int64 v478; // rcx
  __int64 v479; // r8
  __int64 v480; // r9
  __int64 v481; // rax
  __int64 v482; // rcx
  __int64 v483; // r8
  __int64 v484; // r9
  __int64 v485; // rax
  __int64 v486; // rdi
  int v487; // eax
  __int64 v488; // rbx
  int v489; // eax
  __int64 v490; // rax
  __int64 v491; // rax
  __int64 v492; // rax
  __int64 v493; // rax
  __int64 v494; // rax
  struct _KTHREAD *v495; // rcx
  __int64 v496; // rax
  BOOL v497; // ebx
  __int64 v498; // rdx
  __int64 v499; // r8
  __int64 v500; // r9
  int v501; // eax
  __int64 v502; // rcx
  __int64 v503; // rax
  __int64 v504; // rcx
  int v505; // eax
  int v506; // r13d
  HANDLE CurrentThreadId; // rax
  __int64 k; // rdx
  struct DXGPRESENTMUTEX *v509; // r8
  __int64 v510; // r9
  __int64 v511; // rcx
  DXGADAPTERSTOPRESETLOCKSHARED *v512; // rbx
  COREACCESS *v513; // r13
  _QWORD *v514; // rax
  struct _KTHREAD **v515; // rcx
  CWin32kLocks *v516; // rdi
  HWND hWindow; // rbx
  __int64 v518; // rcx
  __int64 v519; // rax
  __int64 v520; // rax
  int v521; // esi
  __int64 v522; // rax
  __int64 v523; // rcx
  __int64 v524; // rdx
  __int64 v525; // r8
  __int64 v526; // r9
  __int64 v527; // rbx
  CWin32kLocks *v528; // rcx
  __int64 v529; // rdi
  int v530; // eax
  __int64 v531; // rax
  __int64 v532; // rax
  __int64 v533; // rdx
  __int64 v534; // rcx
  CWin32kLocks *v535; // rbx
  __int64 v536; // rax
  __int64 v537; // rax
  DXGADAPTERSTOPRESETLOCKSHARED *v538; // rcx
  __int64 v539; // rbx
  _QWORD *v540; // rax
  struct _KTHREAD **v541; // rcx
  __int64 v542; // rcx
  __int64 v543; // r8
  __int64 v544; // rax
  __int64 v545; // rcx
  HDC v546; // r13
  const struct DXGDEVICE *v547; // rax
  HDC v548; // r8
  __int64 v549; // rdx
  __int64 v550; // r8
  __int64 v551; // r9
  int v552; // eax
  __int64 v553; // rcx
  __int64 v554; // rbx
  __int64 v555; // rax
  unsigned __int8 v556; // r13
  int v557; // ebx
  struct DXGPRESENTMUTEX *v558; // r8
  __int64 v559; // rcx
  int v560; // ecx
  __int64 v561; // rax
  __int64 v562; // rcx
  __int64 v563; // rax
  __int64 v564; // rax
  struct DXGALLOCATION *v565; // r13
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v566; // eax
  int top; // eax
  int left; // eax
  LONG bottom; // eax
  LONG right; // eax
  __int64 v571; // rcx
  __int64 v572; // rax
  __int64 v573; // rax
  struct tagRECT *DdiSubRectList; // rax
  __int64 SubRectCnt; // rcx
  int v576; // ebx
  __int64 v577; // rdx
  __int64 v578; // rcx
  __int64 v579; // r8
  __int64 v580; // r9
  struct DXGPROCESS *Current; // rbx
  __int64 v582; // rdx
  __int64 v583; // r9
  int v584; // r8d
  __int64 v585; // rdx
  struct DXGALLOCATION *v586; // rdx
  __int64 v587; // rdx
  __int64 v588; // rcx
  __int64 v589; // r8
  __int64 v590; // r9
  __int64 v591; // rax
  struct VMBCHANNEL__ **v592; // rbx
  struct DXGPROCESS *v593; // rax
  int v594; // ebx
  D3DKMT_HANDLE v595; // edi
  __int64 v596; // rax
  __int64 v597; // rdx
  const RECT *pDstSubRects; // rdi
  UINT v599; // r13d
  HWND v600; // r9
  UINT v601; // ebx
  struct DXGALLOCATION *v602; // r15
  __int64 v603; // r8
  unsigned int v604; // r9d
  unsigned int v605; // r10d
  __int64 v606; // rcx
  DXGDEVICE *v607; // rbx
  unsigned __int8 v608; // r13
  char v609; // bl
  __int64 v610; // rcx
  __int64 v611; // rax
  __int64 v612; // rax
  __int64 v613; // rax
  CWin32kLocks *v614; // rbx
  int v615; // eax
  __int64 v616; // rdx
  __int64 v617; // rcx
  __int64 v618; // r8
  __int64 v619; // r9
  DXGADAPTER *v620; // rbx
  struct DXGPROCESS *v621; // rax
  int v622; // eax
  __int64 v623; // rax
  __int64 v624; // rdx
  __int64 v625; // rcx
  __int64 v626; // r8
  __int64 v627; // r9
  __int64 v628; // rax
  __int64 v629; // rax
  int v630; // eax
  CWin32kLocks *v631; // rdx
  __int64 v632; // rcx
  __int64 v633; // rax
  struct DXGADAPTERSTOPRESETLOCKSHARED *v634; // r13
  DXGDEVICE *v635; // rcx
  __int64 v636; // rax
  DXGDEVICE *v637; // rbx
  unsigned __int8 v638; // di
  char v639; // bl
  __int64 v640; // rdx
  __int64 v641; // rcx
  __int64 v642; // r8
  __int64 v643; // r9
  __int64 v644; // rax
  CWin32kLocks *v645; // rbx
  __int64 v646; // rsi
  int v647; // eax
  __int64 v648; // rcx
  __int64 v649; // rax
  int v650; // eax
  __int64 v651; // rcx
  __int64 v652; // rcx
  __int64 v653; // rax
  HDC v654; // r13
  __int64 v655; // rax
  __int64 v656; // rdx
  __int64 v657; // rax
  __int64 v658; // rbx
  __int64 *v659; // rax
  __int64 v660; // rbx
  __int64 v661; // rcx
  DXGADAPTERSTOPRESETLOCKSHARED *v662; // rsi
  COREACCESS *v663; // rsi
  _QWORD *v664; // rax
  struct _KTHREAD **v665; // rcx
  __int64 v666; // r8
  __int64 v667; // r9
  __int64 v668; // rax
  __int64 v669; // rdx
  __int64 v670; // rcx
  DXGADAPTERSTOPRESETLOCKSHARED *v671; // r13
  __int64 v672; // rbx
  _QWORD *v673; // rax
  struct _KTHREAD **v674; // rcx
  __int64 v675; // rcx
  __int64 v676; // r8
  __int64 v677; // rcx
  unsigned int v678; // r13d
  LONG *v679; // rbx
  unsigned int v680; // ecx
  __int64 v681; // rax
  unsigned int v682; // ecx
  __int64 v683; // rcx
  const RECT *v684; // rcx
  int CurrentOrientation; // eax
  int v686; // ecx
  const struct tagRECT *ContentRect; // r9
  _DWORD *v688; // r8
  struct _VIDMM_DMA_BUFFER **v689; // rcx
  __int64 v690; // rdx
  const RECT *v691; // rsi
  UINT v692; // r13d
  HWND v693; // r9
  UINT v694; // edi
  struct DXGALLOCATION *v695; // rbx
  __int64 v696; // r8
  unsigned int v697; // r9d
  unsigned int v698; // r10d
  __int64 v699; // rcx
  struct VMBCHANNEL__ **v700; // rdi
  struct DXGPROCESS *v701; // rax
  int v702; // eax
  struct COREDEVICEACCESS *v703; // rsi
  struct DXGCONTEXT **v704; // r9
  __int64 v705; // rcx
  _QWORD *v706; // rax
  PVOID *Object; // [rsp+20h] [rbp-100h]
  PVOID *Objecta; // [rsp+20h] [rbp-100h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-F8h]
  int Src; // [rsp+40h] [rbp-E0h]
  size_t Size; // [rsp+48h] [rbp-D8h]
  int Sizea; // [rsp+48h] [rbp-D8h]
  struct VIDSCH_SUBMIT_DATA_BASE *v713; // [rsp+50h] [rbp-D0h]
  enum _D3DDDIFORMAT v714; // [rsp+58h] [rbp-C8h]
  int v715; // [rsp+A0h] [rbp-80h]
  UINT v716; // [rsp+A0h] [rbp-80h]
  int v717; // [rsp+A0h] [rbp-80h]
  int i; // [rsp+A0h] [rbp-80h]
  int v719; // [rsp+A0h] [rbp-80h]
  int v720; // [rsp+A0h] [rbp-80h]
  unsigned int j; // [rsp+A0h] [rbp-80h]
  unsigned int v723; // [rsp+B0h] [rbp-70h] BYREF
  unsigned int v724; // [rsp+B4h] [rbp-6Ch]
  enum _D3DDDIFORMAT CurrentProcessSessionId; // [rsp+B8h] [rbp-68h]
  CWin32kLocks *v726; // [rsp+C0h] [rbp-60h]
  struct DXGALLOCATION *v727; // [rsp+C8h] [rbp-58h] BYREF
  unsigned int v728; // [rsp+D0h] [rbp-50h]
  DXGADAPTERSTOPRESETLOCKSHARED *v729; // [rsp+D8h] [rbp-48h]
  unsigned int hSource; // [rsp+E0h] [rbp-40h]
  __int64 CurrentIrql; // [rsp+E8h] [rbp-38h]
  struct VIDSCH_SUBMIT_DATA_BASE *v732; // [rsp+F0h] [rbp-30h]
  __int64 v733; // [rsp+F8h] [rbp-28h]
  HDEV v734; // [rsp+100h] [rbp-20h]
  struct DXGALLOCATION *v735; // [rsp+108h] [rbp-18h] BYREF
  D3DKMT_HANDLE v736; // [rsp+110h] [rbp-10h]
  LONG *v737; // [rsp+118h] [rbp-8h] BYREF
  char v738[8]; // [rsp+120h] [rbp+0h] BYREF
  __int64 v739; // [rsp+128h] [rbp+8h]
  char v740; // [rsp+130h] [rbp+10h]
  __int64 v741; // [rsp+138h] [rbp+18h] BYREF
  char v742; // [rsp+140h] [rbp+20h]
  struct DXGALLOCATION *v743; // [rsp+148h] [rbp+28h] BYREF
  PERESOURCE *v744; // [rsp+150h] [rbp+30h] BYREF
  char v745; // [rsp+158h] [rbp+38h]
  struct DXGCONTEXT **v746; // [rsp+160h] [rbp+40h]
  struct DXGALLOCATION *v747; // [rsp+168h] [rbp+48h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+170h] [rbp+50h] BYREF
  __int64 v749; // [rsp+178h] [rbp+58h] BYREF
  DXGCONTEXT *v750; // [rsp+180h] [rbp+60h]
  __int128 v751; // [rsp+188h] [rbp+68h] BYREF
  __int128 v752; // [rsp+198h] [rbp+78h]
  __int128 v753; // [rsp+1A8h] [rbp+88h]
  struct DXGALLOCATION *v754; // [rsp+1B8h] [rbp+98h] BYREF
  struct DXGALLOCATION *v755; // [rsp+1C0h] [rbp+A0h] BYREF
  _DXGKARG_DESCRIBEALLOCATION v756; // [rsp+1C8h] [rbp+A8h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v757; // [rsp+1F8h] [rbp+D8h] BYREF
  _D3DKMT_LOCK2 v758; // [rsp+228h] [rbp+108h] BYREF
  PVOID v759; // [rsp+240h] [rbp+120h] BYREF
  __int64 v760; // [rsp+248h] [rbp+128h] BYREF
  struct _D3DKMT_UNLOCK v761; // [rsp+250h] [rbp+130h] BYREF
  struct _D3DKMT_LOCK v762; // [rsp+260h] [rbp+140h] BYREF
  _BYTE v763[24]; // [rsp+290h] [rbp+170h] BYREF
  _BYTE v764[24]; // [rsp+2A8h] [rbp+188h] BYREF
  __int128 v765; // [rsp+2C0h] [rbp+1A0h]
  _QWORD v766[68]; // [rsp+300h] [rbp+1E0h] BYREF
  struct _DXGKARG_PRESENT v767; // [rsp+520h] [rbp+400h] BYREF
  struct tagRECT v768; // [rsp+5D0h] [rbp+4B0h] BYREF
  _QWORD v769[2]; // [rsp+5E0h] [rbp+4C0h] BYREF
  struct tagRECT Source1; // [rsp+5F0h] [rbp+4D0h] BYREF
  struct tagRECT v771; // [rsp+600h] [rbp+4E0h] BYREF
  struct tagRECT v772; // [rsp+610h] [rbp+4F0h] BYREF
  char v773[8]; // [rsp+620h] [rbp+500h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+628h] [rbp+508h] BYREF
  _D3DKMT_OUTPUTDUPLPRESENT v775; // [rsp+660h] [rbp+540h] BYREF
  _BYTE v777[64]; // [rsp+7A0h] [rbp+680h] BYREF
  _BYTE v778[64]; // [rsp+7E0h] [rbp+6C0h] BYREF
  _BYTE v779[64]; // [rsp+820h] [rbp+700h] BYREF
  _BYTE v780[64]; // [rsp+860h] [rbp+740h] BYREF
  _BYTE v781[64]; // [rsp+8A0h] [rbp+780h] BYREF
  _BYTE v782[64]; // [rsp+8E0h] [rbp+7C0h] BYREF
  _BYTE v783[64]; // [rsp+920h] [rbp+800h] BYREF
  _BYTE v784[64]; // [rsp+960h] [rbp+840h] BYREF
  _BYTE v785[64]; // [rsp+9A0h] [rbp+880h] BYREF
  _BYTE v786[64]; // [rsp+9E0h] [rbp+8C0h] BYREF
  _BYTE v787[64]; // [rsp+A20h] [rbp+900h] BYREF
  _BYTE v788[64]; // [rsp+A60h] [rbp+940h] BYREF

  v7 = this;
  v726 = a5;
  v746 = a6;
  v9 = *((_QWORD *)this + 2);
  v750 = this;
  v729 = a4;
  v10 = *(_QWORD *)(v9 + 16);
  v732 = a7;
  v11 = *(_QWORD *)(v10 + 16);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v11 + 160)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v11 + 144)) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v11, a2, a3, a4);
    *(_QWORD *)(v12 + 24) = 2582LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( *((_QWORD *)v7 + 38) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v11, a2, a3, a4);
    *(_QWORD *)(v13 + 24) = 2583LL;
    WdLogEvent5_WdAssertion(v13);
  }
  Value = a2->Flags.Value;
  if ( (Value & 0x4000) != 0
    || (Value &= 0x12000u,
        v11 = *(_QWORD *)(*((_QWORD *)v7 + 2) + 40LL),
        v733 = *(_QWORD *)(v11 + 72),
        (_DWORD)Value == 73728) )
  {
    v15 = WdLogNewEntry5_WdWarning(v11, Value, a3, a4);
    *(_QWORD *)(v15 + 24) = v7;
    *(_QWORD *)(v15 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v15);
    return 3221225485LL;
  }
  memset(&v767, 0, sizeof(v767));
  v19 = *(_DWORD *)a7 | 0x10020;
  hSource = a2->hSource;
  hDestination = a2->hDestination;
  *(_DWORD *)a7 = v19;
  v21 = (a2->Flags.Value & 0x10000) == 0;
  v723 = hDestination;
  if ( v21 )
    *(_DWORD *)a7 = v19 | 1;
  v22 = *(_DWORD *)a7 | 0x100;
  *(_DWORD *)a7 = v22;
  *(_DWORD *)a7 = v22 ^ (v22 ^ (32 * a2->Flags.Value)) & 0x20000;
  if ( (a2->Flags.Value & 0x1000) != 0 )
    *((_DWORD *)a7 + 28) = a2->PresentCount;
  v23 = 0;
  if ( *(_QWORD *)(*((_QWORD *)v7 + 2) + 1800LL) != *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 16LL) )
    *((_DWORD *)a7 + 29) = 0;
  v24 = a2->hDestination;
  v25 = 0LL;
  v724 = 0;
  v26 = 0LL;
  v727 = 0LL;
  v27 = 0;
  v728 = 0;
  v28 = 0LL;
  CurrentProcessSessionId = D3DDDIFMT_UNKNOWN;
  v737 = 0LL;
  v747 = 0LL;
  v736 = 0;
  if ( v24 )
  {
    v29 = *(_QWORD *)(*((_QWORD *)v7 + 2) + 40LL);
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v29 + 168, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v32 = *(_DWORD *)(v29 + 184);
        if ( v32 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_q(v30, &EventBlockThread, v31, v32);
      }
      ExAcquirePushLockSharedEx(v29 + 168, 0LL);
    }
    v33 = (v24 >> 6) & 0xFFFFFF;
    if ( v33 < *(_DWORD *)(v29 + 208)
      && (v34 = *(_QWORD *)(v29 + 192),
          v35 = *(_DWORD *)(v34 + 16LL * v33 + 8),
          ((v24 >> 26) & 0x30) == (*(_BYTE *)(v34 + 16LL * v33 + 8) & 0x30))
      && (v35 & 0x1000) == 0
      && (v35 & 0xF) != 0
      && (*(_BYTE *)(v34 + 16LL * v33 + 8) & 0xF) == 5 )
    {
      v36 = *(struct DXGALLOCATION **)(v34 + 16LL * v33);
    }
    else
    {
      v36 = 0LL;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v754, v36);
    ExReleasePushLockSharedEx(v29 + 168, 0LL);
    KeLeaveCriticalRegion();
    DXGALLOCATIONREFERENCE::MoveAssign((struct DXGALLOCATION **)&v737, &v754);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v754);
    v28 = v737;
    if ( !v737 )
    {
      v39 = (_QWORD *)WdLogNewEntry5_WdWarning(v38, v37, v17, v18);
      v39[3] = -1073741811LL;
      v39[4] = v7;
      v39[5] = a2->hDestination;
      WdLogEvent5_WdWarning(v39);
      LODWORD(v28) = -1073741811;
      goto LABEL_1006;
    }
    v40 = *(_QWORD *)(*((_QWORD *)v737 + 1) + 16LL);
    v41 = *(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL);
    if ( *(_QWORD *)(v40 + 16) != *(_QWORD *)(v41 + 16) )
    {
      v42 = (_QWORD *)WdLogNewEntry5_WdError(v41, v40);
      v42[3] = *((_QWORD *)v7 + 2);
      v42[4] = v28;
      v42[5] = -1073741811LL;
      WdLogEvent5_WdError(v42);
      LODWORD(v28) = -1073741811;
      goto LABEL_1006;
    }
    v27 = 0;
    v25 = 0LL;
  }
  if ( (a2->Flags.Value & 0x8002) == 0 )
  {
    v43 = a2->hSource;
    v44 = *(_QWORD *)(*((_QWORD *)v7 + 2) + 40LL);
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v44 + 168, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v47 = *(_DWORD *)(v44 + 184);
        if ( v47 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_q(v45, &EventBlockThread, v46, v47);
      }
      ExAcquirePushLockSharedEx(v44 + 168, 0LL);
    }
    v48 = (v43 >> 6) & 0xFFFFFF;
    if ( v48 < *(_DWORD *)(v44 + 208)
      && (v49 = *(_QWORD *)(v44 + 192),
          v50 = *(_DWORD *)(v49 + 16LL * v48 + 8),
          ((v43 >> 26) & 0x30) == (*(_BYTE *)(v49 + 16LL * v48 + 8) & 0x30))
      && (v50 & 0x1000) == 0
      && (v50 & 0xF) != 0
      && (*(_BYTE *)(v49 + 16LL * v48 + 8) & 0xF) == 5 )
    {
      v51 = *(struct DXGALLOCATION **)(v49 + 16LL * v48);
    }
    else
    {
      v51 = 0LL;
    }
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v755, v51);
    ExReleasePushLockSharedEx(v44 + 168, 0LL);
    KeLeaveCriticalRegion();
    DXGALLOCATIONREFERENCE::MoveAssign(&v727, &v755);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v755);
    v26 = (struct _EX_RUNDOWN_REF *)v727;
    if ( !v727 )
    {
      v54 = (_QWORD *)WdLogNewEntry5_WdWarning(v53, v52, v17, v18);
      v54[3] = -1073741811LL;
      v54[4] = v7;
      v54[5] = a2->hSource;
      WdLogEvent5_WdWarning(v54);
      LODWORD(v28) = -1073741811;
      goto LABEL_1006;
    }
    v751 = 0uLL;
    v752 = 0uLL;
    v753 = 0uLL;
    v55 = *(_OWORD **)(*((_QWORD *)v727 + 6) + 16LL);
    *(_QWORD *)&v751 = v55;
    if ( (a2->Flags.Value & 0x10000000) != 0 )
    {
      *((_QWORD *)&v751 + 1) = *(HWND *)((char *)&a2[1].hWindow + 4);
      LODWORD(v752) = a2[1].hSource;
LABEL_106:
      v25 = DWORD2(v751);
      v27 = HIDWORD(v751);
      v728 = HIDWORD(v751);
      v724 = DWORD2(v751);
      CurrentProcessSessionId = (int)v752;
      goto LABEL_107;
    }
    v56 = *(HDEV *)(*((_QWORD *)v7 + 2) + 16LL);
    v57 = *((_QWORD *)v727 + 1);
    v734 = v56;
    v58 = *(_QWORD *)(v57 + 16);
    if ( *(_QWORD *)(v58 + 16) != *((_QWORD *)v56 + 2) )
    {
      v59 = (_QWORD *)WdLogNewEntry5_WdError(v58, v55);
      v59[3] = *((_QWORD *)v7 + 2);
      v59[4] = v26;
      v59[5] = -1073741811LL;
      WdLogEvent5_WdError(v59);
      LODWORD(v28) = -1073741811;
      goto LABEL_1006;
    }
    v60 = qword_1C006E790;
    if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    {
      Template_q(qword_1C006E790, &EventProfilerEnter, v17, 5003);
      v60 = qword_1C006E790;
      v55 = (_OWORD *)v751;
    }
    if ( *(_BYTE *)(*((_QWORD *)v56 + 2) + 186LL) )
    {
      v751 = v55[4];
      v752 = v55[5];
      v753 = v55[6];
      HIDWORD(v753) = -1;
      if ( (v60 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        Template_q(v60, &EventProfilerExit, v17, 5003);
      goto LABEL_106;
    }
    CurrentProcess = PsGetCurrentProcess();
    ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v62);
    v68 = ProcessDxgProcess;
    if ( ProcessDxgProcess )
    {
      if ( (*(_BYTE *)(ProcessDxgProcess + 275) & 2) != 0 )
      {
        ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
        if ( ThreadProperty )
          v68 = *ThreadProperty;
      }
    }
    v715 = 0;
    v70 = v68 + 88;
    if ( !v68 )
      v70 = 0LL;
    if ( v70 && *(struct _KTHREAD **)(v70 + 8) == KeGetCurrentThread() )
    {
      v71 = WdLogNewEntry5_WdAssertion(v65, v64, v66, v67);
      *(_QWORD *)(v71 + 24) = 1167LL;
      WdLogEvent5_WdAssertion(v71);
    }
    if ( v68 )
    {
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v70, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v74 = *(_DWORD *)(v70 + 16);
          if ( v74 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            Template_q(v72, &EventBlockThread, v73, v74);
        }
        ExAcquirePushLockExclusiveEx(v70, 0LL);
      }
      *(_QWORD *)(v70 + 8) = KeGetCurrentThread();
      v715 = 2;
    }
    DXGADAPTER::AcquireDdiSync(*((_QWORD *)v56 + 2), 1);
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v56 + 2) + 3892LL));
    CurrentIrql = KeGetCurrentIrql();
    v79 = 0LL;
    if ( (unsigned __int8)CurrentIrql < 2u )
    {
      CurrentThread = KeGetCurrentThread();
      if ( !CurrentThread )
      {
        v81 = WdLogNewEntry5_WdAssertion(v76, v75, v77, v78);
        *(_QWORD *)(v81 + 24) = 94LL;
        WdLogEvent5_WdAssertion(v81);
      }
      CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId(v76, v75, v77, v78);
      if ( CurrentProcessSessionId
        && (unsigned int)PsGetThreadSessionId(CurrentThread) == CurrentProcessSessionId
        && (ThreadWin32Thread = PsGetThreadWin32Thread(CurrentThread)) != 0
        && *(_QWORD *)ThreadWin32Thread )
      {
        v79 = *(_QWORD *)(*(_QWORD *)ThreadWin32Thread + 80LL);
        if ( v79 )
        {
          CurrentProcessSessionId = *(_DWORD *)(v79 + 136);
LABEL_89:
          DXGVALIDATIONPROCESSATTACH::DXGVALIDATIONPROCESSATTACH(
            (DXGVALIDATIONPROCESSATTACH *)v773,
            *((struct DXGADAPTER **)v56 + 2));
          v86 = (*(int (__fastcall **)(_QWORD, __int128 *))(*((_QWORD *)v56 + 2) + 344LL))(
                  *(_QWORD *)(*((_QWORD *)v56 + 2) + 240LL),
                  &v751);
          if ( v773[0] )
            KeUnstackDetachProcess(&ApcState);
          v87 = KeGetCurrentIrql();
          if ( (_BYTE)CurrentIrql != (_BYTE)v87 )
          {
            v88 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v87, v83, v84);
            v89 = v734;
            v88[3] = 275LL;
            v88[4] = 16LL;
            v88[5] = v89;
            v88[6] = (unsigned __int8)CurrentIrql;
            LOBYTE(v89) = KeGetCurrentIrql();
            v88[7] = (unsigned __int8)v89;
            WdLogEvent5_WdCriticalError(v88);
          }
          if ( v79 && *(_DWORD *)(v79 + 136) != CurrentProcessSessionId )
          {
            v90 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v87, v83, v84);
            v90[3] = 275LL;
            v90[4] = 25LL;
            v90[5] = *(int *)(v79 + 136);
            v90[6] = CurrentProcessSessionId;
            v90[7] = 0LL;
            WdLogEvent5_WdCriticalError(v90);
          }
          _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)v734 + 2) + 3892LL));
          v91 = (_QWORD *)WdLogNewEntry5_WdTrace(v87, v83, v84, v85);
          v91[3] = v86;
          v91[4] = v751;
          v91[5] = DWORD2(v751);
          v91[6] = HIDWORD(v751);
          v93 = (int)v752;
          v91[7] = (int)v752;
          if ( (_DWORD)v86 )
          {
            v94 = WdLogNewEntry5_WdError(v93, v92);
            *(_QWORD *)(v94 + 24) = v86;
            WdLogEvent5_WdError(v94);
          }
          DXGADAPTER::ReleaseDdiSync(*((DXGADAPTER **)v734 + 2));
          if ( v715 == 2 )
          {
            *(_QWORD *)(v70 + 8) = 0LL;
            ExReleasePushLockExclusiveEx(v70, 0LL);
            KeLeaveCriticalRegion();
          }
          if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            Template_q(v96, &EventProfilerExit, v17, 5003);
          if ( (int)v86 < 0 )
          {
            v97 = (_QWORD *)WdLogNewEntry5_WdError(v96, v95);
            v97[3] = v86;
            v97[4] = v7;
            v98 = v727;
            v97[5] = *(_QWORD *)(v26[6].Count + 16);
            v97[6] = v98;
            WdLogEvent5_WdError(v97);
            LODWORD(v28) = v86;
            goto LABEL_1006;
          }
          v26 = (struct _EX_RUNDOWN_REF *)v727;
          v28 = v737;
          goto LABEL_106;
        }
      }
      else
      {
        v79 = 0LL;
      }
    }
    CurrentProcessSessionId = D3DDDIFMT_UNKNOWN;
    goto LABEL_89;
  }
LABEL_107:
  v99 = a2->hDestination;
  if ( !v99 || (v100 = a2->Flags.Value, (v100 & 0x10000) != 0) )
  {
    v100 = a2->Flags.Value;
    if ( (v100 & 4) == 0 )
    {
      if ( (v100 & 3) == 0 )
      {
        if ( (v100 & 0x8000) == 0 )
        {
          v447 = (_QWORD *)WdLogNewEntry5_WdWarning(v25, v100, v17, v18);
          v447[3] = -1073741811LL;
          v447[4] = v7;
          v447[5] = a2->pSrcSubRects;
          v447[6] = a2->SubRectCnt;
          v447[7] = a2->Flags.Value;
          WdLogEvent5_WdWarning(v447);
          LODWORD(v28) = -1073741811;
          goto LABEL_451;
        }
        if ( (v100 & 0x27EF) == 0 )
        {
          Model = a2->PresentHistoryToken.Model;
          if ( Model == D3DKMT_PM_REDIRECTED_FLIP )
          {
            if ( a2->PresentHistoryToken.Token.Flip.DirtyRegions.NumRects <= 0x10 )
              goto LABEL_502;
          }
          else if ( Model == D3DKMT_PM_REDIRECTED_COMPOSITION )
          {
LABEL_502:
            v384 = *(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL);
            if ( v384 != -624 && *(struct _KTHREAD **)(v384 + 632) == KeGetCurrentThread() )
            {
              v385 = WdLogNewEntry5_WdAssertion(v25, v100, v17, v18);
              *(_QWORD *)(v385 + 24) = 1167LL;
              WdLogEvent5_WdAssertion(v385);
            }
            KeEnterCriticalRegion();
            if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v384 + 624, 0LL) )
            {
              if ( bTracingEnabled )
              {
                v388 = *(_DWORD *)(v384 + 640);
                if ( v388 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                  Template_q(v386, &EventBlockThread, v387, v388);
              }
              ExAcquirePushLockSharedEx(v384 + 624, 0LL);
            }
            v389 = PsGetCurrentProcess();
            ProcessSessionId = PsGetProcessSessionId(v389);
            if ( ProcessSessionId >= *(_DWORD *)(v384 + 648)
              || (v391 = *(_QWORD *)(*(_QWORD *)(v384 + 656) + 8LL * ProcessSessionId)) == 0 )
            {
              v391 = 0LL;
            }
            v392 = v391 != 0;
            ExReleasePushLockSharedEx(v384 + 624, 0LL);
            KeLeaveCriticalRegion();
            v396 = v729;
            if ( *((_BYTE *)v729 + 16) )
            {
              *((_BYTE *)v729 + 16) = 0;
              ExReleasePushLockSharedEx(*((_QWORD *)v396 + 1) + 120LL, 0LL);
              KeLeaveCriticalRegion();
              v394 = *((_QWORD *)v396 + 1);
              if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v394 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v394 + 16), (struct DXGADAPTER *)v394);
            }
            if ( *((_BYTE *)a3 + 80) )
              COREACCESS::Release((COREACCESS *)(a3 + 5));
            v28 = (LONG *)(a3 + 1);
            if ( !*((_BYTE *)a3 + 32) )
            {
              v397 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v394, v393, v395);
              v397[3] = 275LL;
              v397[4] = 4LL;
              v397[5] = v28;
              v397[6] = 0LL;
              v397[7] = 0LL;
              WdLogEvent5_WdCriticalError(v397);
            }
            *((_BYTE *)a3 + 32) = 0;
            v398 = a3[3];
            if ( KeGetCurrentThread() != v398[20] )
              DXGADAPTER::ReleaseCoreResource((DXGADAPTER *)v398);
            PresentLimitSemaphore = a2->PresentLimitSemaphore;
            if ( PresentLimitSemaphore )
            {
              v400 = ObReferenceObjectByHandle(
                       PresentLimitSemaphore,
                       2u,
                       (POBJECT_TYPE)ExSemaphoreObjectType,
                       1,
                       &v759,
                       0LL);
              v402 = v759;
              v403 = v400;
              if ( v400 < 0 )
                goto LABEL_533;
              if ( (a2->Flags.Value & 0x10) != 0 )
              {
                Timeout.QuadPart = 0LL;
                if ( KeWaitForSingleObject(v759, Executive, 0, 1u, &Timeout) == 258 )
                {
                  ObfDereferenceObject(v402);
                  LODWORD(v28) = -1071775486;
                  goto LABEL_1006;
                }
              }
              else
              {
                Timeout.QuadPart = -20000000LL;
                KeWaitForSingleObject(v759, Executive, 0, 1u, &Timeout);
              }
              ObfDereferenceObject(v402);
            }
            v404 = (*(__int64 (__fastcall **)(BOOL, D3DKMT_PRESENTHISTORYTOKEN *))(v733 + 320))(
                     v392,
                     &a2->PresentHistoryToken);
            v403 = v404;
            if ( v404 >= 0 )
            {
              v408 = v729;
              if ( !*((_BYTE *)v729 + 16) )
              {
                _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)v729 + 1) + 24LL));
                *(_QWORD *)v408 = -1LL;
                v409 = *((_QWORD *)v408 + 1);
                KeEnterCriticalRegion();
                ExAcquirePushLockSharedEx(v409 + 120, 0LL);
                *((_BYTE *)v408 + 16) = 1;
              }
              if ( *((_BYTE *)a3 + 32) )
              {
                v410 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v401, v405, v406);
                v410[3] = 275LL;
                v410[4] = 4LL;
                v410[5] = v28;
                v410[6] = 0LL;
                v410[7] = 0LL;
                WdLogEvent5_WdCriticalError(v410);
              }
              v411 = a3[3];
              if ( KeGetCurrentThread() != v411[20] )
              {
                if ( !KeReadStateEvent((PRKEVENT)v411 + 2) )
                {
                  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                    Template_q(v412, &EventBlockThread, v413, 72);
                  KeWaitForSingleObject(a3[3] + 6, Executive, 0, 0, 0LL);
                }
                DXGADAPTER::AcquireCoreResourceShared((DXGADAPTER *)a3[3]);
              }
              *((_BYTE *)a3 + 32) = 1;
              if ( *((_DWORD *)a3[9] + 102) == 1 )
              {
                if ( !*((_BYTE *)a3 + 80)
                  || (COREACCESS::AcquireShared((COREACCESS *)(a3 + 5)), *((_DWORD *)a3[7] + 44) == 1) )
                {
                  if ( a2->PresentHistoryToken.Model == D3DKMT_PM_REDIRECTED_FLIP )
                  {
                    v414 = PsGetCurrentProcess();
                    v416 = PsGetProcessDxgProcess(v414, v415);
                    v420 = v416;
                    if ( v416 )
                    {
                      if ( (*(_BYTE *)(v416 + 275) & 2) != 0 )
                      {
                        v421 = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
                        if ( v421 )
                          v420 = *v421;
                      }
                    }
                    v422 = (PERESOURCE *)DXGGLOBAL::m_pGlobal;
                    if ( !DXGGLOBAL::m_pGlobal )
                    {
                      v423 = WdLogNewEntry5_WdAssertion(0LL, v417, v418, v419);
                      *(_QWORD *)(v423 + 24) = 1815LL;
                      WdLogEvent5_WdAssertion(v423);
                      v422 = (PERESOURCE *)DXGGLOBAL::m_pGlobal;
                    }
                    v744 = v422;
                    v745 = 0;
                    if ( !v422 )
                    {
                      v424 = WdLogNewEntry5_WdAssertion(0LL, v417, v418, v419);
                      *(_QWORD *)(v424 + 24) = 1823LL;
                      WdLogEvent5_WdAssertion(v424);
                      v422 = v744;
                    }
                    if ( ExIsResourceAcquiredSharedLite(v422[42]) )
                    {
                      v429 = WdLogNewEntry5_WdAssertion(v426, v425, v427, v428);
                      *(_QWORD *)(v429 + 24) = 1828LL;
                      WdLogEvent5_WdAssertion(v429);
                    }
                    if ( v745 )
                    {
                      v430 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v426, v425, v427);
                      v430[3] = 275LL;
                      v430[4] = 4LL;
                      v430[5] = &v744;
                      v430[6] = 0LL;
                      v430[7] = 0LL;
                      WdLogEvent5_WdCriticalError(v430);
                    }
                    v431 = v744;
                    KeEnterCriticalRegion();
                    ExAcquireResourceSharedLite(v431[42], 1u);
                    v745 = 1;
                    Reserved = a2->PresentHistoryToken.Token.Flip.Reserved;
                    KeEnterCriticalRegion();
                    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v420 + 168, 0LL) )
                    {
                      if ( bTracingEnabled )
                      {
                        v435 = *(_DWORD *)(v420 + 184);
                        if ( v435 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                          Template_q(v433, &EventBlockThread, v434, v435);
                      }
                      ExAcquirePushLockSharedEx(v420 + 168, 0LL);
                    }
                    v436 = (Reserved >> 6) & 0xFFFFFF;
                    if ( v436 < *(_DWORD *)(v420 + 208)
                      && (v437 = *(_QWORD *)(v420 + 192),
                          v438 = *(_DWORD *)(v437 + 16LL * v436 + 8),
                          ((Reserved >> 26) & 0x30) == (*(_BYTE *)(v437 + 16LL * v436 + 8) & 0x30))
                      && (v438 & 0x1000) == 0
                      && (v438 & 0xF) != 0
                      && (*(_BYTE *)(v437 + 16LL * v436 + 8) & 0xF) == 8 )
                    {
                      v439 = *(_QWORD *)(v437 + 16LL * v436);
                    }
                    else
                    {
                      v439 = 0LL;
                    }
                    ExReleasePushLockSharedEx(v420 + 168, 0LL);
                    KeLeaveCriticalRegion();
                    if ( v439 )
                    {
                      FenceValue = a2->PresentHistoryToken.Token.Flip.FenceValue;
                      if ( *(_DWORD *)(v439 + 144) != 3 )
                      {
                        v445 = WdLogNewEntry5_WdAssertion(v441, v440, v442, v443);
                        *(_QWORD *)(v445 + 24) = 253LL;
                        WdLogEvent5_WdAssertion(v445);
                      }
                      if ( *(_QWORD *)(v439 + 88) > FenceValue )
                        FenceValue = *(_QWORD *)(v439 + 88);
                      *(_QWORD *)(v439 + 88) = FenceValue;
                      a2->PresentHistoryToken.Token.Flip.Reserved = *(_DWORD *)(v439 + 72);
                      if ( *(_BYTE *)(v439 + 225) )
                      {
                        LODWORD(v439) = DXGADAPTER::VmBusSendSetRedirectedFlipFenceValue(
                                          *(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 16LL),
                                          (struct DXGPROCESS *)v420,
                                          (struct DXGSYNCOBJECT *)v439,
                                          a2->PresentHistoryToken.Token.Flip.FenceValue);
                        if ( (int)v439 < 0 )
                        {
                          if ( v745 )
                            DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)&v744);
                          goto LABEL_1005;
                        }
                      }
                    }
                    if ( v745 )
                    {
                      v745 = 0;
                      ExReleaseResourceLite(v744[42]);
                      KeLeaveCriticalRegion();
                    }
                  }
                  LODWORD(v28) = DXGCONTEXT::SubmitPresentHistoryToken(
                                   v7,
                                   &a2->PresentHistoryToken,
                                   (struct COREDEVICEACCESS *)a3,
                                   v729,
                                   v726,
                                   1,
                                   0LL,
                                   (struct DXGK_PRESENT_PARAMS *)a2,
                                   v732);
LABEL_440:
                  v262 = (_QWORD *)((char *)v7 + 304);
LABEL_441:
                  if ( (int)v28 < 0 )
                    goto LABEL_452;
                  v348 = v747;
                  if ( v747 )
                  {
                    if ( (a2->Flags.Value & 0x10000000) == 0 )
                    {
                      v349 = *(_QWORD *)(*((_QWORD *)v7 + 2) + 1800LL);
                      if ( v349 )
                      {
                        if ( !(*(unsigned int (**)(void))(v733 + 216))() )
                        {
                          memset(&v775, 0, sizeof(v775));
                          v775.hContext = a2->hDevice;
                          v775.hSource = v736;
                          v775.VidPnSourceId = (*(_DWORD *)(*((_QWORD *)v348 + 6) + 4LL) >> 6) & 0xF;
                          v350 = 2LL;
                          BroadcastContextCount = a2->BroadcastContextCount;
                          BroadcastContext = a2->BroadcastContext;
                          v775.BroadcastContextCount = BroadcastContextCount;
                          v353 = v775.BroadcastContext;
                          do
                          {
                            *(_OWORD *)v353 = *(_OWORD *)BroadcastContext;
                            *((_OWORD *)v353 + 1) = *((_OWORD *)BroadcastContext + 1);
                            *((_OWORD *)v353 + 2) = *((_OWORD *)BroadcastContext + 2);
                            *((_OWORD *)v353 + 3) = *((_OWORD *)BroadcastContext + 3);
                            *((_OWORD *)v353 + 4) = *((_OWORD *)BroadcastContext + 4);
                            *((_OWORD *)v353 + 5) = *((_OWORD *)BroadcastContext + 5);
                            *((_OWORD *)v353 + 6) = *((_OWORD *)BroadcastContext + 6);
                            v353 += 32;
                            v354 = *((_OWORD *)BroadcastContext + 7);
                            BroadcastContext += 32;
                            *((_OWORD *)v353 - 1) = v354;
                            --v350;
                          }
                          while ( v350 );
                          v775.PresentRegions.DirtyRectCount = 0;
                          v775.PresentRegions.MoveRectCount = 0;
                          v775.Flags.Value = 4;
                          v355 = OUTPUTDUPL_MGR::ProcessPresent(
                                   *(OUTPUTDUPL_MGR **)(*(_QWORD *)(v349 + 2280) + 104LL),
                                   v7,
                                   &v775,
                                   (*(_DWORD *)(*((_QWORD *)v348 + 6) + 4LL) >> 6) & 0xF,
                                   v746,
                                   (struct COREDEVICEACCESS *)a3);
                          if ( v355 == 259 )
                            v355 = 0;
                          LODWORD(v28) = v355;
                        }
                      }
                    }
                  }
                  goto LABEL_451;
                }
                COREACCESS::Release((COREACCESS *)(a3 + 5));
              }
              COREACCESS::Release((COREACCESS *)v28);
              LODWORD(v28) = -1073741130;
              goto LABEL_1006;
            }
            if ( v404 != -1071775733 && v404 != -1071775730 )
            {
LABEL_533:
              v407 = WdLogNewEntry5_WdEvent(v401);
              *(_QWORD *)(v407 + 24) = v403;
              *(_QWORD *)(v407 + 32) = v7;
              WdLogEvent5_WdEvent(v407);
              LODWORD(v28) = v403;
              goto LABEL_1006;
            }
LABEL_945:
            LODWORD(v28) = v403;
            goto LABEL_1006;
          }
        }
        v446 = (_QWORD *)WdLogNewEntry5_WdWarning(v25, v100, v17, v18);
        v446[3] = v7;
        v446[4] = a2->Flags.Value;
        v446[5] = -1073741811LL;
        WdLogEvent5_WdWarning(v446);
        LODWORD(v28) = -1073741811;
        goto LABEL_1006;
      }
      v448 = v100 & 0x100;
      if ( (v100 & 0x100) != 0 )
      {
        v449 = *((_QWORD *)v7 + 2);
        if ( !*(_QWORD *)(v449 + 1800) )
        {
          v450 = (_QWORD *)WdLogNewEntry5_WdWarning(v449, v100, v448, v18);
          v450[3] = *((_QWORD *)v7 + 2);
          v450[4] = -1073741811LL;
LABEL_1002:
          WdLogEvent5_WdWarning(v450);
          LODWORD(v246) = -1073741811;
          goto LABEL_1003;
        }
        if ( *(_DWORD *)(v449 + 1808) <= a2->VidPnSourceId )
        {
          v451 = WdLogNewEntry5_WdWarning(v449, v100, v448, v18);
          *(_QWORD *)(v451 + 24) = a2->VidPnSourceId;
          *(_QWORD *)(v451 + 32) = *(unsigned int *)(*((_QWORD *)v7 + 2) + 1808LL);
          WdLogEvent5_WdWarning(v451);
          LODWORD(v246) = -1073741811;
          goto LABEL_1003;
        }
        v25 = v724;
      }
      if ( (v100 & 2) != 0 )
      {
        if ( a2->pSrcSubRects && a2->SubRectCnt && (v100 & 0x86BD) == 0 )
        {
          hSource = 0;
          goto LABEL_612;
        }
LABEL_1001:
        v450 = (_QWORD *)WdLogNewEntry5_WdWarning(v25, v100, v448, v18);
        v450[3] = v7;
        v450[4] = a2->pSrcSubRects;
        v450[5] = a2->SubRectCnt;
        v450[6] = a2->Flags.Value;
        v450[7] = -1073741811LL;
        goto LABEL_1002;
      }
      if ( !a2->pSrcSubRects || !a2->SubRectCnt || !(_DWORD)v25 || !v27 || (v100 & 0x802E) != 0 )
        goto LABEL_1001;
      if ( (v100 & 0x200) != 0 || (v100 & 0x400) != 0 )
      {
        if ( (((unsigned int)v100 ^ ((unsigned int)v100 >> 1)) & 0x200) == 0 )
        {
          v452 = (_QWORD *)WdLogNewEntry5_WdWarning(v25, v100, v448, v18);
          v453 = -1073741811;
          v452[3] = -1073741811LL;
          v452[4] = v7;
          v452[5] = a2->pSrcSubRects;
          v452[6] = a2->SubRectCnt;
          v452[7] = a2->Flags.Value;
          WdLogEvent5_WdWarning(v452);
LABEL_1004:
          LODWORD(v439) = v453;
          goto LABEL_1005;
        }
        if ( (v100 & 0x100) == 0
          || !ADAPTER_DISPLAY::IsVidPnSourceOwner(
                *(DXGADAPTER ***)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 1800LL) + 2280LL),
                *((const struct DXGDEVICE **)v7 + 2),
                a2->VidPnSourceId) )
        {
          v706 = (_QWORD *)WdLogNewEntry5_WdWarning(v25, v100, v448, v18);
          v453 = -1073741811;
          v706[3] = v7;
          v706[4] = a2->pSrcSubRects;
          v706[5] = a2->SubRectCnt;
          v706[6] = a2->Flags.Value;
          v706[7] = -1073741811LL;
          WdLogEvent5_WdWarning(v706);
          goto LABEL_1004;
        }
      }
LABEL_612:
      v767.Flags.Value ^= (*(_BYTE *)&v767.Flags.0 ^ (unsigned __int8)*(_DWORD *)&a2->Flags.0) & 2;
      v767.Flags.Value ^= (*(_BYTE *)&v767.Flags.0 ^ (unsigned __int8)*(_DWORD *)&a2->Flags.0) & 1;
      v767.Flags.Value ^= (*(_BYTE *)&v767.Flags.0 ^ (unsigned __int8)(a2->Flags.Value >> 5)) & 0x10;
      v767.Flags.Value ^= (*(_BYTE *)&v767.Flags.0 ^ (unsigned __int8)(a2->Flags.Value >> 5)) & 0x20;
      v767.Flags.Value ^= (*(_BYTE *)&v767.Flags.0 ^ (unsigned __int8)(a2->Flags.Value >> 5)) & 0x40;
      v767.Color = a2->Color;
      LODWORD(v28) = DXGPRESENT::CheckInput(*((DXGPRESENT **)v7 + 19), a2, v724, v27);
      if ( (int)v28 < 0 )
        goto LABEL_451;
      if ( (*(_DWORD *)(*((_QWORD *)v7 + 19) + 4LL) & 4) != 0 )
        goto LABEL_440;
      v454 = *((_QWORD *)v7 + 2);
      v455 = *(_QWORD *)(v454 + 1800);
      if ( v455 && *(_QWORD *)(v455 + 2288) )
      {
        if ( v455 != *(_QWORD *)(*(_QWORD *)(v454 + 16) + 16LL) )
        {
          v456 = WdLogNewEntry5_WdAssertion(v455, v240, v241, v242);
          *(_QWORD *)(v456 + 24) = 3787LL;
          WdLogEvent5_WdAssertion(v456);
        }
        v457 = *((_QWORD *)v7 + 2);
        v458 = 0;
        for ( i = 0; v458 < *(_DWORD *)(v457 + 1808); i = ++v458 )
        {
          v459 = a2->Flags.Value & 0x10;
          ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v457 + 104));
          if ( !*((_BYTE *)v7 + 369) )
          {
            LODWORD(v439) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 408LL)
                                                                                          + 8LL)
                                                                              + 184LL))(
                              *(_QWORD *)(*((_QWORD *)v7 + 2) + 600LL),
                              v458,
                              0LL);
            if ( (_DWORD)v439 == -1071775486 )
            {
              if ( v459 )
                goto LABEL_633;
              if ( *((_BYTE *)a3 + 80) )
                COREACCESS::Release((COREACCESS *)(a3 + 5));
              v460 = (COREACCESS *)(a3 + 1);
              if ( !*((_BYTE *)a3 + 32) )
              {
                v461 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v455, v240, v241);
                v461[3] = 275LL;
                v461[4] = 4LL;
                v461[5] = v460;
                v461[6] = 0LL;
                v461[7] = 0LL;
                WdLogEvent5_WdCriticalError(v461);
              }
              *((_BYTE *)a3 + 32) = 0;
              v462 = a3[3];
              if ( KeGetCurrentThread() != v462[20] )
                DXGADAPTER::ReleaseCoreResource((DXGADAPTER *)v462);
              LOBYTE(v241) = 1;
              v439 = (*(int (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL)
                                                                                            + 408LL)
                                                                                + 8LL)
                                                                    + 184LL))(
                       *(_QWORD *)(*((_QWORD *)v7 + 2) + 600LL),
                       v458,
                       v241);
              COREACCESS::AcquireShared((COREACCESS *)(a3 + 1));
              v240 = (CWin32kLocks *)a3;
              v455 = *((unsigned int *)a3[9] + 102);
              if ( (_DWORD)v455 != 1 )
                goto LABEL_642;
              if ( *((_BYTE *)a3 + 80) )
              {
                COREACCESS::AcquireShared((COREACCESS *)(a3 + 5));
                v455 = *((unsigned int *)a3[7] + 44);
                if ( (_DWORD)v455 != 1 )
                {
                  COREACCESS::Release((COREACCESS *)(a3 + 5));
LABEL_642:
                  COREACCESS::Release(v460);
                  v471 = WdLogNewEntry5_WdEvent(v470);
                  *(_QWORD *)(v471 + 24) = v439;
                  WdLogEvent5_WdEvent(v471);
                  LODWORD(v439) = -1073741130;
LABEL_643:
                  v472 = WdLogNewEntry5_WdEvent(v465);
                  *(_QWORD *)(v472 + 24) = (int)v439;
                  *(_QWORD *)(v472 + 32) = v7;
                  WdLogEvent5_WdEvent(v472);
LABEL_1005:
                  LODWORD(v28) = v439;
                  goto LABEL_1006;
                }
                v458 = i;
              }
            }
            if ( (int)v439 < 0 )
            {
LABEL_633:
              v463 = WdLogNewEntry5_WdEvent(v455);
              *(_QWORD *)(v463 + 24) = (int)v439;
              *(_QWORD *)(v463 + 32) = v7;
              WdLogEvent5_WdEvent(v463);
              if ( (_DWORD)v439 != -1071775486 && (_DWORD)v439 != -1073741130 && (_DWORD)v439 != -1071775232 )
              {
                v468 = WdLogNewEntry5_WdAssertion(v465, v464, v466, v467);
                *(_QWORD *)(v468 + 24) = 2241LL;
                WdLogEvent5_WdAssertion(v468);
              }
              goto LABEL_643;
            }
          }
          v457 = *((_QWORD *)v7 + 2);
        }
      }
      else
      {
        v473 = DXGCONTEXT::WaitForQueuedPresentLimit(
                 v7,
                 0,
                 (a2->Flags.Value & 0x10) == 0,
                 (struct COREDEVICEACCESS *)a3);
        v439 = v473;
        if ( v473 < 0 )
        {
          v474 = WdLogNewEntry5_WdEvent(v455);
          *(_QWORD *)(v474 + 24) = v439;
          *(_QWORD *)(v474 + 32) = v7;
          WdLogEvent5_WdEvent(v474);
          goto LABEL_1005;
        }
      }
      if ( *((_BYTE *)v7 + 369) )
      {
        v469 = (_QWORD *)((char *)v7 + 304);
        LODWORD(v28) = 0;
        *((_QWORD *)v7 + 38) = 0LL;
        goto LABEL_664;
      }
      ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(*((_QWORD *)v7 + 2) + 104LL));
      v476 = 3;
      v719 = *((_DWORD *)v7 + 26);
      if ( *((_DWORD *)v7 + 18) > 3u )
        v476 = *((_DWORD *)v7 + 18);
      if ( !*((_QWORD *)v7 + 28) )
      {
        v477 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, DXGCONTEXT *, char, _DWORD, int, _DWORD, _DWORD, _DWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 432LL) + 8LL) + 432LL))(
                 *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 440LL),
                 *((unsigned int *)v7 + 86),
                 *(_QWORD *)(*((_QWORD *)v7 + 2) + 592LL),
                 v7,
                 1,
                 *((_DWORD *)v7 + 48),
                 v476,
                 *((_DWORD *)v7 + 26),
                 *((_DWORD *)v7 + 49),
                 *((_DWORD *)v7 + 50));
        *((_QWORD *)v7 + 28) = v477;
        if ( !v477 )
        {
          v481 = WdLogNewEntry5_WdWarning(v478, 0LL, v479, v480);
          LODWORD(v28) = -1073741801;
          *(_QWORD *)(v481 + 24) = v7;
          *(_QWORD *)(v481 + 32) = -1073741801LL;
          WdLogEvent5_WdWarning(v481);
LABEL_655:
          v485 = WdLogNewEntry5_WdWarning(v482, v475, v483, v484);
          *(_QWORD *)(v485 + 24) = v7;
          WdLogEvent5_WdWarning(v485);
          v469 = (_QWORD *)((char *)v7 + 304);
          goto LABEL_663;
        }
        LODWORD(v28) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2)
                                                                                              + 16LL)
                                                                                  + 432LL)
                                                                      + 8LL)
                                                          + 440LL))(v477);
        if ( (int)v28 < 0 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 432LL) + 8LL)
                                         + 448LL))(*((_QWORD *)v7 + 28));
          *((_QWORD *)v7 + 28) = 0LL;
        }
        else
        {
          *((_DWORD *)v7 + 51) = v476;
          *((_DWORD *)v7 + 52) = v719;
        }
        if ( (int)v28 < 0 )
          goto LABEL_655;
      }
      v469 = (_QWORD *)((char *)v7 + 304);
      v486 = *((_QWORD *)v7 + 28);
      LOBYTE(v475) = 1;
      v487 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL)
                                                                                                  + 432LL)
                                                                                      + 8LL)
                                                                          + 488LL))(
               v486,
               v475,
               0LL,
               (__int64)v7 + 304);
      v488 = v487;
      if ( v487 == -1071775486 )
      {
        if ( a3 )
        {
          COREDEVICEACCESS::Release((COREDEVICEACCESS *)a3);
          LODWORD(v488) = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 432LL)
                                                                                                  + 8LL)
                                                                                      + 488LL))(
                            v486,
                            0LL,
                            0LL,
                            (__int64)v7 + 304);
          v489 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)a3);
          v28 = (LONG *)v489;
          if ( v489 < 0 )
          {
            v490 = WdLogNewEntry5_WdEvent(v455);
            *(_QWORD *)(v490 + 24) = v7;
            *(_QWORD *)(v490 + 32) = v28;
            WdLogEvent5_WdEvent(v490);
            goto LABEL_663;
          }
        }
      }
      else if ( v487 < 0 )
      {
        v491 = WdLogNewEntry5_WdEvent(v455);
        *(_QWORD *)(v491 + 24) = v7;
        *(_QWORD *)(v491 + 32) = v488;
        WdLogEvent5_WdEvent(v491);
      }
      LODWORD(v28) = v488;
LABEL_663:
      if ( (int)v28 < 0 )
        goto LABEL_451;
LABEL_664:
      if ( !*v469 && !*((_BYTE *)v7 + 369) )
      {
        v492 = WdLogNewEntry5_WdAssertion(v455, v240, v241, v242);
        *(_QWORD *)(v492 + 24) = 3825LL;
        WdLogEvent5_WdAssertion(v492);
      }
      v493 = *((_QWORD *)v7 + 2);
      v740 = 0;
      v739 = *(_QWORD *)(v493 + 16);
      if ( !v739 )
      {
        v494 = WdLogNewEntry5_WdAssertion(0LL, v240, v241, v242);
        *(_QWORD *)(v494 + 24) = 6060LL;
        WdLogEvent5_WdAssertion(v494);
      }
      v495 = KeGetCurrentThread();
      if ( *(struct _KTHREAD **)(v739 + 456) == v495 )
      {
        v496 = WdLogNewEntry5_WdAssertion(v495, v240, v241, v242);
        *(_QWORD *)(v496 + 24) = 6065LL;
        WdLogEvent5_WdAssertion(v496);
      }
      v497 = 0;
      if ( (a2->Flags.Value & 0x10000) != 0 )
      {
        if ( a2->hDestination )
        {
          v504 = *((_QWORD *)v737 + 6);
          v505 = *(_DWORD *)(v504 + 4);
          *(_DWORD *)(v504 + 4) = v505 | 0x400;
          v497 = (v505 & 0x400) == 0;
        }
      }
      else
      {
        COREDEVICEACCESS::Release((COREDEVICEACCESS *)a3);
        DXGADAPTERSTOPRESETLOCKSHARED::Release(v729);
        DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)v738, v498, v499, v500);
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v729);
        v501 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)a3);
        v28 = (LONG *)v501;
        if ( v501 < 0 )
        {
          v503 = WdLogNewEntry5_WdEvent(v502);
          *(_QWORD *)(v503 + 24) = v28;
          *(_QWORD *)(v503 + 32) = v7;
          WdLogEvent5_WdEvent(v503);
          DXGPRESENTMUTEX::~DXGPRESENTMUTEX((DXGPRESENTMUTEX *)v738);
          goto LABEL_1006;
        }
      }
      v506 = (*(__int64 (**)(void))(v733 + 8))();
      v720 = v506;
      CurrentThreadId = PsGetCurrentThreadId();
      CurrentIrql = (__int64)CurrentThreadId;
      if ( !*((_BYTE *)v7 + 369) )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 408LL) + 8LL)
                                       + 440LL))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 416LL));
        CurrentThreadId = (HANDLE)CurrentIrql;
      }
      v511 = *((_QWORD *)v7 + 19);
      if ( *(_DWORD *)(v511 + 8) == v506
        && *(HANDLE *)(v511 + 56) == CurrentThreadId
        && *(HWND *)(v511 + 48) == a2->hWindow
        && !*(_DWORD *)(v511 + 64)
        && !v497 )
      {
        k = *(unsigned int *)(v511 + 4);
        if ( (*(_DWORD *)(v511 + 4) & 8) == 0 )
        {
          if ( (k & 1) != 0 )
          {
            LODWORD(v28) = -1071775738;
          }
          else if ( (a2->Flags.Value & 0x10000) == 0 )
          {
            k = (unsigned int)k >> 4;
            if ( (k & 1) == 0 )
              DXGDEVICE::SynchronizePresentToPrimary(*((DXGDEVICE **)v7 + 2), v7, v509, 0);
          }
          goto LABEL_758;
        }
      }
      if ( v740 )
      {
        v740 = 0;
        DXGFASTMUTEX::Release((struct _KTHREAD **)(v739 + 448), k, (__int64)v509, v510);
      }
      v512 = v729;
      if ( *((_BYTE *)v729 + 16) )
      {
        *((_BYTE *)v729 + 16) = 0;
        ExReleasePushLockSharedEx(*((_QWORD *)v512 + 1) + 120LL, 0LL);
        KeLeaveCriticalRegion();
        v511 = *((_QWORD *)v512 + 1);
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v511 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v511 + 16), (struct DXGADAPTER *)v511);
      }
      if ( *((_BYTE *)a3 + 80) )
        COREACCESS::Release((COREACCESS *)(a3 + 5));
      v513 = (COREACCESS *)(a3 + 1);
      if ( !*((_BYTE *)a3 + 32) )
      {
        v514 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v511, k, v509);
        v514[3] = 275LL;
        v514[4] = 4LL;
        v514[5] = v513;
        v514[6] = 0LL;
        v514[7] = 0LL;
        WdLogEvent5_WdCriticalError(v514);
      }
      *((_BYTE *)a3 + 32) = 0;
      v515 = a3[3];
      if ( KeGetCurrentThread() != v515[20] )
        DXGADAPTER::ReleaseCoreResource((DXGADAPTER *)v515);
      v516 = v726;
      hWindow = a2->hWindow;
      LODWORD(v734) = HIWORD(a2->Flags.Value) & 1;
      v518 = *((_QWORD *)v726 + 7);
      if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v518 + 160)
        || ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v518 + 144)) )
      {
        v519 = WdLogNewEntry5_WdAssertion(v518, k, v509, v510);
        *(_QWORD *)(v519 + 24) = 703LL;
        WdLogEvent5_WdAssertion(v519);
      }
      if ( *(_QWORD *)v516 || *((_QWORD *)v516 + 1) || *((_QWORD *)v516 + 2) )
      {
        v520 = WdLogNewEntry5_WdAssertion(v518, k, v509, v510);
        *(_QWORD *)(v520 + 24) = 705LL;
        WdLogEvent5_WdAssertion(v520);
      }
      v521 = 0;
      v522 = (*(__int64 (__fastcall **)(HWND, _QWORD))(*((_QWORD *)v516 + 3) + 48LL))(hWindow, 0LL);
      *(_QWORD *)v516 = v522;
      if ( v522 )
      {
        (*(void (__fastcall **)(__int64, __int64))(*((_QWORD *)v516 + 3) + 296LL))(v522, 1LL);
        v527 = *((_QWORD *)v516 + 7);
        v528 = v516;
        v529 = *(_QWORD *)v516;
        *((_QWORD *)v528 + 4) = *((_QWORD *)v528 + 3);
        v530 = (int)v734;
        *((_QWORD *)v528 + 5) = 0LL;
        *((_DWORD *)v528 + 12) = v530;
        if ( *((_DWORD *)v528 + 13) )
        {
          v531 = WdLogNewEntry5_WdAssertion(v528, v524, v525, v526);
          *(_QWORD *)(v531 + 24) = 602LL;
          WdLogEvent5_WdAssertion(v531);
          v528 = v726;
        }
        if ( v529 && v527 )
        {
          *((_QWORD *)v528 + 5) = v527;
          (*(void (__fastcall **)(__int64))(*((_QWORD *)v528 + 4) + 264LL))(v529);
          (*(void (__fastcall **)(_QWORD, bool))(*((_QWORD *)v726 + 4) + 280LL))(
            *((_QWORD *)v726 + 5),
            *((_DWORD *)v726 + 12) == 0);
          v528 = v726;
          *((_DWORD *)v726 + 13) = 1;
        }
        v532 = (*(__int64 (__fastcall **)(_QWORD))(*((_QWORD *)v528 + 3) + 16LL))(*(_QWORD *)v528);
        v535 = v726;
        *((_QWORD *)v726 + 2) = v532;
        if ( !v532 )
        {
          v536 = WdLogNewEntry5_WdEvent(v534);
          *(_QWORD *)(v536 + 24) = *(_QWORD *)v535;
          WdLogEvent5_WdEvent(v536);
          CWin32kLocks::Unlock(v535);
          v521 = -1073741811;
        }
      }
      else
      {
        v521 = -1071775731;
        v537 = WdLogNewEntry5_WdEvent(v523);
        *(_QWORD *)(v537 + 24) = hWindow;
        WdLogEvent5_WdEvent(v537);
        v535 = v516;
      }
      LODWORD(v28) = v521;
      if ( (a2->Flags.Value & 0x10000) == 0
        || ((*(void (__fastcall **)(_QWORD, __int64 *))(v733 + 232))(*(_QWORD *)v535, &v760),
            *(_QWORD *)(*((_QWORD *)v7 + 19) + 432LL) = v760,
            (a2->Flags.Value & 0x10000) == 0) )
      {
        DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)v738, v533, (__int64)v509, v510);
      }
      v538 = v729;
      if ( !*((_BYTE *)v729 + 16) )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)v729 + 1) + 24LL));
        *(_QWORD *)v538 = -1LL;
        v539 = *((_QWORD *)v538 + 1);
        KeEnterCriticalRegion();
        ExAcquirePushLockSharedEx(v539 + 120, 0LL);
        *((_BYTE *)v729 + 16) = 1;
      }
      if ( *((_BYTE *)a3 + 32) )
      {
        v540 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v538, v533, v509);
        v540[3] = 275LL;
        v540[4] = 4LL;
        v540[5] = v513;
        v540[6] = 0LL;
        v540[7] = 0LL;
        WdLogEvent5_WdCriticalError(v540);
      }
      v541 = a3[3];
      if ( KeGetCurrentThread() != v541[20] )
      {
        if ( !KeReadStateEvent((PRKEVENT)v541 + 2) )
        {
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            Template_q(v542, &EventBlockThread, v543, 72);
          KeWaitForSingleObject(a3[3] + 6, Executive, 0, 0, 0LL);
        }
        DXGADAPTER::AcquireCoreResourceShared((DXGADAPTER *)a3[3]);
      }
      *((_BYTE *)a3 + 32) = 1;
      k = *((unsigned int *)a3[9] + 102);
      if ( (_DWORD)k == 1 )
      {
        if ( !*((_BYTE *)a3 + 80)
          || (COREACCESS::AcquireShared((COREACCESS *)(a3 + 5)), k = *((unsigned int *)a3[7] + 44), (_DWORD)k == 1) )
        {
          if ( v521 >= 0 )
          {
            if ( (a2->Flags.Value & 0x10000) != 0 && a2->hDestination && !*(_QWORD *)(*((_QWORD *)v7 + 19) + 432LL) )
            {
              v544 = WdLogNewEntry5_WdEvent(v541);
              *(_QWORD *)(v544 + 24) = 0LL;
              *(_QWORD *)(v544 + 32) = v7;
              WdLogEvent5_WdEvent(v544);
              v545 = *((_QWORD *)v7 + 38);
              if ( v545 )
              {
                (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL)
                                                                                + 432LL)
                                                                    + 8LL)
                                                        + 496LL))(
                  v545,
                  0LL);
                *((_QWORD *)v7 + 38) = 0LL;
              }
              LODWORD(v28) = 0;
              DXGPRESENTMUTEX::~DXGPRESENTMUTEX((DXGPRESENTMUTEX *)v738);
              goto LABEL_1006;
            }
            v546 = *(HDC *)v726;
            v547 = (const struct DXGDEVICE *)*((_QWORD *)v7 + 2);
            v548 = *(HDC *)v726;
            v734 = (HDEV)*((_QWORD *)v726 + 2);
            LODWORD(v28) = DXGPRESENT::CheckVisRgn(
                             *((DXGPRESENT **)v7 + 19),
                             a2,
                             v548,
                             v734,
                             v547,
                             v724,
                             v728,
                             CurrentProcessSessionId,
                             1);
            if ( (_DWORD)v28 == 261 )
            {
              DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v738);
              COREDEVICEACCESS::Release((COREDEVICEACCESS *)a3);
              DXGADAPTERSTOPRESETLOCKSHARED::Release(v729);
              if ( DXGPRESENT::CheckOcclusion(*((DXGPRESENT **)v7 + 19)) )
                LODWORD(v28) = -1071775738;
              if ( (a2->Flags.Value & 0x10000) == 0 )
                DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)v738, v549, v550, v551);
              DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v729);
              v552 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)a3);
              v554 = v552;
              if ( v552 < 0 )
              {
                v555 = WdLogNewEntry5_WdEvent(v553);
                *(_QWORD *)(v555 + 24) = v554;
LABEL_944:
                WdLogEvent5_WdEvent(v555);
                DXGPRESENTMUTEX::~DXGPRESENTMUTEX((DXGPRESENTMUTEX *)v738);
                LODWORD(v403) = v554;
                goto LABEL_945;
              }
              if ( (_DWORD)v28 != -1071775738 )
                LODWORD(v28) = DXGPRESENT::CheckVisRgn(
                                 *((DXGPRESENT **)v7 + 19),
                                 a2,
                                 v546,
                                 v734,
                                 *((const struct DXGDEVICE **)v7 + 2),
                                 v724,
                                 v728,
                                 CurrentProcessSessionId,
                                 0);
            }
            if ( (int)v28 < 0 )
            {
              v559 = *((_QWORD *)v7 + 19);
              if ( (*(_BYTE *)(v559 + 4) & 1) != 0 )
              {
                k = CurrentIrql;
                *(_QWORD *)(v559 + 56) = CurrentIrql;
                *(_DWORD *)(*((_QWORD *)v7 + 19) + 8LL) = v720;
              }
            }
            else
            {
              k = CurrentIrql;
              *(_QWORD *)(*((_QWORD *)v7 + 19) + 56LL) = CurrentIrql;
              if ( (a2->Flags.Value & 0x10000) == 0 )
              {
                *(_DWORD *)(*((_QWORD *)v7 + 19) + 8LL) = v720;
                DXGDEVICE::FlushScheduler(*((_QWORD *)v7 + 2), 2LL);
                v556 = 0;
                v557 = *(_DWORD *)(*((_QWORD *)v7 + 19) + 8LL);
                if ( v557 != (*(unsigned int (**)(void))(v733 + 8))() )
                {
                  *(_DWORD *)(*((_QWORD *)v7 + 19) + 8LL) = v720;
                  ADAPTER_RENDER::FlushScheduler(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL), 3LL, 0xFFFFFFFFLL);
                  v556 = 1;
                }
                DXGDEVICE::SynchronizePresentToPrimary(*((DXGDEVICE **)v7 + 2), v7, v558, v556);
              }
            }
          }
LABEL_758:
          v560 = *(_DWORD *)(*((_QWORD *)v7 + 19) + 4LL);
          if ( (v560 & 0x10) != 0 )
          {
            DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v738);
            if ( (int)v28 < 0 )
              goto LABEL_836;
            v561 = *((_QWORD *)v7 + 19);
            v562 = *(_DWORD *)(v561 + 4) >> 1;
            LOBYTE(v562) = (*(_DWORD *)(v561 + 4) & 2) != 0;
            if ( (*(_DWORD *)(v561 + 4) & 2) == 0 && a2->BroadcastContextCount )
            {
              v563 = WdLogNewEntry5_WdError(v562, k);
              *(_QWORD *)(v563 + 24) = 4096LL;
              WdLogEvent5_WdError(v563);
              LODWORD(v28) = -1071774910;
              goto LABEL_836;
            }
            if ( (*(_DWORD *)(v561 + 4) & 2) != 0 )
              goto LABEL_836;
            if ( (a2->Flags.Value & 0x10000) != 0 && a2->hDestination )
            {
              v564 = WdLogNewEntry5_WdAssertion(v562, k, v509, v510);
              *(_QWORD *)(v564 + 24) = 4102LL;
              WdLogEvent5_WdAssertion(v564);
            }
            if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              Template_q(v562, &EventPerformanceWarning, (__int64)v509, 0);
            if ( (a2->Flags.Value & 0x100) != 0 )
            {
              v565 = (struct DXGALLOCATION *)&v772;
              v772 = *ADAPTER_DISPLAY::GetContentRect(
                        *(DXGADAPTER ***)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 1800LL) + 2280LL),
                        a2->VidPnSourceId);
            }
            else
            {
              v565 = 0LL;
            }
            v566 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
            v743 = v565;
            if ( (*(_BYTE *)&v566 & 1) != 0 )
            {
              if ( *(_BYTE *)&v566 >= 0 )
              {
                v767.SrcRect.bottom = v728;
                right = v724;
                *(_QWORD *)&v767.SrcRect.left = 0LL;
              }
              else
              {
                top = a2->SrcRect.top;
                if ( top < 0 )
                  top = 0;
                v767.SrcRect.top = top;
                left = a2->SrcRect.left;
                if ( left < 0 )
                  left = 0;
                v767.SrcRect.left = left;
                bottom = a2->SrcRect.bottom;
                if ( (int)v728 < bottom )
                  bottom = v728;
                v767.SrcRect.bottom = bottom;
                right = a2->SrcRect.right;
                if ( (int)v724 < right )
                  right = v724;
              }
              v767.SrcRect.right = right;
              v767.DstRect = v767.SrcRect;
              v571 = (*(_WORD *)&v767.Flags.0 ^ (unsigned __int16)(a2->Flags.Value >> 9)) & 0x800;
              v767.Flags.Value ^= v571;
              if ( !a2->SubRectCnt )
              {
                v572 = WdLogNewEntry5_WdAssertion(v571, k, v509, v510);
                *(_QWORD *)(v572 + 24) = 4149LL;
                WdLogEvent5_WdAssertion(v572);
              }
              if ( !a2->pSrcSubRects )
              {
                v573 = WdLogNewEntry5_WdAssertion(v571, k, v509, v510);
                *(_QWORD *)(v573 + 24) = 4150LL;
                WdLogEvent5_WdAssertion(v573);
              }
              LODWORD(v28) = DXGPRESENT::GrowRectList(*((DXGPRESENT **)v7 + 19), a2->SubRectCnt);
              if ( (int)v28 < 0 )
                goto LABEL_836;
              DdiSubRectList = DXGPRESENT::GetDdiSubRectList(*((DXGPRESENT **)v7 + 19), 0);
              SubRectCnt = 0LL;
              v576 = 0;
              v767.SubRectCnt = 0;
              v767.pDstSubRects = DdiSubRectList;
              if ( a2->SubRectCnt <= (unsigned int)k )
                goto LABEL_836;
              while ( 1 )
              {
                if ( DXGPRESENT::IntersectRect(&DdiSubRectList[SubRectCnt], &a2->pSrcSubRects[v576], &v767.SrcRect) )
                  SubRectCnt = ++v767.SubRectCnt;
                else
                  SubRectCnt = v767.SubRectCnt;
                if ( ++v576 >= a2->SubRectCnt )
                  break;
                DdiSubRectList = (struct tagRECT *)v767.pDstSubRects;
              }
              if ( !(_DWORD)SubRectCnt )
                goto LABEL_836;
              if ( DXGPRESENT::PrepareStagingBuffer(
                     *((DXGPRESENT **)v7 + 19),
                     *((struct DXGDEVICE **)v7 + 2),
                     a2->hSource,
                     (struct COREDEVICEACCESS *)a3,
                     &v723) < 0 )
                goto LABEL_878;
              if ( *((_BYTE *)v7 + 369) )
              {
                Current = DXGPROCESS::GetCurrent();
                DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 168));
                v582 = (v723 >> 6) & 0xFFFFFF;
                if ( (unsigned int)v582 < *((_DWORD *)Current + 52)
                  && (v583 = *((_QWORD *)Current + 24),
                      v584 = *(_DWORD *)(v583 + 16LL * (unsigned int)v582 + 8),
                      ((v723 >> 26) & 0x30) == (*(_BYTE *)(v583 + 16LL * (unsigned int)v582 + 8) & 0x30))
                  && (v584 & 0x1000) == 0
                  && (v584 & 0xF) != 0
                  && (v585 = 2 * v582, (*(_BYTE *)(v583 + 8 * v585 + 8) & 0xF) == 5) )
                {
                  v586 = *(struct DXGALLOCATION **)(v583 + 8 * v585);
                }
                else
                {
                  v586 = 0LL;
                }
                DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v749, v586);
                ExReleasePushLockSharedEx((char *)Current + 168, 0LL);
                KeLeaveCriticalRegion();
                if ( !v749 )
                {
                  v591 = WdLogNewEntry5_WdAssertion(v588, v587, v589, v590);
                  *(_QWORD *)(v591 + 24) = 4183LL;
                  WdLogEvent5_WdAssertion(v591);
                }
                v592 = *(struct VMBCHANNEL__ ***)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 16LL);
                v593 = DXGPROCESS::GetCurrent();
                LODWORD(Size) = a2->PrivateDriverDataSize;
                v594 = DXGADAPTER::VmBusSendBlt(
                         v592,
                         v593,
                         v7,
                         *((_DWORD *)v727 + 24),
                         *(_DWORD *)(v749 + 96),
                         &v767.SrcRect,
                         &v767.DstRect,
                         v767.SubRectCnt,
                         v767.pDstSubRects,
                         Size,
                         (unsigned __int8 *)a2->pPrivateDriverData);
                DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v749);
                v595 = v723;
LABEL_827:
                if ( v594 >= 0 )
                {
                  v607 = (DXGDEVICE *)*((_QWORD *)v7 + 2);
                  v608 = 0;
                  if ( (a2->Flags.Value & 0x100) != 0
                    && ADAPTER_DISPLAY::IsVidPnSourceOwner(
                         *(DXGADAPTER ***)(*((_QWORD *)v607 + 225) + 2280LL),
                         *((const struct DXGDEVICE **)v7 + 2),
                         a2->VidPnSourceId) )
                  {
                    v608 = 1;
                  }
                  else if ( !DXGDEVICE::AllowLegacyPresent(v607, v577) )
                  {
                    v609 = 0;
LABEL_832:
                    DXGADAPTERSTOPRESETLOCKSHARED::Release(v729);
                    COREDEVICEACCESS::Release((COREDEVICEACCESS *)a3);
                    if ( !v609 && DXGPRESENT::CheckOcclusion(*((DXGPRESENT **)v7 + 19)) )
                    {
                      COREDEVICEACCESS::AcquireSharedUncheck((COREDEVICEACCESS *)a3);
LABEL_835:
                      LODWORD(v28) = -1071775738;
                      goto LABEL_836;
                    }
                    v614 = v726;
                    CWin32kLocks::Unlock(v726);
                    DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v729);
                    v615 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)a3);
                    if ( v615 < 0 )
                      goto LABEL_871;
                    memset(&v762, 0, sizeof(v762));
                    if ( *((_BYTE *)v7 + 369) )
                    {
                      v758.hDevice = 0;
                      *(_QWORD *)&v758.Flags.0 = 0LL;
                      v758.pData = 0LL;
                      v758.hAllocation = v595;
                      v28 = (LONG *)*((_QWORD *)v7 + 2);
                      v620 = *(DXGADAPTER **)(*((_QWORD *)v28 + 2) + 16LL);
                      v621 = DXGPROCESS::GetCurrent();
                      v622 = DXGADAPTER::VmBusSendLock2(v620, v621, (struct DXGDEVICE *)v28, &v758, 0);
                      v614 = v726;
                      LODWORD(v28) = v622;
                      v762.pData = v758.pData;
                    }
                    else
                    {
                      if ( !v595 )
                      {
                        v623 = WdLogNewEntry5_WdAssertion(v617, v616, v618, v619);
                        *(_QWORD *)(v623 + 24) = 4274LL;
                        WdLogEvent5_WdAssertion(v623);
                      }
                      v762.hAllocation = v595;
                      LODWORD(v28) = DXGDEVICE::Lock(*((DXGDEVICE **)v7 + 2), &v762, (struct COREDEVICEACCESS *)a3);
                    }
                    if ( (int)v28 < 0 )
                      goto LABEL_836;
                    DXGADAPTERSTOPRESETLOCKSHARED::Release(v729);
                    COREDEVICEACCESS::Release((COREDEVICEACCESS *)a3);
                    if ( !v762.pData )
                    {
                      v628 = WdLogNewEntry5_WdAssertion(v625, v624, v626, v627);
                      *(_QWORD *)(v628 + 24) = 4287LL;
                      WdLogEvent5_WdAssertion(v628);
                    }
                    if ( (a2->Flags.Value & 0x10000) != 0 && a2->hDestination )
                    {
                      v629 = WdLogNewEntry5_WdAssertion(v625, v624, v626, v627);
                      *(_QWORD *)(v629 + 24) = 4288LL;
                      WdLogEvent5_WdAssertion(v629);
                    }
                    v21 = (*(unsigned int (__fastcall **)(_QWORD))(v733 + 312))(0LL) == 0;
                    v630 = v608;
                    if ( v21 )
                      v630 = 0;
                    LODWORD(v28) = CWin32kLocks::Lock(v614, a2->hWindow, 0, 0, v630);
                    if ( (int)v28 >= 0 )
                    {
                      v631 = v614;
                      if ( *((_QWORD *)v614 + 1) )
                        v631 = (CWin32kLocks *)((char *)v614 + 8);
                      LOBYTE(Sizea) = (a2->Flags.Value & 0x200) != 0;
                      LOBYTE(Src) = 0;
                      if ( !(*(unsigned int (__fastcall **)(struct _D3DKMT_PRESENT *, _QWORD, struct DXGALLOCATION *, const RECT *, void *, _DWORD, unsigned int, unsigned int, int, int, UINT, void (__fastcall *)(const struct tagRECT *, const struct tagRECT *, struct tagRECT *, const struct tagRECT *, unsigned int, unsigned int), __int64 (__fastcall *)(struct tagRECT *, struct tagRECT *, const struct tagRECT *, const struct tagRECT *)))(v733 + 144))(
                              a2,
                              *(_QWORD *)v631,
                              v743,
                              v767.pDstSubRects,
                              v762.pData,
                              *(_DWORD *)(*((_QWORD *)v7 + 19) + 424LL),
                              v724,
                              v728,
                              Src,
                              Sizea,
                              a2->Color,
                              DXGPRESENT::XformRect,
                              DXGPRESENT::ClipRects) )
                      {
                        v633 = WdLogNewEntry5_WdEvent(v632);
                        *(_QWORD *)(v633 + 24) = -1071775737LL;
                        *(_QWORD *)(v633 + 32) = v7;
                        WdLogEvent5_WdEvent(v633);
                        LODWORD(v28) = -1071775737;
                      }
                    }
                    v634 = v729;
                    DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v729);
                    v615 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)a3);
                    if ( v615 < 0 )
                    {
LABEL_871:
                      LODWORD(v28) = v615;
                      DXGPRESENTMUTEX::~DXGPRESENTMUTEX((DXGPRESENTMUTEX *)v738);
                      goto LABEL_1006;
                    }
                    if ( *((_BYTE *)v7 + 369) )
                    {
                      DXGPROCESS::GetCurrent();
                    }
                    else
                    {
                      v635 = (DXGDEVICE *)*((_QWORD *)v7 + 2);
                      v761.phAllocations = &v762.hAllocation;
                      v761.hDevice = 0;
                      v761.NumAllocations = 1;
                      DXGDEVICE::Unlock(v635, &v761, 0);
                    }
                    if ( (int)v28 >= 0 && (a2->Flags.Value & 0x10000) != 0 )
                    {
                      a2->PresentHistoryToken.Model = D3DKMT_PM_REDIRECTED_BLT;
                      a2->PresentHistoryToken.Token.Flip.hLogicalSurface = *(_QWORD *)(*((_QWORD *)v7 + 19) + 432LL);
                      a2->PresentHistoryToken.Token.Flip.VidPnSourceId = 0;
                      a2->PresentHistoryToken.TokenSize = 48;
                      DXGPRESENTMUTEX::Release((DXGPRESENTMUTEX *)v738);
                      LODWORD(v28) = DXGCONTEXT::SubmitPresentHistoryToken(
                                       v7,
                                       &a2->PresentHistoryToken,
                                       (struct COREDEVICEACCESS *)a3,
                                       v634,
                                       v726,
                                       0,
                                       0LL,
                                       0LL,
                                       0LL);
                    }
LABEL_836:
                    if ( v740 )
                    {
                      v740 = 0;
                      DXGFASTMUTEX::Release((struct _KTHREAD **)(v739 + 448), k, (__int64)v509, v510);
                    }
                    v262 = (_QWORD *)((char *)v7 + 304);
                    if ( *((_QWORD *)v7 + 38) )
                    {
                      if ( (int)v28 >= 0 )
                      {
                        v610 = *(unsigned int *)(*((_QWORD *)v7 + 19) + 4LL);
                        LOBYTE(v610) = v610 & 0x12;
                        if ( (_BYTE)v610 == 16 && (a2->Flags.Value & 2) == 0 )
                        {
                          v611 = WdLogNewEntry5_WdAssertion(v610, k, v509, v510);
                          *(_QWORD *)(v611 + 24) = 4640LL;
                          WdLogEvent5_WdAssertion(v611);
                        }
                      }
                      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2)
                                                                                                 + 16LL)
                                                                                     + 432LL)
                                                                         + 8LL)
                                                             + 496LL))(
                        *v262,
                        0LL);
                      *v262 = 0LL;
                    }
                    v612 = *((_QWORD *)v7 + 19);
                    if ( (*(_DWORD *)(v612 + 4) & 0x80) != 0 )
                    {
                      if ( (unsigned int)((_DWORD)v28 + 1071775738) > 1 )
                      {
                        v613 = WdLogNewEntry5_WdAssertion(*(_DWORD *)(v612 + 4) >> 7, k, v509, v510);
                        *(_QWORD *)(v613 + 24) = 4648LL;
                        WdLogEvent5_WdAssertion(v613);
                      }
                      LODWORD(v28) = 0;
                    }
                    DXGPRESENTMUTEX::~DXGPRESENTMUTEX((DXGPRESENTMUTEX *)v738);
                    goto LABEL_441;
                  }
                  v609 = 1;
                  goto LABEL_832;
                }
LABEL_878:
                v636 = WdLogNewEntry5_WdWarning(v578, v577, v579, v580);
                *(_QWORD *)(v636 + 24) = -1071775738LL;
                *(_QWORD *)(v636 + 32) = v7;
                WdLogEvent5_WdWarning(v636);
                goto LABEL_835;
              }
              v595 = v723;
              if ( !v723 )
              {
                v596 = WdLogNewEntry5_WdAssertion(v578, v577, v579, v580);
                *(_QWORD *)(v596 + 24) = 4198LL;
                WdLogEvent5_WdAssertion(v596);
              }
              if ( bTracingEnabled )
              {
                (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL)
                                                                               + 432LL)
                                                                   + 8LL)
                                                       + 336LL))(
                  *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 440LL),
                  v595);
                (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL)
                                                                               + 432LL)
                                                                   + 8LL)
                                                       + 336LL))(
                  *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 440LL),
                  hSource);
                pDstSubRects = v767.pDstSubRects;
                v599 = v767.SubRectCnt;
                v600 = a2->hWindow;
                v735 = (struct DXGALLOCATION *)*((_QWORD *)v7 + 38);
                if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
                  Template_ppxppttqddddddddq(
                    HIDWORD(*(_QWORD *)&v767.DstRect.left),
                    HIDWORD(*(_QWORD *)&v767.DstRect.right),
                    HIDWORD(*(_QWORD *)&v767.SrcRect.left),
                    v600,
                    v735);
                v601 = 0;
                if ( v599 )
                {
                  v602 = v735;
                  while ( 1 )
                  {
                    v603 = 0LL;
                    v604 = v599 - v601;
                    if ( v599 - v601 > 0x10 )
                      break;
                    v605 = v599 - v601;
                    if ( v604 )
                      goto LABEL_819;
LABEL_821:
                    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
                    {
                      LODWORD(HandleInformation) = v605;
                      LODWORD(Objecta) = v604 <= 0x10;
                      Template_ptqDR2DR2DR2DR2(
                        (__int64)v788,
                        v597,
                        v603,
                        v602,
                        Objecta,
                        HandleInformation,
                        v788,
                        v782,
                        v781,
                        v780);
                    }
                    v601 += 16;
                    if ( v601 >= v599 )
                    {
                      v7 = v750;
                      goto LABEL_825;
                    }
                  }
                  v605 = 16;
LABEL_819:
                  v597 = 0LL;
                  do
                  {
                    v606 = (unsigned int)v603 + v601;
                    v603 = (unsigned int)(v603 + 1);
                    v606 *= 2LL;
                    v597 += 4LL;
                    *(_DWORD *)&v787[v597 + 60] = *(&pDstSubRects->left + 2 * v606);
                    *(_DWORD *)&v781[v597 + 60] = *(&pDstSubRects->right + 2 * v606);
                    *(_DWORD *)&v780[v597 + 60] = *(&pDstSubRects->top + 2 * v606);
                    *(_DWORD *)&v779[v597 + 60] = *(&pDstSubRects->bottom + 2 * v606);
                  }
                  while ( (unsigned int)v603 < v605 );
                  goto LABEL_821;
                }
LABEL_825:
                v595 = v723;
              }
              v594 = DXGCONTEXT::SubmitPresent(
                       v7,
                       a2,
                       a2->BroadcastContextCount,
                       v746,
                       v727,
                       hSource,
                       v595,
                       &v767,
                       0LL,
                       *((struct _VIDMM_DMA_BUFFER **)v7 + 38),
                       v732,
                       CurrentProcessSessionId,
                       (struct _D3DKMT_PRESENT *)a3);
              *((_QWORD *)v7 + 38) = 0LL;
              goto LABEL_827;
            }
            if ( (*(_BYTE *)&v566 & 2) == 0 )
              goto LABEL_836;
            v637 = (DXGDEVICE *)*((_QWORD *)v7 + 2);
            v638 = 0;
            if ( (*(_WORD *)&v566 & 0x100) != 0
              && ADAPTER_DISPLAY::IsVidPnSourceOwner(
                   *(DXGADAPTER ***)(*((_QWORD *)v637 + 225) + 2280LL),
                   *((const struct DXGDEVICE **)v7 + 2),
                   a2->VidPnSourceId) )
            {
              v638 = 1;
            }
            else if ( !DXGDEVICE::AllowLegacyPresent(v637, k) )
            {
              v639 = 0;
LABEL_884:
              DXGADAPTERSTOPRESETLOCKSHARED::Release(v729);
              COREDEVICEACCESS::Release((COREDEVICEACCESS *)a3);
              if ( v639 || !DXGPRESENT::CheckOcclusion(*((DXGPRESENT **)v7 + 19)) )
              {
                if ( (a2->Flags.Value & 0x10000) != 0 )
                {
                  v644 = WdLogNewEntry5_WdAssertion(v641, v640, v642, v643);
                  *(_QWORD *)(v644 + 24) = 4400LL;
                  WdLogEvent5_WdAssertion(v644);
                }
                v645 = v726;
                CWin32kLocks::Unlock(v726);
                v646 = v733;
                v21 = (*(unsigned int (__fastcall **)(_QWORD))(v733 + 312))(0LL) == 0;
                v647 = v638;
                if ( v21 )
                  v647 = 0;
                LODWORD(v28) = CWin32kLocks::Lock(v726, a2->hWindow, 0, 0, v647);
                if ( *((_QWORD *)v726 + 1) )
                  v645 = (CWin32kLocks *)((char *)v726 + 8);
                if ( !(*(unsigned int (__fastcall **)(_QWORD, struct DXGALLOCATION *, const RECT *, _QWORD, UINT))(v646 + 152))(
                        *(_QWORD *)v645,
                        v565,
                        a2->pSrcSubRects,
                        a2->SubRectCnt,
                        a2->Color) )
                {
                  v649 = WdLogNewEntry5_WdEvent(v648);
                  *(_QWORD *)(v649 + 24) = -1071775737LL;
                  *(_QWORD *)(v649 + 32) = v7;
                  WdLogEvent5_WdEvent(v649);
                  LODWORD(v28) = -1071775737;
                }
              }
              else
              {
                LODWORD(v28) = -1071775738;
              }
              DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v729);
              v650 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)a3);
              v554 = v650;
              if ( v650 >= 0 )
                goto LABEL_836;
              v555 = WdLogNewEntry5_WdEvent(v651);
              goto LABEL_943;
            }
            v639 = 1;
            goto LABEL_884;
          }
          if ( (int)v28 < 0 || (v560 & 2) != 0 )
            goto LABEL_836;
          if ( (*(unsigned int (__fastcall **)(_QWORD))(v733 + 224))(0LL) )
          {
            if ( (a2->Flags.Value & 0x12100) == 0x10000 )
              goto LABEL_908;
            v653 = WdLogNewEntry5_WdAssertion(v652, k, v509, v510);
            *(_QWORD *)(v653 + 24) = 4437LL;
          }
          else
          {
            if ( *(_QWORD *)(*((_QWORD *)v7 + 2) + 1800LL) || (a2->Flags.Value & 0x4000000) != 0 )
            {
LABEL_908:
              if ( (a2->Flags.Value & 0x10000) != 0 )
              {
                v654 = *(HDC *)v726;
                v655 = PsGetCurrentProcess();
                v657 = PsGetProcessDxgProcess(v655, v656);
                v658 = v657;
                if ( v657 )
                {
                  if ( (*(_BYTE *)(v657 + 275) & 2) != 0 )
                  {
                    v659 = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
                    if ( v659 )
                      v658 = *v659;
                  }
                }
                v660 = *(_QWORD *)(v658 + 72);
                if ( v654 )
                {
                  if ( v660 )
                  {
                    v661 = *((_QWORD *)v7 + 19);
                    if ( *(_DWORD *)(v661 + 432) == a2->PresentHistoryToken.Token.GdiSysMem.dwDirtyFlags )
                    {
                      v662 = v729;
                      if ( *((_BYTE *)v729 + 16) )
                      {
                        *((_BYTE *)v729 + 16) = 0;
                        ExReleasePushLockSharedEx(*((_QWORD *)v662 + 1) + 120LL, 0LL);
                        KeLeaveCriticalRegion();
                        v661 = *((_QWORD *)v662 + 1);
                        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v661 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
                          DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v661 + 16), (struct DXGADAPTER *)v661);
                      }
                      if ( *((_BYTE *)a3 + 80) )
                        COREACCESS::Release((COREACCESS *)(a3 + 5));
                      v663 = (COREACCESS *)(a3 + 1);
                      if ( !*((_BYTE *)a3 + 32) )
                      {
                        v664 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v661, k, v509);
                        v664[3] = 275LL;
                        v664[4] = 4LL;
                        v664[5] = v663;
                        v664[6] = 0LL;
                        v664[7] = 0LL;
                        WdLogEvent5_WdCriticalError(v664);
                      }
                      *((_BYTE *)a3 + 32) = 0;
                      v665 = a3[3];
                      if ( KeGetCurrentThread() != v665[20] )
                        DXGADAPTER::ReleaseCoreResource((DXGADAPTER *)v665);
                      LODWORD(v766[0]) = 0;
                      memset(&v766[1], 0, 0x218uLL);
                      v666 = 1LL;
                      v667 = 0LL;
                      LODWORD(v766[0]) = *(_DWORD *)(*((_QWORD *)v7 + 19) + 352LL);
                      v766[1] = *(_QWORD *)(*((_QWORD *)v7 + 19) + 224LL);
                      v766[3] = *((unsigned int *)v7 + 6);
                      for ( LODWORD(v766[2]) = 1; (unsigned int)v667 < a2->BroadcastContextCount; ++LODWORD(v766[2]) )
                      {
                        v668 = (unsigned int)v667;
                        v667 = (unsigned int)(v667 + 1);
                        v766[(unsigned int)v666 + 3] = a2->BroadcastContext[v668];
                        v666 = (unsigned int)(LODWORD(v766[2]) + 1);
                      }
                      (*(void (__fastcall **)(HDC, _QWORD *, __int64, __int64))(v660 + 240))(v654, v766, v666, v667);
                      v671 = v729;
                      if ( !*((_BYTE *)v729 + 16) )
                      {
                        _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)v729 + 1) + 24LL));
                        *(_QWORD *)v671 = -1LL;
                        v672 = *((_QWORD *)v671 + 1);
                        KeEnterCriticalRegion();
                        ExAcquirePushLockSharedEx(v672 + 120, 0LL);
                        *((_BYTE *)v671 + 16) = 1;
                      }
                      if ( *((_BYTE *)a3 + 32) )
                      {
                        v673 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v670, v669, v509);
                        v673[3] = 275LL;
                        v673[4] = 4LL;
                        v673[5] = v663;
                        v673[6] = 0LL;
                        v673[7] = 0LL;
                        WdLogEvent5_WdCriticalError(v673);
                      }
                      v674 = a3[3];
                      if ( KeGetCurrentThread() != v674[20] )
                      {
                        if ( !KeReadStateEvent((PRKEVENT)v674 + 2) )
                        {
                          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                            Template_q(v675, &EventBlockThread, v676, 72);
                          KeWaitForSingleObject(a3[3] + 6, Executive, 0, 0, 0LL);
                        }
                        DXGADAPTER::AcquireCoreResourceShared((DXGADAPTER *)a3[3]);
                      }
                      *((_BYTE *)a3 + 32) = 1;
                      k = *((unsigned int *)a3[9] + 102);
                      if ( (_DWORD)k != 1 )
                        goto LABEL_942;
                      if ( *((_BYTE *)a3 + 80) )
                      {
                        COREACCESS::AcquireShared((COREACCESS *)(a3 + 5));
                        k = *((unsigned int *)a3[7] + 44);
                        if ( (_DWORD)k != 1 )
                        {
                          COREACCESS::Release((COREACCESS *)(a3 + 5));
LABEL_942:
                          COREACCESS::Release(v663);
                          v555 = WdLogNewEntry5_WdEvent(v677);
                          v554 = -1073741130LL;
LABEL_943:
                          *(_QWORD *)(v555 + 24) = v554;
                          *(_QWORD *)(v555 + 32) = v7;
                          goto LABEL_944;
                        }
                      }
                    }
                  }
                }
              }
              v678 = 0;
              v679 = (LONG *)v727;
              for ( j = 0; ; j = v678 )
              {
                while ( 1 )
                {
                  if ( (a2->Flags.Value & 0x10000) != 0 )
                    v680 = 1;
                  else
                    v680 = *(_DWORD *)(*((_QWORD *)v7 + 2) + 1808LL);
                  if ( v678 >= v680 )
                    goto LABEL_836;
                  v681 = *((_QWORD *)v7 + 19);
                  if ( v678 < *(_DWORD *)(v681 + 68) || !v678 )
                    break;
                  ++v678;
                  v767.SubRectCnt = 0;
                  j = v678;
                }
                v767.SubRectCnt = *(_DWORD *)(v681 + 4LL * v678 + 352);
                if ( v767.SubRectCnt )
                {
                  if ( (a2->Flags.Value & 0x10000) != 0 )
                  {
                    v682 = v723;
                  }
                  else
                  {
                    v682 = DXGDEVICE::OpenCddPrimaryHandle(
                             *((DXGDEVICE **)v7 + 2),
                             v678,
                             *((_BYTE *)v7 + 368),
                             *((_DWORD *)v7 + 86));
                    v723 = v682;
                  }
                  if ( v682 )
                  {
                    v683 = *((_QWORD *)v7 + 19);
                    if ( v678 >= *(_DWORD *)(v683 + 68) && v678 )
                      v684 = 0LL;
                    else
                      v684 = *(const RECT **)(v683 + 8LL * v678 + 224);
                    v767.pDstSubRects = v684;
                    if ( (a2->Flags.Value & 0x2000) != 0 )
                    {
                      CurrentOrientation = ADAPTER_DISPLAY::GetCurrentOrientation(
                                             *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 1800LL) + 2280LL),
                                             v678,
                                             1LL);
                      v686 = 0;
                      if ( CurrentOrientation != 1 )
                        v686 = 128;
                      v767.Flags.Value = v686 | v767.Flags.Value & 0xFFFFFF7F;
                    }
                    v769[0] = 0LL;
                    v769[1] = 0LL;
                    if ( (a2->Flags.Value & 0x10000) != 0 )
                      ContentRect = (const struct tagRECT *)v769;
                    else
                      ContentRect = ADAPTER_DISPLAY::GetContentRect(
                                      *(DXGADAPTER ***)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 1800LL) + 2280LL),
                                      v678);
                    v767.SrcRect = *(RECT *)(*((_QWORD *)v7 + 19) + 144LL);
                    v688 = (_DWORD *)*((_QWORD *)v7 + 19);
                    v767.DstRect.top = v688[33] - ContentRect->top;
                    v767.DstRect.bottom = v688[35] - ContentRect->top;
                    v767.DstRect.left = v688[32] - ContentRect->left;
                    v767.DstRect.right = v688[34] - ContentRect->left;
                    v689 = (struct _VIDMM_DMA_BUFFER **)((char *)v7 + 304);
                    if ( bTracingEnabled && *v689 )
                    {
                      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2)
                                                                                                 + 16LL)
                                                                                     + 432LL)
                                                                         + 8LL)
                                                             + 336LL))(
                        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 440LL),
                        v723);
                      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2)
                                                                                                 + 16LL)
                                                                                     + 432LL)
                                                                         + 8LL)
                                                             + 336LL))(
                        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 440LL),
                        hSource);
                      v691 = v767.pDstSubRects;
                      v692 = v767.SubRectCnt;
                      v693 = a2->hWindow;
                      v735 = (struct DXGALLOCATION *)*((_QWORD *)v7 + 38);
                      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
                        Template_ppxppttqddddddddq(
                          HIDWORD(*(_QWORD *)&v767.DstRect.left),
                          HIDWORD(*(_QWORD *)&v767.DstRect.right),
                          HIDWORD(*(_QWORD *)&v767.SrcRect.left),
                          v693,
                          v735);
                      v694 = 0;
                      if ( v692 )
                      {
                        v695 = v735;
                        while ( 1 )
                        {
                          v696 = 0LL;
                          v697 = v692 - v694;
                          if ( v692 - v694 > 0x10 )
                            break;
                          v698 = v692 - v694;
                          if ( v697 )
                            goto LABEL_979;
LABEL_981:
                          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
                          {
                            LODWORD(HandleInformation) = v698;
                            LODWORD(Object) = v697 <= 0x10;
                            Template_ptqDR2DR2DR2DR2(
                              (__int64)v787,
                              v690,
                              v696,
                              v695,
                              Object,
                              HandleInformation,
                              v787,
                              v786,
                              v785,
                              v784);
                          }
                          v694 += 16;
                          if ( v694 >= v692 )
                          {
                            v679 = (LONG *)v727;
                            goto LABEL_985;
                          }
                        }
                        v698 = 16;
LABEL_979:
                        v690 = 0LL;
                        do
                        {
                          v699 = (unsigned int)v696 + v694;
                          v696 = (unsigned int)(v696 + 1);
                          v699 *= 2LL;
                          v690 += 4LL;
                          *(_DWORD *)&v786[v690 + 60] = *(&v691->left + 2 * v699);
                          *(_DWORD *)&v785[v690 + 60] = *(&v691->right + 2 * v699);
                          *(_DWORD *)&v784[v690 + 60] = *(&v691->top + 2 * v699);
                          *(_DWORD *)&v783[v690 + 60] = *(&v691->bottom + 2 * v699);
                        }
                        while ( (unsigned int)v696 < v698 );
                        goto LABEL_981;
                      }
LABEL_985:
                      v678 = j;
                      v689 = (struct _VIDMM_DMA_BUFFER **)((char *)v7 + 304);
                    }
                    if ( *((_BYTE *)v7 + 369) )
                    {
                      v700 = *(struct VMBCHANNEL__ ***)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 16LL);
                      v701 = DXGPROCESS::GetCurrent();
                      LODWORD(Size) = v767.PrivateDriverDataSize;
                      v702 = DXGADAPTER::VmBusSendBlt(
                               v700,
                               v701,
                               v7,
                               v679[24],
                               v737[24],
                               &v767.SrcRect,
                               &v767.DstRect,
                               v767.SubRectCnt,
                               v767.pDstSubRects,
                               Size,
                               (unsigned __int8 *)v767.pPrivateDriverData);
                      v703 = (struct COREDEVICEACCESS *)a3;
                    }
                    else
                    {
                      v703 = (struct COREDEVICEACCESS *)a3;
                      v704 = v746;
                      v714 = CurrentProcessSessionId;
                      v713 = v732;
                      *((_DWORD *)v732 + 29) = v678;
                      v702 = DXGCONTEXT::SubmitPresent(
                               v7,
                               a2,
                               a2->BroadcastContextCount,
                               v704,
                               (struct DXGALLOCATION *)v679,
                               hSource,
                               v723,
                               &v767,
                               0LL,
                               *v689,
                               v713,
                               v714,
                               (struct _D3DKMT_PRESENT *)a3);
                    }
                    *((_QWORD *)v7 + 38) = 0LL;
                    LODWORD(v28) = v702;
                    if ( (a2->Flags.Value & 0x10000) != 0
                      && *(_DWORD *)(*((_QWORD *)v7 + 19) + 432LL) == a2->PresentHistoryToken.Token.GdiSysMem.dwDirtyFlags )
                    {
                      a2->PresentHistoryToken.Model = D3DKMT_PM_REDIRECTED_BLT;
                      a2->PresentHistoryToken.Token.Flip.hLogicalSurface = *(_QWORD *)(*((_QWORD *)v7 + 19) + 432LL);
                      if ( v767.SubRectCnt <= 0x10 )
                      {
                        a2->PresentHistoryToken.Token.Flip.VidPnSourceId = v767.SubRectCnt;
                        for ( k = 0LL;
                              (unsigned int)k < v767.SubRectCnt;
                              *(RECT *)((char *)&a2->PresentHistoryToken.Token.SurfaceComplete + 16 * v705 + 28) = v767.pDstSubRects[v705] )
                        {
                          v705 = (unsigned int)k;
                          k = (unsigned int)(k + 1);
                        }
                      }
                      else
                      {
                        a2->PresentHistoryToken.Token.Flip.VidPnSourceId = 1;
                        *(RECT *)((char *)&a2->PresentHistoryToken.Token.SurfaceComplete + 28) = v767.DstRect;
                      }
                      a2->PresentHistoryToken.TokenSize = 16 * (a2->PresentHistoryToken.Token.Flip.VidPnSourceId + 3);
                      if ( v740 )
                      {
                        v740 = 0;
                        DXGFASTMUTEX::Release((struct _KTHREAD **)(v739 + 448), k, (__int64)v509, v510);
                      }
                      LODWORD(v28) = DXGCONTEXT::SubmitPresentHistoryToken(
                                       v7,
                                       &a2->PresentHistoryToken,
                                       v703,
                                       v729,
                                       v726,
                                       0,
                                       0LL,
                                       0LL,
                                       0LL);
                    }
                    if ( (int)v28 < 0 )
                      goto LABEL_836;
                  }
                }
                ++v678;
              }
            }
            v653 = WdLogNewEntry5_WdAssertion(v652, k, v509, v510);
            *(_QWORD *)(v653 + 24) = 4442LL;
          }
          WdLogEvent5_WdAssertion(v653);
          goto LABEL_908;
        }
        COREACCESS::Release((COREACCESS *)(a3 + 5));
      }
      COREACCESS::Release(v513);
      LODWORD(v28) = -1073741130;
      DXGPRESENTMUTEX::~DXGPRESENTMUTEX((DXGPRESENTMUTEX *)v738);
      goto LABEL_1006;
    }
  }
  if ( !v99 )
  {
    if ( (v100 & 0x10A7C3) != 0 )
    {
      v382 = (_QWORD *)WdLogNewEntry5_WdWarning(v25, v100, v17, v18);
      v382[3] = v7;
      v382[4] = a2->Flags.Value;
      v382[5] = -1073741811LL;
      WdLogEvent5_WdWarning(v382);
      v23 = -1073741811;
      goto LABEL_494;
    }
    v160 = v100 & 0x10000000;
    if ( (_DWORD)v160 )
    {
      Count = v26[5].Count;
      if ( !Count || !*(_QWORD *)(Count + 56) )
      {
        v162 = WdLogNewEntry5_WdError(v25, v160);
        *(_QWORD *)(v162 + 24) = 3080LL;
LABEL_207:
        WdLogEvent5_WdError(v162);
        LODWORD(v28) = -1073741811;
        goto LABEL_1006;
      }
    }
    else if ( (*(_DWORD *)(v26[6].Count + 4) & 0x2003) == 0 )
    {
      goto LABEL_209;
    }
    if ( (_DWORD)v160 )
    {
      v164 = *(_QWORD *)(*((_QWORD *)v7 + 2) + 1800LL);
      if ( !v164
        || (v165 = *(_QWORD *)(v164 + 2280)) == 0
        || (VidPnSourceId = a2->VidPnSourceId, VidPnSourceId >= *(_DWORD *)(v165 + 80)) )
      {
        v162 = WdLogNewEntry5_WdError(v164, v160);
        *(_QWORD *)(v162 + 24) = a2->VidPnSourceId;
        goto LABEL_207;
      }
    }
    else
    {
      VidPnSourceId = (*(_DWORD *)(v26[6].Count + 4) >> 6) & 0xF;
    }
    v735 = (struct DXGALLOCATION *)v26;
    if ( !ExAcquireRundownProtection(v26 + 11) )
    {
      v169 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v167, v166, v168);
      v169[3] = 275LL;
      v169[4] = 25LL;
      v169[5] = v26;
      v169[6] = 0LL;
      v169[7] = 0LL;
      WdLogEvent5_WdCriticalError(v169);
    }
    DXGALLOCATIONREFERENCE::MoveAssign(&v747, &v735);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v735);
    v736 = a2->hSource;
    v171 = *(_QWORD *)(*((_QWORD *)v7 + 2) + 1800LL);
    if ( v171 )
    {
      v172 = *(_QWORD *)(v171 + 2280);
      if ( v172 )
      {
        v25 = *(_QWORD *)(v172 + 16);
        if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v25 + 160)
          || ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v25 + 144)) )
        {
          v26 = (struct _EX_RUNDOWN_REF *)v727;
          goto LABEL_224;
        }
        v26 = (struct _EX_RUNDOWN_REF *)v727;
      }
    }
    v173 = WdLogNewEntry5_WdAssertion(v25, v160, v170, v113);
    *(_QWORD *)(v173 + 24) = 3121LL;
    WdLogEvent5_WdAssertion(v173);
LABEL_224:
    v174 = v733;
    if ( (*(_DWORD *)(v26[6].Count + 4) & 0x2000) == 0 || (*(unsigned int (**)(void))(v733 + 216))() )
    {
      v112 = a2->Flags.Value;
      if ( (a2->Flags.Value & 0x60000) != 0 )
      {
        if ( (a2->Flags.Value & 0x60000) == 0x60000 )
        {
          v162 = WdLogNewEntry5_WdError(v25, v160);
          *(_QWORD *)(v162 + 24) = 3140LL;
          goto LABEL_207;
        }
        if ( (*(_DWORD *)(v26[6].Count + 4) & 0x1000) == 0 )
        {
          v162 = WdLogNewEntry5_WdError(v25, v160);
          *(_QWORD *)(v162 + 24) = 3146LL;
          goto LABEL_207;
        }
        v176 = *((unsigned int *)ADAPTER_DISPLAY::GetDisplayModeInfo(
                                   *(DXGADAPTER ***)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 1800LL) + 2280LL),
                                   VidPnSourceId)
               + 10);
        if ( (v176 & 0x10) == 0 )
        {
          v178 = WdLogNewEntry5_WdWarning(v176, v175, v177, v113);
          *(_QWORD *)(v178 + 24) = 3153LL;
LABEL_234:
          WdLogEvent5_WdWarning(v178);
          LODWORD(v28) = -1071775739;
          goto LABEL_1006;
        }
        v112 = a2->Flags.Value;
        if ( (v112 & 0x40000) != 0 && (v176 & 0x20) == 0 )
        {
          v178 = WdLogNewEntry5_WdWarning(v176, v175, v112, v113);
          *(_QWORD *)(v178 + 24) = 3159LL;
          goto LABEL_234;
        }
        if ( (v112 & 0xC0000) == 0xC0000 )
        {
          v179 = WdLogNewEntry5_WdError(v176, v175);
          *(_QWORD *)(v179 + 24) = 3165LL;
          WdLogEvent5_WdError(v179);
          LODWORD(v28) = -1073741811;
          goto LABEL_1006;
        }
      }
      v110 = *((_QWORD *)v7 + 2);
      if ( *(_QWORD *)(v110 + 1800) != *(_QWORD *)(*(_QWORD *)(v110 + 16) + 16LL) )
        goto LABEL_186;
      v180 = v732;
      v181 = *(_DWORD *)v732 ^ ((unsigned __int8)v112 ^ (unsigned __int8)*(_DWORD *)v732) & 4;
      *(_DWORD *)v732 = v181;
      v182 = ((unsigned __int8)v181 ^ (unsigned __int8)*(_DWORD *)&a2->Flags.0) & 8 ^ v181;
      *(_DWORD *)v180 = v182;
      v183 = ((unsigned __int8)v182 ^ (unsigned __int8)(a2->Flags.Value >> 1)) & 0x10 ^ v182;
      *(_DWORD *)v180 = v183;
      v184 = (v183 ^ (4 * a2->Flags.Value)) & 0x80000 ^ v183;
      *(_DWORD *)v180 = v184;
      v185 = (v184 ^ (4 * a2->Flags.Value)) & 0x100000 ^ v184;
      *(_DWORD *)v180 = v185;
      *(_DWORD *)v180 = v185 ^ (v185 ^ (4 * a2->Flags.Value)) & 0x200000;
      if ( (a2->Flags.Value & 0x8000000) != 0 )
        Duration = a2->Duration;
      else
        Duration = 0;
      *((_DWORD *)v180 + 36) = Duration;
      *(_DWORD *)v180 ^= (*(_DWORD *)v180 ^ a2->Flags.Value) & 0x20000000;
      v767.Flags.Value ^= (*(_BYTE *)&v767.Flags.0 ^ (unsigned __int8)*(_DWORD *)&a2->Flags.0) & 4;
      v767.Flags.Value ^= (*(_WORD *)&v767.Flags.0 ^ (unsigned __int16)(a2->Flags.Value >> 9)) & 0x100;
      v767.Flags.Value ^= (*(_WORD *)&v767.Flags.0 ^ (unsigned __int16)(a2->Flags.Value >> 9)) & 0x200;
      v767.Flags.Value ^= (*(_WORD *)&v767.Flags.0 ^ (unsigned __int16)(a2->Flags.Value >> 9)) & 0x400;
      pPresentRegions = a2->pPresentRegions;
      if ( pPresentRegions && !pPresentRegions->MoveRectCount && (*(unsigned int (**)(void))(v174 + 216))() )
      {
        v767.SubRectCnt = a2->pPresentRegions->DirtyRectCount;
        v767.pDstSubRects = a2->pPresentRegions->pDirtyRects;
      }
      v188 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, D3DDDI_FLIPINTERVAL_TYPE *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 408LL)
                                                                                               + 8LL)
                                                                                   + 424LL))(
               *(_QWORD *)(*((_QWORD *)v7 + 2) + 600LL),
               VidPnSourceId,
               &a2->FlipInterval);
      *((_DWORD *)v180 + 30) = v188;
      if ( !v188 )
      {
        v193 = (_QWORD *)WdLogNewEntry5_WdWarning(v190, v189, v191, v192);
        v193[3] = v7;
        v193[4] = a2->FlipInterval;
        v193[5] = -1073741811LL;
        WdLogEvent5_WdWarning(v193);
        LODWORD(v28) = -1073741811;
        goto LABEL_1006;
      }
      if ( ((v188 - 1) & 0xFFFFFFFD) != 0 )
      {
        v767.FlipInterval = a2->FlipInterval;
        if ( *((_DWORD *)v180 + 30) == 2 )
          goto LABEL_255;
      }
      else
      {
        v767.FlipInterval = D3DDDI_FLIPINTERVAL_IMMEDIATE;
      }
      v767.Flags.Value |= 8u;
LABEL_255:
      *((_DWORD *)v180 + 31) = a2->FlipInterval;
      *((_DWORD *)v180 + 29) = VidPnSourceId;
      v194 = *((_QWORD *)v7 + 2);
      if ( v194 != -232 && *(struct _KTHREAD **)(v194 + 240) == KeGetCurrentThread() )
      {
        v195 = WdLogNewEntry5_WdAssertion(v190, v189, v191, v192);
        *(_QWORD *)(v195 + 24) = 1167LL;
        WdLogEvent5_WdAssertion(v195);
      }
      KeEnterCriticalRegion();
      if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v194 + 232, 0LL) )
      {
        if ( bTracingEnabled )
        {
          v198 = *(_DWORD *)(v194 + 248);
          if ( v198 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            Template_q(v196, &EventBlockThread, v197, v198);
        }
        ExAcquirePushLockSharedEx(v194 + 232, 0LL);
      }
      v199 = v194 + 232;
      v200 = *(_QWORD *)(v194 + 8LL * VidPnSourceId + 840);
      ExReleasePushLockSharedEx(v199, 0LL);
      KeLeaveCriticalRegion();
      v201 = v26[6].Count;
      v110 = *(_DWORD *)(v201 + 4) & 0x2000;
      if ( (*(_DWORD *)(v201 + 4) & 0x2000) != 0 && v200 && (*(_DWORD *)(*(_QWORD *)(v200 + 48) + 4LL) & 0x2000) == 0 )
      {
        v202 = v732;
        *(_DWORD *)v732 |= 0x400000u;
      }
      else if ( !(_DWORD)v110 && v200 && (*(_DWORD *)(*(_QWORD *)(v200 + 48) + 4LL) & 0x2000) != 0 )
      {
        v202 = v732;
        *(_DWORD *)v732 |= 0x400000u;
      }
      else
      {
        v202 = v732;
        *(_DWORD *)v732 &= ~0x400000u;
      }
      v203 = *((unsigned int *)v202 + 30);
      if ( !(_DWORD)v203 )
        goto LABEL_186;
      v110 = VidPnSourceId;
      if ( (_DWORD)v203 == *(_DWORD *)(*((_QWORD *)v7 + 2) + 4LL * VidPnSourceId + 1736) )
        goto LABEL_186;
      v204 = WdLogNewEntry5_WdEvent(v203);
      *(_QWORD *)(v204 + 24) = *((_QWORD *)v7 + 2);
      WdLogEvent5_WdEvent(v204);
      COREDEVICEACCESS::Release((COREDEVICEACCESS *)a3);
      DXGDEVICE::FlushScheduler(*((_QWORD *)v7 + 2), 3LL);
      v205 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)a3);
      v207 = v205;
      if ( v205 >= 0 )
        goto LABEL_186;
      v208 = WdLogNewEntry5_WdEvent(v206);
      *(_QWORD *)(v208 + 24) = v207;
      WdLogEvent5_WdEvent(v208);
      LODWORD(v28) = v207;
      goto LABEL_1006;
    }
LABEL_209:
    v163 = (_QWORD *)WdLogNewEntry5_WdError(v25, v160);
    v163[3] = -1073741811LL;
    v163[4] = v7;
    v163[5] = v26;
    v163[6] = v26[6].Count;
    v163[7] = a2->hSource;
    WdLogEvent5_WdError(v163);
    LODWORD(v28) = -1073741811;
    goto LABEL_1006;
  }
  if ( !a2->pSrcSubRects || !a2->SubRectCnt || (v100 & 3) == 0 || (v100 & 0x100E803C) != 0 )
    goto LABEL_117;
  if ( (v100 & 2) != 0 )
  {
    if ( (v100 & 0x100681) != 0 )
    {
LABEL_117:
      v101 = (_QWORD *)WdLogNewEntry5_WdWarning(v25, v100, v17, v18);
      LODWORD(v102) = -1073741811;
      v101[3] = v7;
      v101[4] = a2->pSrcSubRects;
      v101[5] = a2->SubRectCnt;
      v101[6] = a2->Flags.Value;
      v101[7] = -1073741811LL;
LABEL_118:
      WdLogEvent5_WdWarning(v101);
      goto LABEL_119;
    }
  }
  else
  {
    if ( !(_DWORD)v25 || !v27 || (v100 & 0x80u) == 0LL )
      goto LABEL_117;
    v100 &= 0x600u;
    if ( (_DWORD)v100 == 1536 )
    {
      v101 = (_QWORD *)WdLogNewEntry5_WdWarning(v25, v100, v17, v18);
      LODWORD(v102) = -1073741811;
      v101[3] = -1073741811LL;
      v101[4] = v7;
      v101[5] = a2->pSrcSubRects;
      v101[6] = a2->SubRectCnt;
      v101[7] = a2->Flags.Value;
      goto LABEL_118;
    }
  }
  v103 = *(_DWORD *)(*((_QWORD *)v28 + 6) + 4LL);
  if ( (v103 & 3) == 0 )
  {
    v104 = (_QWORD *)WdLogNewEntry5_WdError(v25, v100);
    LODWORD(v102) = -1073741811;
    v104[3] = -1073741811LL;
    v104[4] = v7;
    v104[5] = v28;
    v105 = *((_QWORD *)v28 + 6);
LABEL_128:
    v104[6] = v105;
    v104[7] = a2->hDestination;
    WdLogEvent5_WdError(v104);
    goto LABEL_119;
  }
  VidPnSourceId = (v103 >> 6) & 0xF;
  v107 = *(_QWORD *)(*((_QWORD *)v7 + 2) + 1800LL);
  if ( !v107
    || (v107 = *(_QWORD *)(v107 + 2280)) == 0
    || !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(v107 + 16)) )
  {
    v108 = WdLogNewEntry5_WdAssertion(v107, v100, v17, v18);
    *(_QWORD *)(v108 + 24) = 2816LL;
    WdLogEvent5_WdAssertion(v108);
  }
  *((_DWORD *)v732 + 29) = VidPnSourceId;
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v743, (struct DXGALLOCATION *)v28);
  DXGALLOCATIONREFERENCE::MoveAssign(&v747, &v743);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v743);
  v736 = a2->hDestination;
  memset(&v756, 0, sizeof(v756));
  v756.hAllocation = *(HANDLE *)(*((_QWORD *)v28 + 6) + 16LL);
  v109 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(*((_QWORD *)v7 + 2) + 16LL), &v756);
  v102 = v109;
  if ( v109 < 0 )
  {
    v114 = (_QWORD *)WdLogNewEntry5_WdError(p_SrcRect, v110);
    v114[3] = v102;
    v114[4] = v7;
    v114[5] = *(_QWORD *)(*((_QWORD *)v28 + 6) + 16LL);
    v114[6] = v28;
    WdLogEvent5_WdError(v114);
    goto LABEL_119;
  }
  if ( (a2->Flags.Value & 1) == 0 )
  {
    v767.DstRect.right = v756.Width;
    v767.DstRect.bottom = v756.Height;
    *(_QWORD *)&v767.DstRect.left = 0LL;
    if ( (a2->Flags.Value & 0x40) != 0 )
    {
      v139 = a2->DstRect.right;
      if ( v139 <= a2->DstRect.left )
        goto LABEL_167;
      p_SrcRect = (RECT *)(unsigned int)a2->DstRect.bottom;
      if ( (int)p_SrcRect <= a2->DstRect.top || v139 <= 0 || (int)p_SrcRect <= 0 )
        goto LABEL_167;
      if ( !DXGPRESENT::IntersectRect(&v767.DstRect, &a2->DstRect, &v767.DstRect) )
        goto LABEL_120;
    }
    for ( m = 0; m < a2->SubRectCnt; ++m )
    {
      v141 = m;
      if ( !DXGPRESENT::IntersectRect(&v771, &a2->pSrcSubRects[v141], &v767.DstRect)
        || RtlCompareMemory(&v771, &a2->pSrcSubRects[v141], 0x10uLL) != 16 )
      {
        v156 = (_QWORD *)WdLogNewEntry5_WdError(v142, v110);
        v156[3] = -1073741811LL;
        v156[4] = a2->DstRect.left;
        v156[5] = a2->DstRect.top;
        v156[6] = a2->DstRect.right;
        v156[7] = a2->DstRect.bottom;
        WdLogEvent5_WdError(v156);
        v159 = (_QWORD *)WdLogNewEntry5_WdError(v158, v157);
        v159[3] = m;
        v159[4] = a2->pSrcSubRects[m].left;
        v159[5] = a2->pSrcSubRects[m].top;
        v159[6] = a2->pSrcSubRects[m].right;
        v159[7] = a2->pSrcSubRects[m].bottom;
        WdLogEvent5_WdError(v159);
        LODWORD(v28) = -1073741811;
        goto LABEL_1006;
      }
    }
    v135 = v767.Flags.Value;
    v767.SrcRect = v767.DstRect;
    v767.pDstSubRects = a2->pSrcSubRects;
    goto LABEL_185;
  }
  if ( v28 == (LONG *)v26 )
  {
    v104 = (_QWORD *)WdLogNewEntry5_WdError(p_SrcRect, v110);
    LODWORD(v102) = -1073741811;
    v104[3] = -1073741811LL;
    v104[4] = v7;
    v104[5] = v26;
    v105 = a2->hSource;
    goto LABEL_128;
  }
  v115 = *(_DWORD *)(v26[6].Count + 4);
  if ( (v115 & 3) != 0 )
  {
    v116 = (v115 >> 6) & 0xF;
    if ( (_DWORD)v116 != VidPnSourceId )
    {
      v117 = (_QWORD *)WdLogNewEntry5_WdError(v116, v110);
      LODWORD(v102) = -1073741811;
      v117[3] = -1073741811LL;
      v117[4] = v7;
      v117[5] = v26;
      v117[6] = (*(_DWORD *)(v26[6].Count + 4) >> 6) & 0xF;
      v117[7] = VidPnSourceId;
      WdLogEvent5_WdError(v117);
      goto LABEL_119;
    }
  }
  v118 = a2->SrcRect.left;
  p_SrcRect = &a2->SrcRect;
  v112 = (unsigned int)a2->SrcRect.right;
  if ( (int)v112 <= v118
    || (v113 = (unsigned int)a2->SrcRect.bottom, v110 = (unsigned int)a2->SrcRect.top, (int)v113 <= (int)v110)
    || (v119 = v724, v118 >= (int)v724)
    || (v120 = v728, (int)v110 >= (int)v728)
    || (int)v112 <= 0
    || (int)v113 <= 0 )
  {
    v138 = (_QWORD *)WdLogNewEntry5_WdError(p_SrcRect, v110);
    LODWORD(v102) = -1073741811;
    v138[3] = -1073741811LL;
    v138[4] = a2->SrcRect.left;
    v138[5] = a2->SrcRect.top;
    v138[6] = a2->SrcRect.right;
    v138[7] = a2->SrcRect.bottom;
    WdLogEvent5_WdError(v138);
    goto LABEL_119;
  }
  v121 = 0;
  if ( !a2->SubRectCnt )
    goto LABEL_152;
  do
  {
    v122 = v121;
    if ( !DXGPRESENT::IntersectRect(&Source1, &a2->pSrcSubRects[v122], p_SrcRect)
      || RtlCompareMemory(&Source1, &a2->pSrcSubRects[v122], 0x10uLL) != 16 )
    {
      v130 = (_QWORD *)WdLogNewEntry5_WdError(v123, v110);
      LODWORD(v102) = -1073741811;
      v130[3] = -1073741811LL;
      v130[4] = a2->SrcRect.left;
      v130[5] = a2->SrcRect.top;
      v130[6] = a2->SrcRect.right;
      v130[7] = a2->SrcRect.bottom;
      WdLogEvent5_WdError(v130);
      v133 = (_QWORD *)WdLogNewEntry5_WdError(v132, v131);
      v133[3] = v121;
      v133[4] = a2->pSrcSubRects[v121].left;
      v133[5] = a2->pSrcSubRects[v121].top;
      v133[6] = a2->pSrcSubRects[v121].right;
      v133[7] = a2->pSrcSubRects[v121].bottom;
      WdLogEvent5_WdError(v133);
      goto LABEL_119;
    }
    ++v121;
    p_SrcRect = &a2->SrcRect;
  }
  while ( v121 < a2->SubRectCnt );
  v120 = v728;
  p_SrcRect = &a2->SrcRect;
  v119 = v724;
LABEL_152:
  if ( (a2->Flags.Value & 0x40) == 0 )
  {
    if ( v756.Width == v119 && v756.Height == v120 )
    {
      v767.DstRect = *p_SrcRect;
      v767.pDstSubRects = a2->pSrcSubRects;
      goto LABEL_171;
    }
    v136 = (_QWORD *)WdLogNewEntry5_WdWarning(p_SrcRect, v110, v112, v113);
    v137 = v724;
    v136[3] = v7;
    v136[4] = v756.Width;
    v136[5] = v756.Height;
    v136[6] = v137;
    v136[7] = v120;
    WdLogEvent5_WdWarning(v136);
    LODWORD(v102) = -1073741811;
    goto LABEL_119;
  }
  v112 = (unsigned int)a2->DstRect.right;
  v113 = (unsigned int)a2->DstRect.left;
  if ( (int)v112 <= (int)v113
    || (v110 = (unsigned int)a2->DstRect.bottom, v124 = a2->DstRect.top, (int)v110 <= v124)
    || (int)v113 >= (int)v756.Width
    || v124 >= (int)v756.Height
    || (int)v112 <= 0
    || (int)v110 <= 0 )
  {
LABEL_167:
    v101 = (_QWORD *)WdLogNewEntry5_WdWarning(p_SrcRect, v110, v112, v113);
    LODWORD(v102) = -1073741811;
    v101[3] = -1073741811LL;
    v101[4] = a2->DstRect.left;
    v101[5] = a2->DstRect.top;
    v101[6] = a2->DstRect.right;
    v101[7] = a2->DstRect.bottom;
    goto LABEL_118;
  }
  v125 = (unsigned int)(a2->SrcRect.right - p_SrcRect->left);
  if ( (_DWORD)v125 != (_DWORD)v112 - (_DWORD)v113
    || (v110 = (unsigned int)(v110 - v124),
        v125 = (unsigned int)(a2->SrcRect.bottom - a2->SrcRect.top),
        (_DWORD)v125 != (_DWORD)v110) )
  {
    v134 = (_QWORD *)WdLogNewEntry5_WdError(v125, v110);
    LODWORD(v102) = -1073741811;
    v134[3] = -1073741811LL;
    v134[4] = v7;
    v134[5] = a2->Flags.Value;
    v134[6] = v28;
    v134[7] = VidPnSourceId;
    WdLogEvent5_WdError(v134);
    goto LABEL_119;
  }
  LODWORD(v102) = DXGPRESENT::GrowRectList(*((DXGPRESENT **)v7 + 19), a2->SubRectCnt);
  if ( (int)v102 < 0 )
  {
LABEL_119:
    v23 = v102;
LABEL_120:
    LODWORD(v28) = v23;
    goto LABEL_1006;
  }
  v126 = DXGPRESENT::GetDdiSubRectList(*((DXGPRESENT **)v7 + 19), 0);
  v112 = 0LL;
  v113 = (unsigned int)(a2->DstRect.left - a2->SrcRect.left);
  v127 = a2->DstRect.top - a2->SrcRect.top;
  if ( a2->SubRectCnt > (unsigned int)v110 )
  {
    do
    {
      v128 = (unsigned int)v112;
      v112 = (unsigned int)(v112 + 1);
      v110 = 2 * v128;
      *(&v126->left + 2 * v110) = v113 + *(&a2->pSrcSubRects->left + 2 * v110);
      *(&v126->right + 2 * v110) = v113 + *(&a2->pSrcSubRects->right + 2 * v110);
      *(&v126->top + 2 * v110) = v127 + *(&a2->pSrcSubRects->top + 2 * v110);
      *(&v126->bottom + 2 * v110) = v127 + *(&a2->pSrcSubRects->bottom + 2 * v110);
    }
    while ( (unsigned int)v112 < a2->SubRectCnt );
  }
  DstRect = a2->DstRect;
  v767.pDstSubRects = v126;
  p_SrcRect = &a2->SrcRect;
  v767.DstRect = DstRect;
LABEL_171:
  v767.SrcRect = *p_SrcRect;
  v135 = (*(_WORD *)&v767.Flags.0 ^ (unsigned __int16)(a2->Flags.Value >> 9)) & 0x800 ^ v767.Flags.Value;
  v767.Flags.Value = v135;
LABEL_185:
  v767.SubRectCnt = a2->SubRectCnt;
  v767.Flags.Value = ((unsigned __int8)v135 ^ (unsigned __int8)*(_DWORD *)&a2->Flags.0) & 1 ^ v135;
  v767.Flags.Value ^= (*(_BYTE *)&v767.Flags.0 ^ (unsigned __int8)*(_DWORD *)&a2->Flags.0) & 2;
  v767.Flags.Value ^= (*(_BYTE *)&v767.Flags.0 ^ (unsigned __int8)(a2->Flags.Value >> 5)) & 0x10;
  v767.Flags.Value ^= (*(_BYTE *)&v767.Flags.0 ^ (unsigned __int8)(a2->Flags.Value >> 5)) & 0x20;
  v767.Flags.Value ^= (*(_BYTE *)&v767.Flags.0 ^ (unsigned __int8)(a2->Flags.Value >> 5)) & 0x40;
  v767.Color = a2->Color;
  v767.Flags.Value ^= (*(_WORD *)&v767.Flags.0 ^ (unsigned __int16)(a2->Flags.Value >> 9)) & 0x800;
LABEL_186:
  v143 = *((_QWORD *)v7 + 2);
  v144 = *(_QWORD *)(*(_QWORD *)(v143 + 1800) + 2280LL);
  v145 = *(_QWORD *)(v144 + 16);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v145 + 160)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v145 + 144)) )
  {
    v146 = WdLogNewEntry5_WdAssertion(v145, v110, v112, v113);
    *(_QWORD *)(v146 + 24) = 4858LL;
    WdLogEvent5_WdAssertion(v146);
  }
  if ( VidPnSourceId >= *(_DWORD *)(v144 + 80)
    && (v147 = WdLogNewEntry5_WdAssertion(v145, v110, v112, v113),
        *(_QWORD *)(v147 + 24) = 4859LL,
        WdLogEvent5_WdAssertion(v147),
        VidPnSourceId >= *(_DWORD *)(v144 + 80))
    || (v149 = *(_QWORD *)(v144 + 112),
        v150 = VidPnSourceId,
        v148 = (CWin32kLocks *)(3208LL * VidPnSourceId),
        v726 = v148,
        v143 != *(_QWORD *)((char *)v148 + v149 + 688)) )
  {
    v381 = (_QWORD *)WdLogNewEntry5_WdWarning(v148, v110, v112, v113);
    v381[3] = -1071775744LL;
    v381[4] = v7;
    v381[5] = a2->hSource;
    v381[6] = v727;
    v381[7] = VidPnSourceId;
    WdLogEvent5_WdWarning(v381);
    LODWORD(v28) = -1071775744;
    goto LABEL_1006;
  }
  v151 = *(_QWORD *)(*((_QWORD *)v7 + 2) + 1800LL);
  if ( v151 )
  {
    if ( !*(_QWORD *)(v151 + 2280) )
    {
      v152 = WdLogNewEntry5_WdAssertion(v148, v110, v112, v113);
      *(_QWORD *)(v152 + 24) = 8198LL;
      WdLogEvent5_WdAssertion(v152);
      v148 = v726;
    }
    v153 = *(_QWORD *)(v151 + 2280);
    if ( !v153 )
      goto LABEL_199;
    if ( VidPnSourceId >= *(_DWORD *)(v153 + 80) )
    {
      v154 = WdLogNewEntry5_WdAssertion(v148, v110, v112, v113);
      *(_QWORD *)(v154 + 24) = 4896LL;
      WdLogEvent5_WdAssertion(v154);
      v148 = v726;
    }
    if ( !*((_BYTE *)v148 + *(_QWORD *)(v153 + 112) + 720) )
    {
LABEL_199:
      if ( *(_DWORD *)(*((_QWORD *)v7 + 2) + 328LL) == 1 )
      {
        v155 = (_QWORD *)WdLogNewEntry5_WdEvent(v148);
        v155[3] = -1071775738LL;
        v155[4] = v7;
        v155[5] = VidPnSourceId;
        WdLogEvent5_WdEvent(v155);
        LODWORD(v28) = -1071775738;
        goto LABEL_1006;
      }
      if ( (a2->Flags.Value & 4) != 0 )
      {
        v209 = (_QWORD *)WdLogNewEntry5_WdEvent(v148);
        v209[3] = 0LL;
        v209[4] = v7;
        v209[5] = VidPnSourceId;
        WdLogEvent5_WdEvent(v209);
        if ( (a2->Flags.Value & 4) != 0 )
        {
          v210 = (DXGDEVICE *)*((_QWORD *)v7 + 2);
          v211 = *((_QWORD *)v210 + 2);
          if ( *((_QWORD *)v210 + 225) == *(_QWORD *)(v211 + 16) )
          {
            v212 = *((_QWORD *)v210 + 225);
            if ( v212 == *(_QWORD *)(v211 + 16) )
              ADAPTER_DISPLAY::DisableOverlayPlanes(*(ADAPTER_DISPLAY **)(v212 + 2280), VidPnSourceId);
            v213 = v732;
            DXGDEVICE::SetDisplayedPrimary(*((DXGDEVICE **)v7 + 2), VidPnSourceId, v727, *((_DWORD *)v732 + 34), 1u);
            LODWORD(v28) = 0;
            *(_DWORD *)(*((_QWORD *)v7 + 2) + 4LL * VidPnSourceId + 1736) = *((_DWORD *)v213 + 30);
          }
          else
          {
            DXGDEVICE::SetDisplayedPrimary(v210, VidPnSourceId, v727, 0, 1u);
            LODWORD(v28) = 0;
          }
          goto LABEL_1006;
        }
LABEL_494:
        LODWORD(v28) = v23;
        goto LABEL_1006;
      }
    }
  }
  v214 = (DXGCONTEXT *)a2->Flags.Value;
  if ( ((unsigned int)v214 & 0x10000000) == 0 )
  {
    v215 = *((_QWORD *)v7 + 2);
    if ( *(_DWORD *)(v215 + 328) == 1 && (*(_DWORD *)(v215 + 4LL * VidPnSourceId + 1032) & 0x100) == 0 )
    {
      v216 = (_QWORD *)WdLogNewEntry5_WdEvent(v214);
      LODWORD(v28) = -1071775739;
      v216[3] = -1071775739LL;
      v216[4] = v7;
      v216[5] = a2->hSource;
      v216[6] = v727;
      v216[7] = VidPnSourceId;
      WdLogEvent5_WdEvent(v216);
      goto LABEL_1006;
    }
  }
  if ( ((unsigned __int8)v214 & 4) != 0 )
  {
    if ( a2->pPresentRegions )
    {
      LODWORD(v28) = DXGCONTEXT::ValidatePresentRegions(v214, a2, v724, v728);
      if ( (int)v28 < 0 )
        goto LABEL_1006;
    }
  }
  v217 = *(_QWORD *)(*((_QWORD *)v7 + 2) + 1800LL);
  v218 = *(_QWORD *)(v217 + 2280);
  if ( VidPnSourceId >= *(_DWORD *)(v218 + 80) )
  {
    v219 = WdLogNewEntry5_WdAssertion(v217, v110, v112, v113);
    *(_QWORD *)(v219 + 24) = 790LL;
    WdLogEvent5_WdAssertion(v219);
  }
  v220 = *(_QWORD *)(v218 + 16);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v220 + 160)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v220 + 144)) )
  {
    v222 = WdLogNewEntry5_WdAssertion(v221, v110, v112, v113);
    *(_QWORD *)(v222 + 24) = 791LL;
    WdLogEvent5_WdAssertion(v222);
  }
  v223 = *(_QWORD *)((char *)v726 + *(_QWORD *)(v218 + 112) + 88);
  if ( !v223 || (v224 = *(_QWORD *)(v223 + 48), (*(_DWORD *)(v224 + 4) & 0x10) != 0) || !v224 )
  {
    v257 = *((_QWORD *)v7 + 2);
    if ( (*(_DWORD *)(v257 + 4LL * VidPnSourceId + 1032) & 0x200) != 0 || (a2->Flags.Value & 0x10000000) != 0 )
      goto LABEL_306;
    v258 = (_QWORD *)WdLogNewEntry5_WdWarning(*(_DWORD *)(v257 + 4LL * VidPnSourceId + 1032) >> 9, v110, v112, v113);
    LODWORD(v246) = -1071775739;
    v258[3] = -1071775739LL;
    v258[4] = v7;
    v258[5] = a2->hSource;
    v258[6] = v727;
    v258[7] = VidPnSourceId;
    WdLogEvent5_WdWarning(v258);
    goto LABEL_1003;
  }
  v225 = *(_DWORD *)(*((_QWORD *)v7 + 19) + 8LL);
  v21 = v225 == (*(unsigned int (__fastcall **)(__int64, __int64, __int64, __int64))(v733 + 8))(v224, v110, v112, v113);
  v226 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
  if ( v21 )
  {
    if ( (*(_BYTE *)&v226 & 4) != 0 )
      goto LABEL_306;
    COREDEVICEACCESS::Release((COREDEVICEACCESS *)a3);
    DXGADAPTERSTOPRESETLOCKSHARED::Release(v729);
    DXGPRESENTMUTEX::DXGPRESENTMUTEX(
      (DXGPRESENTMUTEX *)v764,
      *(struct ADAPTER_RENDER *const *)(*((_QWORD *)v7 + 2) + 16LL),
      v248,
      v249);
    DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)v764, v250, v251, v252);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v729);
    v253 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)a3);
    v246 = (struct DXGALLOCATION *)v253;
    if ( v253 >= 0 )
    {
      DXGDEVICE::SynchronizePresentToPrimary(*((DXGDEVICE **)v7 + 2), v7, v255, 0);
      DXGPRESENTMUTEX::~DXGPRESENTMUTEX((DXGPRESENTMUTEX *)v764);
      goto LABEL_306;
    }
    v256 = WdLogNewEntry5_WdEvent(v254);
    *(_QWORD *)(v256 + 24) = v246;
    *(_QWORD *)(v256 + 32) = v7;
    WdLogEvent5_WdEvent(v256);
    DXGPRESENTMUTEX::~DXGPRESENTMUTEX((DXGPRESENTMUTEX *)v764);
    goto LABEL_1003;
  }
  if ( (*(_BYTE *)&v226 & 4) == 0 )
  {
    DXGDEVICE::FlushScheduler(*((_QWORD *)v7 + 2), 2LL);
    DXGADAPTERSTOPRESETLOCKSHARED::Release(v729);
    COREDEVICEACCESS::Release((COREDEVICEACCESS *)a3);
    DXGPRESENTMUTEX::DXGPRESENTMUTEX(
      (DXGPRESENTMUTEX *)v763,
      *(struct ADAPTER_RENDER *const *)(*((_QWORD *)v7 + 2) + 16LL),
      v227,
      v228);
    DXGPRESENTMUTEX::Acquire((DXGPRESENTMUTEX *)v763, v229, v230, v231);
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire(v729);
    v232 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)a3);
    v28 = (LONG *)v232;
    if ( v232 < 0 )
    {
      v235 = WdLogNewEntry5_WdEvent(v233);
      *(_QWORD *)(v235 + 24) = v28;
      *(_QWORD *)(v235 + 32) = v7;
      WdLogEvent5_WdEvent(v235);
      DXGPRESENTMUTEX::~DXGPRESENTMUTEX((DXGPRESENTMUTEX *)v763);
      goto LABEL_1006;
    }
    DXGDEVICE::SynchronizePresentToPrimary(*((DXGDEVICE **)v7 + 2), v7, v234, 1u);
    DXGPRESENTMUTEX::~DXGPRESENTMUTEX((DXGPRESENTMUTEX *)v763);
  }
  *(_DWORD *)(*((_QWORD *)v7 + 19) + 8LL) = (*(__int64 (**)(void))(v733 + 8))();
  CddInterface = ADAPTER_DISPLAY::GetCddInterface(
                   *(DXGADAPTER ***)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 1800LL) + 2280LL),
                   VidPnSourceId);
  if ( CddInterface )
    (*((void (__fastcall **)(_QWORD, _QWORD))CddInterface + 1))(*(_QWORD *)CddInterface, 0LL);
LABEL_306:
  v237 = *((_QWORD *)v7 + 2);
  v238 = *(_QWORD *)(*(_QWORD *)(v237 + 16) + 16LL);
  if ( *(_QWORD *)(v237 + 1800) != v238 )
  {
    if ( !*(_QWORD *)(v237 + 1800) )
    {
      v380 = WdLogNewEntry5_WdAssertion(v237, v238, v112, v113);
      *(_QWORD *)(v380 + 24) = *((_QWORD *)v7 + 2);
      *(_QWORD *)(v380 + 32) = -1073741822LL;
      WdLogEvent5_WdAssertion(v380);
      LODWORD(v246) = -1073741811;
      goto LABEL_1003;
    }
    v365 = v727;
    *(_QWORD *)&v768.left = 0LL;
    v366 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
    if ( (*(_DWORD *)&v366 & 0x10000000) != 0 )
    {
      v768.right = HIDWORD(a2[1].hWindow);
      v768.bottom = a2[1].VidPnSourceId;
    }
    else
    {
      v246 = (struct DXGALLOCATION *)v737;
      if ( (*(_BYTE *)&v366 & 4) != 0 )
        v246 = v727;
      v367 = *(_DWORD *)(*((_QWORD *)v246 + 6) + 4LL);
      if ( (v367 & 0x10) != 0 )
      {
        v368 = (_QWORD *)WdLogNewEntry5_WdEvent(v237);
        v368[3] = -1071775482LL;
        v368[4] = v7;
        v368[5] = v246;
        WdLogEvent5_WdEvent(v368);
        LODWORD(v246) = -1071775482;
        goto LABEL_1003;
      }
      v369 = *(_OWORD *)ADAPTER_DISPLAY::GetDisplayModeInfo(
                          *(DXGADAPTER ***)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 1800LL) + 2280LL),
                          (v367 >> 6) & 0xF);
      v757.Flags.Value = 1;
      memset(&v757, 0, 40);
      v757.Rotation = -1;
      v370 = *((_QWORD *)v246 + 6);
      v765 = v369;
      v757.hAllocation = *(HANDLE *)(v370 + 16);
      v371 = ADAPTER_RENDER::DdiDescribeAllocation(
               *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 16LL) + 2288LL),
               &v757);
      v374 = v371;
      if ( v371 < 0 )
      {
        v375 = (_QWORD *)WdLogNewEntry5_WdError(Format, v372);
        v375[3] = v374;
        v375[4] = v7;
        v375[5] = *((unsigned int *)v246 + 4);
        v375[6] = v246;
        v375[7] = (*(_DWORD *)(*((_QWORD *)v246 + 6) + 4LL) >> 6) & 0xF;
        WdLogEvent5_WdError(v375);
        LODWORD(v246) = -1073741811;
        goto LABEL_1003;
      }
      if ( *(_QWORD *)&v757.Width != (_QWORD)v765 )
        goto LABEL_484;
      v376 = 22;
      Format = 22LL;
      if ( v757.Format != D3DDDIFMT_A8R8G8B8 )
        Format = (unsigned int)v757.Format;
      if ( DWORD2(v765) != 21 )
        v376 = DWORD2(v765);
      if ( (_DWORD)Format != v376 )
      {
LABEL_484:
        v377 = (_QWORD *)WdLogNewEntry5_WdEvent(Format);
        v377[3] = -1071775482LL;
        v377[4] = v7;
        v377[5] = v246;
        WdLogEvent5_WdEvent(v377);
        LODWORD(v246) = -1071775739;
        goto LABEL_1003;
      }
      v768.right = v757.Width;
      v768.bottom = v757.Height;
    }
    LODWORD(v28) = ADAPTER_DISPLAY::PresentDisplayOnly(
                     *(ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 1800LL) + 2280LL),
                     v7,
                     VidPnSourceId,
                     a2,
                     &v767,
                     (struct COREDEVICEACCESS *)a3,
                     &v768);
    if ( (int)v28 < 0 )
    {
LABEL_451:
      v262 = (_QWORD *)((char *)v7 + 304);
      goto LABEL_452;
    }
    if ( (a2->Flags.Value & 4) != 0 )
    {
      v378 = *((_QWORD *)v7 + 2);
      v379 = *(_QWORD *)(v378 + 1800);
      if ( v379 == *(_QWORD *)(*(_QWORD *)(v378 + 16) + 16LL) )
        ADAPTER_DISPLAY::DisableOverlayPlanes(*(ADAPTER_DISPLAY **)(v379 + 2280), VidPnSourceId);
      DXGDEVICE::SetDisplayedPrimary(*((DXGDEVICE **)v7 + 2), VidPnSourceId, v365, 0, 1u);
      DXGCONTEXT::UpdatePostComposition(v7, VidPnSourceId, 0, 0, 0);
    }
    goto LABEL_440;
  }
  v239 = a2->Flags.Value & 0x10;
  ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v237 + 104));
  if ( !*((_BYTE *)v7 + 369) )
  {
    LODWORD(v244) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL)
                                                                                              + 408LL)
                                                                                  + 8LL)
                                                                      + 184LL))(
                      *(_QWORD *)(*((_QWORD *)v7 + 2) + 600LL),
                      VidPnSourceId,
                      0LL);
    if ( (_DWORD)v244 != -1071775486 )
      goto LABEL_319;
    if ( v239 )
      goto LABEL_320;
    COREDEVICEACCESS::Release((COREDEVICEACCESS *)a3);
    LOBYTE(v245) = 1;
    v244 = (*(int (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2)
                                                                                              + 16LL)
                                                                                  + 408LL)
                                                                      + 8LL)
                                                          + 184LL))(
             *(_QWORD *)(*((_QWORD *)v7 + 2) + 600LL),
             VidPnSourceId,
             v245);
    LODWORD(v246) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)a3);
    if ( (int)v246 < 0 )
    {
      v247 = WdLogNewEntry5_WdEvent(v243);
      *(_QWORD *)(v247 + 24) = v244;
      WdLogEvent5_WdEvent(v247);
      goto LABEL_325;
    }
LABEL_319:
    if ( (int)v244 < 0 )
    {
LABEL_320:
      v259 = WdLogNewEntry5_WdEvent(v243);
      *(_QWORD *)(v259 + 24) = (int)v244;
      *(_QWORD *)(v259 + 32) = v7;
      WdLogEvent5_WdEvent(v259);
      if ( (_DWORD)v244 != -1071775486 && (_DWORD)v244 != -1073741130 && (_DWORD)v244 != -1071775232 )
      {
        v260 = WdLogNewEntry5_WdAssertion(v243, v240, v241, v242);
        *(_QWORD *)(v260 + 24) = 2241LL;
        WdLogEvent5_WdAssertion(v260);
      }
    }
    LODWORD(v246) = v244;
LABEL_325:
    if ( (int)v246 < 0 )
    {
      v261 = WdLogNewEntry5_WdEvent(v243);
      *(_QWORD *)(v261 + 24) = (int)v246;
      *(_QWORD *)(v261 + 32) = v7;
      WdLogEvent5_WdEvent(v261);
      goto LABEL_1003;
    }
    v150 = VidPnSourceId;
  }
  if ( ((*((_DWORD *)v732 + 30) - 3) & 0xFFFFFFFD) == 0 )
  {
LABEL_332:
    CurrentIrql = *((_QWORD *)v7 + 2);
    v265 = *(_QWORD *)(*(_QWORD *)(CurrentIrql + 1800) + 2280LL);
    v266 = *(CWin32kLocks **)(v265 + 16);
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v266 + 20)
      && !ExIsResourceAcquiredSharedLite(*((PERESOURCE *)v266 + 18)) )
    {
      v267 = WdLogNewEntry5_WdAssertion(v266, v240, v241, v242);
      *(_QWORD *)(v267 + 24) = 4858LL;
      WdLogEvent5_WdAssertion(v267);
    }
    if ( VidPnSourceId >= *(_DWORD *)(v265 + 80) )
    {
      v268 = WdLogNewEntry5_WdAssertion(v266, v240, v241, v242);
      *(_QWORD *)(v268 + 24) = 4859LL;
      WdLogEvent5_WdAssertion(v268);
    }
    v269 = v727;
    if ( VidPnSourceId >= *(_DWORD *)(v265 + 80)
      || (v240 = v726,
          v266 = (CWin32kLocks *)CurrentIrql,
          CurrentIrql != *(_QWORD *)((char *)v726 + *(_QWORD *)(v265 + 112) + 688)) )
    {
      v359 = (_QWORD *)WdLogNewEntry5_WdWarning(v266, v240, v241, v242);
      v359[3] = -1071775744LL;
      v359[4] = v7;
      v359[5] = a2->hSource;
      v359[6] = v269;
      v359[7] = v150;
      WdLogEvent5_WdWarning(v359);
      LODWORD(v28) = -1071775744;
LABEL_459:
      v360 = *((_QWORD *)v7 + 38);
      if ( v360 )
      {
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 432LL)
                                                            + 8LL)
                                                + 496LL))(
          v360,
          0LL);
        *((_QWORD *)v7 + 38) = 0LL;
      }
      if ( (_DWORD)v28 == -1071774920 )
      {
        if ( (a2->Flags.Value & 4) != 0 )
        {
          v361 = (DXGDEVICE *)*((_QWORD *)v7 + 2);
          v362 = *((_QWORD *)v361 + 2);
          if ( *((_QWORD *)v361 + 225) == *(_QWORD *)(v362 + 16) )
          {
            v363 = *((_QWORD *)v361 + 225);
            if ( v363 == *(_QWORD *)(v362 + 16) )
              ADAPTER_DISPLAY::DisableOverlayPlanes(*(ADAPTER_DISPLAY **)(v363 + 2280), VidPnSourceId);
            v246 = v732;
            DXGDEVICE::SetDisplayedPrimary(*((DXGDEVICE **)v7 + 2), VidPnSourceId, v269, *((_DWORD *)v732 + 34), 1u);
            v364 = *((_DWORD *)v246 + 30);
            LODWORD(v246) = 0;
            *(_DWORD *)(*((_QWORD *)v7 + 2) + 4 * v150 + 1736) = v364;
            goto LABEL_1003;
          }
          DXGDEVICE::SetDisplayedPrimary(v361, VidPnSourceId, v269, 0, 1u);
        }
        LODWORD(v246) = 0;
LABEL_1003:
        v453 = (int)v246;
        goto LABEL_1004;
      }
      goto LABEL_440;
    }
    v270 = *(_QWORD *)(*((_QWORD *)v7 + 2) + 1800LL);
    if ( v270 )
    {
      if ( !*(_QWORD *)(v270 + 2280) )
      {
        v271 = WdLogNewEntry5_WdAssertion(CurrentIrql, v726, v241, v242);
        *(_QWORD *)(v271 + 24) = 8198LL;
        WdLogEvent5_WdAssertion(v271);
      }
      v272 = *(_QWORD *)(v270 + 2280);
      if ( !v272 )
        goto LABEL_346;
      if ( VidPnSourceId >= *(_DWORD *)(v272 + 80) )
      {
        v273 = WdLogNewEntry5_WdAssertion(v266, v240, v241, v242);
        *(_QWORD *)(v273 + 24) = 4896LL;
        WdLogEvent5_WdAssertion(v273);
      }
      v266 = v726;
      if ( !*((_BYTE *)v726 + *(_QWORD *)(v272 + 112) + 720) )
      {
LABEL_346:
        if ( *(_DWORD *)(*((_QWORD *)v7 + 2) + 328LL) == 1 )
        {
          v274 = (_QWORD *)WdLogNewEntry5_WdEvent(v266);
          LODWORD(v28) = -1071775738;
          v274[3] = -1071775738LL;
          v274[4] = v7;
          v274[5] = v150;
          WdLogEvent5_WdEvent(v274);
          goto LABEL_459;
        }
        if ( (a2->Flags.Value & 4) != 0 )
        {
          v275 = (_QWORD *)WdLogNewEntry5_WdEvent(v266);
          v275[3] = 0LL;
          v275[4] = v7;
          v275[5] = v150;
          WdLogEvent5_WdEvent(v275);
          LODWORD(v28) = -1071774920;
          goto LABEL_459;
        }
      }
    }
    v276 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
    if ( (*(_DWORD *)&v276 & 0x10000000) == 0 )
    {
      v277 = *((_QWORD *)v7 + 2);
      if ( *(_DWORD *)(v277 + 328) == 1 && (*(_DWORD *)(v277 + 4 * v150 + 1032) & 0x100) == 0 )
      {
        v278 = (_QWORD *)WdLogNewEntry5_WdEvent(v266);
        LODWORD(v28) = -1071775739;
        v278[3] = -1071775739LL;
        v278[4] = v7;
        v278[5] = a2->hSource;
        v278[6] = v269;
        v278[7] = v150;
        WdLogEvent5_WdEvent(v278);
        goto LABEL_459;
      }
    }
    v279 = v727;
    if ( (*(_BYTE *)&v276 & 4) != 0 )
    {
      if ( v727 )
      {
        v280 = *((_QWORD *)v727 + 6);
        if ( v280 )
        {
          if ( (*(_DWORD *)(v280 + 4) & 0x2000) != 0
            && !DXGDEVICE::IsDirectFlipAllocationPinned(*((DXGDEVICE **)v7 + 2), v727) )
          {
            v282 = (_QWORD *)WdLogNewEntry5_WdEvent(v281);
            LODWORD(v246) = -1071775739;
            v282[3] = -1071775739LL;
            v282[4] = v7;
            v282[5] = v279;
            WdLogEvent5_WdEvent(v282);
            v283 = *((_QWORD *)v7 + 38);
            if ( v283 )
            {
              (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL)
                                                                              + 432LL)
                                                                  + 8LL)
                                                      + 496LL))(
                v283,
                0LL);
              *((_QWORD *)v7 + 38) = 0LL;
            }
            goto LABEL_1003;
          }
        }
      }
    }
    if ( (*(_WORD *)&v276 & 0x2000) != 0 )
    {
      v284 = ADAPTER_DISPLAY::GetCurrentOrientation(
               *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 1800LL) + 2280LL),
               VidPnSourceId,
               1LL);
      v285 = 0;
      if ( v284 != 1 )
        v285 = 128;
      v767.Flags.Value = v285 | v767.Flags.Value & 0xFFFFFF7F;
    }
    if ( !bTracingEnabled )
    {
LABEL_382:
      v300 = v732;
      LODWORD(v28) = DXGCONTEXT::SubmitPresent(
                       v7,
                       a2,
                       a2->BroadcastContextCount,
                       v746,
                       v279,
                       hSource,
                       v723,
                       &v767,
                       a2->pPresentRegions,
                       *((struct _VIDMM_DMA_BUFFER **)v7 + 38),
                       v732,
                       CurrentProcessSessionId,
                       (struct _D3DKMT_PRESENT *)a3);
      if ( (int)v28 >= 0 )
      {
        v301 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 1800LL) + 2280LL) + 112LL);
        if ( *(_DWORD *)((char *)v726 + v301 + 1028) == -1 )
        {
          v302 = WdLogNewEntry5_WdAssertion(v301, v240, v241, v242);
          *(_QWORD *)(v302 + 24) = 3553LL;
          WdLogEvent5_WdAssertion(v302);
        }
      }
      *((_QWORD *)v7 + 38) = 0LL;
      if ( (int)v28 < 0 )
        goto LABEL_451;
      if ( (a2->Flags.Value & 4) != 0 )
      {
        v303 = *((_QWORD *)v7 + 2);
        v304 = *(_QWORD *)(v303 + 1800);
        if ( v304 == *(_QWORD *)(*(_QWORD *)(v303 + 16) + 16LL) )
          ADAPTER_DISPLAY::DisableOverlayPlanes(*(ADAPTER_DISPLAY **)(v304 + 2280), VidPnSourceId);
        v305 = *((unsigned int *)v300 + 34);
        CurrentIrql = *((_QWORD *)v7 + 2);
        v717 = v305;
        v306 = CurrentIrql + 232;
        if ( CurrentIrql != -232 )
        {
          if ( *(struct _KTHREAD **)(CurrentIrql + 240) == KeGetCurrentThread() )
          {
            v307 = WdLogNewEntry5_WdAssertion(v305, v240, v241, v242);
            *(_QWORD *)(v307 + 24) = 1167LL;
            WdLogEvent5_WdAssertion(v307);
          }
          v279 = v727;
        }
        KeEnterCriticalRegion();
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v306, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v310 = *(_DWORD *)(v306 + 16);
            if ( v310 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              Template_q(v308, &EventBlockThread, v309, v310);
          }
          ExAcquirePushLockExclusiveEx(v306, 0LL);
        }
        v311 = CurrentIrql;
        *(_QWORD *)(CurrentIrql + 8LL * VidPnSourceId + 840) = v279;
        *(_DWORD *)(v311 + 4LL * VidPnSourceId + 968) = v717;
        *(_QWORD *)(v306 + 8) = 0LL;
        ExReleasePushLockExclusiveEx(v306, 0LL);
        KeLeaveCriticalRegion();
        if ( v279 )
        {
          v314 = *(_QWORD *)(CurrentIrql + 1800);
          if ( v314 == *(_QWORD *)(*(_QWORD *)(CurrentIrql + 16) + 16LL) )
            ADAPTER_DISPLAY::SetAllocationForSinglePlanePresent(*(ADAPTER_DISPLAY **)(v314 + 2280), VidPnSourceId, v279);
        }
        v315 = 0;
        v316 = VidPnSourceId;
        *(_DWORD *)(*((_QWORD *)v7 + 2) + 4LL * VidPnSourceId + 1736) = *((_DWORD *)v732 + 30);
        v317 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 16LL);
        if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v317 + 160)
          && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v317 + 144)) )
        {
          v319 = WdLogNewEntry5_WdAssertion(v318, v316, v312, v313);
          *(_QWORD *)(v319 + 24) = 3157LL;
          WdLogEvent5_WdAssertion(v319);
        }
        v320 = *(_QWORD *)(*((_QWORD *)v7 + 2) + 1800LL);
        v321 = *(_QWORD *)(v320 + 2280);
        v742 = 0;
        v741 = v321 + 280;
        if ( v321 == -280 )
        {
          v322 = WdLogNewEntry5_WdAssertion(v320, v316, v312, v313);
          *(_QWORD *)(v322 + 24) = 453LL;
          WdLogEvent5_WdAssertion(v322);
        }
        v323 = KeGetCurrentThread();
        if ( *(struct _KTHREAD **)(v741 + 8) == v323 )
        {
          v324 = WdLogNewEntry5_WdAssertion(v323, v316, v312, v313);
          *(_QWORD *)(v324 + 24) = 460LL;
          WdLogEvent5_WdAssertion(v324);
        }
        if ( v742 )
        {
          v325 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v323, v316, v312);
          v325[3] = 275LL;
          v325[4] = 4LL;
          v325[5] = &v741;
          v325[6] = 0LL;
          v325[7] = 0LL;
          WdLogEvent5_WdCriticalError(v325);
        }
        v326 = v741;
        KeEnterCriticalRegion();
        if ( *(struct _KTHREAD **)(v326 + 8) == KeGetCurrentThread() )
        {
          if ( *(int *)(v326 + 24) <= 0 )
          {
            v331 = WdLogNewEntry5_WdAssertion(v328, v327, v329, v330);
            *(_QWORD *)(v331 + 24) = 351LL;
            WdLogEvent5_WdAssertion(v331);
          }
          ++*(_DWORD *)(v326 + 24);
        }
        else
        {
          if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v326 + 16, 0LL) )
          {
            if ( bTracingEnabled )
            {
              v335 = *(_DWORD *)(v326 + 28);
              if ( v335 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                Template_q(v333, &EventBlockThread, v334, v335);
            }
            _InterlockedIncrement64((volatile signed __int64 *)v326);
            ExAcquirePushLockExclusiveEx(v326 + 16, 0LL);
          }
          if ( *(_QWORD *)(v326 + 8) )
          {
            v336 = WdLogNewEntry5_WdAssertion(v333, v332, v334, v330);
            *(_QWORD *)(v336 + 24) = 375LL;
            WdLogEvent5_WdAssertion(v336);
          }
          if ( *(_DWORD *)(v326 + 24) )
          {
            v337 = WdLogNewEntry5_WdAssertion(v333, v332, v334, v330);
            *(_QWORD *)(v337 + 24) = 376LL;
            WdLogEvent5_WdAssertion(v337);
          }
          v315 = 0;
          *(_QWORD *)(v326 + 8) = KeGetCurrentThread();
          *(_DWORD *)(v326 + 24) = 1;
        }
        v338 = v726;
        v742 = 1;
        v339 = *(_QWORD *)(*((_QWORD *)v7 + 2) + 1800LL);
        v340 = *(_QWORD *)(v339 + 2280);
        v341 = *(_QWORD *)(v340 + 112);
        if ( *((_BYTE *)v726 + v341 + 668) )
        {
          *(_DWORD *)((char *)v726 + v341 + 672) = 0;
          v315 = 1;
          *(_DWORD *)((char *)v338 + *(_QWORD *)(v340 + 112) + 676) = 0;
          v339 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 1800LL) + 2280LL) + 112LL);
          *((_BYTE *)v338 + v339 + 668) = 0;
          if ( !v742 )
          {
            v342 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v339, v340, v338);
            v342[3] = 275LL;
            v342[4] = 4LL;
            v342[5] = &v741;
            v342[6] = 0LL;
            v342[7] = 0LL;
            WdLogEvent5_WdCriticalError(v342);
          }
        }
        v343 = v741;
        v742 = 0;
        if ( *(struct _KTHREAD **)(v741 + 8) != KeGetCurrentThread() )
        {
          v344 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v339, v340, v338);
          v344[3] = 275LL;
          v344[4] = 4LL;
          v344[5] = v343;
          v344[6] = 0LL;
          v344[7] = 0LL;
          WdLogEvent5_WdCriticalError(v344);
        }
        if ( *(int *)(v343 + 24) <= 0 )
        {
          v345 = WdLogNewEntry5_WdAssertion(v339, v340, v338, v330);
          *(_QWORD *)(v345 + 24) = 395LL;
          WdLogEvent5_WdAssertion(v345);
        }
        v21 = (*(_DWORD *)(v343 + 24))-- == 1;
        if ( v21 )
        {
          *(_QWORD *)(v343 + 8) = 0LL;
          ExReleasePushLockExclusiveEx(v343 + 16, 0LL);
        }
        KeLeaveCriticalRegion();
        if ( v315 )
        {
          v346 = (struct _LIST_ENTRY *)operator new(0x18uLL, 0x4B677844u, PagedPool);
          if ( v346 )
          {
            v346->Blink = 0LL;
            v346[1].Flink = 0LL;
            v346->Flink = 0LL;
            DXGADAPTER_REFERENCE::Assign((DXGADAPTER **)v346, *(struct DXGADAPTER **)(*((_QWORD *)v7 + 2) + 1800LL));
            LODWORD(v346[1].Flink) = VidPnSourceId;
            v347 = DXGPROCESS::GetCurrent();
            DXGWORKQUEUE::QueueWork(
              (PLIST_ENTRY)(*((_QWORD *)v347 + 8) + 88LL),
              (struct _LIST_ENTRY *)lambda_2c9284ca1958a319979d23566d67cec5_::_lambda_invoker_cdecl_,
              v346);
          }
        }
        if ( v742 )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)&v741, (__int64)v240, v241, v242);
      }
      goto LABEL_440;
    }
    v286 = *(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL);
    v287 = *(_QWORD *)(v286 + 440);
    v288 = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(v286 + 432) + 8LL) + 336LL);
    if ( (a2->Flags.Value & 4) != 0 )
    {
      v289 = v288(v287, hSource);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_pqpqtt((v767.Flags.Value >> 3) & 1, *((_QWORD *)v7 + 38) == 0LL, v289);
      goto LABEL_382;
    }
    v288(v287, v723);
    (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 432LL)
                                                       + 8LL)
                                           + 336LL))(
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 440LL),
      hSource);
    v291 = v767.SubRectCnt;
    v292 = v767.pDstSubRects;
    v293 = a2->hWindow;
    CurrentIrql = *((_QWORD *)v7 + 38);
    v716 = v767.SubRectCnt;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
    {
      Template_ppxppttqddddddddq(
        HIDWORD(*(_QWORD *)&v767.DstRect.left),
        HIDWORD(*(_QWORD *)&v767.DstRect.right),
        HIDWORD(*(_QWORD *)&v767.SrcRect.left),
        v293,
        CurrentIrql);
      v291 = v716;
    }
    v294 = 0;
    if ( !v291 )
      goto LABEL_382;
    v295 = CurrentIrql;
    while ( 1 )
    {
      v296 = 0LL;
      v297 = v291 - v294;
      if ( v291 - v294 > 0x10 )
        break;
      v298 = v291 - v294;
      if ( v297 )
        goto LABEL_376;
LABEL_378:
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x20) != 0 )
      {
        LODWORD(HandleInformation) = v298;
        LODWORD(Object) = v297 <= 0x10;
        Template_ptqDR2DR2DR2DR2((__int64)v779, v290, v296, v295, Object, HandleInformation, v779, v778, v777, v783);
      }
      v291 = v716;
      v294 += 16;
      if ( v294 >= v716 )
      {
        v279 = v727;
        goto LABEL_382;
      }
    }
    v298 = 16;
LABEL_376:
    v290 = 0LL;
    do
    {
      v299 = (unsigned int)v296 + v294;
      v296 = (unsigned int)(v296 + 1);
      v299 *= 2LL;
      v290 += 4LL;
      *(_DWORD *)&v778[v290 + 60] = *(&v292->left + 2 * v299);
      *(_DWORD *)&v777[v290 + 60] = *(&v292->right + 2 * v299);
      *(_DWORD *)&v777[v290 - 4] = *(&v292->top + 2 * v299);
      *(_DWORD *)&v782[v290 + 60] = *(&v292->bottom + 2 * v299);
    }
    while ( (unsigned int)v296 < v298 );
    goto LABEL_378;
  }
  v262 = (_QWORD *)((char *)v7 + 304);
  LODWORD(v28) = DXGCONTEXT::AcquireDmaBuffer(
                   v7,
                   (struct _VIDMM_DMA_BUFFER **)v7 + 38,
                   (struct COREDEVICEACCESS *)a3,
                   0);
  if ( (int)v28 >= 0 )
  {
    if ( !*v262 )
    {
      v264 = WdLogNewEntry5_WdAssertion(v263, v240, v241, v242);
      *(_QWORD *)(v264 + 24) = 3440LL;
      WdLogEvent5_WdAssertion(v264);
    }
    goto LABEL_332;
  }
LABEL_452:
  v356 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v7 + 2) + 16LL) + 16LL);
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v356 + 160)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v356 + 144))
    && (_DWORD)v28 != -1073741130 )
  {
    v357 = WdLogNewEntry5_WdAssertion(v356, v240, v241, v242);
    *(_QWORD *)(v357 + 24) = 4861LL;
    WdLogEvent5_WdAssertion(v357);
  }
  if ( *v262 )
  {
    v358 = WdLogNewEntry5_WdAssertion(v356, v240, v241, v242);
    *(_QWORD *)(v358 + 24) = 4862LL;
    WdLogEvent5_WdAssertion(v358);
  }
LABEL_1006:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v747);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v737);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v727);
  return (unsigned int)v28;
}
