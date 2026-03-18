/*
 * XREFs of CmKeyBodyRemapToVirtualForEnum @ 0x1404A8000
 * Callers:
 *     NtEnumerateValueKey @ 0x14047E270 (NtEnumerateValueKey.c)
 *     NtEnumerateKey @ 0x140481BE0 (NtEnumerateKey.c)
 *     NtQueryKey @ 0x1404A8630 (NtQueryKey.c)
 *     NtQueryValueKey @ 0x1404A8B80 (NtQueryValueKey.c)
 *     NtQueryMultipleValueKey @ 0x140580F4C (NtQueryMultipleValueKey.c)
 * Callees:
 *     MiDeleteSubsection @ 0x14000DDD0 (MiDeleteSubsection.c)
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ObFastDereferenceObject @ 0x140081E20 (ObFastDereferenceObject.c)
 *     ObFastReferenceObject @ 0x140081EF0 (ObFastReferenceObject.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ObFastReferenceObjectLocked @ 0x14008AA44 (ObFastReferenceObjectLocked.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     CmpDereferenceKeyControlBlock @ 0x140478370 (CmpDereferenceKeyControlBlock.c)
 *     CmpLockRegistry @ 0x14047E6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x14047E950 (CmpUnlockRegistry.c)
 *     CmpUnlockKcb @ 0x14047F670 (CmpUnlockKcb.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140482380 (CmpIsKeyDeletedForKeyBody.c)
 *     ObReferenceObjectByName @ 0x140484700 (ObReferenceObjectByName.c)
 *     SeQueryInformationToken @ 0x1404A6E30 (SeQueryInformationToken.c)
 *     RtlFreeUnicodeString @ 0x14053F140 (RtlFreeUnicodeString.c)
 *     CmpIsSystemEntity @ 0x140569D5C (CmpIsSystemEntity.c)
 *     CmpFreeExtraParameter @ 0x14068AACC (CmpFreeExtraParameter.c)
 *     CmVirtualKCBToRealPath @ 0x140690D1C (CmVirtualKCBToRealPath.c)
 *     CmpReparseToVirtualPath @ 0x1406924B0 (CmpReparseToVirtualPath.c)
 *     CmpSetKcbAtLayerHeight @ 0x140698264 (CmpSetKcbAtLayerHeight.c)
 */

