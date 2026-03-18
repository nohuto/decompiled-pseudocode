/*
 * XREFs of Bulk_MapStage @ 0x1C002E7B4
 * Callers:
 *     Bulk_MappingLoop @ 0x1C002EB38 (Bulk_MappingLoop.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     Debug_FreAssertMsg @ 0x1C00160A4 (Debug_FreAssertMsg.c)
 *     StageQueue_Release @ 0x1C0021F70 (StageQueue_Release.c)
 *     TR_ReleaseSegments @ 0x1C002377C (TR_ReleaseSegments.c)
 *     Bulk_Stage_MapIntoRing @ 0x1C00309E0 (Bulk_Stage_MapIntoRing.c)
 *     Bulk_Transfer_CompleteCancelable @ 0x1C00316F0 (Bulk_Transfer_CompleteCancelable.c)
 *     SecureDmaEnabler_PrepareMemoryForDma @ 0x1C003F708 (SecureDmaEnabler_PrepareMemoryForDma.c)
 *     SecureDmaEnabler_PrepareSecureSectionForDma @ 0x1C003F81C (SecureDmaEnabler_PrepareSecureSectionForDma.c)
 */

__int64 __fastcall Bulk_MapStage(__int64 a1, __int64 a2, int a3)
{
  unsigned __int8 *v3; // r14
  char v4; // di
  unsigned int v6; // ebx
  __int64 v7; // r13
  __int64 v8; // rdx
  bool v9; // zf
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // eax
  int v13; // eax
  int v14; // ebp
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 v17; // rbp
  __int64 v18; // rdi
  KIRQL v19; // si
  __int64 v20; // rbx
  __int64 v21; // r9
  bool v23; // [rsp+38h] [rbp-30h]

  v3 = *(unsigned __int8 **)(a1 + 360);
  v4 = a2;
  v6 = 1;
  v7 = *(_QWORD *)v3;
  if ( *(_DWORD *)(*(_QWORD *)v3 + 76LL) != 3 )
  {
    Bulk_Stage_MapIntoRing(*(_QWORD *)(a1 + 360), a2);
    return 0;
  }
  v8 = *(_QWORD *)(a1 + 40);
  if ( *(_BYTE *)(v8 + 441) )
  {
    v9 = (*(_DWORD *)(a1 + 296))++ == -1;
    v10 = *(_DWORD *)(a1 + 296);
    if ( v9 )
      v10 = 1;
    *(_DWORD *)(a1 + 296) = v10;
    *((_DWORD *)v3 + 40) = v10;
    if ( v4 )
      KeLowerIrql(0);
    v11 = *(_QWORD *)(v7 + 48);
    v12 = *(unsigned __int16 *)(v11 + 2);
    if ( v12 <= 0x38 || v12 > 0x3A )
      v13 = SecureDmaEnabler_PrepareMemoryForDma(
              *(_QWORD *)(*(_QWORD *)(a1 + 40) + 104LL),
              *((_QWORD *)v3 + 6),
              a3,
              *((_DWORD *)v3 + 10),
              *((_DWORD *)v3 + 40),
              v3 + 128,
              *((_QWORD *)v3 + 7));
    else
      v13 = SecureDmaEnabler_PrepareSecureSectionForDma(
              (int)v11 + 36,
              *(_DWORD *)(v7 + 112),
              *((_DWORD *)v3 + 10),
              *((_DWORD *)v3 + 40),
              v3 + 128,
              *((_QWORD *)v3 + 7));
    v14 = v13;
    if ( v4 )
      KfRaiseIrql(2u);
    if ( v14 >= 0 )
    {
      Debug_FreAssertMsg(
        (__int64)"ScatterGatherList->NumberOfElements must be 1",
        **((_DWORD **)v3 + 7) == 1,
        (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\bulk.c",
        2900);
      LOBYTE(v15) = v4;
      Bulk_Stage_MapIntoRing(v3, v15);
      v6 = 0;
    }
    else
    {
      *((_DWORD *)v3 + 40) = 0;
    }
LABEL_19:
    if ( v14 >= 0 )
      return v6;
    goto LABEL_20;
  }
  v16 = *(_QWORD *)(v7 + 48);
  v17 = *(_QWORD *)(*(_QWORD *)(v8 + 96) + 24LL);
  v18 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 248))(
          WdfDriverGlobals,
          *(_QWORD *)v8);
  v19 = KfRaiseIrql(2u);
  v23 = (*(_BYTE *)(v16 + 32) & 1) == 0;
  v14 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _DWORD, __int64 (__fastcall *)(__int64, __int64, __int64, _QWORD *), unsigned __int8 *, bool))(*(_QWORD *)(v17 + 8) + 88LL))(
          v17,
          v18,
          *((_QWORD *)v3 + 6),
          *(_QWORD *)(*((_QWORD *)v3 + 6) + 32LL) + *(unsigned int *)(*((_QWORD *)v3 + 6) + 44LL),
          *((_DWORD *)v3 + 10),
          Bulk_EvtDmaCallback,
          v3,
          v23);
  KeLowerIrql(v19);
  if ( v14 >= 0 )
  {
    v6 = _InterlockedXor((volatile signed __int32 *)(a1 + 336), 1u) != 0 ? 2 : 0;
    goto LABEL_19;
  }
LABEL_20:
  *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v20 = *(_QWORD *)v3;
  if ( v3[44] )
  {
    IoFreeMdl(*((PMDL *)v3 + 6));
    *((_QWORD *)v3 + 6) = 0LL;
    v3[44] = 0;
  }
  TR_ReleaseSegments(a1, (unsigned __int64 *)v3 + 1, 1);
  TR_ReleaseSegments(a1, (unsigned __int64 *)v3 + 3, 0);
  StageQueue_Release((unsigned __int8 *)(v20 + 128), v3);
  if ( *(_DWORD *)(v7 + 120) == *(_DWORD *)(v7 + 116) )
  {
    LOBYTE(v21) = 1;
    Bulk_Transfer_CompleteCancelable(a1, v7, 3221229568LL, v21);
    v6 = 3;
  }
  else
  {
    v6 = 1;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
  return v6;
}
