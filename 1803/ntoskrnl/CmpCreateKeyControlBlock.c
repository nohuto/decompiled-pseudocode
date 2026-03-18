/*
 * XREFs of CmpCreateKeyControlBlock @ 0x1404AB0E0
 * Callers:
 *     CmpWalkOneLevel @ 0x1404AA800 (CmpWalkOneLevel.c)
 *     CmpDoParseKey @ 0x1405A7800 (CmpDoParseKey.c)
 *     CmRenameKey @ 0x1406F1120 (CmRenameKey.c)
 *     CmpCreateRegistryRoot @ 0x1408B0FCC (CmpCreateRegistryRoot.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     KeAbPostReleaseEx @ 0x14007C82C (KeAbPostReleaseEx.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x1404959F8 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpLockKcbExclusive @ 0x14049D0D8 (CmpLockKcbExclusive.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1404A339C (CmpUpdateKeyNodeAccessBits.c)
 *     CmpFreeKeyControlBlock @ 0x1404A82B0 (CmpFreeKeyControlBlock.c)
 *     CmpFindSecurityCellCacheIndex @ 0x1404A9B50 (CmpFindSecurityCellCacheIndex.c)
 *     CmpUnlockKcb @ 0x1404AA790 (CmpUnlockKcb.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1404AB0A4 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpFindKcbInHashEntryByName @ 0x1404AB5BC (CmpFindKcbInHashEntryByName.c)
 *     CmpDereferenceNameControlBlockWithLock @ 0x1404AB680 (CmpDereferenceNameControlBlockWithLock.c)
 *     CmpGetNameControlBlock @ 0x1404AB750 (CmpGetNameControlBlock.c)
 *     CmpAllocateKeyControlBlock @ 0x1404ABAC0 (CmpAllocateKeyControlBlock.c)
 *     CmpKeyFullNameLength @ 0x1404AC050 (CmpKeyFullNameLength.c)
 *     CmpReferenceKeyControlBlockLockNotHeld @ 0x140581A64 (CmpReferenceKeyControlBlockLockNotHeld.c)
 *     CmpEtwDumpKcb @ 0x1406EE1C0 (CmpEtwDumpKcb.c)
 *     CmpTryToLockKcbExclusive @ 0x1406FA6D8 (CmpTryToLockKcbExclusive.c)
 *     CmpCreateLayerLink @ 0x1406FAD44 (CmpCreateLayerLink.c)
 */