__int64 __fastcall CmKeyBodyRemapToVirtualForEnum(__int64 *a1, char a2, unsigned int a3, __int64 *a4)
{
  unsigned int v4; // r13d
  char v5; // r15
  unsigned int v7; // esi
  __int64 *v8; // r14
  __int64 v9; // rax
  __int64 v10; // rbx
  __int16 v11; // r10
  _DWORD *v13; // r15
  char v14; // r14
  __int64 v15; // rcx
  bool v16; // r12
  __int64 v17; // rbx
  __int64 v18; // rdx
  int v19; // ebx
  _QWORD *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v24; // r14
  _KPROCESS *Process; // r13
  signed __int64 *p_WaitBlockList; // r15
  void *v27; // rbx
  void *v28; // r15
  __int64 v29; // rbx
  bool IsKeyDeletedForKeyBody; // al
  __int64 v31; // rdx
  ULONG_PTR v32; // rcx
  char v33; // al
  ULONG_PTR v34; // rcx
  __int64 v35; // rdx
  PVOID TokenInformation; // [rsp+44h] [rbp-BCh] BYREF
  __int64 *v38; // [rsp+50h] [rbp-B0h]
  __int64 v39; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v41; // [rsp+70h] [rbp-90h]
  _QWORD v42[3]; // [rsp+78h] [rbp-88h]
  struct _KTHREAD *v43; // [rsp+90h] [rbp-70h]
  _QWORD v44[30]; // [rsp+A0h] [rbp-60h] BYREF

  v4 = a3;
  HIDWORD(TokenInformation) = a3;
  v5 = a2;
  v38 = a4;
  v7 = 0;
  *a4 = 0LL;
  v8 = a4;
  memset(v44, 0, sizeof(v44));
  v44[19] = &v44[18];
  v44[18] = &v44[18];
  memset(&v44[20], 0, 0x50uLL);
  v9 = *a1;
  LODWORD(v44[0]) = 8;
  v10 = *(_QWORD *)(v9 + 8);
  v11 = *(_WORD *)(v10 + 58);
  if ( v11 || (*(_DWORD *)(v9 + 48) & 0x10) != 0 )
    return 0LL;
  if ( !CmpVEEnabled )
    goto LABEL_36;
  if ( (*(_DWORD *)(v10 + 176) & 0x2000000) == 0 )
  {
    v13 = *(_DWORD **)(v10 + 24);
    if ( v13 == CmpMasterHive )
    {
LABEL_25:
      v5 = a2;
      goto LABEL_26;
    }
    v41 = 0LL;
    v42[1] = 0LL;
    v42[2] = 0LL;
    v42[0] = v10;
    v14 = 0;
    while ( 1 )
    {
      if ( v11 < 2 )
        v15 = v42[v11];
      else
        v15 = *(_QWORD *)(8LL * (v11 - 2));
      if ( *(_WORD *)(v15 + 58) && *(_BYTE *)(v15 + 57) == 1 )
      {
        v14 = 0;
        goto LABEL_18;
      }
      if ( *(_DWORD *)(v15 + 32) != -1 )
        break;
      if ( --v11 < 0 )
        goto LABEL_18;
    }
    v14 = 1;
LABEL_18:
    if ( !v14 || (v13[1340] & 0x10) != 0 || (*(_DWORD *)(v10 + 176) & 0x2000000) != 0 )
    {
      v16 = 1;
      if ( !CmpVEEnabled )
        goto LABEL_36;
      if ( (v44[2] & 1) != 0 )
      {
        if ( (v44[2] & 2) != 0 )
          goto LABEL_24;
      }
      else
      {
        if ( KeGetCurrentThread()->PreviousMode )
        {
          CurrentThread = KeGetCurrentThread();
          v24 = (__int64)CurrentThread;
          LODWORD(TokenInformation) = 0;
          Process = CurrentThread->ApcState.Process;
          if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) == 0 )
            goto LABEL_54;
          v43 = KeGetCurrentThread();
          --v43->KernelApcDisable;
          p_WaitBlockList = (signed __int64 *)&CurrentThread[1].WaitBlockList;
          ExAcquirePushLockSharedEx((ULONG_PTR)&CurrentThread[1].WaitBlockList, 0LL);
          if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
          {
            v27 = (void *)(*(_QWORD *)((char *)&CurrentThread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
            ObfReferenceObject(v27);
          }
          else
          {
            v27 = 0LL;
          }
          if ( _InterlockedCompareExchange64(p_WaitBlockList, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(p_WaitBlockList);
          KeAbPostRelease((ULONG_PTR)p_WaitBlockList);
          KeLeaveCriticalRegionThread((__int64)v43);
          if ( v27 )
          {
            ObfDereferenceObject(v27);
          }
          else
          {
LABEL_54:
            v28 = (void *)ObFastReferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5]);
            if ( !v28 )
            {
              --*(_WORD *)(v24 + 484);
              ExAcquirePushLockSharedEx((ULONG_PTR)&Process[1], 0LL);
              v28 = (void *)ObFastReferenceObjectLocked(&Process[1].Affinity.Bitmap[5]);
              if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Process[1].Header.Lock, 0LL, 17LL) != 17 )
                ExfReleasePushLockShared((signed __int64 *)&Process[1].Header.Lock);
              KeAbPostRelease((ULONG_PTR)&Process[1]);
              KeLeaveCriticalRegionThread(v24);
            }
            SeQueryInformationToken(v28, TokenVirtualizationEnabled, &TokenInformation);
            ObFastDereferenceObject(
              (signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5],
              (unsigned __int64)v28);
            v16 = (_BYTE)TokenInformation == 0;
          }
          v4 = HIDWORD(TokenInformation);
        }
        if ( v16 )
        {
          LODWORD(v44[2]) |= 3u;
          goto LABEL_24;
        }
        LODWORD(v44[2]) |= 5u;
      }
      if ( (*(_DWORD *)(*(_QWORD *)(*a1 + 8) + 176LL) & 0x800000) != 0 )
      {
        CmpLockRegistry();
        v29 = *(_QWORD *)(*a1 + 8);
        ExAcquirePushLockSharedEx(v29 + 40, 0LL);
        _InterlockedIncrement((volatile signed __int32 *)(v29 + 48));
        IsKeyDeletedForKeyBody = CmpIsKeyDeletedForKeyBody(*a1, 0LL);
        v32 = *(_QWORD *)(*a1 + 8);
        if ( IsKeyDeletedForKeyBody )
        {
          CmpUnlockKcb(v32);
          CmpUnlockRegistry();
          return 3221225852LL;
        }
        v33 = CmpReparseToVirtualPath(v32, v31, &UnicodeString);
        v34 = *(_QWORD *)(*a1 + 8);
        if ( v33 )
        {
          CmpUnlockKcb(v34);
          CmpUnlockRegistry();
          v44[9] = *(_QWORD *)(*a1 + 56);
          if ( !v4 )
            LODWORD(v44[0]) |= 0x1000u;
          v35 = 1600LL;
          if ( a2 != 1 )
            v35 = 576LL;
          v7 = ObReferenceObjectByName(
                 (__int64)&UnicodeString,
                 v35,
                 0LL,
                 v4,
                 (__int64)CmKeyObjectType,
                 0,
                 (__int64)v44,
                 v38);
          RtlFreeUnicodeString(&UnicodeString);
          goto LABEL_36;
        }
        CmpUnlockKcb(v34);
        CmpUnlockRegistry();
      }
      return 0LL;
    }
