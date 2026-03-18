/*
 * XREFs of KiSelectCandidateProcessor @ 0x14020E17C
 * Callers:
 *     KiChooseTargetProcessor @ 0x140073900 (KiChooseTargetProcessor.c)
 *     KiHeteroChooseTargetProcessor @ 0x14020A5B8 (KiHeteroChooseTargetProcessor.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14005B7F0 (KeYieldProcessorEx.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1400D56B0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 */

__int64 __fastcall KiSelectCandidateProcessor(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rbp
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rax
  char v9; // cl
  int v10; // edx
  int v12; // [rsp+40h] [rbp+8h] BYREF
  int v13; // [rsp+48h] [rbp+10h]

  v3 = *(_QWORD *)(a1 + 192);
  v4 = a1;
  v6 = *(_QWORD *)(v3 + 136) & *(_QWORD *)(a2 + 576);
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v3 + 88));
  v7 = *(_QWORD *)(v3 + 80) & v6;
  v8 = a3 & v7;
  if ( (a3 & v7) == 0 )
    v8 = v7;
  if ( v8 )
  {
    v9 = *(_BYTE *)(v4 + 209);
    _BitScanForward64((unsigned __int64 *)&v8, __ROR8__(v8, v9));
    v10 = *(unsigned __int8 *)(v4 + 208) << 6;
    v13 = ((_BYTE)v8 + v9) & 0x3F;
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
