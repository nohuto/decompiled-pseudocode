/*
 * XREFs of CmKeyBodyRemapToVirtualForEnum @ 0x1404FE030
 * Callers:
 *     NtQueryMultipleValueKey @ 0x140448D38 (NtQueryMultipleValueKey.c)
 *     NtEnumerateKey @ 0x1404FD330 (NtEnumerateKey.c)
 *     NtEnumerateValueKey @ 0x1404FF290 (NtEnumerateValueKey.c)
 *     NtQueryValueKey @ 0x1405074B0 (NtQueryValueKey.c)
 *     NtQueryKey @ 0x140507B00 (NtQueryKey.c)
 * Callees:
 *     MiDeleteSubsection @ 0x14002D920 (MiDeleteSubsection.c)
 *     ObFastReferenceObjectLocked @ 0x1400445AC (ObFastReferenceObjectLocked.c)
 *     CmpAllocateTransientPoolWithTag @ 0x14007EAA8 (CmpAllocateTransientPoolWithTag.c)
 *     ObFastReferenceObject @ 0x1400EE6B0 (ObFastReferenceObject.c)
 *     ObFastDereferenceObject @ 0x1400EE840 (ObFastDereferenceObject.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     memset @ 0x140192D80 (memset.c)
 *     CmpDereferenceKeyControlBlock @ 0x140490D70 (CmpDereferenceKeyControlBlock.c)
 *     CmpIsSystemEntity @ 0x1404D4280 (CmpIsSystemEntity.c)
 *     ObReferenceObjectByName @ 0x1404F3D70 (ObReferenceObjectByName.c)
 *     SeQueryInformationToken @ 0x1404FE620 (SeQueryInformationToken.c)
 *     CmpLockRegistry @ 0x1404FF6F0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x1404FF92C (CmpUnlockRegistry.c)
 *     CmpLockKcbShared @ 0x1404FF9AC (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140500590 (CmpUnlockKcb.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140501430 (CmpIsKeyDeletedForKeyBody.c)
 *     RtlFreeUnicodeString @ 0x140541820 (RtlFreeUnicodeString.c)
 *     CmpReparseToVirtualPath @ 0x14056B1F0 (CmpReparseToVirtualPath.c)
 *     CmVirtualKCBToRealPath @ 0x140666C60 (CmVirtualKCBToRealPath.c)
 *     CmpSetKcbAtLayerHeight @ 0x14066DD6C (CmpSetKcbAtLayerHeight.c)
 */