LABEL_24:
    v8 = v38;
    goto LABEL_25;
  }
LABEL_26:
  if ( CmpVEEnabled
    && (*(_DWORD *)(*(_QWORD *)(*a1 + 8) + 176LL) & 0x1000000) != 0
    && !(unsigned __int8)CmpIsSystemEntity(&v44[2]) )
  {
    v39 = 0LL;
    CmpLockRegistry();
    v17 = *(_QWORD *)(*a1 + 8);
    ExAcquirePushLockSharedEx(v17 + 40, 0LL);
    _InterlockedIncrement((volatile signed __int32 *)(v17 + 48));
    LODWORD(v17) = CmVirtualKCBToRealPath(*(_QWORD *)(*a1 + 8), &UnicodeString);
    CmpUnlockKcb(*(_QWORD *)(*a1 + 8));
    CmpUnlockRegistry();
    if ( (int)v17 >= 0 )
    {
      v44[9] = *(_QWORD *)(*a1 + 56);
      if ( !v4 )
        LODWORD(v44[0]) |= 0x1000u;
      v18 = 1600LL;
      if ( v5 != 1 )
        v18 = 576LL;
      v19 = ObReferenceObjectByName(
              (__int64)&UnicodeString,
              v18,
              0LL,
              v4,
              (__int64)CmKeyObjectType,
              0,
              (__int64)v44,
              &v39);
      RtlFreeUnicodeString(&UnicodeString);
      if ( v19 >= 0 )
      {
        *v8 = *a1;
        *a1 = v39;
      }
      goto LABEL_36;
    }
    return 0LL;
  }
LABEL_36:
  if ( v44[11] )
  {
    CmpLockRegistry();
    CmpDereferenceKeyControlBlock(v44[11]);
    CmpUnlockRegistry();
  }
  v20 = (_QWORD *)v44[18];
  v21 = *(_QWORD *)v44[18];
  if ( *(_QWORD **)(v44[18] + 8LL) != &v44[18] || *(_QWORD *)(v21 + 8) != v44[18] )
    __fastfail(3u);
  v44[18] = *(_QWORD *)v44[18];
  for ( *(_QWORD *)(v21 + 8) = &v44[18]; v20 != &v44[18]; *(_QWORD *)(v22 + 8) = &v44[18] )
  {
    CmpFreeExtraParameter(v20);
    v20 = (_QWORD *)v44[18];
    v22 = *(_QWORD *)v44[18];
    if ( *(_QWORD **)(v44[18] + 8LL) != &v44[18] || *(_QWORD *)(v22 + 8) != v44[18] )
      __fastfail(3u);
    v44[18] = *(_QWORD *)v44[18];
  }
  return v7;
}
