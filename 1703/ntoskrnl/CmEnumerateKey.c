/*
 * XREFs of CmEnumerateKey @ 0x1404FD790
 * Callers:
 *     NtEnumerateKey @ 0x1404FD330 (NtEnumerateKey.c)
 * Callees:
 *     PsBoostThreadIo @ 0x14008D1F0 (PsBoostThreadIo.c)
 *     ExAcquireResourceSharedLite @ 0x14008F530 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1400EEB50 (ExReleaseResourceLite.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x14042DC14 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpDelayDerefKeyControlBlock @ 0x14044CC04 (CmpDelayDerefKeyControlBlock.c)
 *     CmEqualTrans @ 0x1404CE678 (CmEqualTrans.c)
 *     CmListGetNextElement @ 0x1404D4148 (CmListGetNextElement.c)
 *     CmpLockRegistryExclusive @ 0x1404D85A8 (CmpLockRegistryExclusive.c)
 *     CmpUnlockTwoKcbs @ 0x1404FDB60 (CmpUnlockTwoKcbs.c)
 *     CmpFindSubKeyByNumberEx @ 0x1404FDC10 (CmpFindSubKeyByNumberEx.c)
 *     CmpLockTwoKcbsShared @ 0x1404FDFB4 (CmpLockTwoKcbsShared.c)
 *     CmpQueryKeyDataFromNode @ 0x1404FEEE0 (CmpQueryKeyDataFromNode.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140501430 (CmpIsKeyDeletedForKeyBody.c)
 *     HvpMarkCellDirty @ 0x14051559C (HvpMarkCellDirty.c)
 *     CmpEnumerateLayeredKey @ 0x140664FCC (CmpEnumerateLayeredKey.c)
 *     CmpFindSubKeyByNumberFromMergedView @ 0x14066742C (CmpFindSubKeyByNumberFromMergedView.c)
 */

__int64 __fastcall CmEnumerateKey(__int64 a1, __int64 a2, int a3, int a4, __int64 a5, int a6, __int64 a7)
{
  __int64 *v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v13; // r13
  struct _KTHREAD *CurrentThread; // rax
  __int64 v15; // r14
  int v16; // eax
  __int64 v17; // rcx
  ULONG_PTR v18; // rbx
  unsigned int v19; // r12d
  __int64 v20; // r15
  __int64 v21; // rax
  __int64 v22; // rcx
  int SubKeyByNumber; // edi
  unsigned int v24; // edi
  __int64 v25; // r15
  __int64 v26; // rsi
  unsigned int KeyDataFromNode; // edi
  __int64 v28; // rdx
  int v30; // esi
  char *NextElement; // rax
  _QWORD *v32; // r10
  int v33; // ecx
  bool v34; // zf
  int SubKeyByNumberFromMergedView; // ebx
  __int64 *v36; // rax
  int v37; // ecx
  __int64 v38; // [rsp+38h] [rbp-38h]
  _BYTE v39[8]; // [rsp+40h] [rbp-30h] BYREF
  _DWORD v40[2]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v41; // [rsp+50h] [rbp-20h] BYREF
  __int64 v42; // [rsp+58h] [rbp-18h] BYREF
  __int64 v43; // [rsp+60h] [rbp-10h] BYREF
  ULONG_PTR v44; // [rsp+68h] [rbp-8h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+B0h] [rbp+40h] BYREF
  int v46; // [rsp+C0h] [rbp+50h]
  int v47; // [rsp+C8h] [rbp+58h]

  v47 = a4;
  v46 = a3;
  v7 = 0LL;
  v40[0] = -1;
  v42 = 0LL;
  v40[1] = 0;
  v8 = 0LL;
  v9 = *(_QWORD *)(a1 + 8);
  v41 = 0LL;
  v13 = 0LL;
  if ( *(_WORD *)(v9 + 58) )
    return CmpEnumerateLayeredKey(a1, a3, a4, a5, a6, a7);
  if ( *(_QWORD *)(a1 + 56) || *(_QWORD *)(a1 + 64) )
  {
    CmpLockRegistryExclusive();
    v15 = *(_QWORD *)(a1 + 8);
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) )
    {
      v34 = (*(_DWORD *)(a1 + 48) & 1) == 0;
      SubKeyByNumberFromMergedView = -1073740763;
      if ( v34 )
        SubKeyByNumberFromMergedView = -1073741444;
      goto LABEL_52;
    }
    v30 = CmpTransSearchAddTransFromKeyBody(a1, &v42);
    if ( v30 < 0 )
    {
      CmpUnlockRegistry();
      return (unsigned int)v30;
    }
    v8 = v42;
  }
  else
  {
    if ( !CmpPuntBoot )
    {
      PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite((PERESOURCE)&CmpRegistryLock, 1u);
      v8 = v42;
    }
    v15 = *(_QWORD *)(a1 + 8);
  }
  if ( a2 )
    v13 = *(_QWORD *)(a2 + 8);
  CmpLockTwoKcbsShared(v13, v15);
  v16 = *(_DWORD *)(a1 + 48);
  v17 = *(_QWORD *)(a1 + 8);
  v43 = 0LL;
  if ( (v16 & 9) != 0 )
    goto LABEL_49;
  if ( v8 )
  {
    NextElement = CmListGetNextElement((_QWORD *)(v17 + 200), &v43, 32);
    if ( NextElement )
    {
      while ( 1 )
      {
        v33 = *((_DWORD *)NextElement + 17);
        if ( v33 == 2 || v33 == 11 )
          break;
        NextElement = CmListGetNextElement(v32, &v43, 32);
        if ( !NextElement )
          goto LABEL_11;
      }
      if ( CmEqualTrans(*((_QWORD *)NextElement + 7), v8) )
      {
LABEL_49:
        v34 = (*(_DWORD *)(a1 + 48) & 1) == 0;
        SubKeyByNumberFromMergedView = -1073740763;
        if ( v34 )
          SubKeyByNumberFromMergedView = -1073741444;
        goto LABEL_51;
      }
    }
  }
