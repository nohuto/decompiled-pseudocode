/*
 * XREFs of ?PollDisplayChildrenAll@DXGGLOBAL@@QEAAJPEBU_D3DKMT_POLLDISPLAYCHILDREN@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01AAEF8
 * Callers:
 *     DxgkPollDisplayChildren @ 0x1C0180A30 (DxgkPollDisplayChildren.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0008158 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C00082C0 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     MonitorReleaseMonitorPendingEvent @ 0x1C00B9C8C (MonitorReleaseMonitorPendingEvent.c)
 *     MonitorAcquireMonitorPendingEvent @ 0x1C00B9CC4 (MonitorAcquireMonitorPendingEvent.c)
 *     ??1?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ @ 0x1C00E75F0 (--1-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ.c)
 *     DpiPollDisplayChildren @ 0x1C01DBF3C (DpiPollDisplayChildren.c)
 *     ?DmmEnableModeResetOnMonitorEvent@@YAJQEAXE@Z @ 0x1C01EBC64 (-DmmEnableModeResetOnMonitorEvent@@YAJQEAXE@Z.c)
 */

__int64 __fastcall DXGGLOBAL::PollDisplayChildrenAll(
        DXGGLOBAL *this,
        const struct _D3DKMT_POLLDISPLAYCHILDREN *a2,
        unsigned int a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  struct _MONITOR_PENDING_EVENT *v4; // r13
  volatile signed __int64 *v5; // rsi
  __int64 v6; // r15
  unsigned int v7; // edi
  volatile signed __int64 *v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // eax
  _BYTE *v11; // rcx
  PVOID *PoolWithTag; // rax
  _BYTE *v13; // rax
  char *v14; // rax
  struct _MONITOR_PENDING_EVENT **v15; // rbx
  _BYTE *v16; // r12
  _BYTE *v17; // rax
  PVOID *v18; // r14
  volatile signed __int64 *v19; // rax
  volatile signed __int64 *v20; // rsi
  signed __int64 v21; // rax
  signed __int64 v22; // rtt
  char v23; // al
  bool v24; // zf
  __int64 v25; // rdi
  void *v26; // rcx
  const struct _D3DKMT_POLLDISPLAYCHILDREN *v27; // rcx
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  int v32; // eax
  __int64 v33; // rcx
  __int64 v34; // rax
  char *v35; // rdi
  __int64 v36; // rdx
  PVOID *v37; // rdi
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v38; // r14
  __int64 v39; // rsi
  int v40; // eax
  KPROCESSOR_MODE WaitMode; // al
  NTSTATUS v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rdi
  __int64 v46; // rax
  signed __int64 v47; // r14
  __int64 v48; // rdi
  volatile signed __int64 *v49; // rdi
  volatile signed __int64 *v50; // rbx
  signed __int64 v51; // rax
  signed __int64 v52; // rtt
  unsigned int v53; // ecx
  volatile signed __int64 **v54; // rax
  int v55; // eax
  __int64 v56; // rcx
  __int64 v57; // rbx
  __int64 v58; // rax
  __int64 v59; // rax
  unsigned int v61; // [rsp+40h] [rbp-C0h]
  int v62; // [rsp+44h] [rbp-BCh]
  volatile signed __int64 *v64; // [rsp+50h] [rbp-B0h]
  struct _MONITOR_PENDING_EVENT *v66; // [rsp+60h] [rbp-A0h] BYREF
  volatile signed __int64 *v67; // [rsp+68h] [rbp-98h]
  char *v68; // [rsp+70h] [rbp-90h]
  _BYTE v69[16]; // [rsp+78h] [rbp-88h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v70; // [rsp+88h] [rbp-78h]
  PVOID *__attribute__((__org_arrdim(0,0))) v71; // [rsp+90h] [rbp-70h]
  PKWAIT_BLOCK WaitBlockArray; // [rsp+98h] [rbp-68h]
  union _LARGE_INTEGER Timeout; // [rsp+A0h] [rbp-60h] BYREF
  PVOID *__attribute__((__org_arrdim(0,0))) Object; // [rsp+B0h] [rbp-50h]
  _BYTE v75[64]; // [rsp+B8h] [rbp-48h] BYREF
  unsigned int v76; // [rsp+F8h] [rbp-8h]
  struct _MONITOR_PENDING_EVENT **v77; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v78[64]; // [rsp+108h] [rbp+8h] BYREF
  unsigned int v79; // [rsp+148h] [rbp+48h]
  char *v80; // [rsp+150h] [rbp+50h] BYREF
  char v81; // [rsp+158h] [rbp+58h] BYREF
  unsigned int v82; // [rsp+198h] [rbp+98h]
  _BYTE *v83; // [rsp+1A0h] [rbp+A0h] BYREF
  _BYTE v84[64]; // [rsp+1A8h] [rbp+A8h] BYREF
  unsigned int v85; // [rsp+1E8h] [rbp+E8h]
  __int64 v86; // [rsp+1F0h] [rbp+F0h] BYREF
  char v87[32]; // [rsp+1F8h] [rbp+F8h] BYREF
  char v88[40]; // [rsp+218h] [rbp+118h] BYREF
  __int64 v89; // [rsp+240h] [rbp+140h] BYREF
  char v90[32]; // [rsp+248h] [rbp+148h] BYREF
  char v91[40]; // [rsp+268h] [rbp+168h] BYREF
  PVOID P; // [rsp+290h] [rbp+190h]
  _BYTE v93[384]; // [rsp+298h] [rbp+198h] BYREF
  unsigned int v94; // [rsp+418h] [rbp+318h]

  v4 = 0LL;
  v5 = (volatile signed __int64 *)((char *)this + 440);
  v6 = 0LL;
  v61 = 0;
  v70 = a4;
  v7 = 0;
  v62 = 0;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v69, (DXGGLOBAL *)((char *)this + 400));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v69);
  v8 = (volatile signed __int64 *)*v5;
  v64 = v5;
  while ( v8 != v5 && v8 )
  {
    v9 = *((_QWORD *)v8 + 288);
    v10 = v7 + 1;
    v8 = (volatile signed __int64 *)*v8;
    if ( !v9 )
      v10 = v7;
    v7 = v10;
  }
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v69);
  if ( !v7 )
    goto LABEL_116;
  Object = 0LL;
  v76 = 0;
  if ( v7 <= 8 )
  {
    PoolWithTag = (PVOID *)v75;
  }
  else
  {
    v11 = (_BYTE *)v7;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v7 < 8 )
      goto LABEL_14;
    PoolWithTag = (PVOID *)ExAllocatePoolWithTag((POOL_TYPE)512, 8LL * v7, 0x4B677844u);
  }
  Object = PoolWithTag;
  v76 = v7;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, 8LL * v7);
