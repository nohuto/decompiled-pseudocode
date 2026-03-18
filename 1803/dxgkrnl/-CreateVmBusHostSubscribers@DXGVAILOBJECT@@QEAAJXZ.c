/*
 * XREFs of ?CreateVmBusHostSubscribers@DXGVAILOBJECT@@QEAAJXZ @ 0x1C01E64E8
 * Callers:
 *     NtDxgkVailConnect @ 0x1C01E8CF0 (NtDxgkVailConnect.c)
 * Callees:
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000DC30 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0015080 (--_V@YAXPEAX@Z.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     ?RegisterSubscriber@DXGVMBUSCHANNEL@@QEAAJIPEAUIDXGCHANNELSUBSCRIBER@@PEAPEAUIDXGCHANNEL@@@Z @ 0x1C01E55D4 (-RegisterSubscriber@DXGVMBUSCHANNEL@@QEAAJIPEAUIDXGCHANNELSUBSCRIBER@@PEAPEAUIDXGCHANNEL@@@Z.c)
 *     ??0DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAA@PEAU_EPROCESS@@0@Z @ 0x1C01E59D4 (--0DXG_HOST_COMPOSITIONOBJECTCHANNEL@@QEAA@PEAU_EPROCESS@@0@Z.c)
 *     ??0DXG_HOST_REMOTEOBJECTCHANNEL@@QEAA@PEAX0PEAU_EPROCESS@@1@Z @ 0x1C01E5A3C (--0DXG_HOST_REMOTEOBJECTCHANNEL@@QEAA@PEAX0PEAU_EPROCESS@@1@Z.c)
 *     ?AllocateDefaultSecurityDescriptor@DXGVAILOBJECT@@SAJKPEAPEAX@Z @ 0x1C01E5CD0 (-AllocateDefaultSecurityDescriptor@DXGVAILOBJECT@@SAJKPEAPEAX@Z.c)
 *     ?AllocateResourceSecurityDescriptor@DXGVAILOBJECT@@QEAAJEKPEAPEAX@Z @ 0x1C01E5E1C (-AllocateResourceSecurityDescriptor@DXGVAILOBJECT@@QEAAJEKPEAPEAX@Z.c)
 */

