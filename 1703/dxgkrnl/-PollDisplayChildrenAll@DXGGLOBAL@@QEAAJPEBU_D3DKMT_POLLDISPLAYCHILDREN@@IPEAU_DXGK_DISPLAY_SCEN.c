/*
 * XREFs of ?PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0195CFC
 * Callers:
 *     DxgkPollDisplayChildren @ 0x1C017D060 (DxgkPollDisplayChildren.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C00078D0 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C00078FC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ??1?$NonPagedPoolZeroedArray@PEAX$07$0ELGHHIEE@@@QEAA@XZ @ 0x1C0020F14 (--1-$NonPagedPoolZeroedArray@PEAX$07$0ELGHHIEE@@@QEAA@XZ.c)
 *     ??1?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ @ 0x1C0097FE0 (--1-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ.c)
 *     MonitorReleaseMonitorPendingEvent @ 0x1C0099D10 (MonitorReleaseMonitorPendingEvent.c)
 *     MonitorAcquireMonitorPendingEvent @ 0x1C0099D48 (MonitorAcquireMonitorPendingEvent.c)
 *     DpiPollDisplayChildren @ 0x1C01C2850 (DpiPollDisplayChildren.c)
 *     DmmEnableModeResetOnMonitorEvent @ 0x1C01D4D04 (DmmEnableModeResetOnMonitorEvent.c)
 */

