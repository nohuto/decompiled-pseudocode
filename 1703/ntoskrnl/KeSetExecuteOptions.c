/*
 * XREFs of KeSetExecuteOptions @ 0x1400356A8
 * Callers:
 *     NtSetInformationProcess @ 0x1404A2550 (NtSetInformationProcess.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140096D40 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

__int64 __fastcall KeSetExecuteOptions(__int64 a1, int a2)
{
  char v2; // di
  __int64 v4; // rax
  __int16 v5; // cx
  unsigned int v6; // ebp
  unsigned __int8 CurrentIrql; // r14
  char v8; // al
  char v9; // al
  char v10; // dl
  char v11; // cl
  char v12; // r8
  char v13; // cl
  char v14; // r8
  char v15; // cl
  char v16; // r8
  char v17; // cl
  char v18; // dl
  char v19; // r9
  bool v20; // zf
  char v21; // dl

  v2 = a2;
  if ( (a2 & 0xFFFFFF80) != 0 )
    return 3221225485LL;
  v4 = *(_QWORD *)(a1 + 1064);
  if ( !v4 )
    return 3221225485LL;
  v5 = *(_WORD *)(v4 + 8);
  if ( v5 != 332 && v5 != 452 )
    return 3221225485LL;
  v6 = -1073741790;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  v8 = *(_BYTE *)(a1 + 447);
  if ( (v8 & 8) == 0 )
  {
    v9 = v8 & 0xFE;
    if ( (v2 & 1) != 0 )
      v9 = v9 & 0xFC | 1;
    v10 = v9 | 4;
    if ( (v2 & 4) == 0 )
      v10 = v9;
    v11 = v10 | 2;
    if ( (v2 & 2) == 0 )
      v11 = v10;
    v12 = v11;
    v13 = v11 | 0x10;
    if ( (v2 & 0x10) == 0 )
      v13 = v12;
    v14 = v13;
    v15 = v13 | 0x20;
    if ( (v2 & 0x20) == 0 )
      v15 = v14;
    v16 = v15;
    v17 = v15 | 0x40;
    if ( (v2 & 0x40) == 0 )
      v17 = v16;
    v18 = v17 | 8;
    if ( (v2 & 8) == 0 )
      v18 = v17;
    v19 = v18;
    v20 = (v18 & 2) == 0;
    v21 = v18 | 0x30;
    if ( v20 )
      v21 = v19;
    v6 = 0;
    *(_BYTE *)(a1 + 447) = v21;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  __writecr8(CurrentIrql);
  return v6;
}
