/*
 * XREFs of ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1C019E1DC
 * Callers:
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C0177F14 (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 * Callees:
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0001DD0 (--1COREACCESS@@QEAA@XZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000278C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002D90 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0002E60 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002EF0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002F30 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002FA0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z @ 0x1C000796C (-GetVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAPEAVDXGDEVICE@@I@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0008158 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00081C8 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     ?Flush@BLTQUEUE@@QEAAXXZ @ 0x1C007F65C (-Flush@BLTQUEUE@@QEAAXXZ.c)
 *     ?Reset@BLTQUEUE@@QEAAXE@Z @ 0x1C007F72C (-Reset@BLTQUEUE@@QEAAXE@Z.c)
 *     ?FlushPagingQueues@DXGDEVICE@@QEAAXXZ @ 0x1C0092BCC (-FlushPagingQueues@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0093D2C (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z @ 0x1C009CA38 (-FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@EE@Z.c)
 *     OutputDuplProcessDestroyDevice @ 0x1C00F3BA8 (OutputDuplProcessDestroyDevice.c)
 *     ?DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z @ 0x1C018266C (-DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DrainCoreAllocations@DXGDEVICE@@QEAAXXZ @ 0x1C019CD1C (-DrainCoreAllocations@DXGDEVICE@@QEAAXXZ.c)
 *     ?Destroy@DXGOVERLAY@@QEAAXXZ @ 0x1C01B080C (-Destroy@DXGOVERLAY@@QEAAXXZ.c)
 *     ?SendWnfNotification@DXGPROCESS@@QEAAJPEBU_WNF_STATE_NAME@@PEAXK@Z @ 0x1C01B9D48 (-SendWnfNotification@DXGPROCESS@@QEAAJPEBU_WNF_STATE_NAME@@PEAXK@Z.c)
 */

void __fastcall DXGDEVICE::Stop(DXGDEVICE *this, char a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // r14d
  __int64 v15; // r13
  unsigned int v16; // r15d
  __int64 v17; // rdi
  __int64 v18; // rbx
  DXGOVERLAY *i; // rbx
  __int64 v20; // rcx
  __int64 v21; // rax
  struct DXGALLOCATION *v22; // r9
  __int64 *j; // rbx
  __int64 v24; // rax
  DXGPROCESS *v25; // rcx
  const struct _WNF_STATE_NAME *v26; // rdx
  unsigned int v27; // r9d
  __int64 v28; // rcx
  __int64 v29; // rax
  int v30; // [rsp+28h] [rbp-89h] BYREF
  _BYTE v31[16]; // [rsp+30h] [rbp-81h] BYREF
  _BYTE v32[24]; // [rsp+40h] [rbp-71h] BYREF
  __int64 v33; // [rsp+58h] [rbp-59h] BYREF
  _BYTE v34[32]; // [rsp+60h] [rbp-51h] BYREF
  _BYTE v35[40]; // [rsp+80h] [rbp-31h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+A8h] [rbp-9h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v8 + 24) = 1523LL;
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = WdLogNewEntry5_WdEvent(v5, v4, v6, v7);
  *(_QWORD *)(v9 + 24) = this;
  WdLogEvent5_WdEvent(v9);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v33, *((struct DXGADAPTER *const *)this + 209), 0LL);
  if ( *((_BYTE *)this + 1693) != (_BYTE)v12
    && *((_QWORD *)this + 209) != v12
    && (int)COREADAPTERACCESS::AcquireExclusive(&v33, (int)v12 + 2) >= 0 )
  {
    v14 = 0;
    v15 = *(_QWORD *)(*((_QWORD *)this + 209) + 2304LL);
    v16 = *(_DWORD *)(v15 + 80);
    if ( v16 )
    {
      do
      {
        if ( this == ADAPTER_DISPLAY::GetVidPnSourceOwner(*(DXGADAPTER ***)(*((_QWORD *)this + 209) + 2304LL), v14) )
        {
          v17 = *(_QWORD *)(v15 + 264);
          v18 = 2704LL * v14;
          BLTQUEUE::Flush((BLTQUEUE *)(v18 + *(_QWORD *)(v17 + 8)));
          BLTQUEUE::Reset((BLTQUEUE *)(v18 + *(_QWORD *)(v17 + 8)), 0);
        }
        ++v14;
      }
      while ( v14 < v16 );
    }
  }
  if ( !a2 )
  {
    KeStackAttachProcess(*(PRKPROCESS *)(*((_QWORD *)this + 5) + 48LL), &ApcState);
    OutputDuplProcessDestroyDevice(*((_QWORD *)this + 209), this);
    DXGDEVICE::FlushDeferredDestruction(this, 0LL, 0, 0);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v31, (struct DXGFASTMUTEX *const)(*((_QWORD *)this + 2) + 616LL));
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v31);
    for ( i = (DXGOVERLAY *)*((_QWORD *)this + 45); i != (DXGDEVICE *)((char *)this + 360) && i; i = *(DXGOVERLAY **)i )
    {
      if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*(_QWORD *)(*((_QWORD *)i + 2) + 16LL) + 16LL)) )
      {
        v21 = WdLogNewEntry5_WdAssertion(v20);
        *(_QWORD *)(v21 + 24) = 250LL;
        WdLogEvent5_WdAssertion(v21);
      }
      DXGOVERLAY::Destroy(i);
      *((_DWORD *)i + 7) = 3;
    }
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v31);
    DXGDEVICE::FlushPagingQueues(this);
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v32, (struct _KTHREAD **)this + 23);
    for ( j = (__int64 *)*((_QWORD *)this + 7); j; j = (__int64 *)j[5] )
      DXGDEVICE::DestroyCoreAllocations(this, (struct DXGRESOURCE *)j, j[3], v22);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v32);
    DXGDEVICE::DrainCoreAllocations((struct _KTHREAD **)this);
    DXGDEVICE::DestroyDevice((ADAPTER_RENDER **)this, 0LL);
    KeUnstackDetachProcess(&ApcState);
    if ( v31[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v31);
  }
  *((_DWORD *)this + 102) = 4;
  v24 = WdLogNewEntry5_WdEvent(v11, v10, v12, v13);
  *(_QWORD *)(v24 + 24) = this;
  WdLogEvent5_WdEvent(v24);
  v25 = (DXGPROCESS *)*((_QWORD *)this + 5);
  v30 = 1;
  if ( (int)DXGPROCESS::SendWnfNotification(v25, v26, &v30, v27) < 0 )
  {
    v29 = WdLogNewEntry5_WdError(v28);
    *(_QWORD *)(v29 + 24) = 1631LL;
    WdLogEvent5_WdError(v29);
  }
  COREACCESS::~COREACCESS((COREACCESS *)v35);
  COREACCESS::~COREACCESS((COREACCESS *)v34);
}
