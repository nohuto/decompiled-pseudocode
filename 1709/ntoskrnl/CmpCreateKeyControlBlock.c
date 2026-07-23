/*
 * XREFs of CmpCreateKeyControlBlock @ 0x140480870
 * Callers:
 *     CmpWalkOneLevel @ 0x140480060 (CmpWalkOneLevel.c)
 *     CmpDoParseKey @ 0x1404B47B0 (CmpDoParseKey.c)
 *     CmRenameKey @ 0x14068CE58 (CmRenameKey.c)
 *     CmpCreateRegistryRoot @ 0x14083C9A8 (CmpCreateRegistryRoot.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     HvpGetCellContextReinitialize @ 0x1400812C8 (HvpGetCellContextReinitialize.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     KeAbPreAcquire @ 0x1400BAD80 (KeAbPreAcquire.c)
 *     KeAbPostReleaseEx @ 0x1400BAF60 (KeAbPostReleaseEx.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     CmpDereferenceNameControlBlockWithLock @ 0x140478920 (CmpDereferenceNameControlBlockWithLock.c)
 *     CmpFreeKeyControlBlock @ 0x140478B50 (CmpFreeKeyControlBlock.c)
 *     CmpLockKcbExclusive @ 0x140478D48 (CmpLockKcbExclusive.c)
 *     CmpUnlockKcb @ 0x14047F670 (CmpUnlockKcb.c)
 *     CmpGetNameControlBlock @ 0x140480E00 (CmpGetNameControlBlock.c)
 *     CmpAllocateKeyControlBlock @ 0x140481170 (CmpAllocateKeyControlBlock.c)
 *     CmpKeyFullNameLength @ 0x140481360 (CmpKeyFullNameLength.c)
 *     CmpFindSecurityCellCacheIndex @ 0x1404813C0 (CmpFindSecurityCellCacheIndex.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140481B84 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x1404E6360 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpCompareCompressedName @ 0x140565134 (CmpCompareCompressedName.c)
 *     CmpCompareUnicodeString @ 0x140581BD0 (CmpCompareUnicodeString.c)
 *     CmpReferenceKeyControlBlockLockNotHeld @ 0x1405979A8 (CmpReferenceKeyControlBlockLockNotHeld.c)
 *     CmpEtwDumpKcb @ 0x140689DE4 (CmpEtwDumpKcb.c)
 *     CmpTryToLockKcbExclusive @ 0x140694B14 (CmpTryToLockKcbExclusive.c)
 *     CmpCreateLayerLink @ 0x140697D90 (CmpCreateLayerLink.c)
 */

