/*
 * XREFs of NdisMWanSendComplete @ 0x1C0054A30
 * Callers:
 *     ndisMStartWanSends @ 0x1C0057B70 (ndisMStartWanSends.c)
 *     ndisMWanSendCompleteInternal @ 0x1C00580F0 (ndisMWanSendCompleteInternal.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0025E10 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C0043E2C (WPP_SF_qqd.c)
 */

void __fastcall NdisMWanSendComplete(__int64 a1, __int64 a2, unsigned int a3)
{
  KIRQL v6; // si
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  _QWORD *v11; // r15

  v6 = 0;
  if ( (unsigned __int8)byte_1C009960A >= 4u )
    WPP_SF_qqd(0x1Eu, &WPP_10c516cfdf9a37727f745c84f8b2ed3d_Traceguids, a1, a2, a3);
  if ( (*(_DWORD *)(a1 + 120) & 0x40000) != 0 )
    v6 = KfRaiseIrql(2u);
  if ( !a3 )
  {
    v7 = *(_QWORD *)(a1 + 3160);
    if ( v7 )
    {
      v8 = 112LL * KeGetPcr()->Prcb.Number;
      ++*(_QWORD *)(v8 + v7 + 64);
      v9 = *(_QWORD *)(a1 + 3160);
      if ( v9 )
      {
        v10 = v9 + 112LL * KeGetPcr()->Prcb.Number;
        *(_QWORD *)(v10 + 88) += *(unsigned int *)(a2 + 24);
        *(_QWORD *)(v10 + 56) += *(unsigned int *)(a2 + 24);
      }
    }
  }
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 96));
  v11 = *(_QWORD **)(a1 + 56);
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 1856) = 1509064;
  while ( 1 )
  {
    *(_QWORD *)(a1 + 520) = 0LL;
    *(_DWORD *)(a1 + 1856) = 0;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 96));
    if ( !v11 )
      break;
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(v11[3] + 240LL))(v11[4], a2, a3);
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 96));
    *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
    *(_DWORD *)(a1 + 1856) = 1509078;
    v11 = (_QWORD *)v11[49];
  }
  if ( (*(_DWORD *)(a1 + 120) & 0x40000) != 0 && v6 != 2 )
    KeLowerIrql(v6);
  if ( (unsigned __int8)byte_1C009960A >= 4u )
    WPP_SF_qq(0x1Fu, &WPP_10c516cfdf9a37727f745c84f8b2ed3d_Traceguids, a1, a2);
}
