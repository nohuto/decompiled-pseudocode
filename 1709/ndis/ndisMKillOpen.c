/*
 * XREFs of ndisMKillOpen @ 0x1C00FF208
 * Callers:
 *     NdisCloseAdapter @ 0x1C00FF0F0 (NdisCloseAdapter.c)
 * Callees:
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0001B74 (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     EthDeleteFilterOpenAdapter @ 0x1C0001BE0 (EthDeleteFilterOpenAdapter.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     ndisMRestoreFilterSettings @ 0x1C004502C (ndisMRestoreFilterSettings.c)
 *     nullDeleteFilterOpenAdapter @ 0x1C00647D8 (nullDeleteFilterOpenAdapter.c)
 *     ndisDereferencePackage @ 0x1C00B837C (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00B83A0 (ndisReferencePackage.c)
 */

void __fastcall ndisMKillOpen(__int64 a1)
{
  __int64 v1; // rbx
  KIRQL v3; // r14
  __int64 v4; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rcx
  KSPIN_LOCK *v7; // rcx
  unsigned int i; // [rsp+40h] [rbp+8h]

  v1 = *(_QWORD *)(a1 + 16);
  if ( (unsigned __int8)byte_1C009874D >= 4u )
    WPP_SF_q(0xAu, &WPP_f6ff8ad275483b96b230875d61fb9de9_Traceguids, a1);
  ndisReferencePackage((__int64)&ndisPkgs);
  v3 = KfRaiseIrql(2u);
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v1 + 96));
  v4 = *(_QWORD *)(v1 + 56);
  *(_QWORD *)(v1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(v1 + 1856) = 1441871;
  while ( v4 && v4 != a1 )
    v4 = *(_QWORD *)(v4 + 392);
  *(_QWORD *)(v1 + 520) = 0LL;
  *(_DWORD *)(v1 + 1856) = 0;
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v1 + 96));
  if ( v4 )
  {
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 232));
    if ( (*(_DWORD *)(a1 + 224) & 0x8000) != 0 )
    {
      v7 = (KSPIN_LOCK *)(a1 + 232);
    }
    else
    {
      *(_DWORD *)(a1 + 224) |= 0x8000u;
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 232));
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v1 + 96));
      CurrentThread = KeGetCurrentThread();
      for ( *(_DWORD *)(v1 + 1856) = 1441908; ; *(_DWORD *)(v1 + 1856) = 1441909 )
      {
        *(_QWORD *)(v1 + 520) = CurrentThread;
        if ( !*(_BYTE *)(v1 + 89) )
          break;
        *(_QWORD *)(v1 + 520) = 0LL;
        *(_DWORD *)(v1 + 1856) = 0;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v1 + 96));
        for ( i = 0; i < 0x32; ++i )
          ;
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v1 + 96));
        CurrentThread = KeGetCurrentThread();
      }
      *(_BYTE *)(v1 + 89) = 1;
      *(_DWORD *)(v1 + 1860) = 1441909;
      v6 = *(_QWORD *)(v1 + 400);
      *(_QWORD *)(v1 + 1864) = KeGetCurrentThread();
      if ( *(_DWORD *)(v1 + 464) )
        nullDeleteFilterOpenAdapter(v6, a1);
      else
        EthDeleteFilterOpenAdapter(v6, a1);
      if ( !*(_DWORD *)(v1 + 464) && (*(_DWORD *)(v1 + 124) & 0x4010) == 0 )
        ndisMRestoreFilterSettings(v1, (_QWORD *)a1, 0);
      *(_BYTE *)(v1 + 89) = 0;
      *(_DWORD *)(v1 + 1860) = 0;
      *(_QWORD *)(v1 + 1864) = 0LL;
      ndisMDereferenceOpenLocked(a1);
      v7 = (KSPIN_LOCK *)(v1 + 96);
      *(_QWORD *)(v1 + 520) = 0LL;
      *(_DWORD *)(v1 + 1856) = 0;
    }
    KeReleaseSpinLockFromDpcLevel(v7);
  }
  if ( (unsigned __int8)byte_1C009874D >= 4u )
    WPP_SF_q(0xBu, &WPP_f6ff8ad275483b96b230875d61fb9de9_Traceguids, a1);
  KeLowerIrql(v3);
  ndisDereferencePackage((__int64)&ndisPkgs);
}