__int64 CmpCreateKeyControlBlock(__int64 a1, int a2, __int64 a3, ULONG_PTR a4, char a5, unsigned __int16 *a6, ...)
{
  int v9; // eax
  int v10; // ebx
  unsigned __int16 *v11; // r14
  ULONG_PTR KcbInHashEntryByName; // rax
  ULONG_PTR v13; // rdi
  int v14; // eax
  __int64 v15; // rcx
  __int64 KeyControlBlock; // rax
  ULONG_PTR v17; // rdi
  _QWORD *v18; // rax
  _DWORD *v19; // r13
  __int64 NameControlBlock; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rbx
  int v25; // eax
  _KLOCK_ENTRY *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  int v30; // r14d
  char v31; // r13
  __int64 v32; // rbx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rax
  bool v36; // zf
  unsigned int v37; // ecx
  ULONG_PTR v38; // rbx
  unsigned __int64 v39; // rdx
  __int64 v41; // r14
  int LayerLink; // r14d
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rcx
  void *v50; // rcx
  _QWORD v51[2]; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v52; // [rsp+70h] [rbp+8h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp+20h]
  __int64 v54; // [rsp+A0h] [rbp+38h] BYREF
  va_list va; // [rsp+A0h] [rbp+38h]
  __int64 v56; // [rsp+A8h] [rbp+40h]
  ULONG_PTR *v57; // [rsp+B0h] [rbp+48h]
  va_list va1; // [rsp+B8h] [rbp+50h] BYREF

  va_start(va1, a6);
  va_start(va, a6);
  v54 = va_arg(va1, _QWORD);
  v56 = va_arg(va1, _QWORD);
  v57 = va_arg(va1, ULONG_PTR *);
  BugCheckParameter2 = a4;
  v51[0] = 0LL;
  v9 = *(_DWORD *)(a1 + 160);
  LODWORD(v51[0]) = -1;
  if ( (v9 & 0x20) != 0 && *(struct _KTHREAD **)(a1 + 4208) != KeGetCurrentThread() )
    return 3221225524LL;
  v10 = v56;
  v11 = a6;
  KcbInHashEntryByName = CmpFindKcbInHashEntryByName(a1, (unsigned int)v56, a3, a6);
  v13 = KcbInHashEntryByName;
  if ( KcbInHashEntryByName )
  {
    if ( (unsigned __int8)CmpReferenceKeyControlBlockLockNotHeld(KcbInHashEntryByName) )
    {
      *v57 = v13;
      return 0LL;
    }
    return 3221225626LL;
  }
  v14 = CmpKeyFullNameLength(a3);
  v15 = (unsigned int)*v11 + 2;
  if ( (unsigned int)(v15 + v14) > 0xFFFF )
    return 3221225485LL;
  KeyControlBlock = CmpAllocateKeyControlBlock(v15);
  v17 = KeyControlBlock;
  if ( !KeyControlBlock )
    return 3221225626LL;
  v18 = (_QWORD *)(KeyControlBlock + 112);
  v19 = (_DWORD *)(v17 + 8);
  v18[1] = v18;
  *v18 = v18;
  *(_QWORD *)(v17 + 128) = 0LL;
  *(_QWORD *)(v17 + 136) = 0LL;
  *(_QWORD *)(v17 + 144) = 0LL;
  *(_QWORD *)(v17 + 152) = 0LL;
  *(_DWORD *)v17 = 1;
  *(_QWORD *)(v17 + 24) = a1;
  *(_DWORD *)(v17 + 32) = a2;
  *(_DWORD *)(v17 + 8) = v10;
  *(_QWORD *)(v17 + 40) = 0LL;
  *(_QWORD *)(v17 + 208) = v17 + 200;
  *(_QWORD *)(v17 + 200) = v17 + 200;
  *(_QWORD *)(v17 + 224) = v17 + 216;
  *(_QWORD *)(v17 + 216) = v17 + 216;
  *(_QWORD *)(v17 + 232) = 0LL;
  *(_DWORD *)(v17 + 240) = 0;
  *(_QWORD *)(v17 + 248) = 0LL;
  *(_DWORD *)(v17 + 256) = 0;
  *(_QWORD *)(v17 + 264) = 0LL;
  *(_DWORD *)(v17 + 272) = 0;
  *(_DWORD *)(v17 + 276) = -1;
  *(_QWORD *)(v17 + 280) = 0LL;
  NameControlBlock = CmpGetNameControlBlock(v11, (__int64 *)va, 0LL);
  *(_QWORD *)(v17 + 72) = NameControlBlock;
  if ( !NameControlBlock )
  {
    LayerLink = -1073741670;
    goto LABEL_52;
  }
  v21 = *(unsigned int *)(v17 + 32);
  if ( (_DWORD)v21 != -1 )
  {
    v22 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD *))(*(_QWORD *)(v17 + 24) + 8LL))(
            *(_QWORD *)(v17 + 24),
            v21,
            v51);
    v23 = *(_QWORD *)(v17 + 24);
    v24 = v22;
    if ( (*(_DWORD *)(v23 + 160) & 0x8001) == 0 && (*(_BYTE *)(v22 + 12) & (unsigned __int8)CmpAccessBitForPhase) == 0 )
    {
      (*(void (__fastcall **)(__int64, _QWORD *))(v23 + 16))(v23, v51);
      ExAcquirePushLockSharedEx(*(_QWORD *)(v17 + 24) + 72LL, 0LL);
      v24 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD *))(*(_QWORD *)(v17 + 24) + 8LL))(
              *(_QWORD *)(v17 + 24),
              *(unsigned int *)(v17 + 32),
              v51);
      CmpUpdateKeyNodeAccessBits(*(_QWORD *)(v17 + 24), v24, *(_DWORD *)(v17 + 32));
      v41 = *(_QWORD *)(v17 + 24);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v41 + 72), 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)(v41 + 72));
      KeAbPostRelease(v41 + 72);
    }
    *(_BYTE *)(v17 + 57) = *(_BYTE *)(v24 + 13) & 3;
    v25 = *(_DWORD *)(v24 + 36);
    *(_QWORD *)(v17 + 96) = *(unsigned int *)(v24 + 40);
    *(_DWORD *)(v17 + 88) = v25;
    *(_WORD *)(v17 + 178) = *(_WORD *)(v24 + 2);
    *(_DWORD *)(v17 + 104) = *(_DWORD *)(v24 + 20) + *(_DWORD *)(v24 + 24);
    *(_QWORD *)(v17 + 160) = *(_QWORD *)(v24 + 4);
    *(_WORD *)(v17 + 168) = *(_WORD *)(v24 + 52);
    *(_WORD *)(v17 + 170) = *(_WORD *)(v24 + 60);
    *(_DWORD *)(v17 + 172) = *(_DWORD *)(v24 + 64);
    *(_DWORD *)(v17 + 176) ^= (*(_DWORD *)(v17 + 176) ^ *(unsigned __int16 *)(v24 + 54)) & 0xF;
    *(_DWORD *)(v17 + 176) ^= ((unsigned __int8)*(_DWORD *)(v17 + 176) ^ (unsigned __int8)*(_WORD *)(v24 + 54)) & 0xF0;
    *(_BYTE *)(v17 + 177) = *(_BYTE *)(v24 + 55);
    v26 = (_KLOCK_ENTRY *)KeAbPreAcquire(v17 + 40, 0LL, 1);
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 40), 0LL) )
    {
      if ( v26 )
        KeAbPostReleaseEx(v17 + 40, v26);
    }
    else
    {
      if ( v26 )
        v26->AcquiredByte |= 1u;
      *(_QWORD *)(v17 + 48) = KeGetCurrentThread();
    }
    v30 = *(_DWORD *)(v24 + 44);
    v31 = 1;
    if ( v30 == -1 )
    {
      *(_QWORD *)(v17 + 80) = 0LL;
      v31 = 1;
    }
    else
    {
      v32 = *(_QWORD *)(v17 + 24);
      ExAcquirePushLockSharedEx(v32 + 1776, 0LL);
      if ( CmpFindSecurityCellCacheIndex(v32, v30, &v52) )
      {
        v35 = *(_QWORD *)(*(_QWORD *)(v32 + 1880) + 16LL * v52 + 8);
      }
      else
      {
        v31 = 0;
        v35 = 0LL;
      }
      *(_QWORD *)(v17 + 80) = v35;
      ExReleasePushLockEx(v32 + 1776, 0LL, v33, v34);
    }
    CmpUnlockKcb(v17, v27, v28, v29);
    if ( v31 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)(v17 + 24) + 16LL))(*(_QWORD *)(v17 + 24), v51);
      v19 = (_DWORD *)(v17 + 8);
      goto LABEL_19;
    }
    LayerLink = -1073741670;
    (*(void (__fastcall **)(__int64, _QWORD *))(a1 + 16))(a1, v51);
