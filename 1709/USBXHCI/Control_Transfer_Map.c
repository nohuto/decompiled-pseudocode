/*
 * XREFs of Control_Transfer_Map @ 0x1C0025890
 * Callers:
 *     Control_MapTransfer @ 0x1C0024510 (Control_MapTransfer.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C000E154 (WPP_RECORDER_SF_ddL.c)
 *     Debug_FreAssertMsg @ 0x1C00160A4 (Debug_FreAssertMsg.c)
 *     TR_EnsureInputBufferForTrbs @ 0x1C0022E44 (TR_EnsureInputBufferForTrbs.c)
 *     Control_Transfer_MapIntoRing @ 0x1C0025B3C (Control_Transfer_MapIntoRing.c)
 *     SecureDmaEnabler_PrepareMemoryForDma @ 0x1C003F708 (SecureDmaEnabler_PrepareMemoryForDma.c)
 */

__int64 __fastcall Control_Transfer_Map(__int64 a1, char a2, int a3)
{
  __int64 v3; // r14
  int v4; // ebx
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rdx
  bool v12; // zf
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rbx
  KIRQL v17; // di
  __int64 v18; // rcx
  void *v20; // [rsp+28h] [rbp-40h]
  __int64 v21; // [rsp+30h] [rbp-38h]
  __int64 v22; // [rsp+38h] [rbp-30h]
  bool v23; // [rsp+38h] [rbp-30h]

  v3 = *(_QWORD *)(a1 + 344);
  v4 = 0;
  v7 = *(_QWORD *)(v3 + 48);
  if ( *(_WORD *)(v7 + 2) == 50 && *(_DWORD *)(v7 + 56) )
  {
    *(_DWORD *)(v3 + 116) = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01015 + 2552))(
      WdfDriverGlobals,
      *(_QWORD *)(a1 + 336),
      -10000LL * *(unsigned int *)(v7 + 56));
  }
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 128LL);
  if ( *(_DWORD *)(v8 + 24) <= 1u || (v9 = *(unsigned int *)(v7 + 64), (unsigned int)v9 >= *(_DWORD *)(v8 + 48)) )
    v10 = 0LL;
  else
    v10 = *(unsigned __int16 *)(*(_QWORD *)(v8 + 56) + 2 * v9);
  *(_WORD *)(a1 + 112) = v10;
  if ( *(_BYTE *)(a1 + 280) && (v4 = TR_EnsureInputBufferForTrbs(a1, *(_DWORD *)(a1 + 196) + 1), v4 < 0) )
  {
    return (unsigned int)-1073741670;
  }
  else if ( *(_DWORD *)(v3 + 64) == 3 )
  {
    v11 = *(_QWORD *)(a1 + 40);
    if ( *(_BYTE *)(v11 + 441) )
    {
      v12 = (*(_DWORD *)(a1 + 296))++ == -1;
      v13 = *(_DWORD *)(a1 + 296);
      if ( v12 )
        v13 = 1;
      *(_DWORD *)(a1 + 296) = v13;
      *(_DWORD *)(v3 + 200) = v13;
      if ( a2 )
        KeLowerIrql(0);
      v4 = SecureDmaEnabler_PrepareMemoryForDma(
             *(_QWORD *)(*(_QWORD *)(a1 + 40) + 104LL),
             *(_QWORD *)(v3 + 72),
             a3,
             *(_DWORD *)(v3 + 104),
             *(_DWORD *)(v3 + 200),
             (void *)(v3 + 168),
             *(_QWORD *)(v3 + 96));
      if ( a2 )
        KfRaiseIrql(2u);
      if ( v4 < 0 )
      {
        *(_DWORD *)(v3 + 200) = 0;
        Debug_FreAssertMsg(
          (__int64)"SecureDmaEnabler_PrepareMemoryForDma has failed",
          0,
          (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\control.c",
          2581);
        return (unsigned int)v4;
      }
      Debug_FreAssertMsg(
        (__int64)"ScatterGatherList->NumberOfElements must be 1",
        **(_DWORD **)(v3 + 96) == 1,
        (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\control.c",
        2574);
      LOBYTE(v14) = a2;
      Control_Transfer_MapIntoRing(a1, v14);
    }
    else
    {
      v15 = *(_QWORD *)(*(_QWORD *)(v11 + 96) + 24LL);
      v16 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 248))(
              WdfDriverGlobals,
              *(_QWORD *)v11);
      v17 = KfRaiseIrql(2u);
      v23 = (*(_BYTE *)(v7 + 32) & 1) == 0;
      v4 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _DWORD, __int64 (__fastcall *)(__int64, __int64, __int64, __int64), __int64, bool))(*(_QWORD *)(v15 + 8) + 88LL))(
             v15,
             v16,
             *(_QWORD *)(v3 + 72),
             *(_QWORD *)(*(_QWORD *)(v3 + 72) + 32LL) + *(unsigned int *)(*(_QWORD *)(v3 + 72) + 44LL),
             *(_DWORD *)(v3 + 104),
             Control_EvtDmaCallback,
             a1,
             v23);
      KeLowerIrql(v17);
    }
    if ( v4 < 0 )
    {
      v18 = *(_QWORD *)(a1 + 56);
      LODWORD(v22) = v4;
      LODWORD(v21) = *(_DWORD *)(v18 + 144);
      LODWORD(v20) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
      WPP_RECORDER_SF_ddL(
        *(_QWORD *)(v18 + 80),
        2u,
        0xEu,
        0x24u,
        (__int64)&WPP_9dc305b4e1d93dbd1473da557c698a68_Traceguids,
        v20,
        v21,
        v22);
    }
  }
  else
  {
    LOBYTE(v10) = a2;
    Control_Transfer_MapIntoRing(a1, v10);
  }
  return (unsigned int)v4;
}