__int64 __fastcall CmKeyBodyRemapToVirtualForEnum(_QWORD *a1, char a2, unsigned int a3, _QWORD *a4)
{
  unsigned int v4; // esi
  char v5; // r12
  unsigned int v7; // r15d
  _QWORD *v8; // r14
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r13
  __int16 v13; // r14
  struct _PRIVILEGE_SET *v14; // rbx
  struct _PRIVILEGE_SET *v15; // rsi
  SIZE_T v16; // r12
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rax
  char v18; // si
  __int16 v19; // r10
  __int64 v20; // r11
  __int64 v21; // r11
  __int16 v22; // r10
  bool v23; // r12
  int v24; // ebx
  __int64 v25; // rdx
  int v26; // ebx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v28; // rsi
  _KPROCESS *Process; // r13
  signed __int64 *p_WaitBlockList; // r14
  void *v31; // rbx
  void *v32; // r14
  __int64 v33; // rcx
  char IsKeyDeletedForKeyBody; // al
  __int64 v35; // rdx
  void *v36; // rcx
  char v37; // al
  void *v38; // rcx
  __int64 v39; // rdx
  PVOID TokenInformation; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD *v43; // [rsp+50h] [rbp-B0h]
  __int64 v44; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v45; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v46[2]; // [rsp+68h] [rbp-98h]
  struct _PRIVILEGE_SET *v47; // [rsp+78h] [rbp-88h]
  UNICODE_STRING UnicodeString; // [rsp+80h] [rbp-80h] BYREF
  struct _KTHREAD *v49; // [rsp+90h] [rbp-70h]
  _QWORD v50[28]; // [rsp+A0h] [rbp-60h] BYREF

  v4 = a3;
  v5 = a2;
  v43 = a4;
  v7 = 0;
  *a4 = 0LL;
  v8 = a4;
  memset(v50, 0, sizeof(v50));
  v10 = *a1;
  LODWORD(v50[0]) = 8;
  v11 = *(_QWORD *)(v10 + 8);
  if ( *(_WORD *)(v11 + 58) || (*(_DWORD *)(v10 + 48) & 0x10) != 0 )
    return 0LL;
  if ( !CmpVEEnabled )
    goto LABEL_46;
  if ( (*(_DWORD *)(v11 + 176) & 0x2000000) == 0 )
  {
    v44 = *(_QWORD *)(v11 + 24);
    if ( v44 != CmpMasterHive )
    {
      v13 = *(_WORD *)(v11 + 58);
      v14 = 0LL;
      v45 = 4294901760LL;
      v15 = 0LL;
      v46[0] = 0LL;
      v46[1] = 0LL;
      v47 = 0LL;
      if ( v13 >= 2 && v13 != 1 )
      {
        v16 = 8LL * (unsigned int)(v13 - 1);
        TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(v9, v16, 0x35364D43u);
        v15 = TransientPoolWithTag;
        if ( !TransientPoolWithTag )
          goto LABEL_10;
        memset(TransientPoolWithTag, 0, v16);
      }
      v19 = *(_WORD *)(v11 + 58);
      v14 = v15;
      LOWORD(v45) = v13;
      v47 = v15;
      WORD1(v45) = v19;
      if ( v19 )
      {
        v20 = *(_QWORD *)(v11 + 184);
        if ( v20 )
        {
          do
          {
            CmpSetKcbAtLayerHeight(&v45, (unsigned __int16)v19, *(_QWORD *)(v20 + 16));
            v20 = *(_QWORD *)(v21 + 24);
            v19 = v22 - 1;
          }
          while ( v20 );
          v14 = v47;
          v19 = WORD1(v45);
        }
      }
      else
      {
        v46[0] = v11;
      }
      v18 = 0;
      if ( v19 < 0 )
      {
LABEL_27:
        if ( v14 )
          MiDeleteSubsection(v14);
        if ( v18 && (*(_DWORD *)(v44 + 5360) & 0x10) == 0 && (*(_DWORD *)(v11 + 176) & 0x2000000) == 0 )
          goto LABEL_35;
        v23 = 1;
        if ( !CmpVEEnabled )
          goto LABEL_46;
        if ( (v50[2] & 1) != 0 )
        {
          if ( (v50[2] & 2) != 0 )
          {
LABEL_35:
            v4 = a3;
            v8 = v43;
            v5 = a2;
            goto LABEL_36;
          }
        }
        else
        {
          if ( KeGetCurrentThread()->PreviousMode )
          {
            CurrentThread = KeGetCurrentThread();
            v28 = (__int64)CurrentThread;
            LODWORD(TokenInformation) = 0;
            Process = CurrentThread->ApcState.Process;
            if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) == 0 )
              goto LABEL_58;
            v49 = KeGetCurrentThread();
            --v49->KernelApcDisable;
            p_WaitBlockList = (signed __int64 *)&CurrentThread[1].WaitBlockList;
            ExAcquirePushLockSharedEx((ULONG_PTR)&CurrentThread[1].WaitBlockList, 0LL);
            if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
            {
              v31 = (void *)(*(_QWORD *)&CurrentThread[1].SystemCallNumber & 0xFFFFFFFFFFFFFFF8uLL);
              ObfReferenceObject(v31);
            }
            else
            {
              v31 = 0LL;
            }
            if ( _InterlockedCompareExchange64(p_WaitBlockList, 0LL, 17LL) != 17 )
              ExfReleasePushLockShared(p_WaitBlockList);
            KeAbPostRelease((ULONG_PTR)p_WaitBlockList);
            KeLeaveCriticalRegionThread((__int64)v49);
            if ( v31 )
            {
              ObfDereferenceObject(v31);
            }
            else
            {
LABEL_58:
              v32 = (void *)ObFastReferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5]);
              if ( !v32 )
              {
                --*(_WORD *)(v28 + 484);
                ExAcquirePushLockSharedEx((ULONG_PTR)&Process[1], 0LL);
                v32 = (void *)ObFastReferenceObjectLocked(&Process[1].Affinity.Bitmap[5]);
                if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Process[1].Header.Lock, 0LL, 17LL) != 17 )
                  ExfReleasePushLockShared((signed __int64 *)&Process[1].Header.Lock);
                KeAbPostRelease((ULONG_PTR)&Process[1]);
                KeLeaveCriticalRegionThread(v28);
              }
              SeQueryInformationToken(v32, TokenVirtualizationEnabled, &TokenInformation);
              ObFastDereferenceObject(
                (signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5],
                (unsigned __int64)v32);
              v23 = (_BYTE)TokenInformation == 0;
            }
          }
          if ( v23 )
          {
            LODWORD(v50[2]) |= 3u;
            goto LABEL_35;
          }
          LODWORD(v50[2]) |= 5u;
        }
        v33 = *(_QWORD *)(*a1 + 8LL);
        if ( (*(_DWORD *)(v33 + 176) & 0x800000) != 0 )
        {
          CmpLockRegistry(v33);
          CmpLockKcbShared(*(_QWORD *)(*a1 + 8LL));
          IsKeyDeletedForKeyBody = CmpIsKeyDeletedForKeyBody(*a1, 0LL);
          v36 = *(void **)(*a1 + 8LL);
          if ( IsKeyDeletedForKeyBody )
          {
            CmpUnlockKcb(v36);
            CmpUnlockRegistry();
            return 3221225852LL;
          }
          v37 = CmpReparseToVirtualPath(v36, v35, &UnicodeString);
          v38 = *(void **)(*a1 + 8LL);
          if ( v37 )
          {
            CmpUnlockKcb(v38);
            CmpUnlockRegistry();
            v50[9] = *(_QWORD *)(*a1 + 56LL);
            if ( !a3 )
              LODWORD(v50[0]) |= 0x1000u;
            v39 = 1600LL;
            if ( a2 != 1 )
              v39 = 576LL;
            v7 = ObReferenceObjectByName(
                   (__int64)&UnicodeString,
                   v39,
                   0LL,
                   a3,
                   (__int64)CmKeyObjectType,
                   0,
                   (__int64)v50,
                   v43);
            RtlFreeUnicodeString(&UnicodeString);
            goto LABEL_46;
          }
          CmpUnlockKcb(v38);
          CmpUnlockRegistry();
        }
        return 0LL;
      }
      while ( 1 )
      {
        v9 = v19 < 2 ? v46[v19] : *((_QWORD *)v14 + v19 - 2);
        if ( *(_WORD *)(v9 + 58) && *(_BYTE *)(v9 + 57) == 1 )
          break;
        if ( *(_DWORD *)(v9 + 32) != -1 )
        {
          v18 = 1;
          goto LABEL_27;
        }
        if ( --v19 < 0 )
          goto LABEL_27;
      }
