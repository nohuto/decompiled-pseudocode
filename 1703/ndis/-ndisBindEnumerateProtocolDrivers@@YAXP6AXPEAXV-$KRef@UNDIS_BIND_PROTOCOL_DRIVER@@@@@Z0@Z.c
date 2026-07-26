/*
 * XREFs of ?ndisBindEnumerateProtocolDrivers@@YAXP6AXPEAXV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z0@Z @ 0x1C00B1E8C
 * Callers:
 *     ?ndisVBusNmrClientAttachProvider@@YAJPEAX0PEBU_NPI_REGISTRATION_INSTANCE@@@Z @ 0x1C00A8930 (-ndisVBusNmrClientAttachProvider@@YAJPEAX0PEBU_NPI_REGISTRATION_INSTANCE@@@Z.c)
 *     ?EndBindOperation@BindEngine@Ndis@@SAXXZ @ 0x1C00AFBD8 (-EndBindOperation@BindEngine@Ndis@@SAXXZ.c)
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00B2734 (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00B2948 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ApplyRules@BindEngine@Ndis@@AEAAXXZ @ 0x1C00B338C (-ApplyRules@BindEngine@Ndis@@AEAAXXZ.c)
 *     ?ndisVBusDetachComplete@@YAXPEAX@Z @ 0x1C00EAFA0 (-ndisVBusDetachComplete@@YAXPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028760 (_guard_dispatch_icall_nop.c)
 *     ?AcquireShared@KLockHolder@@QEAAXXZ @ 0x1C00B4FC8 (-AcquireShared@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00B5090 (--1KLockHolder@@QEAA@XZ.c)
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z @ 0x1C00DBF50 (--_GKRefHolder@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z.c)
 */

void __fastcall ndisBindEnumerateProtocolDrivers(
        void (__fastcall *a1)(__int64, volatile signed __int32 **),
        __int64 a2)
{
  __int64 v4; // r8
  unsigned __int64 i; // rdi
  volatile signed __int32 *v6; // rbx
  KLockHolder v7; // [rsp+20h] [rbp-28h] BYREF
  volatile signed __int32 *v8; // [rsp+60h] [rbp+18h] BYREF

  v7.m_State = Unlocked;
  v7.m_Lock = (KPushLockBase *)qword_1C00926E0;
  v7.m_Region.m_Entered = 0;
  KLockHolder::AcquireShared(&v7);
  v4 = qword_1C00926E0;
  for ( i = 0LL; i < *(unsigned int *)(v4 + 44); ++i )
  {
    if ( i >= *(unsigned int *)(v4 + 44) )
      __fastfail(0xBAD0FFu);
    v6 = *(volatile signed __int32 **)(*(_QWORD *)(v4 + 48) + 8 * i);
    if ( v6 )
      _InterlockedIncrement(v6 + 14);
    ExReleasePushLockEx(v7.m_Lock, 0LL);
    KeLeaveCriticalRegion();
    v8 = v6;
    if ( v6 )
      _InterlockedIncrement(v6 + 14);
    a1(a2, &v8);
    KeEnterCriticalRegion();
    v7.m_Region.m_Entered = 1;
    ExAcquirePushLockSharedEx(v7.m_Lock, 0LL);
    v4 = qword_1C00926E0;
    v7.m_State = Shared;
    if ( *(unsigned int *)(qword_1C00926E0 + 44) < i )
      goto LABEL_16;
    if ( i >= *(unsigned int *)(qword_1C00926E0 + 44) )
      __fastfail(0xBAD0FFu);
    if ( (*(_QWORD *)(*(_QWORD *)(qword_1C00926E0 + 48) + 8 * i) != 0LL) != (v6 != 0LL) )
LABEL_16:
      i = 0LL;
    if ( v6 )
    {
      if ( _InterlockedExchangeAdd(v6 + 14, 0xFFFFFFFF) == 1 )
        KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder::`scalar deleting destructor'((PVOID)v6);
      v4 = qword_1C00926E0;
    }
  }
  KLockHolder::~KLockHolder(&v7);
}
