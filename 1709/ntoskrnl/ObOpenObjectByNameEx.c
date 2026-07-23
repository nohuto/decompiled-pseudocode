/*
 * XREFs of ObOpenObjectByNameEx @ 0x1404AC5A0
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x1401FA8E0 (IoRevokeHandlesForProcess.c)
 *     CmOpenKey @ 0x1404AC170 (CmOpenKey.c)
 *     CmCreateKey @ 0x1404E2CA0 (CmCreateKey.c)
 *     ObOpenObjectByName @ 0x14051AD00 (ObOpenObjectByName.c)
 *     NtQueryFullAttributesFile @ 0x14053C2D0 (NtQueryFullAttributesFile.c)
 *     IopCreateFile @ 0x14053C790 (IopCreateFile.c)
 *     NtQueryAttributesFile @ 0x14053D360 (NtQueryAttributesFile.c)
 *     NtOpenSymbolicLinkObject @ 0x14056AB70 (NtOpenSymbolicLinkObject.c)
 *     NtOpenSection @ 0x14056E628 (NtOpenSection.c)
 *     NtOpenDirectoryObject @ 0x14056EB14 (NtOpenDirectoryObject.c)
 *     NtDeleteFile @ 0x1405E61C0 (NtDeleteFile.c)
 *     IoQueryInformationByName @ 0x1406B7700 (IoQueryInformationByName.c)
 *     IopFastQueryNetworkAttributes @ 0x1406B7EE8 (IopFastQueryNetworkAttributes.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     SeSetLearningModeObjectInformation @ 0x140081830 (SeSetLearningModeObjectInformation.c)
 *     SeClearLearningModeObjectInformation @ 0x140081860 (SeClearLearningModeObjectInformation.c)
 *     ObFastDereferenceObject @ 0x140081E20 (ObFastDereferenceObject.c)
 *     SepDeleteAccessState @ 0x140081E70 (SepDeleteAccessState.c)
 *     ObFastReferenceObject @ 0x140081EF0 (ObFastReferenceObject.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x140082000 (SepCreateAccessStateFromSubjectContext.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     ObFastReferenceObjectLocked @ 0x14008AA44 (ObFastReferenceObjectLocked.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
 *     PsDereferenceSiloContext @ 0x1401262F0 (PsDereferenceSiloContext.c)
 *     RtlpInterlockedPopEntrySList @ 0x140188F70 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140188FB0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     RtlValidSecurityDescriptor @ 0x140485620 (RtlValidSecurityDescriptor.c)
 *     ObpDeleteNameCheck @ 0x1404873F0 (ObpDeleteNameCheck.c)
 *     SeReleaseSecurityDescriptor @ 0x14049CFE0 (SeReleaseSecurityDescriptor.c)
 *     ObpCaptureObjectCreateInformation @ 0x1404ACCF0 (ObpCaptureObjectCreateInformation.c)
 *     ObpCreateHandle @ 0x1404AE7E0 (ObpCreateHandle.c)
 *     ObpLookupObjectName @ 0x1404B2490 (ObpLookupObjectName.c)
 *     SeObjectCreateSaclAccessBits @ 0x140577604 (SeObjectCreateSaclAccessBits.c)
 */

