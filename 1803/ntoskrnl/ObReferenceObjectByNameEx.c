/*
 * XREFs of ObReferenceObjectByNameEx @ 0x1404DE1F0
 * Callers:
 *     NtNotifyChangeMultipleKeys @ 0x1404A26F0 (NtNotifyChangeMultipleKeys.c)
 *     AlpcpCreateClientPort @ 0x1404DC5A8 (AlpcpCreateClientPort.c)
 *     CmUnloadKey @ 0x14054CB34 (CmUnloadKey.c)
 *     NtQueryOpenSubKeysEx @ 0x1405ED870 (NtQueryOpenSubKeysEx.c)
 *     ObInitServerSilo @ 0x140620A04 (ObInitServerSilo.c)
 *     NtQueryOpenSubKeys @ 0x1406EC1AC (NtQueryOpenSubKeys.c)
 *     CmpResolveHiveLoadConflict @ 0x1406F2EDC (CmpResolveHiveLoadConflict.c)
 * Callees:
 *     ObpReleaseLookupContext @ 0x1400610F8 (ObpReleaseLookupContext.c)
 *     PsDereferenceSiloContext @ 0x1400C5610 (PsDereferenceSiloContext.c)
 *     SeClearLearningModeObjectInformation @ 0x140104B40 (SeClearLearningModeObjectInformation.c)
 *     SepDeleteAccessState @ 0x140105150 (SepDeleteAccessState.c)
 *     SeSetLearningModeObjectInformation @ 0x140105410 (SeSetLearningModeObjectInformation.c)
 *     PsGetCurrentSilo @ 0x140105440 (PsGetCurrentSilo.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401B2BD0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401B2C10 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     ObpCheckObjectReference @ 0x1404C05AC (ObpCheckObjectReference.c)
 *     SeReleaseSecurityDescriptor @ 0x1404C8E50 (SeReleaseSecurityDescriptor.c)
 *     ObpFreeObjectNameBuffer @ 0x1404D2B80 (ObpFreeObjectNameBuffer.c)
 *     SeCreateAccessState @ 0x1404D2BF0 (SeCreateAccessState.c)
 *     ObpAdjustAccessMask @ 0x1404DE4C0 (ObpAdjustAccessMask.c)
 *     ObpLookupObjectName @ 0x1405A5B90 (ObpLookupObjectName.c)
 *     ObpCaptureObjectCreateInformation @ 0x1405ACE00 (ObpCaptureObjectCreateInformation.c)
 *     SeReleaseSubjectContext @ 0x1405AD310 (SeReleaseSubjectContext.c)
 */

