/*
 * XREFs of ObOpenObjectByNameEx @ 0x14052E3C0
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x1401F4B00 (IoRevokeHandlesForProcess.c)
 *     CmCreateKey @ 0x14042DEF0 (CmCreateKey.c)
 *     NtOpenSection @ 0x140434530 (NtOpenSection.c)
 *     NtOpenSymbolicLinkObject @ 0x140435CE0 (NtOpenSymbolicLinkObject.c)
 *     ObOpenObjectByName @ 0x1404CD2A0 (ObOpenObjectByName.c)
 *     CmOpenKey @ 0x14052CA30 (CmOpenKey.c)
 *     IopCreateFile @ 0x140541AA0 (IopCreateFile.c)
 *     NtQueryFullAttributesFile @ 0x140542620 (NtQueryFullAttributesFile.c)
 *     NtQueryAttributesFile @ 0x140542900 (NtQueryAttributesFile.c)
 *     NtDeleteFile @ 0x1405CFB90 (NtDeleteFile.c)
 *     IoQueryInformationByName @ 0x14068B8F0 (IoQueryInformationByName.c)
 *     IopFastQueryNetworkAttributes @ 0x14068C0A8 (IopFastQueryNetworkAttributes.c)
 * Callees:
 *     PsDereferenceSiloContext @ 0x14003ABD0 (PsDereferenceSiloContext.c)
 *     ObFastReferenceObjectLocked @ 0x1400445AC (ObFastReferenceObjectLocked.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x1400EE570 (SepCreateAccessStateFromSubjectContext.c)
 *     ObFastReferenceObject @ 0x1400EE6B0 (ObFastReferenceObject.c)
 *     SepDeleteAccessState @ 0x1400EE7C0 (SepDeleteAccessState.c)
 *     ObFastDereferenceObject @ 0x1400EE840 (ObFastDereferenceObject.c)
 *     SeSetLearningModeObjectInformation @ 0x1400EE8E0 (SeSetLearningModeObjectInformation.c)
 *     SeClearLearningModeObjectInformation @ 0x1400EE910 (SeClearLearningModeObjectInformation.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegion @ 0x1400EEB00 (KeLeaveCriticalRegion.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 *     RtlpInterlockedPopEntrySList @ 0x140189470 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401894B0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     SeObjectCreateSaclAccessBits @ 0x140441F74 (SeObjectCreateSaclAccessBits.c)
 *     ObpDeleteNameCheck @ 0x1404F5F80 (ObpDeleteNameCheck.c)
 *     SeReleaseSecurityDescriptor @ 0x14050B570 (SeReleaseSecurityDescriptor.c)
 *     RtlValidSecurityDescriptor @ 0x14050C750 (RtlValidSecurityDescriptor.c)
 *     ObpCreateHandle @ 0x14052CD90 (ObpCreateHandle.c)
 *     ObpCaptureObjectCreateInformation @ 0x14052DF10 (ObpCaptureObjectCreateInformation.c)
 *     ObpLookupObjectName @ 0x14052F630 (ObpLookupObjectName.c)
 */