LABEL_11:
  if ( a2 )
  {
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a2, v8) )
    {
      CmpUnlockTwoKcbs(v13, v15);
      CmpUnlockRegistry();
      return 3221225852LL;
    }
  }
  else if ( !CmpVEEnabled || (*(_DWORD *)(v15 + 176) & 0x1000000) == 0 )
  {
    v18 = *(_QWORD *)(v15 + 24);
    v19 = *(_DWORD *)(v15 + 32);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v18 + 2848), 1u);
    v20 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v18 + 8))(v18, v19, v40);
    if ( !v20 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v18 + 2848));
      CmpUnlockTwoKcbs(v13, v15);
      CmpUnlockRegistry();
      return 3221225626LL;
    }
    if ( (*(_DWORD *)(v18 + 144) & 0x8001) == 0
      && ((unsigned __int8)CmpAccessBitForPhase & *(_BYTE *)(v20 + 12)) == 0
      && (unsigned __int8)HvpMarkCellDirty(v18, v19) )
    {
      *(_BYTE *)(v20 + 12) |= CmpAccessBitForPhase;
    }
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v18 + 16))(v18, v40);
    ExReleaseResourceLite(*(PERESOURCE *)(v18 + 2848));
    if ( v8 )
    {
      v7 = &v41;
      v21 = v13;
      v22 = v15;
    }
    else
    {
      v21 = 0LL;
      v22 = 0LL;
    }
    SubKeyByNumber = CmpFindSubKeyByNumberEx(
                       v18,
                       v19,
                       v46,
                       (unsigned int)&BugCheckParameter3,
                       v22,
                       v21,
                       v8,
                       (__int64)v7);
    if ( SubKeyByNumber < 0 )
    {
      CmpUnlockTwoKcbs(v13, v15);
      CmpUnlockRegistry();
      return (unsigned int)SubKeyByNumber;
    }
    goto LABEL_20;
  }
  v36 = &v41;
  if ( !v8 )
    v36 = 0LL;
  if ( a2 )
  {
    LODWORD(v7) = v15;
    v37 = v13;
  }
  else
  {
    v37 = v15;
  }
  SubKeyByNumberFromMergedView = CmpFindSubKeyByNumberFromMergedView(
                                   v37,
                                   (_DWORD)v7,
                                   a3,
                                   v8,
                                   (__int64)&v44,
                                   (__int64)&BugCheckParameter3,
                                   (__int64)v36,
                                   (__int64)v39);
  if ( SubKeyByNumberFromMergedView < 0 )
  {
LABEL_51:
    CmpUnlockTwoKcbs(v13, v15);
LABEL_52:
    CmpUnlockRegistry();
    return (unsigned int)SubKeyByNumberFromMergedView;
  }
  v18 = v44;
LABEL_20:
  v24 = BugCheckParameter3;
  if ( (_DWORD)BugCheckParameter3 == -1 )
  {
    CmpUnlockTwoKcbs(v13, v15);
    CmpUnlockRegistry();
    return 2147483674LL;
  }
  else
  {
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v18 + 2848), 1u);
    v25 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v18 + 8))(v18, v24, v40);
    if ( v25 )
    {
      if ( (*(_DWORD *)(v18 + 144) & 0x8001) == 0
        && ((unsigned __int8)CmpAccessBitForPhase & *(_BYTE *)(v25 + 12)) == 0
        && (unsigned __int8)HvpMarkCellDirty(v18, v24) )
      {
        *(_BYTE *)(v25 + 12) |= CmpAccessBitForPhase;
      }
      ExReleaseResourceLite(*(PERESOURCE *)(v18 + 2848));
      v38 = v8;
      v26 = v41;
      KeyDataFromNode = CmpQueryKeyDataFromNode(v18, v25, v47, a5, a6, a7, v41, v38);
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v18 + 16))(v18, v40);
      CmpUnlockTwoKcbs(v13, v15);
      if ( v26 )
        CmpDelayDerefKeyControlBlock(v26);
      if ( !CmpPuntBoot )
      {
        ExReleaseResourceLite((PERESOURCE)&CmpRegistryLock);
        KeLeaveCriticalRegion();
        LOBYTE(v28) = 1;
        PsBoostThreadIo((__int64)KeGetCurrentThread(), v28);
      }
      return KeyDataFromNode;
    }
    else
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v18 + 2848));
      CmpUnlockTwoKcbs(v13, v15);
      if ( v41 )
        CmpDelayDerefKeyControlBlock(v41);
      CmpUnlockRegistry();
      return 3221225626LL;
    }
  }
}
