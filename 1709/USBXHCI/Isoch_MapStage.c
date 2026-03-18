/*
 * XREFs of Isoch_MapStage @ 0x1C002868C
 * Callers:
 *     Isoch_MappingLoop @ 0x1C0028A68 (Isoch_MappingLoop.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     Debug_FreAssertMsg @ 0x1C00160A4 (Debug_FreAssertMsg.c)
 *     StageQueue_Release @ 0x1C0021F70 (StageQueue_Release.c)
 *     TR_ReleaseSegments @ 0x1C002377C (TR_ReleaseSegments.c)
 *     Isoch_Stage_MapIntoRing @ 0x1C002AEC0 (Isoch_Stage_MapIntoRing.c)
 *     Isoch_Transfer_CompleteCancelable @ 0x1C002BF2C (Isoch_Transfer_CompleteCancelable.c)
 *     SecureDmaEnabler_PrepareMemoryForDma @ 0x1C003F708 (SecureDmaEnabler_PrepareMemoryForDma.c)
 *     SecureDmaEnabler_PrepareSecureSectionForDma @ 0x1C003F81C (SecureDmaEnabler_PrepareSecureSectionForDma.c)
 */

__int64 __fastcall Isoch_MapStage(__int64 a1, char a2, int a3)
{
  __int64 *v3; // r14
  __int64 v5; // rdx
  unsigned int v7; // ebx
  __int64 v8; // r13
  bool v9; // zf
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // eax
  int v13; // eax
  int v14; // edi
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 v17; // rbp
  __int64 v18; // rdi
  KIRQL v19; // si
  __int64 v20; // rdi
  bool v22; // [rsp+38h] [rbp-30h]

  v3 = *(__int64 **)(a1 + 368);
  v5 = *(_QWORD *)(a1 + 40);
  v7 = 1;
  v8 = *v3;
  *(_DWORD *)(a1 + 352) = 0;
  if ( *(_BYTE *)(v5 + 441) )
  {
    v9 = (*(_DWORD *)(a1 + 296))++ == -1;
    v10 = *(_DWORD *)(a1 + 296);
    if ( v9 )
      v10 = 1;
    *(_DWORD *)(a1 + 296) = v10;
    *((_DWORD *)v3 + 40) = v10;
    if ( a2 )
      KeLowerIrql(0);
    v11 = *(_QWORD *)(v8 + 48);
    v12 = *(unsigned __int16 *)(v11 + 2);
    if ( v12 <= 0x38 || v12 > 0x3A )
      v13 = SecureDmaEnabler_PrepareMemoryForDma(
              *(_QWORD *)(*(_QWORD *)(a1 + 40) + 104LL),
              v3[8],
              a3,
              *((_DWORD *)v3 + 13),
              *((_DWORD *)v3 + 40),
              v3 + 16,
              v3[9]);
    else
      v13 = SecureDmaEnabler_PrepareSecureSectionForDma(
              (int)v11 + 36,
              *(_DWORD *)(v8 + 88) + *(_DWORD *)(v8 + 92),
              *((_DWORD *)v3 + 13),
              *((_DWORD *)v3 + 40),
              v3 + 16,
              v3[9]);
    v14 = v13;
    if ( a2 )
      KfRaiseIrql(2u);
    if ( v14 < 0 )
    {
      *((_DWORD *)v3 + 40) = 0;
      goto LABEL_19;
    }
    Debug_FreAssertMsg(
      (__int64)"ScatterGatherList->NumberOfElements must be 1",
      *(_DWORD *)v3[9] == 1,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\isoch.c",
      3747);
    LOBYTE(v15) = a2;
    Isoch_Stage_MapIntoRing(v3, v15);
    goto LABEL_17;
  }
  v16 = *(_QWORD *)(v8 + 48);
  v17 = *(_QWORD *)(*(_QWORD *)(v5 + 96) + 24LL);
  v18 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 248))(
          WdfDriverGlobals,
          *(_QWORD *)v5);
  v19 = KfRaiseIrql(2u);
  v22 = (*(_BYTE *)(v16 + 32) & 1) == 0;
  v14 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, _DWORD, __int64 (__fastcall *)(__int64, __int64, __int64, _QWORD *), __int64 *, bool))(*(_QWORD *)(v17 + 8) + 88LL))(
          v17,
          v18,
          v3[8],
          *(_QWORD *)(v3[8] + 32) + *(unsigned int *)(v3[8] + 44),
          *((_DWORD *)v3 + 13),
          Isoch_EvtDmaCallback,
          v3,
          v22);
  KeLowerIrql(v19);
  if ( v14 >= 0 )
  {
    if ( _InterlockedXor((volatile signed __int32 *)(a1 + 340), 1u) )
    {
      v7 = 2;
LABEL_19:
      if ( v14 >= 0 )
        return v7;
      goto LABEL_20;
    }
LABEL_17:
    v7 = *(_DWORD *)(a1 + 352) != 0 ? 4 : 0;
    goto LABEL_19;
  }
LABEL_20:
  *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v20 = *v3;
  if ( *((_BYTE *)v3 + 56) )
  {
    IoFreeMdl((PMDL)v3[8]);
    v3[8] = 0LL;
    *((_BYTE *)v3 + 56) = 0;
  }
  TR_ReleaseSegments(a1, (unsigned __int64 *)v3 + 1, 1);
  TR_ReleaseSegments(a1, (unsigned __int64 *)v3 + 3, 0);
  StageQueue_Release((unsigned __int8 *)(v20 + 128), (unsigned __int8 *)v3);
  if ( *(_DWORD *)(v8 + 112) == *(_DWORD *)(v8 + 116) )
    Isoch_Transfer_CompleteCancelable(a1, v8, -1, -1073737728, 0, 0);
  else
    *(_DWORD *)(v8 + 108) = *(_DWORD *)(v8 + 96) - *(_DWORD *)(v8 + 104);
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
  return 1;
}