LABEL_52:
    v49 = *(_QWORD *)(v17 + 72);
    if ( v49 )
      CmpDereferenceNameControlBlockWithLock(v49);
    if ( *(_QWORD *)(v17 + 64) )
      CmpDereferenceKeyControlBlockUnsafe((volatile signed __int32 *)a3);
    v50 = *(void **)(v17 + 184);
    if ( v50 )
      ExFreePoolWithTag(v50, 0);
    *(_DWORD *)(v17 + 4) |= 0x80000u;
    CmpFreeKeyControlBlock(v17);
    return (unsigned int)LayerLink;
  }
  if ( ((*(_BYTE *)(a3 + 57) - 1) & 0xFD) == 0 )
    *(_BYTE *)(v17 + 57) = 1;
  if ( (a5 & 1) != 0 )
    *(_WORD *)(v17 + 178) |= 4u;
LABEL_19:
  if ( !a3 )
  {
    v37 = *(_DWORD *)(v17 + 4) & 0x801FFFFF | 0x200000;
    goto LABEL_23;
  }
  if ( !CmpReferenceKeyControlBlockUnsafe((volatile signed __int32 *)a3) )
  {
    LayerLink = -1073741670;
    goto LABEL_52;
  }
  v36 = (*(_DWORD *)(v17 + 176) & 0x40000) == 0;
  *(_QWORD *)(v17 + 64) = a3;
  if ( v36 )
    v37 = *(_DWORD *)(v17 + 4) ^ (*(_DWORD *)(v17 + 4) ^ (*(_DWORD *)(a3 + 4) + 0x200000)) & 0x7FE00000;
  else
    v37 = *(_DWORD *)(v17 + 4) ^ (*(_DWORD *)(a3 + 4) ^ *(_DWORD *)(v17 + 4)) & 0x7FE00000;
LABEL_23:
  *(_DWORD *)(v17 + 4) = v37;
  v38 = BugCheckParameter2;
  if ( BugCheckParameter2 )
  {
    CmpLockKcbExclusive(BugCheckParameter2);
    CmpTryToLockKcbExclusive(v17);
    LayerLink = CmpCreateLayerLink(v38);
    CmpUnlockKcb(v17, v43, v44, v45);
    CmpUnlockKcb(v38, v46, v47, v48);
    if ( LayerLink < 0 )
      goto LABEL_52;
  }
  v39 = *(_QWORD *)(*(_QWORD *)(v17 + 24) + 1640LL)
      + 24
      * ((unsigned int)(*(_DWORD *)(*(_QWORD *)(v17 + 24) + 1648LL) - 1) & ((unsigned int)(101027 * (*v19 ^ (*v19 >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*v19 ^ (*v19 >> 9))) >> 9)));
  *(_QWORD *)(v17 + 16) = *(_QWORD *)(v39 + 16);
  *(_QWORD *)(v39 + 16) = v19;
  if ( *(_BYTE *)(a1 + 2936) == 1 )
    *(_WORD *)(v17 + 4) |= 0x20u;
  if ( CmpTraceRoutine )
  {
    LOBYTE(v39) = 22;
    CmpEtwDumpKcb(v17, v39);
  }
  *v57 = v17;
  return 0LL;
}