LABEL_14:
  P = 0LL;
  v94 = 0;
  if ( v7 <= 8 )
  {
    v13 = v93;
  }
  else
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v7 < 0x30 )
      goto LABEL_20;
    v13 = ExAllocatePoolWithTag((POOL_TYPE)512, 48LL * v7, 0x4B677844u);
  }
  P = v13;
  v11 = v13;
  v94 = v7;
  if ( v13 )
    memset(v13, 0, 48LL * v7);
LABEL_20:
  v80 = 0LL;
  v82 = 0;
  if ( v7 <= 8 )
  {
    v14 = &v81;
  }
  else
  {
    v11 = (_BYTE *)v7;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v7 < 8 )
      goto LABEL_26;
    v14 = (char *)ExAllocatePoolWithTag(PagedPool, 8LL * v7, 0x4B677844u);
  }
  v80 = v14;
  v82 = v7;
  if ( v14 )
    memset(v14, 0, 8LL * v7);
LABEL_26:
  v79 = 0;
  v15 = 0LL;
  v77 = 0LL;
  if ( v7 <= 8 )
  {
    v15 = (struct _MONITOR_PENDING_EVENT **)v78;
    v77 = (struct _MONITOR_PENDING_EVENT **)v78;
  }
  else
  {
    v11 = (_BYTE *)v7;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v7 < 8 )
      goto LABEL_32;
    v15 = (struct _MONITOR_PENDING_EVENT **)ExAllocatePoolWithTag(PagedPool, 8LL * v7, 0x4B677844u);
    v77 = v15;
  }
  v79 = v7;
  if ( v15 )
  {
    memset(v15, 0, 8LL * v7);
    v15 = v77;
  }
