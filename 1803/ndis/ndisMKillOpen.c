/*
 * XREFs of ndisMKillOpen @ 0x1C0102BA4
 * Callers:
 *     NdisCloseAdapter @ 0x1C0102A80 (NdisCloseAdapter.c)
 * Callees:
 *     EthDeleteFilterOpenAdapter @ 0x1C0013278 (EthDeleteFilterOpenAdapter.c)
 *     ?ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001C280 (-ndisMDereferenceOpenLocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     ndisMRestoreFilterSettings @ 0x1C00461E8 (ndisMRestoreFilterSettings.c)
 *     nullDeleteFilterOpenAdapter @ 0x1C0065320 (nullDeleteFilterOpenAdapter.c)
 *     ndisDereferencePackage @ 0x1C00ADAEC (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00ADB10 (ndisReferencePackage.c)
 */

void __fastcall ndisMKillOpen(__int64 a1)
{
  __int64 v1; // rbx
  KIRQL v3; // r14
  __int64 v4; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v6; // rcx
  KSPIN_LOCK *v7; // rcx
  unsigned int v8; // [rsp+40h] [rbp+8h]

  v1 = *(_QWORD *)(a1 + 16);
  if ( (unsigned __int8)byte_1C009960D >= 4u )
    WPP_SF_q(0xAu, &WPP_96bb6242927f3897e7434d53c3ca2673_Traceguids, a1);
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
        v8 = 0;
        do
          ++v8;
        while ( v8 < 0x32 );
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v1 + 96));
        CurrentThread = KeGetCurrentThread();
      }
      *(_BYTE *)(v1 + 89) = 1;
      *(_DWORD *)(v1 + 1860) = 1441909;
      v6 = *(__int64 **)(v1 + 400);
      *(_QWORD *)(v1 + 1864) = KeGetCurrentThread();
      if ( *(_DWORD *)(v1 + 464) )
        nullDeleteFilterOpenAdapter(v6, a1);
      else
        EthDeleteFilterOpenAdapter((__int64)v6, a1);
      if ( !*(_DWORD *)(v1 + 464) && (*(_DWORD *)(v1 + 124) & 0x4010) == 0 )
        ndisMRestoreFilterSettings(v1, (_QWORD *)a1, 0);
      *(_BYTE *)(v1 + 89) = 0;
      *(_DWORD *)(v1 + 1860) = 0;
      *(_QWORD *)(v1 + 1864) = 0LL;
      ndisMDereferenceOpenLocked(a1, 1u);
      v7 = (KSPIN_LOCK *)(v1 + 96);
      *(_QWORD *)(v1 + 520) = 0LL;
      *(_DWORD *)(v1 + 1856) = 0;
    }
    KeReleaseSpinLockFromDpcLevel(v7);
  }
  if ( (unsigned __int8)byte_1C009960D >= 4u )
    WPP_SF_q(0xBu, &WPP_96bb6242927f3897e7434d53c3ca2673_Traceguids, a1);
  KeLowerIrql(v3);
  ndisDereferencePackage((__int64)&ndisPkgs);
}
