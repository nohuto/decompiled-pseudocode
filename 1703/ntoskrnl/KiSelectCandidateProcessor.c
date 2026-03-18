/*
 * XREFs of KiSelectCandidateProcessor @ 0x1402077D4
 * Callers:
 *     KiChooseTargetProcessor @ 0x1400E11B0 (KiChooseTargetProcessor.c)
 *     KiHeteroChooseTargetProcessor @ 0x140203FB8 (KiHeteroChooseTargetProcessor.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140040CC0 (KeYieldProcessorEx.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14006CF50 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400A5D60 (ExReleaseSpinLockSharedFromDpcLevel.c)
 */

__int64 __fastcall KiSelectCandidateProcessor(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rsi
  __int64 v6; // rbp
  __int64 v7; // rbp
  char v8; // cl
  unsigned __int64 v9; // rax
  int v10; // edx
  int v12; // [rsp+40h] [rbp+8h] BYREF
  int v13; // [rsp+48h] [rbp+10h]

  v3 = *(_QWORD *)(a1 + 192);
  v4 = a1;
  v6 = *(_QWORD *)(v3 + 136) & *(_QWORD *)(a2 + 576);
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v3 + 88));
  v7 = *(_QWORD *)(v3 + 80) & v6;
  if ( (a3 & v7) != 0 )
    v7 &= a3;
  if ( v7 )
  {
    v8 = *(_BYTE *)(v4 + 209);
    _BitScanForward64(&v9, __ROR8__(v7, v8));
    v10 = *(unsigned __int8 *)(v4 + 208) << 6;
    v13 = ((_BYTE)v9 + v8) & 0x3F;
    v4 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[v13 + v10]];
  }
  v12 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 48), 0LL) )
  {
    do
      KeYieldProcessorEx(&v12);
    while ( *(_QWORD *)(v4 + 48) );
  }
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v3 + 88));
  return v4;
}