LABEL_32:
  v83 = 0LL;
  v16 = 0LL;
  v85 = 0;
  if ( v7 <= 8 )
  {
    v16 = v84;
    v83 = v84;
  }
  else
  {
    v11 = (_BYTE *)v7;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v7 < 8 )
      goto LABEL_38;
    v17 = ExAllocatePoolWithTag(PagedPool, 8LL * v7, 0x4B677844u);
    v15 = v77;
    v16 = v17;
    v83 = v17;
  }
  v85 = v7;
  if ( v16 )
  {
    memset(v16, 0, 8LL * v7);
    v15 = v77;
    v16 = v83;
  }
LABEL_38:
  v18 = Object;
  v71 = Object;
  WaitBlockArray = (PKWAIT_BLOCK)P;
  v68 = v80;
  if ( v80 && v15 && Object && P && v16 )
  {
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v69);
    v19 = (volatile signed __int64 *)*v5;
    while ( v19 != v5 && v19 )
    {
      v20 = v19;
      v67 = (volatile signed __int64 *)*v19;
      _m_prefetchw((const void *)(v19 + 3));
      v21 = *((_QWORD *)v19 + 3);
      do
      {
        if ( !v21 )
        {
          v23 = 0;
          goto LABEL_51;
        }
        v22 = v21;
        v21 = _InterlockedCompareExchange64(v20 + 3, v21 + 1, v21);
      }
      while ( v22 != v21 );
      v23 = 1;
LABEL_51:
      v24 = v23 == 0;
      v19 = v67;
      if ( !v24 )
      {
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v86, (struct DXGADAPTER *const)v20, 0LL);
        v66 = 0LL;
        DXGADAPTER::ReleaseReferenceNoTracking((DXGADAPTER *)v20);
        if ( *((_QWORD *)v20 + 288) )
        {
          LODWORD(v25) = COREADAPTERACCESS::AcquireExclusive(&v86, 1u);
          if ( (int)v25 >= 0 )
          {
            v26 = (void *)*((_QWORD *)v20 + 24);
            *(_QWORD *)&v68[8 * v6] = v26;
            ObfReferenceObject(v26);
            v27 = a2;
            if ( (*((_DWORD *)a2 + 1) & 2) != 0 )
            {
              v28 = MonitorAcquireMonitorPendingEvent((DXGADAPTER *)v20, &v66);
              v4 = v66;
              v25 = v28;
              if ( v28 < 0 )
              {
                if ( v66 )
                {
                  v30 = WdLogNewEntry5_WdAssertion(v29);
                  *(_QWORD *)(v30 + 24) = 2739LL;
                  WdLogEvent5_WdAssertion(v30);
                }
                v31 = WdLogNewEntry5_WdError(v29);
                *(_QWORD *)(v31 + 24) = v25;
                WdLogEvent5_WdError(v31);
              }
              else
              {
                v15[v6] = v66;
                v18[v6] = (char *)v4 + 24;
              }
              v27 = a2;
            }
            if ( (int)v25 < 0 )
              goto LABEL_70;
            if ( (*((_DWORD *)v27 + 1) & 4) != 0 )
            {
              v32 = DmmEnableModeResetOnMonitorEvent((void *const)v20, 0);
              v25 = v32;
              if ( v32 < 0 )
              {
                v34 = WdLogNewEntry5_WdError(v33);
                *(_QWORD *)(v34 + 24) = v25;
                WdLogEvent5_WdError(v34);
              }
              else
              {
                *(_QWORD *)&v16[8 * v6] = v20;
              }
            }
            if ( (int)v25 < 0 )
            {
LABEL_70:
              v62 = v25;
              v35 = v68;
              ObfDereferenceObject(*(PVOID *)&v68[8 * v6]);
              *(_QWORD *)&v35[8 * v6] = 0LL;
              if ( v4 )
              {
                MonitorReleaseMonitorPendingEvent(v4, v36);
                v15[v6] = 0LL;
                v18[v6] = 0LL;
              }
              v6 = v61;
            }
            else
            {
              v6 = ++v61;
            }
            COREADAPTERACCESS::Release((COREADAPTERACCESS *)&v86);
          }
        }
        COREACCESS::~COREACCESS((COREACCESS *)v88);
        COREACCESS::~COREACCESS((COREACCESS *)v87);
        v19 = v67;
        v4 = 0LL;
      }
      v5 = v64;
    }
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v69);
    LODWORD(v4) = v62;
    if ( (_DWORD)v6 )
    {
      v37 = (PVOID *)v68;
      v38 = v70;
      v39 = (unsigned int)v6;
      do
      {
        v40 = DpiPollDisplayChildren(*v37, a3, v38);
        if ( v40 < 0 )
          LODWORD(v4) = v40;
        ObfDereferenceObject(*v37);
        *v37++ = 0LL;
        --v39;
      }
      while ( v39 );
      v18 = v71;
      LODWORD(v6) = v61;
      v5 = v64;
    }
    if ( (*((_DWORD *)a2 + 1) & 2) == 0 || !(_DWORD)v6 )
    {
LABEL_89:
      if ( (*((_DWORD *)a2 + 1) & 4) != 0 && (_DWORD)v6 )
      {
        DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v69);
        v49 = (volatile signed __int64 *)*v5;
        while ( v49 != v5 && v49 )
        {
          v50 = v49;
          v49 = (volatile signed __int64 *)*v49;
          _m_prefetchw((const void *)(v50 + 3));
          v51 = *((_QWORD *)v50 + 3);
          while ( v51 )
          {
            v52 = v51;
            v51 = _InterlockedCompareExchange64(v50 + 3, v51 + 1, v51);
            if ( v52 == v51 )
            {
              LOBYTE(v51) = 1;
              break;
            }
          }
          if ( (_BYTE)v51 )
          {
            COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v89, (struct DXGADAPTER *const)v50, 0LL);
            DXGADAPTER::ReleaseReferenceNoTracking((DXGADAPTER *)v50);
            v53 = 0;
            v54 = (volatile signed __int64 **)v16;
            while ( *v54 != v50 )
            {
              ++v53;
              ++v54;
              if ( v53 >= (unsigned int)v6 )
                goto LABEL_107;
            }
            if ( (int)COREADAPTERACCESS::AcquireExclusive(&v89, 1u) >= 0 )
            {
              v55 = DmmEnableModeResetOnMonitorEvent((void *const)v50, 1u);
              v57 = v55;
              if ( v55 < 0 )
              {
                v58 = WdLogNewEntry5_WdError(v56);
                *(_QWORD *)(v58 + 24) = v57;
                WdLogEvent5_WdError(v58);
              }
              COREADAPTERACCESS::Release((COREADAPTERACCESS *)&v89);
            }
LABEL_107:
            COREACCESS::~COREACCESS((COREACCESS *)v91);
            COREACCESS::~COREACCESS((COREACCESS *)v90);
          }
        }
      }
      goto LABEL_109;
    }
    Timeout.QuadPart = -10000000LL;
    WaitMode = ExGetPreviousMode();
    v42 = KeWaitForMultipleObjects(v6, v18, WaitAll, UserRequest, WaitMode, 0, &Timeout, WaitBlockArray);
    v45 = v42;
    if ( v42 == 258 )
    {
      LODWORD(v4) = 258;
      v46 = WdLogNewEntry5_WdError(v44);
      *(_QWORD *)(v46 + 24) = 2828LL;
    }
    else
    {
      if ( v42 >= 0 )
        goto LABEL_87;
      LODWORD(v4) = v42;
      v46 = WdLogNewEntry5_WdError(v44);
      *(_QWORD *)(v46 + 24) = v45;
    }
    WdLogEvent5_WdError(v46);
LABEL_87:
    v47 = (char *)v18 - (char *)v15;
    v48 = (unsigned int)v6;
    do
    {
      MonitorReleaseMonitorPendingEvent(*v15, v43);
      *v15 = 0LL;
      *(struct _MONITOR_PENDING_EVENT **)((char *)v15++ + v47) = 0LL;
      --v48;
    }
    while ( v48 );
    goto LABEL_89;
  }
  v59 = WdLogNewEntry5_WdError(v11);
  *(_QWORD *)(v59 + 24) = 2672LL;
  WdLogEvent5_WdError(v59);
  LODWORD(v4) = -1073741801;
LABEL_109:
  PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>((PVOID *)&v83);
  PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>((PVOID *)&v77);
  PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>((PVOID *)&v80);
  if ( P != v93 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v94 = 0;
  if ( Object != (PVOID *)v75 && Object )
    ExFreePoolWithTag(Object, 0);
  Object = 0LL;
  v76 = 0;
LABEL_116:
  if ( v69[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v69);
  return (unsigned int)v4;
}