__int64 __fastcall DXGVAILOBJECT::CreateVmBusHostSubscribers(DXGVAILOBJECT *this)
{
  int DefaultSecurityDescriptor; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rbx
  __int64 v7; // rax
  void *v8; // r14
  int ResourceSecurityDescriptor; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  void *v14; // r15
  struct IDXGCHANNEL **v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rax
  DXG_HOST_COMPOSITIONOBJECTCHANNEL *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rax
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rcx
  __int64 v35; // rcx
  _BYTE v37[16]; // [rsp+30h] [rbp-10h] BYREF
  void *v38; // [rsp+60h] [rbp+20h] BYREF
  void *v39; // [rsp+68h] [rbp+28h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v37, (DXGVAILOBJECT *)((char *)this + 32), 1);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v37);
  if ( *((_OWORD *)this + 7) != 0LL )
  {
    LODWORD(v6) = -1073740528;
    goto LABEL_30;
  }
  v38 = 0LL;
  v39 = 0LL;
  DefaultSecurityDescriptor = DXGVAILOBJECT::AllocateDefaultSecurityDescriptor(0x20000u, (struct _ACL **)&v38);
  v6 = DefaultSecurityDescriptor;
  if ( DefaultSecurityDescriptor < 0 )
  {
    v7 = WdLogNewEntry5_WdWarning(v4, v3, v5);
    *(_QWORD *)(v7 + 24) = v6;
    WdLogEvent5_WdWarning(v7);
    v8 = v38;
LABEL_22:
    if ( v8 )
      operator delete[](v8);
LABEL_24:
    if ( (int)v6 >= 0 )
      goto LABEL_30;
    goto LABEL_25;
  }
  ResourceSecurityDescriptor = DXGVAILOBJECT::AllocateResourceSecurityDescriptor(this, v3, v5, (struct _ACL **)&v39);
  v6 = ResourceSecurityDescriptor;
  if ( ResourceSecurityDescriptor < 0 )
  {
    v13 = WdLogNewEntry5_WdWarning(v11, v10, v12);
    *(_QWORD *)(v13 + 24) = v6;
    WdLogEvent5_WdWarning(v13);
    v8 = v38;
    v14 = v39;
    goto LABEL_20;
  }
  v15 = (struct IDXGCHANNEL **)operator new(0x38uLL, 0x4B677844u, 1, PagedPool);
  v8 = v38;
  v14 = v39;
  if ( v15 )
    v15 = (struct IDXGCHANNEL **)DXG_HOST_REMOTEOBJECTCHANNEL::DXG_HOST_REMOTEOBJECTCHANNEL(
                                   (DXG_HOST_REMOTEOBJECTCHANNEL *)v15,
                                   v38,
                                   v39,
                                   *((struct _EPROCESS **)this + 11),
                                   *((struct _EPROCESS **)this + 10));
  *((_QWORD *)this + 14) = v15;
  if ( !v15 )
  {
    LODWORD(v6) = -1073741801;
    v19 = WdLogNewEntry5_WdWarning(v17, v16, v18);
    *(_QWORD *)(v19 + 24) = -1073741801LL;
LABEL_19:
    WdLogEvent5_WdWarning(v19);
LABEL_20:
    if ( v14 )
      operator delete[](v14);
    goto LABEL_22;
  }
  v8 = 0LL;
  v14 = 0LL;
  v20 = DXGVMBUSCHANNEL::RegisterSubscriber(
          *((DXGVMBUSCHANNEL **)this + 12),
          1869901170,
          (struct IDXGCHANNELSUBSCRIBER *)v15,
          v15 + 1);
  v6 = v20;
  if ( v20 < 0 )
  {
    v24 = WdLogNewEntry5_WdWarning(v22, v21, v23);
    *(_QWORD *)(v24 + 24) = v6;
    WdLogEvent5_WdWarning(v24);
    goto LABEL_24;
  }
  v25 = (DXG_HOST_COMPOSITIONOBJECTCHANNEL *)operator new(0x28uLL, 0x4B677844u, 1, PagedPool);
  if ( v25 )
    v25 = DXG_HOST_COMPOSITIONOBJECTCHANNEL::DXG_HOST_COMPOSITIONOBJECTCHANNEL(
            v25,
            *((struct _EPROCESS **)this + 10),
            *((struct _EPROCESS **)this + 10));
  *((_QWORD *)this + 15) = v25;
  if ( !v25 )
  {
    LODWORD(v6) = -1073741801;
    v29 = WdLogNewEntry5_WdWarning(v27, v26, v28);
    *(_QWORD *)(v29 + 24) = -1073741801LL;
    WdLogEvent5_WdWarning(v29);
  }
  if ( (int)v6 >= 0 )
  {
    v30 = DXGVMBUSCHANNEL::RegisterSubscriber(
            *((DXGVMBUSCHANNEL **)this + 12),
            1886220131,
            *((struct IDXGCHANNELSUBSCRIBER **)this + 15),
            (struct IDXGCHANNEL **)(*((_QWORD *)this + 15) + 8LL));
    v6 = v30;
    if ( v30 >= 0 )
      goto LABEL_30;
    v19 = WdLogNewEntry5_WdWarning(v32, v31, v33);
    *(_QWORD *)(v19 + 24) = v6;
    goto LABEL_19;
  }
LABEL_25:
  v34 = *((_QWORD *)this + 14);
  if ( v34 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 48LL))(v34);
    *((_QWORD *)this + 14) = 0LL;
  }
  v35 = *((_QWORD *)this + 15);
  if ( v35 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 48LL))(v35);
    *((_QWORD *)this + 15) = 0LL;
  }
LABEL_30:
  if ( v37[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v37);
  return (unsigned int)v6;
}
