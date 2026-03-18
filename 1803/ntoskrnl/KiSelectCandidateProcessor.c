/*
 * XREFs of KiSelectCandidateProcessor @ 0x14024C410
 * Callers:
 *     KiChooseTargetProcessor @ 0x1400FC8B0 (KiChooseTargetProcessor.c)
 *     KiHeteroChooseTargetProcessor @ 0x1402482DC (KiHeteroChooseTargetProcessor.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1400ECA40 (KeYieldProcessorEx.c)
 *     KiSetVpThreadSpinLockCount @ 0x1400FDCF0 (KiSetVpThreadSpinLockCount.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140122D80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140122DC0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 */

__int64 __fastcall KiSelectCandidateProcessor(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rbp
  __int64 v6; // rdi
  volatile LONG *v7; // r14
  __int64 v8; // rdi
  __int64 v9; // rax
  char v10; // cl
  int v11; // edx
  struct _KPRCB *CurrentPrcb; // rbx
  int v14; // [rsp+40h] [rbp+8h] BYREF
  int v15; // [rsp+48h] [rbp+10h]

  v3 = *(_QWORD *)(a1 + 192);
  v4 = a1;
  v6 = *(_QWORD *)(v3 + 136) & *(_QWORD *)(a2 + 576);
  v7 = (volatile LONG *)(v3 + 96);
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v3 + 96));
  v8 = *(_QWORD *)(v3 + 80) & v6;
  v9 = a3 & v8;
  if ( (a3 & v8) == 0 )
    v9 = v8;
  if ( v9 )
  {
    v10 = *(_BYTE *)(v4 + 209);
    _BitScanForward64((unsigned __int64 *)&v9, __ROR8__(v9, v10));
    v11 = *(unsigned __int8 *)(v4 + 208) << 6;
    v15 = ((_BYTE)v9 + v10) & 0x3F;
    v4 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[v15 + v11]];
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v14 = 0;
  while ( 1 )
  {
    KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 1);
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v4 + 48), 0LL) )
      break;
    KiSetVpThreadSpinLockCount((__int64)CurrentPrcb, 0);
    do
      KeYieldProcessorEx(&v14);
    while ( *(_QWORD *)(v4 + 48) );
  }
  ExReleaseSpinLockSharedFromDpcLevel(v7);
  return v4;
}
