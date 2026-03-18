/*
 * XREFs of ?DxgkWaitForVerticalBlankEventInternal@@YAJIIIIPEAPEAU_KEVENT@@@Z @ 0x1C00DA620
 * Callers:
 *     DxgkWaitForVerticalBlankEvent @ 0x1C00DA560 (DxgkWaitForVerticalBlankEvent.c)
 *     DxgkWaitForVerticalBlankEvent2 @ 0x1C017E840 (DxgkWaitForVerticalBlankEvent2.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0005A90 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0005BF0 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0005C34 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ @ 0x1C0006C14 (-DecrementVSyncWaiter@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006E30 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0006EBC (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ @ 0x1C00077CC (--1ENSURE_DEVICE_DEREFERENCE_NOLOCKS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0007834 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C000D778 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x1C000D7C4 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C000E120 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x1C0012C30 (-Enter@DXGCRITICALREGION@@QEAAXXZ.c)
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ??0DXGCRITICALREGION@@QEAA@XZ @ 0x1C00203E0 (--0DXGCRITICALREGION@@QEAA@XZ.c)
 *     ??1DXGCRITICALREGION@@QEAA@XZ @ 0x1C00203F0 (--1DXGCRITICALREGION@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z @ 0x1C00D3238 (-IsVSyncAvailable@DXGADAPTER@@QEAAEI@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C00D3290 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ @ 0x1C00D3410 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXXZ.c)
 *     ?WaitForVSync@REMOTE_VSYNC@@QEAAJXZ @ 0x1C0103B5C (-WaitForVSync@REMOTE_VSYNC@@QEAAJXZ.c)
 *     ?WaitForEventsOrVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI_NIPEAPEAU_KEVENT@@@Z @ 0x1C016C830 (-WaitForEventsOrVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAJI_NIPEAPEAU_KEVENT@@@Z.c)
 *     ?ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0170294 (-ControlVSyncAdapter@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C019527C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkWaitForVerticalBlankEventInternal(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        struct _KEVENT **a5)
{
  __int64 v6; // r12
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 CurrentProcess; // rax
  __int64 v11; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 *ThreadProperty; // rax
  __int64 v17; // rax
  int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  struct DXGGLOBAL *Global; // rax
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  int v40; // r9d
  bool v41; // zf
  __int64 v42; // r9
  unsigned int v43; // edx
  __int64 v44; // r10
  int v45; // r8d
  __int64 v46; // rdi
  __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rax
  __int64 v55; // rax
  volatile signed __int64 *v56; // rbx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rax
  signed __int64 v62; // rcx
  DXGADAPTER *v63; // rbx
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rax
  _QWORD *v69; // rax
  unsigned int v70; // r12d
  DXGADAPTER *v71; // rcx
  __int64 v72; // rcx
  __int64 v73; // r8
  DXGADAPTER *v74; // rsi
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // r13
  __int64 v79; // rcx
  __int64 v80; // rax
  __int64 v81; // rdx
  __int64 v82; // rax
  __int64 v83; // rax
  char *v84; // r13
  unsigned int v85; // esi
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r8
  __int64 v89; // rax
  _QWORD *v90; // rax
  ADAPTER_DISPLAY *v91; // rcx
  unsigned int v92; // eax
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // r8
  __int64 v96; // rax
  DXGADAPTER *v97; // rdi
  _QWORD *v98; // rax
  int v99; // eax
  __int64 v100; // rax
  __int64 v101; // r8
  __int64 v102; // r9
  _QWORD *v103; // rax
  char v104; // [rsp+30h] [rbp-D0h]
  char v105; // [rsp+31h] [rbp-CFh]
  char v106; // [rsp+32h] [rbp-CEh]
  _BYTE v107[4]; // [rsp+34h] [rbp-CCh] BYREF
  DXGADAPTER *v108; // [rsp+38h] [rbp-C8h]
  __int64 v109; // [rsp+40h] [rbp-C0h]
  char v110[8]; // [rsp+50h] [rbp-B0h] BYREF
  char v111[8]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v112; // [rsp+60h] [rbp-A0h]
  DXGADAPTER *v113; // [rsp+68h] [rbp-98h]
  char v114; // [rsp+70h] [rbp-90h]
  char v115[8]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v116; // [rsp+80h] [rbp-80h]
  unsigned int *v117; // [rsp+88h] [rbp-78h]
  char v118; // [rsp+90h] [rbp-70h]
  char *v119; // [rsp+A0h] [rbp-60h]
  union _LARGE_INTEGER Timeout; // [rsp+A8h] [rbp-58h] BYREF
  char v121[8]; // [rsp+B0h] [rbp-50h] BYREF
  char v122; // [rsp+B8h] [rbp-48h]
  __int64 v123; // [rsp+C0h] [rbp-40h] BYREF
  char v124[8]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v125; // [rsp+D0h] [rbp-30h]
  char v126; // [rsp+D8h] [rbp-28h]
  char v127[8]; // [rsp+E0h] [rbp-20h] BYREF
  DXGADAPTER *v128; // [rsp+E8h] [rbp-18h]
  char v129; // [rsp+F0h] [rbp-10h]
  char v130[8]; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v131; // [rsp+100h] [rbp+0h]
  int v132; // [rsp+108h] [rbp+8h]

  v6 = a3;
  v7 = a2;
  v8 = 0LL;
  v9 = (unsigned int)a1;
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v11);
  v15 = ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 275) & 2) != 0 )
    {
      ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      if ( ThreadProperty )
        v15 = *ThreadProperty;
    }
  }
  if ( v15 )
  {
    if ( a4 && !(*(unsigned int (**)(void))(*(_QWORD *)(v15 + 72) + 216LL))() )
    {
      v23 = WdLogNewEntry5_WdWarning(v20, v19, v21, v22);
      *(_QWORD *)(v23 + 24) = -1073741790LL;
      WdLogEvent5_WdWarning(v23);
      return 3221225506LL;
    }
    DXGCRITICALREGION::DXGCRITICALREGION((DXGCRITICALREGION *)v107);
    DXGCRITICALREGION::Enter((DXGCRITICALREGION *)v107, v25, v26, v27);
    if ( (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)(v15 + 72) + 224LL))(0LL) )
    {
      Global = DXGGLOBAL::GetGlobal(v29, v28, v30, v31);
      v18 = REMOTE_VSYNC::WaitForVSync((struct DXGGLOBAL *)((char *)Global + 624));
LABEL_151:
      DXGCRITICALREGION::~DXGCRITICALREGION((DXGCRITICALREGION *)v107, v33, v34, v35);
      return (unsigned int)v18;
    }
    v131 = v15 + 168;
    if ( v15 != -168 && *(struct _KTHREAD **)(v15 + 176) == KeGetCurrentThread() )
    {
      v36 = WdLogNewEntry5_WdAssertion(v29, v28, v30, v31);
      *(_QWORD *)(v36 + 24) = 1167LL;
      WdLogEvent5_WdAssertion(v36);
    }
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v15 + 168, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v40 = *(_DWORD *)(v15 + 184);
        if ( v40 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          Template_q(v37, &EventBlockThread, v38, v40);
      }
      ExAcquirePushLockSharedEx(v15 + 168, 0LL);
    }
    v41 = (*(_BYTE *)(v15 + 275) & 4) == 0;
    v132 = 1;
    if ( v41 )
    {
      v47 = ((unsigned int)v9 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v47 < *(_DWORD *)(v15 + 208)
        && (v39 = *(_QWORD *)(v15 + 192),
            v37 = ((unsigned int)v9 >> 26) & 0x30,
            v38 = *(unsigned int *)(v39 + 16LL * (unsigned int)v47 + 8),
            (((unsigned int)v9 >> 26) & 0x30) == (*(_BYTE *)(v39 + 16LL * (unsigned int)v47 + 8) & 0x30))
        && (v38 & 0x1000) == 0
        && (v38 & 0xF) != 0
        && (*(_BYTE *)(v39 + 16LL * (unsigned int)v47 + 8) & 0xF) == 1 )
      {
        v46 = *(_QWORD *)(v39 + 16LL * (unsigned int)v47);
      }
      else
      {
        v46 = 0LL;
      }
    }
    else
    {
      DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(*(_QWORD *)(v15 + 400) + 168LL));
      v42 = *(_QWORD *)(v15 + 400);
      v43 = ((unsigned int)v9 >> 6) & 0xFFFFFF;
      if ( v43 < *(_DWORD *)(v42 + 208)
        && (v44 = *(_QWORD *)(v42 + 192),
            v45 = *(_DWORD *)(v44 + 16LL * v43 + 8),
            (((unsigned int)v9 >> 26) & 0x30) == (*(_BYTE *)(v44 + 16LL * v43 + 8) & 0x30))
        && (v45 & 0x1000) == 0
        && (v45 & 0xF) != 0
        && (*(_BYTE *)(v44 + 16LL * v43 + 8) & 0xF) == 1 )
      {
        v46 = *(_QWORD *)(v44 + 16LL * v43);
      }
      else
      {
        v46 = 0LL;
      }
      ExReleasePushLockSharedEx(v42 + 168, 0LL);
      KeLeaveCriticalRegion();
    }
    v18 = -1073741811;
    if ( !v46 )
    {
      v48 = WdLogNewEntry5_WdWarning(v37, v47, v38, v39);
      *(_QWORD *)(v48 + 24) = v9;
      *(_QWORD *)(v48 + 32) = -1073741811LL;
LABEL_51:
      WdLogEvent5_WdWarning(v48);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v130);
      goto LABEL_151;
    }
    if ( (_DWORD)v7 )
    {
      v49 = ((unsigned int)v7 >> 6) & 0xFFFFFF;
      if ( (unsigned int)v49 >= *(_DWORD *)(v15 + 208)
        || (v39 = *(_QWORD *)(v15 + 192),
            v37 = ((unsigned int)v7 >> 26) & 0x30,
            v38 = *(unsigned int *)(v39 + 16LL * (unsigned int)v49 + 8),
            (((unsigned int)v7 >> 26) & 0x30) != (*(_BYTE *)(v39 + 16LL * (unsigned int)v49 + 8) & 0x30))
        || (v38 & 0x1000) != 0
        || (v38 & 0xF) == 0
        || (*(_BYTE *)(v39 + 16LL * (unsigned int)v49 + 8) & 0xF) != 3
        || (v8 = *(_QWORD *)(v39 + 16LL * (unsigned int)v49)) == 0 )
      {
        v48 = WdLogNewEntry5_WdWarning(v37, v49, v38, v39);
        *(_QWORD *)(v48 + 24) = v46;
        *(_QWORD *)(v48 + 32) = v7;
        goto LABEL_51;
      }
      _InterlockedIncrement64((volatile signed __int64 *)(v8 + 64));
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v130);
    v54 = *(_QWORD *)(v46 + 2280);
    v123 = v8;
    if ( v54 )
    {
      if ( (unsigned int)v6 >= *(_DWORD *)(v54 + 80) )
      {
        v55 = WdLogNewEntry5_WdError(v51, v50);
        *(_QWORD *)(v55 + 24) = v6;
        *(_QWORD *)(v55 + 32) = -1073741811LL;
        WdLogEvent5_WdError(v55);
LABEL_149:
        v103 = (_QWORD *)WdLogNewEntry5_WdError(v51, v50);
        v103[5] = v18;
        v103[3] = v46;
        v103[4] = v6;
        WdLogEvent5_WdError(v103);
        goto LABEL_150;
      }
      _InterlockedIncrement64((volatile signed __int64 *)(v46 + 24));
      if ( *(_QWORD *)(v46 + 2288) )
      {
        _InterlockedIncrement64((volatile signed __int64 *)(v46 + 24));
        v56 = (volatile signed __int64 *)v46;
        v108 = (DXGADAPTER *)v46;
        goto LABEL_57;
      }
      DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v121);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v121);
      v56 = (volatile signed __int64 *)*((_QWORD *)DXGGLOBAL::GetGlobal(v58, v57, v59, v60) + 76);
      if ( v56 )
      {
        _InterlockedIncrement64(v56 + 3);
        v108 = (DXGADAPTER *)v56;
        if ( v122 )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v121, v50, v52, v53);
LABEL_57:
        if ( v8 && (v56 != *(volatile signed __int64 **)(*(_QWORD *)(v8 + 16) + 16LL) || v46 != *(_QWORD *)(v8 + 1800)) )
        {
          v61 = WdLogNewEntry5_WdWarning(v51, v50, v52, v53);
          *(_QWORD *)(v61 + 24) = v46;
          *(_QWORD *)(v61 + 32) = v7;
          WdLogEvent5_WdWarning(v61);
          v18 = -1073741811;
LABEL_150:
          ENSURE_DEVICE_DEREFERENCE_NOLOCKS::~ENSURE_DEVICE_DEREFERENCE_NOLOCKS((ENSURE_DEVICE_DEREFERENCE_NOLOCKS *)&v123);
          goto LABEL_151;
        }
        v113 = (DXGADAPTER *)v56;
        v114 = 0;
        _InterlockedIncrement64(v56 + 3);
        v112 = -1LL;
        v117 = (unsigned int *)v46;
        v118 = 0;
        _InterlockedIncrement64((volatile signed __int64 *)(v46 + 24));
        v116 = -1LL;
        v62 = _InterlockedExchangeAdd64((volatile signed __int64 *)v108 + 3, 0xFFFFFFFFFFFFFFFFuLL);
        if ( v62 == 1 )
          DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v108 + 2), v108);
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v46 + 24), 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          DXGGLOBAL::DestroyAdapter(*(DXGGLOBAL **)(v46 + 16), (struct DXGADAPTER *)v46);
        if ( *(_DWORD *)(v46 + 136) == 1 )
        {
          v63 = v108;
          v128 = v108;
          v129 = 0;
          DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v127);
          v125 = v46;
          v126 = 0;
          if ( (DXGADAPTER *)v46 != v63 )
            DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v124);
          if ( *((_DWORD *)v63 + 44) != 1 || *(_DWORD *)(v46 + 176) != 1 )
          {
            v18 = -1073741130;
            goto LABEL_78;
          }
          if ( (unsigned int)v6 >= *(_DWORD *)(*(_QWORD *)(v46 + 2280) + 80LL) )
          {
            v68 = WdLogNewEntry5_WdWarning(v65, v64, v66, v67);
            v18 = -1073741811;
            *(_QWORD *)(v68 + 24) = v6;
            *(_QWORD *)(v68 + 32) = -1073741811LL;
            WdLogEvent5_WdWarning(v68);
LABEL_78:
            DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v124);
            DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v127);
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v110);
            goto LABEL_150;
          }
          if ( !DXGADAPTER::IsVSyncAvailable((ADAPTER_DISPLAY **)v46, (unsigned int)v6, v66, v67) )
          {
            v18 = -1071775738;
            goto LABEL_78;
          }
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v124);
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v127);
        }
        if ( v114 )
        {
          v69 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v62, v50, v52);
          v70 = 0;
          v69[5] = v111;
          v69[3] = 275LL;
          v69[4] = 4LL;
          v69[6] = 0LL;
          v69[7] = 0LL;
          WdLogEvent5_WdCriticalError(v69);
        }
        else
        {
          v70 = 0;
        }
        v71 = v113;
        if ( KeGetCurrentThread() != *((struct _KTHREAD **)v113 + 20) )
        {
          if ( !KeReadStateEvent((PRKEVENT)v113 + 2) )
          {
            if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
              Template_q(v72, &EventBlockThread, v73, 72);
            KeWaitForSingleObject((char *)v113 + 48, Executive, 0, 0, 0LL);
          }
          DXGADAPTER::AcquireCoreResourceShared(v113);
          v71 = v113;
        }
        v114 = 1;
        if ( *((_DWORD *)v71 + 44) != 1 )
          goto LABEL_91;
        if ( v113 != (DXGADAPTER *)v117 )
        {
          COREACCESS::AcquireShared((COREACCESS *)v115);
          v71 = (DXGADAPTER *)v117[44];
          if ( (_DWORD)v71 != 1 )
          {
            COREACCESS::Release((COREACCESS *)v115);
LABEL_91:
            COREACCESS::Release((COREACCESS *)v111);
LABEL_92:
            v18 = -1073741130;
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v110);
            goto LABEL_150;
          }
        }
        v74 = v108;
        v18 = 0;
        v41 = *((_QWORD *)v108 + 286) == 0LL;
        v119 = (char *)v108 + 2288;
        if ( v41 )
        {
          v75 = WdLogNewEntry5_WdAssertion(v71, v50, v52, v53);
          *(_QWORD *)(v75 + 24) = 5044LL;
          WdLogEvent5_WdAssertion(v75);
        }
        if ( !*(_QWORD *)(v46 + 2280) )
        {
          v76 = WdLogNewEntry5_WdAssertion(v71, v50, v52, v53);
          *(_QWORD *)(v76 + 24) = 5045LL;
          WdLogEvent5_WdAssertion(v76);
        }
        if ( (_DWORD)v7 )
        {
          if ( *(_DWORD *)(v8 + 408) != 1 )
            goto LABEL_92;
          v74 = v108;
        }
        v104 = 0;
        v105 = 0;
        v106 = 0;
        if ( !*(_QWORD *)(v46 + 2280) )
        {
          v77 = WdLogNewEntry5_WdAssertion(v71, v50, v52, v53);
          *(_QWORD *)(v77 + 24) = 8198LL;
          WdLogEvent5_WdAssertion(v77);
        }
        v78 = *(_QWORD *)(v46 + 2280);
        if ( !v78 )
          goto LABEL_113;
        v79 = a3;
        if ( a3 >= *(_DWORD *)(v78 + 80) )
        {
          v80 = WdLogNewEntry5_WdAssertion(a3, v50, v52, v53);
          *(_QWORD *)(v80 + 24) = 4896LL;
          WdLogEvent5_WdAssertion(v80);
          v79 = a3;
        }
        v81 = 3208LL * (unsigned int)v79;
        v82 = *(_QWORD *)(v78 + 112);
        v109 = v81;
        if ( !*(_BYTE *)(v82 + v81 + 720) )
          goto LABEL_113;
        if ( *(_QWORD *)(v46 + 2288) )
        {
          if ( (DXGADAPTER *)v46 != v74 )
          {
            v83 = WdLogNewEntry5_WdAssertion(v79, v81, v52, v53);
            *(_QWORD *)(v83 + 24) = 5067LL;
            WdLogEvent5_WdAssertion(v83);
          }
          _InterlockedIncrement((volatile signed __int32 *)v74 + 578);
          v84 = v119;
          v85 = a3;
          v104 = 1;
          if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v119 + 408LL)
                                                                              + 8LL)
                                                                  + 456LL))(
                  *(_QWORD *)(*(_QWORD *)v119 + 416LL),
                  a3) )
          {
            v89 = *(_QWORD *)v84;
            LOBYTE(v88) = 1;
            if ( v8 )
            {
              if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(v89 + 408) + 8LL) + 472LL))(
                     *(_QWORD *)(v8 + 600),
                     0LL,
                     v88) < 0 )
              {
LABEL_112:
                DXGADAPTER::DecrementVSyncWaiter(v108);
LABEL_113:
                v18 = -1071775738;
LABEL_114:
                COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v110);
                goto LABEL_150;
              }
              v106 = 1;
            }
            else
            {
              if ( (*(int (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(v89 + 408) + 8LL) + 464LL))(
                     *(_QWORD *)(v89 + 416),
                     1LL,
                     v88) < 0 )
                goto LABEL_112;
              v105 = 1;
            }
          }
        }
        else
        {
          ADAPTER_DISPLAY::ControlVSyncAdapter(*(ADAPTER_DISPLAY **)(v46 + 2280), v79);
          v85 = a3;
          v84 = v119;
        }
        if ( v113 != (DXGADAPTER *)v117 )
          COREACCESS::Release((COREACCESS *)v115);
        if ( !v114 )
        {
          v90 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v87, v86, v88);
          v90[5] = v111;
          v90[3] = 275LL;
          v90[4] = 4LL;
          v90[6] = 0LL;
          v90[7] = 0LL;
          WdLogEvent5_WdCriticalError(v90);
        }
        v114 = 0;
        if ( KeGetCurrentThread() != *((struct _KTHREAD **)v113 + 20) )
          DXGADAPTER::ReleaseCoreResource((PERESOURCE *)v113);
        v91 = *(ADAPTER_DISPLAY **)(v46 + 2280);
        if ( a4 )
        {
          v92 = ADAPTER_DISPLAY::WaitForEventsOrVerticalBlankEvent(v91, v85, 1, a4, a5);
          v18 = v92;
          if ( v92 <= 0x3E )
            v70 = v92;
        }
        else
        {
          v96 = *((_QWORD *)v91 + 2);
          if ( !*(_QWORD *)(v96 + 2280) || (v41 = *(_QWORD *)(v96 + 560) == 0LL, Timeout.QuadPart = -1000000LL, v41) )
            Timeout.QuadPart = -5000000LL;
          KeWaitForSingleObject((PVOID)(*((_QWORD *)v91 + 14) + v109 + 872), UserRequest, 0, 0, &Timeout);
        }
        if ( v104 )
        {
          v97 = v108;
          if ( _InterlockedDecrement((volatile signed __int32 *)v108 + 578) < 0 )
          {
            v98 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v94, v93, v95);
            v98[5] = v108;
            v98[3] = 275LL;
            v98[4] = 28LL;
            v98[6] = *((unsigned int *)v97 + 578);
            v98[7] = 0LL;
            WdLogEvent5_WdCriticalError(v98);
          }
        }
        if ( v105 )
        {
          v18 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v110);
          if ( v18 < 0 )
            goto LABEL_114;
          v99 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v84 + 408LL)
                                                                               + 8LL)
                                                                   + 464LL))(
                  *(_QWORD *)(*(_QWORD *)v84 + 416LL),
                  1LL,
                  0LL);
        }
        else
        {
          if ( !v106 )
            goto LABEL_143;
          v18 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v110);
          if ( v18 < 0 )
            goto LABEL_114;
          if ( *(_DWORD *)(v8 + 408) != 1 )
          {
LABEL_143:
            if ( v18 >= 0 && v70 )
            {
              v18 = v70;
              COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v110);
              goto LABEL_150;
            }
            goto LABEL_114;
          }
          v99 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v84 + 408LL) + 8LL)
                                                                  + 472LL))(
                  *(_QWORD *)(v8 + 600),
                  0LL,
                  0LL);
        }
        v18 = v99;
        goto LABEL_143;
      }
      v100 = WdLogNewEntry5_WdError(v51, v50);
      *(_QWORD *)(v100 + 24) = v46;
      *(_QWORD *)(v100 + 32) = -1073741637LL;
      WdLogEvent5_WdError(v100);
      DXGADAPTER::ReleaseReference((DXGADAPTER *)v46);
      if ( v122 )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v121, v50, v101, v102);
    }
    v18 = -1073741637;
    goto LABEL_149;
  }
  v17 = WdLogNewEntry5_WdError(v14, v13);
  v18 = -1073741811;
  *(_QWORD *)(v17 + 24) = -1073741811LL;
  WdLogEvent5_WdError(v17);
  return (unsigned int)v18;
}
