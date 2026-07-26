/*
 * XREFs of ?ndisBindEnumerateProtocolDrivers@@YAXP6AXPEAXV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z0@Z @ 0x1C00B5080
 * Callers:
 *     ?EndBindOperation@BindEngine@Ndis@@SAXXZ @ 0x1C00B4878 (-EndBindOperation@BindEngine@Ndis@@SAXXZ.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BAE88 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z @ 0x1C00BAFC4 (-UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z.c)
 *     ?ApplyRules@BindEngine@Ndis@@AEAAXXZ @ 0x1C00BBB74 (-ApplyRules@BindEngine@Ndis@@AEAAXXZ.c)
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00BC16C (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisVBusNmrClientAttachProvider@@YAJPEAX0PEBU_NPI_REGISTRATION_INSTANCE@@@Z @ 0x1C00C8B00 (-ndisVBusNmrClientAttachProvider@@YAJPEAX0PEBU_NPI_REGISTRATION_INSTANCE@@@Z.c)
 *     ?ndisVBusDetachComplete@@YAXPEAX@Z @ 0x1C00F4560 (-ndisVBusDetachComplete@@YAXPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z @ 0x1C00E5F98 (--_GKRefHolder@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z.c)
 */

void __fastcall ndisBindEnumerateProtocolDrivers(
        void (__fastcall *a1)(__int64, volatile signed __int32 **),
        __int64 a2)
{
  __int64 v2; // rsi
  __int64 v5; // r8
  unsigned __int64 i; // rdi
  volatile signed __int32 *v7; // rbx
  volatile signed __int32 *v8; // [rsp+50h] [rbp+18h] BYREF

  v2 = qword_1C0098800;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v2, 0LL);
  v5 = qword_1C0098800;
  for ( i = 0LL; i < *(unsigned int *)(v5 + 44); ++i )
  {
    if ( i >= *(unsigned int *)(v5 + 44) )
      __fastfail(5u);
    v7 = *(volatile signed __int32 **)(*(_QWORD *)(v5 + 48) + 8 * i);
    if ( v7 )
      _InterlockedIncrement(v7 + 12);
    ExReleasePushLockEx(v2, 0LL);
    KeLeaveCriticalRegion();
    v8 = v7;
    if ( v7 )
      _InterlockedIncrement(v7 + 12);
    a1(a2, &v8);
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v2, 0LL);
    v5 = qword_1C0098800;
    if ( *(unsigned int *)(qword_1C0098800 + 44) < i )
      goto LABEL_16;
    if ( i >= *(unsigned int *)(qword_1C0098800 + 44) )
      __fastfail(5u);
    if ( (*(_QWORD *)(*(_QWORD *)(qword_1C0098800 + 48) + 8 * i) != 0LL) != (v7 != 0LL) )
LABEL_16:
      i = 0LL;
    if ( v7 )
    {
      if ( _InterlockedExchangeAdd(v7 + 12, 0xFFFFFFFF) == 1 )
        KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder::`scalar deleting destructor'((PVOID)v7);
      v5 = qword_1C0098800;
    }
  }
  ExReleasePushLockEx(v2, 0LL);
  KeLeaveCriticalRegion();
}