__int64 CmpCreateKeyControlBlock(__int64 a1, int a2, __int64 a3, ULONG_PTR a4, char a5, unsigned __int16 *a6, ...)
{
  ULONG_PTR v7; // r13
  int v10; // ebx
  ULONG_PTR v11; // rdi
  unsigned __int16 *v12; // r15
  __int64 v13; // r14
  __int64 KeyControlBlock; // rax
  _DWORD *v15; // r14
  _QWORD *v16; // rax
  __int64 NameControlBlock; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rbx
  int v22; // eax
  PRTL_BALANCED_NODE v23; // rax
  unsigned int v24; // r14d
  char v25; // r13
  __int64 v26; // rbx
  int v27; // ebx
  signed __int32 v28; // eax
  signed __int32 v29; // ecx
  signed __int32 v30; // ett
  bool v31; // zf
  unsigned __int64 v32; // rdx
  int LayerLink; // ebx
  __int64 v35; // rcx
  unsigned int *v36; // rcx
  void *v37; // rcx
  _BYTE v38[8]; // [rsp+30h] [rbp-58h] BYREF
  ULONG_PTR v39; // [rsp+38h] [rbp-50h]
  _WORD v40[4]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v41; // [rsp+48h] [rbp-40h]
  unsigned int v42; // [rsp+90h] [rbp+8h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+A8h] [rbp+20h]
  __int64 v44; // [rsp+C0h] [rbp+38h] BYREF
  va_list va; // [rsp+C0h] [rbp+38h]
  __int64 v46; // [rsp+C8h] [rbp+40h]
  ULONG_PTR *v47; // [rsp+D0h] [rbp+48h]
  va_list va1; // [rsp+D8h] [rbp+50h] BYREF

  va_start(va1, a6);
  va_start(va, a6);
  v44 = va_arg(va1, _QWORD);
  v46 = va_arg(va1, _QWORD);
  v47 = va_arg(va1, ULONG_PTR *);
  BugCheckParameter2 = a4;
  v7 = a4;
  HvpGetCellContextReinitialize((__int64)v38);
  if ( (*(_DWORD *)(a1 + 144) & 0x20) != 0 && *(struct _KTHREAD **)(a1 + 5416) != KeGetCurrentThread() )
    return (unsigned int)-1073741772;
  v10 = v46;
  v11 = 0LL;
  v12 = a6;
  v13 = *(_QWORD *)(*(_QWORD *)(a1 + 2800)
                  + 24
                  * ((unsigned int)(*(_DWORD *)(a1 + 2808) - 1) & ((101027
                                                                  * ((unsigned int)v46 ^ ((unsigned int)v46 >> 9))) ^ ((unsigned __int64)(101027 * ((unsigned int)v46 ^ ((unsigned int)v46 >> 9))) >> 9)))
                  + 16);
  if ( !v13 )
    goto LABEL_3;
  while ( 1 )
  {
    if ( *(_DWORD *)v13 != v10 )
      goto LABEL_37;
    v39 = v13 - 8;
    if ( *(_QWORD *)(v13 - 8 + 64) != a3 )
      goto LABEL_37;
    v35 = *(_QWORD *)(v13 - 8 + 72);
    if ( (*(_DWORD *)v35 & 1) == 0 )
      break;
    if ( !(unsigned int)CmpCompareCompressedName(v12, v35 + 26, *(unsigned __int16 *)(v35 + 24), 2LL) )
      goto LABEL_46;
LABEL_37:
    v13 = *(_QWORD *)(v13 + 8);
    if ( !v13 )
      goto LABEL_3;
  }
  v41 = v35 + 26;
  v40[0] = *(_WORD *)(v35 + 24);
  v40[1] = v40[0];
  if ( (unsigned int)CmpCompareUnicodeString(v12, v40, 2LL) )
    goto LABEL_37;
LABEL_46:
  v11 = v39;
LABEL_3:
  if ( v11 )
  {
    if ( (unsigned __int8)CmpReferenceKeyControlBlockLockNotHeld(v11) )
    {
LABEL_34:
      LayerLink = 0;
      *v47 = v11;
      return (unsigned int)LayerLink;
    }
    return (unsigned int)-1073741670;
  }
  if ( *v12 + 2 + (unsigned int)CmpKeyFullNameLength(a3) > 0xFFFF )
  {
    LayerLink = -1073741811;
    goto LABEL_68;
  }
  KeyControlBlock = CmpAllocateKeyControlBlock();
  v11 = KeyControlBlock;
  if ( !KeyControlBlock )
    return (unsigned int)-1073741670;
  v15 = (_DWORD *)(KeyControlBlock + 8);
  v16 = (_QWORD *)(KeyControlBlock + 112);
  v16[1] = v16;
  *v16 = v16;
  *(_QWORD *)(v11 + 128) = 0LL;
  *(_QWORD *)(v11 + 136) = 0LL;
  *(_QWORD *)(v11 + 144) = 0LL;
  *(_QWORD *)(v11 + 152) = 0LL;
  *(_QWORD *)(v11 + 40) = 0LL;
  *(_DWORD *)v11 = 1;
  *(_QWORD *)(v11 + 24) = a1;
  *(_DWORD *)(v11 + 32) = a2;
  *(_DWORD *)(v11 + 8) = v10;
  *(_QWORD *)(v11 + 208) = v11 + 200;
  *(_QWORD *)(v11 + 200) = v11 + 200;
  *(_QWORD *)(v11 + 224) = v11 + 216;
  *(_QWORD *)(v11 + 216) = v11 + 216;
  *(_QWORD *)(v11 + 232) = 0LL;
  *(_DWORD *)(v11 + 240) = 0;
  *(_QWORD *)(v11 + 248) = 0LL;
  *(_DWORD *)(v11 + 256) = 0;
  *(_QWORD *)(v11 + 264) = 0LL;
  *(_DWORD *)(v11 + 272) = 0;
  *(_QWORD *)(v11 + 280) = 0LL;
  *(_DWORD *)(v11 + 276) = -1;
  NameControlBlock = CmpGetNameControlBlock(v12, (__int64 *)va, 0LL);
  *(_QWORD *)(v11 + 72) = NameControlBlock;
  if ( !NameControlBlock )
    goto LABEL_65;
  v18 = *(unsigned int *)(v11 + 32);
  if ( (_DWORD)v18 == -1 )
  {
    if ( ((*(_BYTE *)(a3 + 57) - 1) & 0xFD) == 0 )
      *(_BYTE *)(v11 + 57) = 1;
    if ( (a5 & 1) != 0 )
      *(_WORD *)(v11 + 178) |= 4u;
LABEL_23:
    if ( !a3 )
    {
      *(_DWORD *)(v11 + 4) = *(_DWORD *)(v11 + 4) & 0x801FFFFF | 0x200000;
LABEL_29:
      if ( v7 )
      {
        CmpLockKcbExclusive(v7);
        CmpTryToLockKcbExclusive(v11);
        LayerLink = CmpCreateLayerLink(v7);
        CmpUnlockKcb(v11);
        CmpUnlockKcb(v7);
        if ( LayerLink < 0 )
          goto LABEL_68;
      }
      v32 = *(_QWORD *)(*(_QWORD *)(v11 + 24) + 2800LL)
          + 24
          * ((unsigned int)(*(_DWORD *)(*(_QWORD *)(v11 + 24) + 2808LL) - 1) & ((unsigned int)(101027
                                                                                             * (*v15 ^ (*v15 >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*v15 ^ (*v15 >> 9))) >> 9)));
      *(_QWORD *)(v11 + 16) = *(_QWORD *)(v32 + 16);
      *(_QWORD *)(v32 + 16) = v15;
      if ( *(_BYTE *)(a1 + 4112) == 1 )
        *(_WORD *)(v11 + 4) |= 0x20u;
      if ( CmpTraceRoutine )
      {
        LOBYTE(v32) = 22;
        CmpEtwDumpKcb(v11, v32);
      }
      goto LABEL_34;
    }
    v28 = *(_DWORD *)a3;
    v29 = *(_DWORD *)a3 + 1;
    if ( *(_DWORD *)a3 != -1 )
    {
      while ( 1 )
      {
        if ( v29 == 1 )
          KeBugCheckEx(0x51u, 0x15uLL, 0LL, 0LL, 0LL);
        v30 = v28;
        v28 = _InterlockedCompareExchange((volatile signed __int32 *)a3, v29, v28);
        if ( v30 == v28 )
          break;
        v29 = v28 + 1;
        if ( v28 == -1 )
          goto LABEL_65;
      }
      v31 = (*(_DWORD *)(v11 + 176) & 0x40000) == 0;
      *(_QWORD *)(v11 + 64) = a3;
      if ( v31 )
        *(_DWORD *)(v11 + 4) ^= (*(_DWORD *)(v11 + 4) ^ (*(_DWORD *)(a3 + 4) + 0x200000)) & 0x7FE00000;
      else
        *(_DWORD *)(v11 + 4) ^= (*(_DWORD *)(v11 + 4) ^ *(_DWORD *)(a3 + 4)) & 0x7FE00000;
      goto LABEL_29;
    }
LABEL_65:
    LayerLink = -1073741670;
    goto LABEL_68;
  }
  v19 = (*(__int64 (__fastcall **)(_QWORD, __int64, _BYTE *))(*(_QWORD *)(v11 + 24) + 8LL))(
          *(_QWORD *)(v11 + 24),
          v18,
          v38);
  v20 = *(_QWORD *)(v11 + 24);
  v21 = v19;
  if ( (*(_DWORD *)(v20 + 144) & 0x8001) == 0 && (*(_BYTE *)(v19 + 12) & (unsigned __int8)CmpAccessBitForPhase) == 0 )
  {
    (*(void (__fastcall **)(__int64, _BYTE *))(v20 + 16))(v20, v38);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(*(_QWORD *)(v11 + 24) + 2848LL), 1u);
    v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *))(*(_QWORD *)(v11 + 24) + 8LL))(
            *(_QWORD *)(v11 + 24),
            *(unsigned int *)(v11 + 32),
            v38);
    CmpUpdateKeyNodeAccessBits(*(_QWORD *)(v11 + 24), v21, *(unsigned int *)(v11 + 32));
    ExReleaseResourceLite(*(PERESOURCE *)(*(_QWORD *)(v11 + 24) + 2848LL));
  }
  *(_BYTE *)(v11 + 57) = *(_BYTE *)(v21 + 13) & 3;
  v22 = *(_DWORD *)(v21 + 36);
  *(_QWORD *)(v11 + 96) = *(unsigned int *)(v21 + 40);
  *(_DWORD *)(v11 + 88) = v22;
  *(_WORD *)(v11 + 178) = *(_WORD *)(v21 + 2);
  *(_DWORD *)(v11 + 104) = *(_DWORD *)(v21 + 20) + *(_DWORD *)(v21 + 24);
  *(_QWORD *)(v11 + 160) = *(_QWORD *)(v21 + 4);
  *(_WORD *)(v11 + 168) = *(_WORD *)(v21 + 52);
  *(_WORD *)(v11 + 170) = *(_WORD *)(v21 + 60);
  *(_DWORD *)(v11 + 172) = *(_DWORD *)(v21 + 64);
  *(_DWORD *)(v11 + 176) ^= (*(_DWORD *)(v11 + 176) ^ *(unsigned __int16 *)(v21 + 54)) & 0xF;
  *(_DWORD *)(v11 + 176) ^= ((unsigned __int8)*(_DWORD *)(v11 + 176) ^ (unsigned __int8)*(_WORD *)(v21 + 54)) & 0xF0;
  *(_BYTE *)(v11 + 177) = *(_BYTE *)(v21 + 55);
  v23 = KeAbPreAcquire(v11 + 40, 0LL, 1);
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 40), 0LL) )
  {
    if ( v23 )
      KeAbPostReleaseEx(v11 + 40, (unsigned __int64)v23);
  }
  else
  {
    if ( v23 )
      BYTE2(v23[1].Left) |= 1u;
    *(_QWORD *)(v11 + 48) = KeGetCurrentThread();
  }
  v24 = *(_DWORD *)(v21 + 44);
  v25 = 1;
  if ( v24 == -1 )
  {
    *(_QWORD *)(v11 + 80) = 0LL;
    goto LABEL_19;
  }
  v26 = *(_QWORD *)(v11 + 24);
  ExAcquirePushLockSharedEx(v26 + 2952, 0LL);
  if ( (unsigned __int8)CmpFindSecurityCellCacheIndex(v26, v24, &v42) )
  {
    *(_QWORD *)(v11 + 80) = *(_QWORD *)(*(_QWORD *)(v26 + 3056) + 16LL * v42 + 8);
  }
  else
  {
    *(_QWORD *)(v11 + 80) = 0LL;
    v25 = 0;
  }
  ExReleasePushLockEx(v26 + 2952, 0LL);
  if ( v25 )
  {
LABEL_19:
    v27 = *(_DWORD *)(v11 + 4) & 0x80000;
    if ( *(struct _KTHREAD **)(v11 + 48) == KeGetCurrentThread() )
      *(_QWORD *)(v11 + 48) = 0LL;
    else
      _InterlockedDecrement((volatile signed __int32 *)(v11 + 48));
    ExReleasePushLockEx(v11 + 40, 0LL);
    if ( v27 && (*(_DWORD *)(v11 + 4) & 0x80000) != 0 )
      CmpFreeKeyControlBlock(v11);
    (*(void (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)(v11 + 24) + 16LL))(*(_QWORD *)(v11 + 24), v38);
    v7 = BugCheckParameter2;
    v15 = (_DWORD *)(v11 + 8);
    goto LABEL_23;
  }
  CmpUnlockKcb(v11);
  LayerLink = -1073741670;
  (*(void (__fastcall **)(__int64, _BYTE *))(a1 + 16))(a1, v38);
LABEL_68:
  if ( v11 )
  {
    v36 = *(unsigned int **)(v11 + 72);
    if ( v36 )
      CmpDereferenceNameControlBlockWithLock(v36);
    if ( *(_QWORD *)(v11 + 64) )
      CmpDereferenceKeyControlBlockUnsafe(a3);
    v37 = *(void **)(v11 + 184);
    if ( v37 )
      ExFreePoolWithTag(v37, 0);
    *(_DWORD *)(v11 + 4) |= 0x80000u;
    CmpFreeKeyControlBlock(v11);
  }
  return (unsigned int)LayerLink;
}