__int64 __fastcall ObOpenObjectByNameEx(
        __int64 a1,
        __int64 a2,
        char a3,
        __int64 a4,
        ACCESS_MASK a5,
        __int64 a6,
        __int64 a7,
        _QWORD *a8)
{
  struct _KPRCB *CurrentPrcb; // r15
  _GENERAL_LOOKASIDE *P; // rsi
  PSLIST_ENTRY v14; // rbx
  int *v15; // r15
  int v16; // esi
  struct _KTHREAD *CurrentThread; // rsi
  signed __int64 *p_Lock; // r14
  void *v19; // r15
  _QWORD *v20; // r15
  unsigned __int64 v21; // rsi
  _SLIST_ENTRY *Next; // rax
  _BYTE *v23; // rsi
  _SLIST_ENTRY *v24; // r14
  void *v25; // rcx
  char *v26; // rcx
  char *v27; // r14
  __int64 v28; // rax
  void *v29; // rcx
  struct _KPRCB *v30; // r8
  _SLIST_ENTRY *v31; // rdx
  _GENERAL_LOOKASIDE *v32; // rcx
  char *v33; // r14
  int v34; // r15d
  __int64 v35; // r14
  void *v36; // rcx
  _SLIST_ENTRY *v37; // rcx
  _SLIST_ENTRY *v38; // r8
  struct _KPRCB *v39; // rdx
  _GENERAL_LOOKASIDE *v40; // rcx
  struct _KPRCB *v41; // rdx
  _GENERAL_LOOKASIDE *v42; // rcx
  char *v44; // rcx
  _SLIST_ENTRY *v45; // rcx
  _GENERAL_LOOKASIDE *L; // rsi
  __int64 Size; // rdx
  void *(__fastcall *AllocateEx)(_POOL_TYPE, unsigned __int64, unsigned int, _LOOKASIDE_LIST_EX *); // rax
  __int64 Tag; // r8
  __int64 Type; // rcx
  signed __int64 *v51; // r14
  __int64 v52; // rax
  struct _KPRCB *v53; // rax
  _GENERAL_LOOKASIDE *v54; // r8
  __int64 v55; // rax
  __int64 v56; // [rsp+78h] [rbp-90h] BYREF
  char *v57; // [rsp+80h] [rbp-88h] BYREF
  char *v58; // [rsp+88h] [rbp-80h]
  ULONG_PTR BugCheckParameter2; // [rsp+90h] [rbp-78h]
  struct _KTHREAD *v60; // [rsp+98h] [rbp-70h]
  __int64 v61; // [rsp+A0h] [rbp-68h] BYREF
  PSLIST_ENTRY ListEntry; // [rsp+A8h] [rbp-60h]
  __int64 v63; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v64; // [rsp+B8h] [rbp-50h] BYREF
  unsigned __int64 v65; // [rsp+C8h] [rbp-40h]
  signed __int64 v66; // [rsp+D0h] [rbp-38h]
  char v67[16]; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v68; // [rsp+E8h] [rbp-20h]
  __int64 *v69; // [rsp+F0h] [rbp-18h]
  __int64 v70; // [rsp+F8h] [rbp-10h]
  int v71; // [rsp+148h] [rbp+40h]

  v58 = 0LL;
  *a8 = 0LL;
  if ( a1 && a2 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    P = CurrentPrcb->PPLookasideList[8].P;
    ++P->TotalAllocates;
    v14 = RtlpInterlockedPopEntrySList(&P->ListHead);
    if ( !v14 )
    {
      ++P->AllocateMisses;
      L = CurrentPrcb->PPLookasideList[8].L;
      ++L->TotalAllocates;
      v14 = RtlpInterlockedPopEntrySList(&L->ListHead);
      if ( !v14 )
      {
        Size = L->Size;
        AllocateEx = L->AllocateEx;
        Tag = L->Tag;
        Type = (unsigned int)L->Type;
        ++L->AllocateMisses;
        v14 = (PSLIST_ENTRY)((__int64 (__fastcall *)(__int64, __int64, __int64))AllocateEx)(Type, Size, Tag);
        if ( !v14 )
          return 3221225626LL;
      }
    }
    LODWORD(v14->Next) = CurrentPrcb->Number;
    v15 = (int *)&v14[10];
    v71 = 1;
    v16 = ObpCaptureObjectCreateInformation(a3, a3, a1, &v61, (__int64)&v14[10], 1u);
    if ( v16 < 0 )
    {
      v53 = KeGetCurrentPrcb();
      v54 = v53->PPLookasideList[8].P;
      ++v54->TotalFrees;
      if ( LOWORD(v54->ListHead.Alignment) >= v54->Depth )
      {
        ++v54->FreeMisses;
        v54 = v53->PPLookasideList[8].L;
        ++v54->TotalFrees;
        if ( LOWORD(v54->ListHead.Alignment) >= v54->Depth )
        {
          ++v54->FreeMisses;
          ((void (__fastcall *)(PSLIST_ENTRY))v54->FreeEx)(v14);
          return (unsigned int)v16;
        }
      }
      v42 = v54;
      goto LABEL_47;
    }
    if ( !a4 )
    {
      CurrentThread = KeGetCurrentThread();
      p_Lock = (signed __int64 *)&CurrentThread->ApcState.Process->Header.Lock;
      v66 = p_Lock[92];
      if ( CurrentThread )
      {
        if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
        {
          v60 = KeGetCurrentThread();
          --v60->KernelApcDisable;
          BugCheckParameter2 = (ULONG_PTR)&CurrentThread[1].WaitBlockList;
          ExAcquirePushLockSharedEx((ULONG_PTR)&CurrentThread[1].WaitBlockList, 0LL);
          if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
          {
            v19 = (void *)(*(_QWORD *)&CurrentThread[1].SystemCallNumber & 0xFFFFFFFFFFFFFFF8uLL);
            ObfReferenceObject(v19);
            DWORD2(v64) = CurrentThread[1].SystemCallNumber & 3;
          }
          else
          {
            v19 = 0LL;
          }
          if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
          KeAbPostRelease(BugCheckParameter2);
          KeLeaveCriticalRegionThread((__int64)v60);
        }
        else
        {
          v19 = 0LL;
        }
        *(_QWORD *)&v64 = v19;
      }
      else
      {
        *(_QWORD *)&v64 = 0LL;
      }
      v20 = p_Lock + 107;
      v21 = ObFastReferenceObject(p_Lock + 107);
      if ( !v21 )
      {
        v60 = KeGetCurrentThread();
        --v60->KernelApcDisable;
        v51 = p_Lock + 91;
        ExAcquirePushLockSharedEx((ULONG_PTR)v51, 0LL);
        v21 = ObFastReferenceObjectLocked(v20);
        if ( _InterlockedCompareExchange64(v51, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v51);
        KeAbPostRelease((ULONG_PTR)v51);
        KeLeaveCriticalRegionThread((__int64)v60);
      }
      v65 = v21;
      if ( SeTokenLeakTracking )
      {
        if ( v21 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v21 + 1144) + 284LL));
          if ( v21 == SepTokenLeakToken )
            __debugbreak();
        }
        if ( (_QWORD)v64 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v64 + 1144) + 284LL));
          if ( (_QWORD)v64 == SepTokenLeakToken )
            __debugbreak();
        }
      }
      v16 = SepCreateAccessStateFromSubjectContext(&v64, v14, &v14[14].Next, a5, (PGENERIC_MAPPING)(a2 + 76));
      if ( v16 < 0 )
        goto LABEL_35;
      a4 = (__int64)v14;
      v15 = (int *)&v14[10];
    }
    Next = v14[12].Next;
    if ( Next )
      *(_QWORD *)(a4 + 64) = Next;
    v23 = *(_BYTE **)(a4 + 64);
    if ( v23 )
    {
      if ( !RtlValidSecurityDescriptor(*(PSECURITY_DESCRIPTOR *)(a4 + 64)) )
      {
        v16 = -1073741703;
        goto LABEL_35;
      }
      if ( (v23[2] & 0x10) != 0 && (*(_DWORD *)(a4 + 20) & 0x1000000) == 0 )
        *(_DWORD *)(a4 + 16) |= SeObjectCreateSaclAccessBits(v23);
    }
    v24 = v14 + 28;
    v16 = ObpLookupObjectName(
            *((_QWORD *)&v14[10].Next + 1),
            a3,
            a6,
            *((_QWORD *)&v14[12].Next + 1),
            0LL,
            a7,
            a4,
            (__int64)&v14[28],
            (__int64)&v56,
            (__int64)&v57);
    if ( v16 >= 0 )
    {
      if ( *((_BYTE *)&v14[29].Next + 14) )
      {
        v44 = (char *)*((_QWORD *)&v14[28].Next + 1);
        v58 = v44 - 48;
        ObfReferenceObject(v44);
        _InterlockedIncrement((volatile signed __int32 *)&v58[-ObpInfoMaskToOffset[v58[26] & 3] + 24]);
      }
      if ( *((_BYTE *)&v14[29].Next + 14) )
      {
        ExReleasePushLockEx((ULONG_PTR)(&v24->Next[18].Next + 1), 0LL);
        v45 = v24->Next;
        LODWORD(v14[30].Next) = -286387660;
        ObfDereferenceObject(v45);
        v24->Next = 0LL;
        *((_WORD *)&v14[29].Next + 7) = 0;
        KeLeaveCriticalRegion();
      }
      v25 = (void *)*((_QWORD *)&v14[28].Next + 1);
      if ( v25 )
      {
        ObfDereferenceObject(v25);
        *((_QWORD *)&v14[28].Next + 1) = 0LL;
      }
      v26 = v57;
      v27 = v57 - 48;
      if ( (*(v57 - 21) & 1) != 0 )
      {
        v28 = *((_QWORD *)v27 + 4);
        v71 = 0;
        if ( v28 )
        {
          v29 = *(void **)(v28 + 32);
          if ( v29 )
          {
            SeReleaseSecurityDescriptor(v29, *(_BYTE *)(v28 + 16), 1);
            *(_QWORD *)(*((_QWORD *)v27 + 4) + 32LL) = 0LL;
          }
          v30 = KeGetCurrentPrcb();
          v31 = (_SLIST_ENTRY *)*((_QWORD *)v27 + 4);
          v32 = v30->PPLookasideList[4].P;
          ++v32->TotalFrees;
          if ( LOWORD(v32->ListHead.Alignment) < v32->Depth
            || (++v32->FreeMisses,
                v32 = v30->PPLookasideList[4].L,
                ++v32->TotalFrees,
                LOWORD(v32->ListHead.Alignment) < v32->Depth) )
          {
            RtlpInterlockedPushEntrySList(&v32->ListHead, v31);
          }
          else
          {
            ++v32->FreeMisses;
            ((void (__fastcall *)(_SLIST_ENTRY *))v32->FreeEx)(v31);
          }
          v26 = v57;
          *((_QWORD *)v27 + 4) = 0LL;
        }
      }
      if ( (*(_DWORD *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v27[24] ^ (unsigned __int64)BYTE1(v27)]
                      + 72) & *v15) != 0 )
      {
        PsDereferenceSiloContext(v26);
        v16 = -1073741811;
      }
      else
      {
        v69 = &v61;
        v68 = a2 + 16;
        v70 = *((_QWORD *)&v14[10].Next + 1);
        SeSetLearningModeObjectInformation((__int64)v67);
        v33 = v57;
        v34 = ObpCreateHandle(v71, v57, 0, a4, 0, *v15, a3, 0LL, v56, 0LL, &v63);
        if ( v34 < 0 )
        {
          PsDereferenceSiloContext(v33);
          v16 = v34;
        }
        else
        {
          *a8 = v63;
        }
      }
      v35 = (__int64)v58;
      if ( v58 )
      {
        if ( _InterlockedExchangeAdd(
               (volatile signed __int32 *)&v58[-ObpInfoMaskToOffset[v58[26] & 3] + 24],
               0xFFFFFFFF) == 1 )
          ObpDeleteNameCheck(v35);
        ObfDereferenceObject((PVOID)(v35 + 48));
      }
    }
