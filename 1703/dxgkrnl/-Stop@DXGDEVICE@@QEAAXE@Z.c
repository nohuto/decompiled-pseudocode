/*
 * XREFs of ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1C0188E3C
 * Callers:
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C0174384 (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0005B90 (--1COREACCESS@@QEAA@XZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000622C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000738C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00077F0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C00078FC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C000B7E8 (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     OutputDuplProcessDestroyDevice @ 0x1C009DAA0 (OutputDuplProcessDestroyDevice.c)
 *     ?Flush@BLTQUEUE@@QEAAXXZ @ 0x1C00A03AC (-Flush@BLTQUEUE@@QEAAXXZ.c)
 *     ?FlushPagingQueues@DXGDEVICE@@QEAAXXZ @ 0x1C00BFD78 (-FlushPagingQueues@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C00C0EFC (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z @ 0x1C00C91A8 (-FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z.c)
 *     ?DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z @ 0x1C017ED98 (-DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DrainCoreAllocations@DXGDEVICE@@QEAAXXZ @ 0x1C0187488 (-DrainCoreAllocations@DXGDEVICE@@QEAAXXZ.c)
 *     ?Destroy@DXGOVERLAY@@QEAAXXZ @ 0x1C0199D9C (-Destroy@DXGOVERLAY@@QEAAXXZ.c)
 *     ?SendWnfNotification@DXGPROCESS@@QEAAJPEBU_WNF_STATE_NAME@@PEAXK@Z @ 0x1C01A1FF0 (-SendWnfNotification@DXGPROCESS@@QEAAJPEBU_WNF_STATE_NAME@@PEAXK@Z.c)
 *     ?Reset@BLTQUEUE@@QEAAXE@Z @ 0x1C01B5DFC (-Reset@BLTQUEUE@@QEAAXE@Z.c)
 */

void __fastcall DXGDEVICE::Stop(DXGDEVICE *this, char a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int v12; // r14d
  __int64 v13; // r13
  unsigned int v14; // r15d
  __int64 v15; // rdi
  __int64 v16; // rbx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  DXGOVERLAY *i; // rbx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // r9
  struct COREDEVICEACCESS *v30; // r9
  __int64 *j; // rbx
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rax
  DXGPROCESS *v39; // rcx
  const struct _WNF_STATE_NAME *v40; // rdx
  unsigned int v41; // r9d
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rax
  int v45; // [rsp+28h] [rbp-89h] BYREF
  _BYTE v46[16]; // [rsp+30h] [rbp-81h] BYREF
  _BYTE v47[24]; // [rsp+40h] [rbp-71h] BYREF
  __int64 v48; // [rsp+58h] [rbp-59h] BYREF
  _BYTE v49[32]; // [rsp+60h] [rbp-51h] BYREF
  _BYTE v50[40]; // [rsp+80h] [rbp-31h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+A8h] [rbp-9h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
    *(_QWORD *)(v8 + 24) = 1521LL;
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = WdLogNewEntry5_WdEvent(v5);
  *(_QWORD *)(v9 + 24) = this;
  WdLogEvent5_WdEvent(v9);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v48, *((struct DXGADAPTER *const *)this + 225), 0LL);
  if ( *((_BYTE *)this + 1821) != (_BYTE)v11
    && *((_QWORD *)this + 225) != v11
    && (int)COREADAPTERACCESS::AcquireExclusive(&v48, (int)v11 + 2) >= 0 )
  {
    v12 = 0;
    v13 = *(_QWORD *)(*((_QWORD *)this + 225) + 2280LL);
    v14 = *(_DWORD *)(v13 + 80);
    if ( v14 )
    {
      do
      {
        if ( this == ADAPTER_DISPLAY::GetVidPnSourceOwner(*(DXGADAPTER ***)(*((_QWORD *)this + 225) + 2280LL), v12) )
        {
          v15 = *(_QWORD *)(v13 + 264);
          v16 = 2704LL * v12;
          BLTQUEUE::Flush((BLTQUEUE *)(v16 + *(_QWORD *)(v15 + 8)));
          BLTQUEUE::Reset((BLTQUEUE *)(v16 + *(_QWORD *)(v15 + 8)), 0);
        }
        ++v12;
      }
      while ( v12 < v14 );
    }
  }
  if ( !a2 )
  {
    KeStackAttachProcess(*(PRKPROCESS *)(*((_QWORD *)this + 5) + 48LL), &ApcState);
    OutputDuplProcessDestroyDevice(*((_QWORD *)this + 225), this);
    DXGDEVICE::FlushDeferredDestruction(this, 0LL, 0, 0);
    DXGAUTOMUTEX::DXGAUTOMUTEX(
      (DXGAUTOMUTEX *)v46,
      (struct DXGFASTMUTEX *const)(*((_QWORD *)this + 2) + 520LL),
      v17,
      v18);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v46);
    for ( i = (DXGOVERLAY *)*((_QWORD *)this + 45); i != (DXGDEVICE *)((char *)this + 360) && i; i = *(DXGOVERLAY **)i )
    {
      if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*(_QWORD *)(*((_QWORD *)i + 2) + 16LL) + 16LL)) )
      {
        v27 = WdLogNewEntry5_WdAssertion(v24, v23, v25, v26);
        *(_QWORD *)(v27 + 24) = 250LL;
        WdLogEvent5_WdAssertion(v27);
      }
      DXGOVERLAY::Destroy(i);
      *((_DWORD *)i + 7) = 3;
    }
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v46, v19, v20, v21);
    DXGDEVICE::FlushPagingQueues(this);
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
      (DXGAUTOPUSHLOCKEXCLUSIVE *)v47,
      (struct _KTHREAD **)this + 23,
      v28,
      v29);
    for ( j = (__int64 *)*((_QWORD *)this + 7); j; j = (__int64 *)j[5] )
      DXGDEVICE::DestroyCoreAllocations(this, (struct DXGRESOURCE *)j, j[3], v30);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v47);
    DXGDEVICE::DrainCoreAllocations((struct _KTHREAD **)this, v32, v33, v34);
    DXGDEVICE::DestroyDevice(this, 0LL);
    KeUnstackDetachProcess(&ApcState);
    if ( v46[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v46, v35, v36, v37);
  }
  *((_DWORD *)this + 102) = 4;
  v38 = WdLogNewEntry5_WdEvent(v10);
  *(_QWORD *)(v38 + 24) = this;
  WdLogEvent5_WdEvent(v38);
  v39 = (DXGPROCESS *)*((_QWORD *)this + 5);
  v45 = 1;
  if ( (int)DXGPROCESS::SendWnfNotification(v39, v40, &v45, v41) < 0 )
  {
    v44 = WdLogNewEntry5_WdError(v43, v42);
    *(_QWORD *)(v44 + 24) = 1629LL;
    WdLogEvent5_WdError(v44);
  }
  COREACCESS::~COREACCESS((COREACCESS *)v50);
  COREACCESS::~COREACCESS((COREACCESS *)v49);
}