__int64 __fastcall DXGGLOBAL::PollDisplayChildrenAll(
        DXGGLOBAL *this,
        const struct _D3DKMT_POLLDISPLAYCHILDREN *a2,
        __int64 a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  struct _MONITOR_PENDING_EVENT *v4; // r13
  volatile signed __int64 *v5; // rsi
  __int64 v6; // r15
  unsigned int v7; // edi
  __int64 v8; // r8
  __int64 v9; // r9
  volatile signed __int64 *v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // eax
  unsigned __int64 v13; // rdx
  struct _KWAIT_BLOCK *v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  PVOID *PoolWithTag; // rax
  struct _KWAIT_BLOCK *v18; // rax
  char *v19; // rax
  struct _MONITOR_PENDING_EVENT **v20; // rbx
  _BYTE *v21; // r12
  _BYTE *v22; // rax
  PVOID *v23; // r14
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  volatile signed __int64 *v27; // rax
  volatile signed __int64 *v28; // rsi
  signed __int64 v29; // rax
  signed __int64 v30; // rtt
  char v31; // al
  bool v32; // zf
  __int64 v33; // rdi
  void *v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  const struct _D3DKMT_POLLDISPLAYCHILDREN *v37; // rcx
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rax
  __int64 v44; // rax
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rax
  char *v49; // rdi
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r9
  PVOID *v53; // rdi
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v54; // r14
  __int64 v55; // rsi
  int v56; // eax
  KPROCESSOR_MODE WaitMode; // al
  NTSTATUS v58; // eax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // rdi
  __int64 v64; // rax
  signed __int64 v65; // r14
  __int64 v66; // rdi
  volatile signed __int64 *v67; // rdi
  volatile signed __int64 *v68; // rbx
  signed __int64 v69; // rax
  signed __int64 v70; // rtt
  unsigned int v71; // ecx
  volatile signed __int64 **v72; // rax
  __int64 v73; // rdx
  int v74; // eax
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // rbx
  __int64 v78; // rax
  __int64 v79; // rax
  unsigned int v81; // [rsp+40h] [rbp-C0h]
  int v82; // [rsp+44h] [rbp-BCh]
  volatile signed __int64 *v84; // [rsp+50h] [rbp-B0h]
  unsigned int v85; // [rsp+58h] [rbp-A8h]
  struct _MONITOR_PENDING_EVENT *v86; // [rsp+60h] [rbp-A0h] BYREF
  volatile signed __int64 *v87; // [rsp+68h] [rbp-98h]
  char *v88; // [rsp+70h] [rbp-90h]
  _BYTE v89[16]; // [rsp+78h] [rbp-88h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v90; // [rsp+88h] [rbp-78h]
  PVOID *__attribute__((__org_arrdim(0,0))) v91; // [rsp+90h] [rbp-70h]
  PKWAIT_BLOCK WaitBlockArray; // [rsp+98h] [rbp-68h]
  union _LARGE_INTEGER Timeout; // [rsp+A0h] [rbp-60h] BYREF
  struct _MONITOR_PENDING_EVENT **v94; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v95[64]; // [rsp+B8h] [rbp-48h] BYREF
  unsigned int v96; // [rsp+F8h] [rbp-8h]
  char *v97; // [rsp+100h] [rbp+0h] BYREF
  char v98; // [rsp+108h] [rbp+8h] BYREF
  unsigned int v99; // [rsp+148h] [rbp+48h]
  PVOID *__attribute__((__org_arrdim(0,0))) Object; // [rsp+150h] [rbp+50h] BYREF
  char v101; // [rsp+158h] [rbp+58h] BYREF
  unsigned int v102; // [rsp+198h] [rbp+98h]
  _BYTE *v103; // [rsp+1A0h] [rbp+A0h] BYREF
  _BYTE v104[64]; // [rsp+1A8h] [rbp+A8h] BYREF
  unsigned int v105; // [rsp+1E8h] [rbp+E8h]
  __int64 v106; // [rsp+1F0h] [rbp+F0h] BYREF
  char v107[32]; // [rsp+1F8h] [rbp+F8h] BYREF
  char v108[40]; // [rsp+218h] [rbp+118h] BYREF
  __int64 v109; // [rsp+240h] [rbp+140h] BYREF
  char v110[32]; // [rsp+248h] [rbp+148h] BYREF
  char v111[40]; // [rsp+268h] [rbp+168h] BYREF
  struct _KWAIT_BLOCK *v112; // [rsp+290h] [rbp+190h] BYREF
  char v113; // [rsp+298h] [rbp+198h] BYREF
  unsigned int v114; // [rsp+418h] [rbp+318h]

  v4 = 0LL;
  v5 = (volatile signed __int64 *)((char *)this + 440);
  v6 = 0LL;
  v81 = 0;
  v90 = a4;
  v85 = a3;
  v7 = 0;
  v82 = 0;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v89, (DXGGLOBAL *)((char *)this + 400), a3, (__int64)a4);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v89);
  v10 = (volatile signed __int64 *)*v5;
  v84 = v5;
  while ( v10 != v5 && v10 )
  {
    v11 = *((_QWORD *)v10 + 285);
    v12 = v7 + 1;
    v10 = (volatile signed __int64 *)*v10;
    if ( !v11 )
      v12 = v7;
    v7 = v12;
  }
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v89, (__int64)v10, v8, v9);
  if ( v7 )
  {
    Object = 0LL;
    v102 = 0;
    if ( v7 <= 8 )
    {
      PoolWithTag = (PVOID *)&v101;
    }
    else
    {
      v14 = (struct _KWAIT_BLOCK *)v7;
      v13 = 0xFFFFFFFFFFFFFFFFuLL % v7;
      if ( 0xFFFFFFFFFFFFFFFFuLL / v7 < 8 )
        goto LABEL_14;
      PoolWithTag = (PVOID *)ExAllocatePoolWithTag((POOL_TYPE)512, 8LL * v7, 0x4B677844u);
    }
    Object = PoolWithTag;
    v102 = v7;
    if ( PoolWithTag )
      memset(PoolWithTag, 0, 8LL * v7);
LABEL_14:
    v112 = 0LL;
    v114 = 0;
    if ( v7 <= 8 )
    {
      v18 = (struct _KWAIT_BLOCK *)&v113;
    }
    else
    {
      v13 = 0xFFFFFFFFFFFFFFFFuLL % v7;
      if ( 0xFFFFFFFFFFFFFFFFuLL / v7 < 0x30 )
        goto LABEL_20;
      v18 = (struct _KWAIT_BLOCK *)ExAllocatePoolWithTag((POOL_TYPE)512, 48LL * v7, 0x4B677844u);
    }
    v112 = v18;
    v14 = v18;
    v114 = v7;
    if ( v18 )
      memset(v18, 0, 48LL * v7);
LABEL_20:
    v97 = 0LL;
    v99 = 0;
    if ( v7 <= 8 )
    {
      v19 = &v98;
    }
    else
    {
      v14 = (struct _KWAIT_BLOCK *)v7;
      v13 = 0xFFFFFFFFFFFFFFFFuLL % v7;
      if ( 0xFFFFFFFFFFFFFFFFuLL / v7 < 8 )
        goto LABEL_26;
      v19 = (char *)ExAllocatePoolWithTag(PagedPool, 8LL * v7, 0x4B677844u);
    }
    v97 = v19;
    v99 = v7;
    if ( v19 )
      memset(v19, 0, 8LL * v7);
LABEL_26:
    v96 = 0;
    v20 = 0LL;
    v94 = 0LL;
    if ( v7 <= 8 )
    {
      v20 = (struct _MONITOR_PENDING_EVENT **)v95;
      v94 = (struct _MONITOR_PENDING_EVENT **)v95;
    }
    else
    {
      v14 = (struct _KWAIT_BLOCK *)v7;
      v13 = 0xFFFFFFFFFFFFFFFFuLL % v7;
      if ( 0xFFFFFFFFFFFFFFFFuLL / v7 < 8 )
        goto LABEL_32;
      v20 = (struct _MONITOR_PENDING_EVENT **)ExAllocatePoolWithTag(PagedPool, 8LL * v7, 0x4B677844u);
      v94 = v20;
    }
    v96 = v7;
    if ( v20 )
    {
      memset(v20, 0, 8LL * v7);
      v20 = v94;
    }
LABEL_32:
    v103 = 0LL;
    v21 = 0LL;
    v105 = 0;
    if ( v7 <= 8 )
    {
      v21 = v104;
      v103 = v104;
    }
    else
    {
      v14 = (struct _KWAIT_BLOCK *)v7;
      v13 = 0xFFFFFFFFFFFFFFFFuLL % v7;
      if ( 0xFFFFFFFFFFFFFFFFuLL / v7 < 8 )
        goto LABEL_38;
      v22 = ExAllocatePoolWithTag(PagedPool, 8LL * v7, 0x4B677844u);
      v20 = v94;
      v21 = v22;
      v103 = v22;
    }
    v105 = v7;
    if ( v21 )
    {
      memset(v21, 0, 8LL * v7);
      v20 = v94;
      v21 = v103;
    }
LABEL_38:
    v23 = Object;
    v91 = Object;
    WaitBlockArray = v112;
    v88 = v97;
    if ( !v97 || !v20 || !Object || !v112 || !v21 )
    {
      v79 = WdLogNewEntry5_WdError(v14, v13);
      *(_QWORD *)(v79 + 24) = 2538LL;
      WdLogEvent5_WdError(v79);
      LODWORD(v4) = -1073741801;
LABEL_109:
      PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>((PVOID *)&v103);
      PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>((PVOID *)&v94);
      PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>((PVOID *)&v97);
      NonPagedPoolZeroedArray<void *,8,1265072196>::~NonPagedPoolZeroedArray<void *,8,1265072196>((PVOID *)&v112);
      NonPagedPoolZeroedArray<void *,8,1265072196>::~NonPagedPoolZeroedArray<void *,8,1265072196>((PVOID *)&Object);
      goto LABEL_110;
    }
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v89);
    v27 = (volatile signed __int64 *)*v5;
    while ( v27 != v5 && v27 )
    {
      v28 = v27;
      v87 = (volatile signed __int64 *)*v27;
      _m_prefetchw((const void *)(v27 + 3));
      v29 = *((_QWORD *)v27 + 3);
      do
      {
        if ( !v29 )
        {
          v31 = 0;
          goto LABEL_51;
        }
        v30 = v29;
        v29 = _InterlockedCompareExchange64(v28 + 3, v29 + 1, v29);
      }
      while ( v30 != v29 );
      v31 = 1;
LABEL_51:
      v32 = v31 == 0;
      v27 = v87;
      if ( !v32 )
      {
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v106, (struct DXGADAPTER *const)v28, 0LL);
        v86 = 0LL;
        DXGADAPTER::ReleaseReference((DXGADAPTER *)v28);
        if ( *((_QWORD *)v28 + 285) )
        {
          LODWORD(v33) = COREADAPTERACCESS::AcquireExclusive(&v106, 1u);
          if ( (int)v33 >= 0 )
          {
            v34 = (void *)*((_QWORD *)v28 + 24);
            *(_QWORD *)&v88[8 * v6] = v34;
            ObfReferenceObject(v34);
            v37 = a2;
            if ( (*((_DWORD *)a2 + 1) & 2) != 0 )
            {
              v38 = MonitorAcquireMonitorPendingEvent((DXGADAPTER *)v28, &v86, v35, v36);
              v4 = v86;
              v33 = v38;
              if ( v38 < 0 )
              {
                if ( v86 )
                {
                  v43 = WdLogNewEntry5_WdAssertion(v40, v39, v41, v42);
                  *(_QWORD *)(v43 + 24) = 2605LL;
                  WdLogEvent5_WdAssertion(v43);
                }
                v44 = WdLogNewEntry5_WdError(v40, v39);
                *(_QWORD *)(v44 + 24) = v33;
                WdLogEvent5_WdError(v44);
              }
              else
              {
                v20[v6] = v86;
                v23[v6] = (char *)v4 + 24;
              }
              v37 = a2;
            }
            if ( (int)v33 < 0 )
              goto LABEL_70;
            if ( (*((_DWORD *)v37 + 1) & 4) != 0 )
            {
              v45 = DmmEnableModeResetOnMonitorEvent(v28, 0LL);
              v33 = v45;
              if ( v45 < 0 )
              {
                v48 = WdLogNewEntry5_WdError(v47, v46);
                *(_QWORD *)(v48 + 24) = v33;
                WdLogEvent5_WdError(v48);
              }
              else
              {
                *(_QWORD *)&v21[8 * v6] = v28;
              }
            }
            if ( (int)v33 < 0 )
            {
LABEL_70:
              v82 = v33;
              v49 = v88;
              ObfDereferenceObject(*(PVOID *)&v88[8 * v6]);
              *(_QWORD *)&v49[8 * v6] = 0LL;
              if ( v4 )
              {
                MonitorReleaseMonitorPendingEvent(v4, v50, v51, v52);
                v20[v6] = 0LL;
                v23[v6] = 0LL;
              }
              v6 = v81;
            }
            else
            {
              v6 = ++v81;
            }
            COREADAPTERACCESS::Release((COREADAPTERACCESS *)&v106);
          }
        }
        COREACCESS::~COREACCESS((COREACCESS *)v108);
        COREACCESS::~COREACCESS((COREACCESS *)v107);
        v27 = v87;
        v4 = 0LL;
      }
      v5 = v84;
    }
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v89, v24, v25, v26);
    LODWORD(v4) = v82;
    if ( (_DWORD)v6 )
    {
      v53 = (PVOID *)v88;
      v54 = v90;
      v55 = (unsigned int)v6;
      do
      {
        v56 = DpiPollDisplayChildren(*v53, v85, v54);
        if ( v56 < 0 )
          LODWORD(v4) = v56;
        ObfDereferenceObject(*v53);
        *v53++ = 0LL;
        --v55;
      }
      while ( v55 );
      v23 = v91;
      LODWORD(v6) = v81;
      v5 = v84;
    }
    if ( (*((_DWORD *)a2 + 1) & 2) == 0 || !(_DWORD)v6 )
    {
LABEL_89:
      if ( (*((_DWORD *)a2 + 1) & 4) != 0 && (_DWORD)v6 )
      {
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v89);
        v67 = (volatile signed __int64 *)*v5;
        while ( v67 != v5 && v67 )
        {
          v68 = v67;
          v67 = (volatile signed __int64 *)*v67;
          _m_prefetchw((const void *)(v68 + 3));
          v69 = *((_QWORD *)v68 + 3);
          while ( v69 )
          {
            v70 = v69;
            v69 = _InterlockedCompareExchange64(v68 + 3, v69 + 1, v69);
            if ( v70 == v69 )
            {
              LOBYTE(v69) = 1;
              break;
            }
          }
          if ( (_BYTE)v69 )
          {
            COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v109, (struct DXGADAPTER *const)v68, 0LL);
            DXGADAPTER::ReleaseReference((DXGADAPTER *)v68);
            v71 = 0;
            v72 = (volatile signed __int64 **)v21;
            while ( *v72 != v68 )
            {
              ++v71;
              ++v72;
              if ( v71 >= (unsigned int)v6 )
                goto LABEL_107;
            }
            if ( (int)COREADAPTERACCESS::AcquireExclusive(&v109, 1u) >= 0 )
            {
              LOBYTE(v73) = 1;
              v74 = DmmEnableModeResetOnMonitorEvent(v68, v73);
              v77 = v74;
              if ( v74 < 0 )
              {
                v78 = WdLogNewEntry5_WdError(v76, v75);
                *(_QWORD *)(v78 + 24) = v77;
                WdLogEvent5_WdError(v78);
              }
              COREADAPTERACCESS::Release((COREADAPTERACCESS *)&v109);
            }
LABEL_107:
            COREACCESS::~COREACCESS((COREACCESS *)v111);
            COREACCESS::~COREACCESS((COREACCESS *)v110);
          }
        }
      }
      goto LABEL_109;
    }
    Timeout.QuadPart = -10000000LL;
    WaitMode = ExGetPreviousMode();
    v58 = KeWaitForMultipleObjects(v6, v23, WaitAll, UserRequest, WaitMode, 0, &Timeout, WaitBlockArray);
    v63 = v58;
    if ( v58 == 258 )
    {
      LODWORD(v4) = 258;
      v64 = WdLogNewEntry5_WdError(v60, v59);
      *(_QWORD *)(v64 + 24) = 2694LL;
    }
    else
    {
      if ( v58 >= 0 )
        goto LABEL_87;
      LODWORD(v4) = v58;
      v64 = WdLogNewEntry5_WdError(v60, v59);
      *(_QWORD *)(v64 + 24) = v63;
    }
    WdLogEvent5_WdError(v64);
LABEL_87:
    v65 = (char *)v23 - (char *)v20;
    v66 = (unsigned int)v6;
    do
    {
      MonitorReleaseMonitorPendingEvent(*v20, v59, v61, v62);
      *v20 = 0LL;
      *(struct _MONITOR_PENDING_EVENT **)((char *)v20++ + v65) = 0LL;
      --v66;
    }
    while ( v66 );
    goto LABEL_89;
  }
LABEL_110:
  if ( v89[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v89, v13, v15, v16);
  return (unsigned int)v4;
}
