/*
 * XREFs of ObOpenObjectByNameEx @ 0x1405AC6B0
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x140237700 (IoRevokeHandlesForProcess.c)
 *     CmCreateKey @ 0x14049F9B0 (CmCreateKey.c)
 *     NtQueryAttributesFile @ 0x1404D1D30 (NtQueryAttributesFile.c)
 *     IopCreateFile @ 0x1404F3030 (IopCreateFile.c)
 *     NtOpenSymbolicLinkObject @ 0x140552930 (NtOpenSymbolicLinkObject.c)
 *     NtQueryFullAttributesFile @ 0x140554980 (NtQueryFullAttributesFile.c)
 *     ObOpenObjectByName @ 0x140557B60 (ObOpenObjectByName.c)
 *     NtOpenSection @ 0x140558700 (NtOpenSection.c)
 *     CmOpenKey @ 0x1405AD380 (CmOpenKey.c)
 *     NtDeleteFile @ 0x1405F3880 (NtDeleteFile.c)
 *     IoQueryInformationByName @ 0x14071C390 (IoQueryInformationByName.c)
 *     IopFastQueryNetworkAttributes @ 0x14071CC14 (IopFastQueryNetworkAttributes.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     PsDereferenceSiloContext @ 0x1400C5610 (PsDereferenceSiloContext.c)
 *     ObFastReferenceObjectLocked @ 0x1400EB804 (ObFastReferenceObjectLocked.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     SeClearLearningModeObjectInformation @ 0x140104B40 (SeClearLearningModeObjectInformation.c)
 *     ObFastDereferenceObject @ 0x140105100 (ObFastDereferenceObject.c)
 *     SepDeleteAccessState @ 0x140105150 (SepDeleteAccessState.c)
 *     ObFastReferenceObject @ 0x1401051D0 (ObFastReferenceObject.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x1401052E0 (SepCreateAccessStateFromSubjectContext.c)
 *     SeSetLearningModeObjectInformation @ 0x140105410 (SeSetLearningModeObjectInformation.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401B2BD0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401B2C10 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     RtlValidSecurityDescriptor @ 0x1404C1B80 (RtlValidSecurityDescriptor.c)
 *     SeReleaseSecurityDescriptor @ 0x1404C8E50 (SeReleaseSecurityDescriptor.c)
 *     ObpDeleteNameCheck @ 0x140519A30 (ObpDeleteNameCheck.c)
 *     SeObjectCreateSaclAccessBits @ 0x14056845C (SeObjectCreateSaclAccessBits.c)
 *     ObpLookupObjectName @ 0x1405A5B90 (ObpLookupObjectName.c)
 *     ObpCreateHandle @ 0x1405AB660 (ObpCreateHandle.c)
 *     ObpCaptureObjectCreateInformation @ 0x1405ACE00 (ObpCaptureObjectCreateInformation.c)
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
  int *v15; // r15
  int Information; // esi
  struct _KTHREAD *CurrentThread; // rsi
  signed __int64 *p_Lock; // r14
  void *v19; // r15
  _QWORD *v20; // r15
  ULONG_PTR v21; // rsi
  _SLIST_ENTRY *Next; // rsi
  _SLIST_ENTRY *v23; // r14
  __int64 v24; // r8
  __int64 v25; // r9
  void *v26; // rcx
  void *v27; // r15
  __int64 v28; // r14
  __int64 v29; // rdx
  void *v30; // rcx
  struct _KPRCB *v31; // r8
  _GENERAL_LOOKASIDE *v32; // rcx
  int v33; // r14d
  __int64 v34; // r14
  void *v35; // rcx
  _SLIST_ENTRY *v36; // rcx
  _SLIST_ENTRY *v37; // r8
  struct _KPRCB *v38; // rdx
  _GENERAL_LOOKASIDE *v39; // rcx
  struct _KPRCB *v40; // rdx
  _GENERAL_LOOKASIDE *v41; // rcx
  _SLIST_ENTRY *v43; // rcx
  __int64 v44; // r15
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
  __int64 v55; // [rsp+78h] [rbp-90h] BYREF
  signed __int64 *p_WaitBlockList; // [rsp+80h] [rbp-88h]
  struct _KTHREAD *v57; // [rsp+88h] [rbp-80h]
  __int64 v58; // [rsp+90h] [rbp-78h] BYREF
  __int64 v59; // [rsp+98h] [rbp-70h]
  __m128i v60; // [rsp+A0h] [rbp-68h] BYREF
  unsigned __int64 v61; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v62; // [rsp+B8h] [rbp-50h] BYREF
  ULONG_PTR v63; // [rsp+C8h] [rbp-40h]
  signed __int64 v64; // [rsp+D0h] [rbp-38h]
  char v65[16]; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v66; // [rsp+E8h] [rbp-20h]
  __m128i *v67; // [rsp+F0h] [rbp-18h]
  __int64 v68; // [rsp+F8h] [rbp-10h]
  unsigned int v69; // [rsp+148h] [rbp+40h]

  v8 = a1;
  v59 = 0LL;
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
    v69 = 1;
    Information = ObpCaptureObjectCreateInformation(a3, a3, v8, (unsigned int)&v60, (__int64)&v14[10], 1);
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
      v41 = v53;
      goto LABEL_47;
    }
    if ( !a4 )
    {
      CurrentThread = KeGetCurrentThread();
      p_Lock = (signed __int64 *)&CurrentThread->ApcState.Process->Header.Lock;
      v64 = p_Lock[92];
      if ( CurrentThread )
      {
        if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
        {
          v57 = KeGetCurrentThread();
          --v57->KernelApcDisable;
          p_WaitBlockList = (signed __int64 *)&CurrentThread[1].WaitBlockList;
          ExAcquirePushLockSharedEx((ULONG_PTR)&CurrentThread[1].WaitBlockList, 0LL);
          if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
          {
            v19 = (void *)(*(_QWORD *)((char *)&CurrentThread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
            ObfReferenceObject(v19);
            DWORD2(v62) = *((_DWORD *)&CurrentThread[1].0 + 1) & 3;
          }
          else
          {
            v19 = 0LL;
          }
          if ( _InterlockedCompareExchange64(p_WaitBlockList, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared(p_WaitBlockList);
          KeAbPostRelease((ULONG_PTR)p_WaitBlockList);
          KeLeaveCriticalRegionThread((__int64)v57);
        }
        else
        {
          v19 = 0LL;
        }
        *(_QWORD *)&v62 = v19;
      }
      else
      {
        *(_QWORD *)&v62 = 0LL;
      }
      v20 = p_Lock + 107;
      v21 = ObFastReferenceObject(p_Lock + 107);
      if ( !v21 )
      {
        v57 = KeGetCurrentThread();
        --v57->KernelApcDisable;
        v50 = p_Lock + 91;
        ExAcquirePushLockSharedEx((ULONG_PTR)v50, 0LL);
        v21 = ObFastReferenceObjectLocked(v20);
        if ( _InterlockedCompareExchange64(v50, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v50);
        KeAbPostRelease((ULONG_PTR)v50);
        KeLeaveCriticalRegionThread((__int64)v57);
      }
      v63 = v21;
      if ( SeTokenLeakTracking )
      {
        if ( v21 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v21 + 1144) + 284LL));
          if ( v21 == SepTokenLeakToken )
            __debugbreak();
        }
        if ( (_QWORD)v62 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v62 + 1144) + 284LL));
          if ( (_QWORD)v62 == SepTokenLeakToken )
            __debugbreak();
        }
      }
      Information = SepCreateAccessStateFromSubjectContext(
                      &v62,
                      (int *)v14,
                      &v14[14].Next,
                      a5,
                      (PGENERIC_MAPPING)(a2 + 76));
      if ( Information < 0 )
        goto LABEL_35;
      a4 = (__int64)v14;
      v15 = (int *)&v14[10];
    }
    Next = v14[12].Next;
    if ( Next )
      *(_QWORD *)(a4 + 64) = Next;
    else
      Next = *(_SLIST_ENTRY **)(a4 + 64);
    if ( Next )
    {
      if ( !RtlValidSecurityDescriptor(Next) )
      {
        Information = -1073741703;
        goto LABEL_35;
      }
      if ( (BYTE2(Next->Next) & 0x10) != 0 && (*(_DWORD *)(a4 + 20) & 0x1000000) == 0 )
        *(_DWORD *)(a4 + 16) |= SeObjectCreateSaclAccessBits(Next);
    }
    v23 = v14 + 28;
    Information = ObpLookupObjectName(
                    *((_QWORD *)&v14[10].Next + 1),
                    &v60,
                    *v15,
                    a2,
                    a3,
                    a6,
                    *((_QWORD *)&v14[12].Next + 1),
                    0LL,
                    a7,
                    (struct _ACCESS_STATE *)a4,
                    (__int64)&v14[28],
                    (int *)&v55,
                    &v58);
    if ( Information >= 0 )
    {
      if ( *((_BYTE *)&v14[29].Next + 14) )
      {
        v44 = *((_QWORD *)&v14[28].Next + 1) - 48LL;
        v59 = v44;
        ObfReferenceObject((PVOID)(v44 + 48));
        _InterlockedIncrement((volatile signed __int32 *)(v44 - ObpInfoMaskToOffset[*(_BYTE *)(v44 + 26) & 3] + 24));
      }
      if ( *((_BYTE *)&v14[29].Next + 14) )
      {
        ExReleasePushLockEx((ULONG_PTR)(&v23->Next[18].Next + 1), 0LL, v24, v25);
        v43 = v23->Next;
        LODWORD(v14[30].Next) = -286387660;
        ObfDereferenceObject(v43);
        v23->Next = 0LL;
        *((_WORD *)&v14[29].Next + 7) = 0;
        KeLeaveCriticalRegion();
      }
      v26 = (void *)*((_QWORD *)&v14[28].Next + 1);
      if ( v26 )
      {
        ObfDereferenceObject(v26);
        LODWORD(v26) = 0;
        *((_QWORD *)&v14[28].Next + 1) = 0LL;
      }
      v27 = (void *)v58;
      v28 = v58 - 48;
      if ( (*(_BYTE *)(v58 - 21) & 1) != 0 )
      {
        v29 = *(_QWORD *)(v28 + 32);
        v69 = (unsigned int)v26;
        if ( v29 )
        {
          v30 = *(void **)(v29 + 32);
          if ( v30 )
          {
            SeReleaseSecurityDescriptor(v30, *(_BYTE *)(v29 + 16), 1);
            *(_QWORD *)(*(_QWORD *)(v28 + 32) + 32LL) = 0LL;
            v29 = *(_QWORD *)(v28 + 32);
          }
          v31 = KeGetCurrentPrcb();
          v32 = v31->PPLookasideList[4].P;
          ++v32->TotalFrees;
          if ( LOWORD(v32->ListHead.Alignment) < v32->Depth
            || (++v32->FreeMisses,
                v32 = v31->PPLookasideList[4].L,
                ++v32->TotalFrees,
                LOWORD(v32->ListHead.Alignment) < v32->Depth) )
          {
            RtlpInterlockedPushEntrySList(&v32->ListHead, (PSLIST_ENTRY)v29);
          }
          else
          {
            ++v32->FreeMisses;
            ((void (__fastcall *)(__int64))v32->FreeEx)(v29);
          }
          *(_QWORD *)(v28 + 32) = 0LL;
          v27 = (void *)v58;
        }
      }
      if ( (*(_DWORD *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v28 + 24) ^ (unsigned __int64)BYTE1(v28)]
                      + 72) & (__int64)v14[10].Next) != 0 )
      {
        PsDereferenceSiloContext(v27);
        Information = -1073741811;
      }
      else
      {
        v67 = &v60;
        v66 = a2 + 16;
        v68 = *((_QWORD *)&v14[10].Next + 1);
        SeSetLearningModeObjectInformation((__int64)v65);
        v33 = ObpCreateHandle(v69, (char *)v27, 0, a4, 0, (unsigned int)v14[10].Next, a3, 0LL, v55, 0LL, &v61);
        if ( v33 < 0 )
        {
          PsDereferenceSiloContext(v27);
          Information = v33;
        }
        else
        {
          *a8 = v61;
        }
      }
      v34 = v59;
      if ( v59 )
      {
        if ( _InterlockedExchangeAdd(
               (volatile signed __int32 *)(v59 - ObpInfoMaskToOffset[*(_BYTE *)(v59 + 26) & 3] + 24),
               0xFFFFFFFF) == 1 )
          ObpDeleteNameCheck(v34);
        ObfDereferenceObject((PVOID)(v34 + 48));
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
      v35 = *(void **)(a4 + 32);
      *(_QWORD *)(a4 + 48) = 0LL;
      if ( v35 )
        ObfDereferenceObject(v35);
      *(_QWORD *)(a4 + 32) = 0LL;
    }
    v36 = v14[12].Next;
    if ( v36 )
    {
      SeReleaseSecurityDescriptor(v36, (char)v14[11].Next, 1);
      v14[12].Next = 0LL;
    }
    v37 = (_SLIST_ENTRY *)v60.m128i_i64[1];
    if ( v60.m128i_i64[1] )
    {
      if ( v60.m128i_i16[1] == 248 )
      {
        v38 = KeGetCurrentPrcb();
        v39 = v38->PPLookasideList[5].P;
        ++v39->TotalFrees;
        if ( LOWORD(v39->ListHead.Alignment) < v39->Depth
          || (++v39->FreeMisses,
              v39 = v38->PPLookasideList[5].L,
              ++v39->TotalFrees,
              LOWORD(v39->ListHead.Alignment) < v39->Depth) )
        {
          RtlpInterlockedPushEntrySList(&v39->ListHead, v37);
        }
        else
        {
          ++v39->FreeMisses;
          ((void (__fastcall *)(_SLIST_ENTRY *))v39->FreeEx)(v37);
        }
      }
      else
      {
        ExFreePoolWithTag((PVOID)v60.m128i_i64[1], 0);
      }
    }
    SeClearLearningModeObjectInformation();
    v40 = KeGetCurrentPrcb();
    v41 = v40->PPLookasideList[8].P;
    ++v41->TotalFrees;
    if ( LOWORD(v41->ListHead.Alignment) >= v41->Depth )
    {
      ++v41->FreeMisses;
      v41 = v40->PPLookasideList[8].L;
      ++v41->TotalFrees;
      if ( LOWORD(v41->ListHead.Alignment) >= v41->Depth )
      {
        ++v41->FreeMisses;
        ((void (__fastcall *)(PSLIST_ENTRY))v41->FreeEx)(v14);
        return (unsigned int)Information;
      }
    }
LABEL_47:
    RtlpInterlockedPushEntrySList(&v41->ListHead, v14);
    return (unsigned int)Information;
  }
  return 3221225485LL;
}