__int64 __fastcall ObOpenObjectByNameEx(
        __int64 a1,
        __int64 a2,
        unsigned __int8 a3,
        __int64 a4,
        ACCESS_MASK a5,
        __int64 a6,
        __int64 a7,
        _QWORD *a8)
{
  int v8; // r14d
  struct _KPRCB *CurrentPrcb; // r15
  _GENERAL_LOOKASIDE *P; // rsi
  PSLIST_ENTRY v14; // rbx
  _SLIST_ENTRY *v15; // r15
  int Information; // esi
  struct _KTHREAD *CurrentThread; // rsi
  signed __int64 *p_Lock; // r14
  void *v19; // r15
  _QWORD *v20; // r15
  ULONG_PTR v21; // rsi
  _SLIST_ENTRY *Next; // rax
  _BYTE *v23; // rsi
  _SLIST_ENTRY *v24; // r14
  void *v25; // rcx
  void *v26; // rcx
  __int64 v27; // r14
  __int64 v28; // rax
  void *v29; // rcx
  struct _KPRCB *v30; // r8
  _SLIST_ENTRY *v31; // rdx
  _GENERAL_LOOKASIDE *v32; // rcx
  void *v33; // r14
  int v34; // r15d
  __int64 v35; // r14
  void *v36; // rcx
  _SLIST_ENTRY *v37; // rcx
  _SLIST_ENTRY *v38; // r8
  struct _KPRCB *v39; // rdx
  _GENERAL_LOOKASIDE *v40; // rcx
  struct _KPRCB *v41; // rdx
  _GENERAL_LOOKASIDE *v42; // rcx
  _SLIST_ENTRY *v44; // rcx
  _GENERAL_LOOKASIDE *L; // rsi
  __int64 Size; // rdx
  void *(__fastcall *AllocateEx)(_POOL_TYPE, unsigned __int64, unsigned int, _LOOKASIDE_LIST_EX *); // rax
  __int64 Tag; // r8
  __int64 Type; // rcx
  signed __int64 *v50; // r14
  __int64 v51; // rax
  struct _KPRCB *v52; // rax
  _GENERAL_LOOKASIDE *v53; // r8
  __int64 v54; // rax
  int v55; // [rsp+38h] [rbp-D0h]
  __int64 v56; // [rsp+78h] [rbp-90h] BYREF
  __int64 v57; // [rsp+80h] [rbp-88h] BYREF
  __int64 v58; // [rsp+88h] [rbp-80h]
  ULONG_PTR BugCheckParameter2; // [rsp+90h] [rbp-78h]
  struct _KTHREAD *v60; // [rsp+98h] [rbp-70h]
  _BYTE v61[2]; // [rsp+A0h] [rbp-68h] BYREF
  __int16 v62; // [rsp+A2h] [rbp-66h]
  PSLIST_ENTRY ListEntry; // [rsp+A8h] [rbp-60h]
  __int64 v64; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v65; // [rsp+B8h] [rbp-50h] BYREF
  ULONG_PTR v66; // [rsp+C8h] [rbp-40h]
  signed __int64 v67; // [rsp+D0h] [rbp-38h]
  char v68[16]; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v69; // [rsp+E8h] [rbp-20h]
  _BYTE *v70; // [rsp+F0h] [rbp-18h]
  __int64 v71; // [rsp+F8h] [rbp-10h]
  unsigned int v72; // [rsp+148h] [rbp+40h]

  v8 = a1;
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
    v15 = v14 + 10;
    v72 = 1;
    Information = ObpCaptureObjectCreateInformation(a3, a3, v8, (unsigned int)v61, (__int64)&v14[10], 1);
    if ( Information < 0 )
    {
      v52 = KeGetCurrentPrcb();
      v53 = v52->PPLookasideList[8].P;
      ++v53->TotalFrees;
      if ( LOWORD(v53->ListHead.Alignment) >= v53->Depth )
      {
        ++v53->FreeMisses;
        v53 = v52->PPLookasideList[8].L;
        ++v53->TotalFrees;
        if ( LOWORD(v53->ListHead.Alignment) >= v53->Depth )
        {
          ++v53->FreeMisses;
          ((void (__fastcall *)(PSLIST_ENTRY))v53->FreeEx)(v14);
          return (unsigned int)Information;
        }
      }
      v42 = v53;
      goto LABEL_47;
    }
    if ( !a4 )
    {
      CurrentThread = KeGetCurrentThread();
      p_Lock = (signed __int64 *)&CurrentThread->ApcState.Process->Header.Lock;
      v67 = p_Lock[92];
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
            v19 = (void *)(*(_QWORD *)((char *)&CurrentThread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
            ObfReferenceObject(v19);
            DWORD2(v65) = *((_DWORD *)&CurrentThread[1].0 + 1) & 3;
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
        *(_QWORD *)&v65 = v19;
      }
      else
      {
        *(_QWORD *)&v65 = 0LL;
      }
      v20 = p_Lock + 107;
      v21 = ObFastReferenceObject(p_Lock + 107);
      if ( !v21 )
      {
        v60 = KeGetCurrentThread();
        --v60->KernelApcDisable;
        v50 = p_Lock + 91;
        ExAcquirePushLockSharedEx((ULONG_PTR)v50, 0LL);
        v21 = ObFastReferenceObjectLocked(v20);
        if ( _InterlockedCompareExchange64(v50, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v50);
        KeAbPostRelease((ULONG_PTR)v50);
        KeLeaveCriticalRegionThread((__int64)v60);
      }
      v66 = v21;
      if ( SeTokenLeakTracking )
      {
        if ( v21 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v21 + 1144) + 284LL));
          if ( v21 == SepTokenLeakToken )
            __debugbreak();
        }
        if ( (_QWORD)v65 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v65 + 1144) + 284LL));
          if ( (_QWORD)v65 == SepTokenLeakToken )
            __debugbreak();
        }
      }
      Information = SepCreateAccessStateFromSubjectContext(&v65, v14, &v14[14].Next, a5, (PGENERIC_MAPPING)(a2 + 76));
      if ( Information < 0 )
        goto LABEL_35;
      a4 = (__int64)v14;
      v15 = v14 + 10;
    }
    Next = v14[12].Next;
    if ( Next )
      *(_QWORD *)(a4 + 64) = Next;
    v23 = *(_BYTE **)(a4 + 64);
    if ( v23 )
    {
      if ( !RtlValidSecurityDescriptor(*(PSECURITY_DESCRIPTOR *)(a4 + 64)) )
      {
        Information = -1073741703;
        goto LABEL_35;
      }
      if ( (v23[2] & 0x10) != 0 && (*(_DWORD *)(a4 + 20) & 0x1000000) == 0 )
        *(_DWORD *)(a4 + 16) |= SeObjectCreateSaclAccessBits(v23);
    }
    v24 = v14 + 28;
    Information = ObpLookupObjectName(
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
    if ( Information >= 0 )
    {
      if ( *((_BYTE *)&v14[29].Next + 14) )
      {
        v58 = *((_QWORD *)&v14[28].Next + 1) - 48LL;
        ObfReferenceObject((PVOID)(v58 + 48));
        _InterlockedIncrement((volatile signed __int32 *)(v58 - ObpInfoMaskToOffset[*(_BYTE *)(v58 + 26) & 3] + 24));
      }
      if ( *((_BYTE *)&v14[29].Next + 14) )
      {
        ExReleasePushLockEx((ULONG_PTR)(&v24->Next[18].Next + 1), 0LL);
        v44 = v24->Next;
        LODWORD(v14[30].Next) = -286387660;
        ObfDereferenceObject(v44);
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
      v26 = (void *)v57;
      v27 = v57 - 48;
      if ( (*(_BYTE *)(v57 - 21) & 1) != 0 )
      {
        v28 = *(_QWORD *)(v27 + 32);
        v72 = 0;
        if ( v28 )
        {
          v29 = *(void **)(v28 + 32);
          if ( v29 )
          {
            SeReleaseSecurityDescriptor(v29, *(_BYTE *)(v28 + 16), 1);
            *(_QWORD *)(*(_QWORD *)(v27 + 32) + 32LL) = 0LL;
          }
          v30 = KeGetCurrentPrcb();
          v31 = *(_SLIST_ENTRY **)(v27 + 32);
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
          v26 = (void *)v57;
          *(_QWORD *)(v27 + 32) = 0LL;
        }
      }
      if ( (*(_DWORD *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v27 + 24) ^ (unsigned __int64)BYTE1(v27)]
                      + 72) & (__int64)v15->Next) != 0 )
      {
        PsDereferenceSiloContext(v26);
        Information = -1073741811;
      }
      else
      {
        v70 = v61;
        v69 = a2 + 16;
        v71 = *((_QWORD *)&v14[10].Next + 1);
        SeSetLearningModeObjectInformation((__int64)v68);
        v33 = (void *)v57;
        LOBYTE(v55) = a3;
        v34 = ObpCreateHandle(v72, v57, 0LL, a4, 0, v15->Next, v55, 0LL, v56, 0LL, &v64);
        if ( v34 < 0 )
        {
          PsDereferenceSiloContext(v33);
          Information = v34;
        }
        else
        {
          *a8 = v64;
        }
      }
      v35 = v58;
      if ( v58 )
      {
        if ( _InterlockedExchangeAdd(
               (volatile signed __int32 *)(v58 - ObpInfoMaskToOffset[*(_BYTE *)(v58 + 26) & 3] + 24),
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
        v54 = *(_QWORD *)(a4 + 48);
        if ( v54 )
        {
          _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v54 + 1144) + 284LL));
          if ( *(_QWORD *)(a4 + 48) == SepTokenLeakToken )
            __debugbreak();
        }
        v51 = *(_QWORD *)(a4 + 32);
        if ( v51 )
        {
          _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v51 + 1144) + 284LL));
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
      if ( v62 == 248 )
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
        return (unsigned int)Information;
      }
    }
LABEL_47:
    RtlpInterlockedPushEntrySList(&v42->ListHead, v14);
    return (unsigned int)Information;
  }
  return 3221225485LL;
}