LABEL_35:
    if ( (PSLIST_ENTRY)a4 == v14 )
    {
      SepDeleteAccessState(a4);
      if ( SeTokenLeakTracking )
      {
        v55 = *(_QWORD *)(a4 + 48);
        if ( v55 )
        {
          _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v55 + 1144) + 284LL));
          if ( *(_QWORD *)(a4 + 48) == SepTokenLeakToken )
            __debugbreak();
        }
        v52 = *(_QWORD *)(a4 + 32);
        if ( v52 )
        {
          _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v52 + 1144) + 284LL));
          if ( *(_QWORD *)(a4 + 32) == SepTokenLeakToken )
            __debugbreak();
        }
      }
      ObFastDereferenceObject(
        (signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5],
        *(_QWORD *)(a4 + 48));
      v36 = *(void **)(a4 + 32);
      *(_QWORD *)(a4 + 48) = 0LL;
      if ( v36 )
        ObfDereferenceObject(v36);
      *(_QWORD *)(a4 + 32) = 0LL;
    }
    v37 = v14[12].Next;
    if ( v37 )
    {
      SeReleaseSecurityDescriptor(v37, (char)v14[11].Next, 1);
      v14[12].Next = 0LL;
    }
    v38 = ListEntry;
    if ( ListEntry )
    {
      if ( WORD1(v61) == 248 )
      {
        v39 = KeGetCurrentPrcb();
        v40 = v39->PPLookasideList[5].P;
        ++v40->TotalFrees;
        if ( LOWORD(v40->ListHead.Alignment) < v40->Depth
          || (++v40->FreeMisses,
              v40 = v39->PPLookasideList[5].L,
              ++v40->TotalFrees,
              LOWORD(v40->ListHead.Alignment) < v40->Depth) )
        {
          RtlpInterlockedPushEntrySList(&v40->ListHead, v38);
        }
        else
        {
          ++v40->FreeMisses;
          ((void (__fastcall *)(_SLIST_ENTRY *))v40->FreeEx)(v38);
        }
      }
      else
      {
        ExFreePoolWithTag(ListEntry, 0);
      }
    }
    SeClearLearningModeObjectInformation();
    v41 = KeGetCurrentPrcb();
    v42 = v41->PPLookasideList[8].P;
    ++v42->TotalFrees;
    if ( LOWORD(v42->ListHead.Alignment) >= v42->Depth )
    {
      ++v42->FreeMisses;
      v42 = v41->PPLookasideList[8].L;
      ++v42->TotalFrees;
      if ( LOWORD(v42->ListHead.Alignment) >= v42->Depth )
      {
        ++v42->FreeMisses;
        ((void (__fastcall *)(PSLIST_ENTRY))v42->FreeEx)(v14);
        return (unsigned int)v16;
      }
    }
LABEL_47:
    RtlpInterlockedPushEntrySList(&v42->ListHead, v14);
    return (unsigned int)v16;
  }
  return 3221225485LL;
}
