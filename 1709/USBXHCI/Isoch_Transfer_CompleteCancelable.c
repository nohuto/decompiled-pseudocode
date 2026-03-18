/*
 * XREFs of Isoch_Transfer_CompleteCancelable @ 0x1C002BF2C
 * Callers:
 *     Isoch_CompleteStaleTransfers @ 0x1C00279F4 (Isoch_CompleteStaleTransfers.c)
 *     Isoch_CompleteTransfers @ 0x1C0027C6C (Isoch_CompleteTransfers.c)
 *     Isoch_MapStage @ 0x1C002868C (Isoch_MapStage.c)
 *     Isoch_PrepareStage @ 0x1C0028BB4 (Isoch_PrepareStage.c)
 *     Isoch_RetrieveNextStage @ 0x1C0029D28 (Isoch_RetrieveNextStage.c)
 *     Isoch_Stage_CompleteTD @ 0x1C002A500 (Isoch_Stage_CompleteTD.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     TR_QueueDpcForTransferCompletion @ 0x1C0023648 (TR_QueueDpcForTransferCompletion.c)
 *     WPP_RECORDER_SF_DDqd @ 0x1C0023D74 (WPP_RECORDER_SF_DDqd.c)
 *     Isoch_Transfer_PrepareForCompletion @ 0x1C002C1D0 (Isoch_Transfer_PrepareForCompletion.c)
 */

char __fastcall Isoch_Transfer_CompleteCancelable(
        __int64 a1,
        __int64 *a2,
        unsigned int a3,
        unsigned int a4,
        char a5,
        char a6)
{
  __int64 **v6; // rax
  unsigned int v8; // ebx
  __int64 v11; // rcx
  __int64 **v12; // rax
  __int64 *v13; // rcx
  __int64 **v14; // rax
  int v15; // eax
  __int64 v16; // rsi
  __int64 **v17; // rcx
  KIRQL v18; // bl
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  v6 = (__int64 **)&retaddr;
  v8 = a4;
  if ( *((_DWORD *)a2 + 16) != 1 )
  {
    if ( *((_DWORD *)a2 + 16) == 3 )
    {
      if ( !a5 )
        return (char)v6;
      v11 = *a2;
      v12 = (__int64 **)a2[1];
      v8 = -1073676288;
      if ( a4 != -1 )
        v8 = a4;
      if ( *(__int64 **)(v11 + 8) != a2 || *v12 != a2 )
        __fastfail(3u);
      *v12 = (__int64 *)v11;
      *(_QWORD *)(v11 + 8) = v12;
    }
    goto LABEL_18;
  }
  v13 = (__int64 *)*a2;
  v14 = (__int64 **)a2[1];
  if ( *(__int64 **)(*a2 + 8) != a2 || *v14 != a2 )
    __fastfail(3u);
  *v14 = v13;
  v13[1] = (__int64)v14;
  v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2048))(WdfDriverGlobals, a2[3]);
  if ( v15 >= 0 )
  {
    *((_DWORD *)a2 + 16) = 0;
LABEL_18:
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
    Isoch_Transfer_PrepareForCompletion(a1, a2, a3, v8);
    if ( a6 )
    {
      *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
      v17 = *(__int64 ***)(a1 + 424);
      if ( *v17 != (__int64 *)(a1 + 416) )
        __fastfail(3u);
      a2[1] = (__int64)v17;
      *a2 = a1 + 416;
      *v17 = a2;
      *(_QWORD *)(a1 + 424) = a2;
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
      TR_QueueDpcForTransferCompletion((_QWORD *)a1);
    }
    else
    {
      v18 = KfRaiseIrql(2u);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
        WdfDriverGlobals,
        a2[3],
        *((unsigned int *)a2 + 17));
      KeLowerIrql(v18);
    }
    LOBYTE(v6) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    *(_BYTE *)(a1 + 104) = (_BYTE)v6;
    return (char)v6;
  }
  WPP_RECORDER_SF_DDqd(
    *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
    4u,
    *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
    0x11u,
    (__int64)&WPP_aea810b715823388b2cc7c4156680b6e_Traceguids,
    *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL),
    *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
    a2[3],
    v15);
  v16 = a1 + 400;
  *((_DWORD *)a2 + 16) = 2;
  v6 = *(__int64 ***)(v16 + 8);
  if ( *v6 != (__int64 *)v16 )
    __fastfail(3u);
  *a2 = v16;
  a2[1] = (__int64)v6;
  *v6 = a2;
  *(_QWORD *)(v16 + 8) = a2;
  return (char)v6;
}
