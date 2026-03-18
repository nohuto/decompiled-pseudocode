/*
 * XREFs of CmEnumerateKey @ 0x140482020
 * Callers:
 *     NtEnumerateKey @ 0x140481BE0 (NtEnumerateKey.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     HvpGetCellContextReinitialize @ 0x1400812C8 (HvpGetCellContextReinitialize.c)
 *     PsBoostThreadIo @ 0x1400813B0 (PsBoostThreadIo.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1400830F0 (ExReleaseResourceLite.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     CmpDelayDerefKeyControlBlock @ 0x140478AA0 (CmpDelayDerefKeyControlBlock.c)
 *     HvpMarkCellDirty @ 0x14047D0F4 (HvpMarkCellDirty.c)
 *     CmpUnlockRegistry @ 0x14047E950 (CmpUnlockRegistry.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140482380 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpUnlockTwoKcbs @ 0x140482410 (CmpUnlockTwoKcbs.c)
 *     CmpFindSubKeyByNumberEx @ 0x1404824B0 (CmpFindSubKeyByNumberEx.c)
 *     CmpLockTwoKcbsShared @ 0x1404827AC (CmpLockTwoKcbsShared.c)
 *     CmpQueryKeyDataFromNode @ 0x140482830 (CmpQueryKeyDataFromNode.c)
 *     CmpLockRegistryExclusive @ 0x1404E3BCC (CmpLockRegistryExclusive.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x140568D78 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpEnumerateLayeredKey @ 0x14068E764 (CmpEnumerateLayeredKey.c)
 *     CmpFindSubKeyByNumberFromMergedView @ 0x140691B68 (CmpFindSubKeyByNumberFromMergedView.c)
 */

__int64 __fastcall CmEnumerateKey(__int64 a1, __int64 a2, int a3, int a4, __int64 a5, int a6, __int64 a7)
{
  int v8; // r15d
  __int64 v11; // rax
  __int64 *v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // r12
  struct _KTHREAD *CurrentThread; // rax
  __int64 v16; // rbp
  ULONG_PTR v17; // rbx
  unsigned int v18; // r15d
  __int64 v19; // rax
  __int64 v20; // r14
  __int64 v21; // rax
  __int64 v22; // rcx
  int SubKeyByNumber; // edi
  unsigned int v24; // edi
  __int64 v25; // rax
  __int64 v26; // r14
  __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 result; // rax
  int v30; // esi
  __int64 v31; // rsi
  int v32; // ebp
  bool v33; // zf
  unsigned int v34; // ebx
  int SubKeyByNumberFromMergedView; // ebx
  __int64 *v36; // rax
  int v37; // ecx
  __int64 v38; // [rsp+38h] [rbp-70h]
  _BYTE v39[8]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v40; // [rsp+48h] [rbp-60h] BYREF
  _BYTE v41[8]; // [rsp+50h] [rbp-58h] BYREF
  __int64 v42; // [rsp+58h] [rbp-50h] BYREF
  __int64 v43; // [rsp+60h] [rbp-48h] BYREF
  ULONG_PTR v44[8]; // [rsp+68h] [rbp-40h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+B0h] [rbp+8h] BYREF
  int v46; // [rsp+C8h] [rbp+20h]

  v46 = a4;
  v8 = a4;
  HvpGetCellContextReinitialize((__int64)v41);
  v11 = *(_QWORD *)(a1 + 8);
  v12 = 0LL;
  v13 = 0LL;
  v42 = 0LL;
  v14 = 0LL;
  v40 = 0LL;
  v43 = 0LL;
  if ( *(_WORD *)(v11 + 58) )
  {
    v31 = a7;
    v32 = a6;
    do
    {
      result = CmpEnumerateLayeredKey(a1, a3, v8, a5, v32, v31, (__int64)&v43, (unsigned int)v12 <= 0xA);
      LODWORD(v12) = (_DWORD)v12 + 1;
    }
    while ( (_DWORD)result == -1073741267 );
    return result;
  }
  if ( *(_QWORD *)(a1 + 56) || *(_QWORD *)(a1 + 64) )
  {
    CmpLockRegistryExclusive();
    v16 = *(_QWORD *)(a1 + 8);
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) )
    {
      v33 = (*(_DWORD *)(a1 + 48) & 1) == 0;
      v34 = -1073740763;
      if ( v33 )
        v34 = -1073741444;
      CmpUnlockRegistry();
      return v34;
    }
    v30 = CmpTransSearchAddTransFromKeyBody(a1, &v42);
    if ( v30 < 0 )
    {
      CmpUnlockRegistry();
      return (unsigned int)v30;
    }
    v13 = v42;
  }
  else
  {
    if ( !CmpPuntBoot )
    {
      PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite((PERESOURCE)&CmpRegistryLock, 1u);
      v13 = v42;
    }
    v16 = *(_QWORD *)(a1 + 8);
  }
  if ( a2 )
    v14 = *(_QWORD *)(a2 + 8);
  CmpLockTwoKcbsShared(v14, v16);
  if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, v13) )
  {
    v33 = (*(_DWORD *)(a1 + 48) & 1) == 0;
    SubKeyByNumberFromMergedView = -1073740763;
    if ( v33 )
      SubKeyByNumberFromMergedView = -1073741444;
    goto LABEL_45;
  }
  if ( a2 )
  {
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a2, v13) )
    {
      CmpUnlockTwoKcbs(v14, v16);
      CmpUnlockRegistry();
      return 3221225852LL;
    }
  }
  else if ( !CmpVEEnabled || (*(_DWORD *)(v16 + 176) & 0x1000000) == 0 )
  {
    v17 = *(_QWORD *)(v16 + 24);
    v18 = *(_DWORD *)(v16 + 32);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v17 + 2848), 1u);
    v19 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _BYTE *))(v17 + 8))(v17, v18, v41);
    v20 = v19;
    if ( !v19 )
    {
      ExReleaseResourceLite(*(PERESOURCE *)(v17 + 2848));
      CmpUnlockTwoKcbs(v14, v16);
      CmpUnlockRegistry();
      return 3221225626LL;
    }
    if ( (*(_DWORD *)(v17 + 144) & 0x8001) == 0
      && (*(_BYTE *)(v19 + 12) & (unsigned __int8)CmpAccessBitForPhase) == 0
      && HvpMarkCellDirty(v17, v18, 0) )
    {
      *(_BYTE *)(v20 + 12) |= CmpAccessBitForPhase;
    }
    (*(void (__fastcall **)(ULONG_PTR, _BYTE *))(v17 + 16))(v17, v41);
    ExReleaseResourceLite(*(PERESOURCE *)(v17 + 2848));
    if ( v13 )
    {
      v12 = &v40;
      v21 = v14;
      v22 = v16;
    }
    else
    {
      v21 = 0LL;
      v22 = 0LL;
    }
    SubKeyByNumber = CmpFindSubKeyByNumberEx(
                       v17,
                       v18,
                       a3,
                       (unsigned int)&BugCheckParameter3,
                       v22,
                       v21,
                       v13,
                       (__int64)v12);
    if ( SubKeyByNumber < 0 )
    {
      CmpUnlockTwoKcbs(v14, v16);
      CmpUnlockRegistry();
      return (unsigned int)SubKeyByNumber;
    }
    v8 = v46;
    goto LABEL_20;
  }
  v36 = &v40;
  if ( !v13 )
    v36 = 0LL;
  if ( a2 )
  {
    LODWORD(v12) = v16;
    v37 = v14;
  }
  else
  {
    v37 = v16;
  }
  SubKeyByNumberFromMergedView = CmpFindSubKeyByNumberFromMergedView(
                                   v37,
                                   (_DWORD)v12,
                                   a3,
                                   v13,
                                   (__int64)v44,
                                   (__int64)&BugCheckParameter3,
                                   (__int64)v36,
                                   (__int64)v39);
  if ( SubKeyByNumberFromMergedView < 0 )
  {
LABEL_45:
    CmpUnlockTwoKcbs(v14, v16);
    CmpUnlockRegistry();
    return (unsigned int)SubKeyByNumberFromMergedView;
  }
  v17 = v44[0];
