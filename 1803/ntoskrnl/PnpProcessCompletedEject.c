/*
 * XREFs of PnpProcessCompletedEject @ 0x140727B00
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1405C79A8 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     PpDevNodeUnlockTree @ 0x14050BED8 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14050BFCC (PpDevNodeLockTree.c)
 *     PnpCompleteDeviceEvent @ 0x14052021C (PnpCompleteDeviceEvent.c)
 *     IopFreeRelationList @ 0x1405C8518 (IopFreeRelationList.c)
 *     PnpInvalidateRelationsInList @ 0x1405C95F8 (PnpInvalidateRelationsInList.c)
 *     PpProfileMarkAllTransitioningDocksEjected @ 0x140732098 (PpProfileMarkAllTransitioningDocksEjected.c)
 *     PnpSetDeviceRemovalSafe @ 0x1407328F8 (PnpSetDeviceRemovalSafe.c)
 *     PnpTrackQueryRemoveDevices @ 0x140732CC0 (PnpTrackQueryRemoveDevices.c)
 *     IopWarmEjectDevice @ 0x14073C044 (IopWarmEjectDevice.c)
 */

void __fastcall PnpProcessCompletedEject(PVOID P)
{
  int v1; // esi
  __int64 v3; // rcx
  _QWORD *v4; // rcx
  PVOID *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdi
  _QWORD *v8; // rcx
  void *v9; // rcx

  v1 = 0;
  if ( *((_DWORD *)P + 23) > 1u )
  {
    *((_BYTE *)P + 89) = 0;
    v1 = IopWarmEjectDevice(*((_QWORD *)P + 7));
  }
  v3 = *((_QWORD *)P + 12);
  if ( v3 )
  {
    (*(void (__fastcall **)(_QWORD, __int64))(v3 + 32))(*(_QWORD *)(v3 + 8), 1LL);
    (*(void (__fastcall **)(_QWORD))(*((_QWORD *)P + 12) + 24LL))(*(_QWORD *)(*((_QWORD *)P + 12) + 8LL));
  }
  PpDevNodeLockTree(1);
  v4 = *(_QWORD **)P;
  if ( *(PVOID *)(*(_QWORD *)P + 8LL) != P || (v5 = (PVOID *)*((_QWORD *)P + 1), *v5 != P) )
    __fastfail(3u);
  *v5 = v4;
  v4[1] = v5;
  v6 = *((_QWORD *)P + 7);
  if ( v6 )
    v7 = *(_QWORD *)(*(_QWORD *)(v6 + 312) + 40LL);
  else
    v7 = 0LL;
  v8 = (_QWORD *)*((_QWORD *)P + 8);
  if ( v8 )
  {
    if ( *((_BYTE *)P + 88) )
    {
      PpProfileMarkAllTransitioningDocksEjected();
      v8 = (_QWORD *)*((_QWORD *)P + 8);
    }
    PnpInvalidateRelationsInList(v8, 4u, 0, 1);
    PnpTrackQueryRemoveDevices(*((_QWORD *)P + 8), 0LL);
    IopFreeRelationList(*((_QWORD **)P + 8));
    *(_QWORD *)(v7 + 696) = 0LL;
  }
  else
  {
    *((_BYTE *)P + 89) = 0;
  }
  PpDevNodeUnlockTree(1);
  v9 = (void *)*((_QWORD *)P + 6);
  if ( v9 )
    PnpCompleteDeviceEvent(v9, v1);
  if ( *((_BYTE *)P + 89) )
    PnpSetDeviceRemovalSafe(*((PVOID *)P + 7));
  ObfDereferenceObject(*((PVOID *)P + 7));
  ExFreePoolWithTag(P, 0);
}