LABEL_10:
      v18 = 0;
      goto LABEL_27;
    }
  }
LABEL_36:
  if ( CmpVEEnabled )
  {
    v9 = *(_QWORD *)(*a1 + 8LL);
    if ( (*(_DWORD *)(v9 + 176) & 0x1000000) != 0 && !CmpIsSystemEntity((int *)&v50[2]) )
    {
      v44 = 0LL;
      CmpLockRegistry(v9);
      CmpLockKcbShared(*(_QWORD *)(*a1 + 8LL));
      v24 = CmVirtualKCBToRealPath(*(_QWORD *)(*a1 + 8LL), &UnicodeString);
      CmpUnlockKcb(*(PVOID *)(*a1 + 8LL));
      CmpUnlockRegistry();
      if ( v24 >= 0 )
      {
        v50[9] = *(_QWORD *)(*a1 + 56LL);
        if ( !v4 )
          LODWORD(v50[0]) |= 0x1000u;
        v25 = 1600LL;
        if ( v5 != 1 )
          v25 = 576LL;
        v26 = ObReferenceObjectByName(
                (__int64)&UnicodeString,
                v25,
                0LL,
                v4,
                (__int64)CmKeyObjectType,
                0,
                (__int64)v50,
                &v44);
        RtlFreeUnicodeString(&UnicodeString);
        if ( v26 >= 0 )
        {
          *v8 = *a1;
          *a1 = v44;
        }
        goto LABEL_46;
      }
      return 0LL;
    }
  }
LABEL_46:
  if ( v50[11] )
  {
    CmpLockRegistry(v9);
    CmpDereferenceKeyControlBlock(v50[11]);
    CmpUnlockRegistry();
  }
  return v7;
}
