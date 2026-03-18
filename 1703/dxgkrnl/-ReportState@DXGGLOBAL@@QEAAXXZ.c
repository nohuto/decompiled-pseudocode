/*
 * XREFs of ?ReportState@DXGGLOBAL@@QEAAXXZ @ 0x1C0196A04
 * Callers:
 *     ?DxgkReportGlobalState@@YAXXZ @ 0x1C01954A8 (-DxgkReportGlobalState@@YAXXZ.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0006170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0006F78 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0006FB8 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C000701C (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C00078FC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     TemplateEventDescriptor @ 0x1C00227CC (TemplateEventDescriptor.c)
 *     ?VmBusSendQueryEtwSession@@YA?AU_GUID@@XZ @ 0x1C00313C4 (-VmBusSendQueryEtwSession@@YA-AU_GUID@@XZ.c)
 *     Template_j @ 0x1C0034148 (Template_j.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00CCF24 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?ReportState@DXGADAPTER@@QEAAXXZ @ 0x1C016EBE8 (-ReportState@DXGADAPTER@@QEAAXXZ.c)
 *     ?ReportAdapterObjectState@DXGADAPTERSYNCOBJECT@@QEAAXPEAVDXGSYNCOBJECT@@@Z @ 0x1C01A6370 (-ReportAdapterObjectState@DXGADAPTERSYNCOBJECT@@QEAAXPEAVDXGSYNCOBJECT@@@Z.c)
 */

void __fastcall DXGGLOBAL::ReportState(DXGGLOBAL **this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  DXGGLOBAL *v10; // rdi
  DXGGLOBAL *v11; // rbx
  _QWORD *v12; // rsi
  _QWORD *i; // r14
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  DXGGLOBAL *v18; // rdi
  DXGGLOBAL *v19; // rbx
  signed __int64 v20; // rax
  signed __int64 v21; // rtt
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // r8
  _BYTE v26[16]; // [rsp+28h] [rbp-79h] BYREF
  _BYTE v27[16]; // [rsp+38h] [rbp-69h] BYREF
  _BYTE v28[16]; // [rsp+48h] [rbp-59h] BYREF
  _BYTE v29[16]; // [rsp+58h] [rbp-49h] BYREF
  struct _GUID v30; // [rsp+68h] [rbp-39h] BYREF
  __int64 v31; // [rsp+78h] [rbp-29h] BYREF
  _BYTE v32[32]; // [rsp+80h] [rbp-21h] BYREF
  _BYTE v33[40]; // [rsp+A0h] [rbp-1h] BYREF
  __int128 v34; // [rsp+C8h] [rbp+27h] BYREF

  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v28, (struct DXGGLOBAL *const)this, a3, a4);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v28);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v27, (struct DXGFASTMUTEX *const)(this + 35), v5, v6);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v27);
  v10 = this[40];
  while ( v10 != (DXGGLOBAL *)(this + 40) && v10 )
  {
    v11 = v10;
    v10 = *(DXGGLOBAL **)v10;
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v26, (DXGGLOBAL *)((char *)v11 + 32), v8, v9);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v26);
    if ( (*((_DWORD *)v11 + 37) & 4) != 0 )
    {
      v12 = (_QWORD *)((char *)v11 + 232);
      for ( i = (_QWORD *)*((_QWORD *)v11 + 29); i != v12; i = (_QWORD *)*i )
        DXGADAPTERSYNCOBJECT::ReportAdapterObjectState((DXGADAPTERSYNCOBJECT *)(*v12 - 40LL), v11);
    }
    else
    {
      DXGADAPTERSYNCOBJECT::ReportAdapterObjectState((DXGGLOBAL *)((char *)v11 + 232), v11);
    }
    if ( v26[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v26, v7, v8, v9);
  }
  if ( v27[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v27, v7, v8, v9);
  if ( v28[8] )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v28);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v29, (struct DXGFASTMUTEX *const)(this + 50), v8, v9);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v29);
  v18 = this[55];
  while ( v18 != (DXGGLOBAL *)(this + 55) && v18 )
  {
    v19 = v18;
    v18 = *(DXGGLOBAL **)v18;
    _m_prefetchw((char *)v19 + 24);
    v20 = *((_QWORD *)v19 + 3);
    while ( v20 )
    {
      v15 = v20 + 1;
      v21 = v20;
      v20 = _InterlockedCompareExchange64((volatile signed __int64 *)v19 + 3, v20 + 1, v20);
      if ( v21 == v20 )
      {
        LOBYTE(v20) = 1;
        break;
      }
    }
    if ( (_BYTE)v20 )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v31, v19, 0LL);
      DXGADAPTER::ReleaseReference(v19);
      if ( (int)COREADAPTERACCESS::AcquireExclusive(&v31, 2u) >= 0 )
      {
        v22 = *((_QWORD *)v19 + 286);
        if ( v22 )
          ADAPTER_RENDER::FlushScheduler(v22, 6, 0xFFFFFFFF, 0);
        DXGADAPTER::ReportState(v19);
        v23 = *((_QWORD *)v19 + 286);
        if ( v23 )
          ADAPTER_RENDER::FlushScheduler(v23, 7, 0xFFFFFFFF, 0);
      }
      COREACCESS::~COREACCESS((COREACCESS *)v33);
      COREACCESS::~COREACCESS((COREACCESS *)v32);
    }
  }
  if ( v29[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v29, v14, v16, v17);
  if ( this[142] )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000) != 0 )
      TemplateEventDescriptor(v15, &EventVGPUGuestStart);
    v34 = (__int128)*VmBusSendQueryEtwSession(&v30);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000) != 0 )
      Template_j(v24, &EventVGPUGuestEnd, v25, (ULONGLONG)&v34);
  }
}