LABEL_20:
  v24 = BugCheckParameter3;
  if ( (_DWORD)BugCheckParameter3 == -1 )
  {
    CmpUnlockTwoKcbs(v14, v16);
    CmpUnlockRegistry();
    return 2147483674LL;
  }
  else
  {
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v17 + 2848), 1u);
    v25 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _BYTE *))(v17 + 8))(v17, v24, v41);
    v26 = v25;
    if ( v25 )
    {
      if ( (*(_DWORD *)(v17 + 144) & 0x8001) == 0
        && (*(_BYTE *)(v25 + 12) & (unsigned __int8)CmpAccessBitForPhase) == 0
        && HvpMarkCellDirty(v17, v24, 0) )
      {
        *(_BYTE *)(v26 + 12) |= CmpAccessBitForPhase;
      }
      ExReleaseResourceLite(*(PERESOURCE *)(v17 + 2848));
      v38 = v13;
      v27 = v40;
      SubKeyByNumber = CmpQueryKeyDataFromNode(v17, v26, v8, a5, a6, a7, v40, v38);
      (*(void (__fastcall **)(ULONG_PTR, _BYTE *))(v17 + 16))(v17, v41);
      CmpUnlockTwoKcbs(v14, v16);
      if ( v27 )
        CmpDelayDerefKeyControlBlock(v27);
      if ( !CmpPuntBoot )
      {
        ExReleaseResourceLite((PERESOURCE)&CmpRegistryLock);
        KeLeaveCriticalRegion();
        LOBYTE(v28) = 1;
        PsBoostThreadIo((__int64)KeGetCurrentThread(), v28);
      }
      return (unsigned int)SubKeyByNumber;
    }
    ExReleaseResourceLite(*(PERESOURCE *)(v17 + 2848));
    CmpUnlockTwoKcbs(v14, v16);
    if ( v40 )
      CmpDelayDerefKeyControlBlock(v40);
    CmpUnlockRegistry();
    return 3221225626LL;
  }
}
