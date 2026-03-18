/*
 * XREFs of ?ReportState@DXGGLOBAL@@QEAAXXZ @ 0x1C01ABB54
 * Callers:
 *     ?DxgkReportGlobalState@@YAXXZ @ 0x1C01AA0D0 (-DxgkReportGlobalState@@YAXXZ.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x1C00026E0 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z @ 0x1C0003230 (--0DXGSYNCOBJECTLOCK@@QEAA@QEAVDXGGLOBAL@@@Z.c)
 *     ?AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C0003270 (-AcquireShared@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?Release@DXGSYNCOBJECTLOCK@@QEAAXXZ @ 0x1C00032D4 (-Release@DXGSYNCOBJECTLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0008158 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     McTemplateK0 @ 0x1C002048C (McTemplateK0.c)
 *     McTemplateK0j @ 0x1C00252A0 (McTemplateK0j.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C0083A38 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?ReportState@DXGADAPTER@@QEAAXXZ @ 0x1C01723C0 (-ReportState@DXGADAPTER@@QEAAXXZ.c)
 *     ?VmBusSendQueryEtwSession@DXG_GUEST_GLOBAL_VMBUS@@QEAA?AU_GUID@@XZ @ 0x1C01979D4 (-VmBusSendQueryEtwSession@DXG_GUEST_GLOBAL_VMBUS@@QEAA-AU_GUID@@XZ.c)
 *     ?ReportAdapterObjectState@DXGADAPTERSYNCOBJECT@@QEAAXPEAVDXGSYNCOBJECT@@@Z @ 0x1C01BFFA4 (-ReportAdapterObjectState@DXGADAPTERSYNCOBJECT@@QEAAXPEAVDXGSYNCOBJECT@@@Z.c)
 */

void __fastcall DXGGLOBAL::ReportState(DXGGLOBAL **this)
{
  DXGGLOBAL *v2; // rdi
  DXGGLOBAL *v3; // rbx
  _QWORD *v4; // rsi
  _QWORD *i; // r14
  __int64 v6; // rcx
  __int64 v7; // r8
  DXGGLOBAL *v8; // rdi
  DXGGLOBAL *v9; // rbx
  signed __int64 v10; // rax
  signed __int64 v11; // rtt
  __int64 v12; // rcx
  __int64 v13; // rcx
  DXGGLOBAL *v14; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  _BYTE v18[16]; // [rsp+28h] [rbp-69h] BYREF
  _BYTE v19[16]; // [rsp+38h] [rbp-59h] BYREF
  _BYTE v20[16]; // [rsp+48h] [rbp-49h] BYREF
  _BYTE v21[16]; // [rsp+58h] [rbp-39h] BYREF
  __int64 v22; // [rsp+68h] [rbp-29h] BYREF
  char v23[32]; // [rsp+70h] [rbp-21h] BYREF
  char v24[40]; // [rsp+90h] [rbp-1h] BYREF
  struct _GUID v25; // [rsp+B8h] [rbp+27h] BYREF

  DXGSYNCOBJECTLOCK::DXGSYNCOBJECTLOCK((DXGSYNCOBJECTLOCK *)v20, (struct DXGGLOBAL *const)this);
  DXGSYNCOBJECTLOCK::AcquireShared((DXGSYNCOBJECTLOCK *)v20);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v19, (struct DXGFASTMUTEX *const)(this + 35));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
  v2 = this[40];
  while ( v2 != (DXGGLOBAL *)(this + 40) && v2 )
  {
    v3 = v2;
    v2 = *(DXGGLOBAL **)v2;
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v18, (DXGGLOBAL *)((char *)v3 + 32));
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v18);
    if ( (*((_DWORD *)v3 + 41) & 4) != 0 )
    {
      v4 = (_QWORD *)((char *)v3 + 248);
      for ( i = (_QWORD *)*((_QWORD *)v3 + 31); i != v4; i = (_QWORD *)*i )
        DXGADAPTERSYNCOBJECT::ReportAdapterObjectState((DXGADAPTERSYNCOBJECT *)(*v4 - 40LL), v3);
    }
    else
    {
      DXGADAPTERSYNCOBJECT::ReportAdapterObjectState((DXGGLOBAL *)((char *)v3 + 248), v3);
    }
    if ( v18[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v18);
  }
  if ( v19[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v19);
  if ( v20[8] )
    DXGSYNCOBJECTLOCK::Release((DXGSYNCOBJECTLOCK *)v20);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v21, (struct DXGFASTMUTEX *const)(this + 50));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v21);
  v8 = this[55];
  while ( v8 != (DXGGLOBAL *)(this + 55) && v8 )
  {
    v9 = v8;
    v8 = *(DXGGLOBAL **)v8;
    _m_prefetchw((char *)v9 + 24);
    v10 = *((_QWORD *)v9 + 3);
    while ( v10 )
    {
      v6 = v10 + 1;
      v11 = v10;
      v10 = _InterlockedCompareExchange64((volatile signed __int64 *)v9 + 3, v10 + 1, v10);
      if ( v11 == v10 )
      {
        LOBYTE(v10) = 1;
        break;
      }
    }
    if ( (_BYTE)v10 )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v22, v9, 0LL);
      DXGADAPTER::ReleaseReferenceNoTracking(v9);
      if ( (int)COREADAPTERACCESS::AcquireExclusive(&v22, 2u) >= 0 )
      {
        v12 = *((_QWORD *)v9 + 289);
        if ( v12 )
          ADAPTER_RENDER::FlushScheduler(v12, 6, 0xFFFFFFFF, 0);
        DXGADAPTER::ReportState(v9);
        v13 = *((_QWORD *)v9 + 289);
        if ( v13 )
          ADAPTER_RENDER::FlushScheduler(v13, 7, 0xFFFFFFFF, 0);
      }
      COREACCESS::~COREACCESS((COREACCESS *)v24);
      COREACCESS::~COREACCESS((COREACCESS *)v23);
    }
  }
  if ( v21[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v21);
  v14 = this[142];
  if ( v14 && *((_BYTE *)v14 + 8) )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
      McTemplateK0(v6, &EventVGPUGuestStart, v7);
    Global = DXGGLOBAL::GetGlobal(v6);
    DXG_GUEST_GLOBAL_VMBUS::VmBusSendQueryEtwSession(*((struct VMBCHANNEL__ ***)Global + 142), &v25);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
      McTemplateK0j(v16, &EventVGPUGuestEnd, v17, (__int64)&v25);
  }
}