__int64 __fastcall ObReferenceObjectByNameEx(
        __int64 a1,
        __int64 a2,
        ACCESS_MASK a3,
        __int64 a4,
        char a5,
        __int64 a6,
        _QWORD *a7)
{
  struct _SECURITY_SUBJECT_CONTEXT *v7; // rsi
  int v9; // r12d
  struct _KPRCB *CurrentPrcb; // r15
  _GENERAL_LOOKASIDE *P; // rdi
  int v12; // edx
  int v13; // ecx
  PSLIST_ENTRY v14; // rbx
  unsigned int Number; // eax
  char v16; // r15
  unsigned __int64 CurrentSilo; // rax
  void *v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // r9
  BOOLEAN v21; // r8
  _SLIST_ENTRY *Next; // rcx
  struct _KPRCB *v23; // rdx
  _GENERAL_LOOKASIDE *v24; // rcx
  _GENERAL_LOOKASIDE *L; // rdi
  __int64 Size; // rdx
  void *(__fastcall *AllocateEx)(_POOL_TYPE, unsigned __int64, unsigned int, _LOOKASIDE_LIST_EX *); // rax
  __int64 Tag; // r8
  __int64 Type; // rcx
  struct _KPRCB *v31; // rdx
  char v32[8]; // [rsp+78h] [rbp-41h] BYREF
  __int64 v33; // [rsp+80h] [rbp-39h]
  char v34[16]; // [rsp+88h] [rbp-31h] BYREF
  __int64 v35; // [rsp+98h] [rbp-21h]
  char *v36; // [rsp+A0h] [rbp-19h]
  __int64 v37; // [rsp+A8h] [rbp-11h]
  __int64 v38; // [rsp+108h] [rbp+4Fh] BYREF
  __int64 v39; // [rsp+110h] [rbp+57h] BYREF
  ACCESS_MASK v40; // [rsp+118h] [rbp+5Fh]

  v40 = a3;
  v39 = a2;
  v7 = 0LL;
  v9 = a1;
  if ( a1 && a4 )
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
    Number = CurrentPrcb->Number;
    v16 = a5;
    LODWORD(v14->Next) = Number;
    LOBYTE(v12) = v16;
    LOBYTE(v13) = v16;
    LODWORD(v39) = ObpCaptureObjectCreateInformation(v13, v12, v9, (unsigned int)v32, (__int64)&v14[10], 1);
    if ( (int)v39 < 0 )
    {
      v31 = KeGetCurrentPrcb();
      v24 = v31->PPLookasideList[8].P;
      ++v24->TotalFrees;
      if ( LOWORD(v24->ListHead.Alignment) >= v24->Depth )
      {
        ++v24->FreeMisses;
        v24 = v31->PPLookasideList[8].L;
        ++v24->TotalFrees;
        if ( LOWORD(v24->ListHead.Alignment) >= v24->Depth )
        {
          ++v24->FreeMisses;
          goto LABEL_26;
        }
      }
LABEL_19:
      RtlpInterlockedPushEntrySList(&v24->ListHead, v14);
      return (unsigned int)v39;
    }
    LODWORD(v39) = SeCreateAccessState((int *)v14, &v14[14].Next, v40, (GENERIC_MAPPING *)(a4 + 76));
    if ( (int)v39 >= 0 )
    {
      v7 = (struct _SECURITY_SUBJECT_CONTEXT *)v14;
      LODWORD(v39) = ObpAdjustAccessMask(v14);
      if ( (int)v39 >= 0 )
      {
        CurrentSilo = PsGetCurrentSilo();
        LODWORD(v39) = ObpLookupObjectName(
                         *((_QWORD *)&v14[10].Next + 1),
                         v16,
                         a6,
                         0LL,
                         0LL,
                         CurrentSilo,
                         (__int64)v14,
                         (__int64)&v14[28],
                         0LL,
                         (__int64)&v38);
        if ( (int)v39 >= 0 )
        {
          ObpReleaseLookupContext((__int64)&v14[28]);
          v18 = (void *)v38;
          v19 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v38 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(v38 - 48) >> 8)];
          if ( (*(_DWORD *)(v19 + 72) & (__int64)v14[10].Next) == 0 )
          {
            v35 = v19 + 16;
            v36 = v32;
            v37 = *((_QWORD *)&v14[10].Next + 1);
            SeSetLearningModeObjectInformation((__int64)v34);
            LOBYTE(v20) = v16;
            if ( ObpCheckObjectReference((__int64)v18, (__int64)v14, v21, v20, (PNTSTATUS)&v39) )
              *a7 = v18;
            else
              PsDereferenceSiloContext(v18);
            SeClearLearningModeObjectInformation();
            goto LABEL_12;
          }
          PsDereferenceSiloContext((void *)v38);
          LODWORD(v39) = -1073741811;
        }
      }
LABEL_13:
      SepDeleteAccessState((__int64)v7);
      SeReleaseSubjectContext(v7 + 1);
LABEL_14:
      Next = v14[12].Next;
      if ( Next )
      {
        SeReleaseSecurityDescriptor(Next, (char)v14[11].Next, 1);
        v14[12].Next = 0LL;
      }
      if ( v33 )
        ObpFreeObjectNameBuffer((__int64)v32);
      v23 = KeGetCurrentPrcb();
      v24 = v23->PPLookasideList[8].P;
      ++v24->TotalFrees;
      if ( LOWORD(v24->ListHead.Alignment) >= v24->Depth )
      {
        ++v24->FreeMisses;
        v24 = v23->PPLookasideList[8].L;
        ++v24->TotalFrees;
        if ( LOWORD(v24->ListHead.Alignment) >= v24->Depth )
        {
          ++v24->FreeMisses;
LABEL_26:
          ((void (__fastcall *)(PSLIST_ENTRY))v24->FreeEx)(v14);
          return (unsigned int)v39;
        }
      }
      goto LABEL_19;
    }
LABEL_12:
    if ( v7 != (struct _SECURITY_SUBJECT_CONTEXT *)v14 )
      goto LABEL_14;
    goto LABEL_13;
  }
  return 3221225485LL;
}
