/*
 * XREFs of ?ReportState@DXGGLOBAL@@QEAAXXZ @ 0x1C01A0D58
 * Callers:
 *     ?DxgkReportGlobalState@@YAXXZ @ 0x1C019DD64 (-DxgkReportGlobalState@@YAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0002A74 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002AE4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00150F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00157C0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C0016020 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0016B00 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0016B40 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0016BA4 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     McTemplateK0 @ 0x1C002771C (McTemplateK0.c)
 *     McTemplateK0j @ 0x1C002DF80 (McTemplateK0j.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00A619C (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?ReportState@DXGADAPTER@@QEAAXXZ @ 0x1C014EE2C (-ReportState@DXGADAPTER@@QEAAXXZ.c)
 *     ?VmBusSendQueryEtwSession@DXG_GUEST_GLOBAL_VMBUS@@QEAA?AU_GUID@@XZ @ 0x1C01843E8 (-VmBusSendQueryEtwSession@DXG_GUEST_GLOBAL_VMBUS@@QEAA-AU_GUID@@XZ.c)
 *     ?ReportAdapterObjectState@DXGADAPTERSYNCOBJECT@@QEAAXPEAVDXGSYNCOBJECT@@@Z @ 0x1C01C1234 (-ReportAdapterObjectState@DXGADAPTERSYNCOBJECT@@QEAAXPEAVDXGSYNCOBJECT@@@Z.c)
 */

void __fastcall DXGGLOBAL::ReportState(PERESOURCE *this)
{
  DXGGLOBAL *v2; // rdi
  DXGGLOBAL *v3; // rbx
  struct DXGSYNCOBJECT *v4; // rsi
  _QWORD *v5; // rbx
  _QWORD *v6; // r14
  __int64 v7; // rcx
  __int64 v8; // r8
  DXGGLOBAL *v9; // rdi
  DXGGLOBAL *v10; // rbx
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  __int64 v13; // rcx
  __int64 v14; // rcx
  PERESOURCE v15; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  _BYTE v19[16]; // [rsp+20h] [rbp-79h] BYREF
  _BYTE v20[16]; // [rsp+30h] [rbp-69h] BYREF
  _BYTE v21[16]; // [rsp+40h] [rbp-59h] BYREF
  _BYTE v22[16]; // [rsp+50h] [rbp-49h] BYREF
  __int64 v23; // [rsp+60h] [rbp-39h] BYREF
  _BYTE v24[32]; // [rsp+68h] [rbp-31h] BYREF
  _BYTE v25[40]; // [rsp+88h] [rbp-11h] BYREF
  struct _GUID v26; // [rsp+B0h] [rbp+17h] BYREF

  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v21, this);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v21);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v20, (struct DXGFASTMUTEX *const)(this + 36), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v20);
  v2 = (DXGGLOBAL *)this[41];
  while ( v2 != (DXGGLOBAL *)(this + 41) && v2 )
  {
    v3 = v2;
    v4 = v2;
    v2 = *(DXGGLOBAL **)v2;
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v19, (DXGGLOBAL *)((char *)v3 + 32), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
    if ( (*((_DWORD *)v3 + 43) & 4) != 0 )
    {
      v5 = (_QWORD *)*((_QWORD *)v3 + 33);
      v6 = (_QWORD *)((char *)v4 + 264);
      while ( v5 != v6 )
      {
        DXGADAPTERSYNCOBJECT::ReportAdapterObjectState((DXGADAPTERSYNCOBJECT *)(*v6 - 40LL), v4);
        v5 = (_QWORD *)*v5;
      }
    }
    else
    {
      DXGADAPTERSYNCOBJECT::ReportAdapterObjectState((DXGGLOBAL *)((char *)v3 + 264), v3);
    }
    if ( v19[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v19);
  }
  if ( v20[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v20);
  if ( v21[8] )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v21);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v22, (struct DXGFASTMUTEX *const)(this + 51), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v22);
  v9 = (DXGGLOBAL *)this[56];
  while ( v9 != (DXGGLOBAL *)(this + 56) && v9 )
  {
    v10 = v9;
    v9 = *(DXGGLOBAL **)v9;
    _m_prefetchw((char *)v10 + 24);
    v11 = *((_QWORD *)v10 + 3);
    while ( v11 )
    {
      v7 = v11 + 1;
      v12 = v11;
      v11 = _InterlockedCompareExchange64((volatile signed __int64 *)v10 + 3, v11 + 1, v11);
      if ( v12 == v11 )
      {
        LOBYTE(v11) = 1;
        break;
      }
    }
    if ( (_BYTE)v11 )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v23, v10, 0LL);
      DXGADAPTER::ReleaseReferenceNoTracking(v10);
      if ( (int)COREADAPTERACCESS::AcquireExclusive(&v23) >= 0 )
      {
        v13 = *((_QWORD *)v10 + 308);
        if ( v13 )
          ADAPTER_RENDER::FlushScheduler(v13, 6, 0xFFFFFFFF, 0);
        DXGADAPTER::ReportState(v10);
        v14 = *((_QWORD *)v10 + 308);
        if ( v14 )
          ADAPTER_RENDER::FlushScheduler(v14, 7, 0xFFFFFFFF, 0);
      }
      COREACCESS::~COREACCESS((COREACCESS *)v25);
      COREACCESS::~COREACCESS((COREACCESS *)v24);
    }
  }
  if ( v22[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v22);
  v15 = this[152];
  if ( v15 && LOBYTE(v15->ExclusiveWaiters) )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
      McTemplateK0(v7, &EventVGPUGuestStart, v8);
    Global = DXGGLOBAL::GetGlobal(v7);
    DXG_GUEST_GLOBAL_VMBUS::VmBusSendQueryEtwSession(*((struct VMBCHANNEL__ ***)Global + 152), &v26);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
      McTemplateK0j(v17, &EventVGPUGuestEnd, v18, (__int64)&v26);
  }
}
