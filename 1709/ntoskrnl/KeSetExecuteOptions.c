/*
 * XREFs of KeSetExecuteOptions @ 0x14012D654
 * Callers:
 *     NtSetInformationProcess @ 0x1404D7080 (NtSetInformationProcess.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140067810 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

__int64 __fastcall KeSetExecuteOptions(__int64 a1, int a2)
{
  char v2; // di
  __int64 v4; // rax
  unsigned int v5; // ebp
  unsigned __int8 CurrentIrql; // r14
  char v7; // al
  char v8; // al
  char v9; // dl
  char v10; // cl
  char v11; // r8
  char v12; // cl
  char v13; // r8
  char v14; // cl
  char v15; // r8
  char v16; // cl
  char v17; // dl
  char v18; // r9
  bool v19; // zf
  char v20; // dl

  v2 = a2;
  if ( (a2 & 0xFFFFFF80) != 0 )
    return 3221225485LL;
  v4 = *(_QWORD *)(a1 + 1064);
  if ( !v4 || *(_WORD *)(v4 + 8) != 332 )
    return 3221225485LL;
  v5 = -1073741790;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  v7 = *(_BYTE *)(a1 + 447);
  if ( (v7 & 8) == 0 )
  {
    v8 = v7 & 0xFE;
    if ( (v2 & 1) != 0 )
      v8 = v8 & 0xFC | 1;
    v9 = v8 | 4;
    if ( (v2 & 4) == 0 )
      v9 = v8;
    v10 = v9 | 2;
    if ( (v2 & 2) == 0 )
      v10 = v9;
    v11 = v10;
    v12 = v10 | 0x10;
    if ( (v2 & 0x10) == 0 )
      v12 = v11;
    v13 = v12;
    v14 = v12 | 0x20;
    if ( (v2 & 0x20) == 0 )
      v14 = v13;
    v15 = v14;
    v16 = v14 | 0x40;
    if ( (v2 & 0x40) == 0 )
      v16 = v15;
    v17 = v16 | 8;
    if ( (v2 & 8) == 0 )
      v17 = v16;
    v18 = v17;
    v19 = (v17 & 2) == 0;
    v20 = v17 | 0x30;
    if ( v19 )
      v20 = v18;
    v5 = 0;
    *(_BYTE *)(a1 + 447) = v20;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  __writecr8(CurrentIrql);
  return v5;
}
