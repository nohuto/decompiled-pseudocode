/*
 * XREFs of IopCreateFile @ 0x14053C790
 * Callers:
 *     IoCreateFileEx @ 0x14053C540 (IoCreateFileEx.c)
 *     NtOpenFile @ 0x14053C690 (NtOpenFile.c)
 *     NtCreateFile @ 0x14053C700 (NtCreateFile.c)
 *     IoCreateFile @ 0x140583760 (IoCreateFile.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140060B70 (ExAllocatePoolWithQuotaTag.c)
 *     PsGetCurrentSilo @ 0x1400817D0 (PsGetCurrentSilo.c)
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     RtlRaiseStatus @ 0x1400D9BF0 (RtlRaiseStatus.c)
 *     ExFreeToNPagedLookasideList @ 0x1400E53C4 (ExFreeToNPagedLookasideList.c)
 *     RtlpInterlockedPopEntrySList @ 0x140188F70 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140188FB0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     ObOpenObjectByNameEx @ 0x1404AC5A0 (ObOpenObjectByNameEx.c)
 *     IopCloseFile @ 0x1404BAD60 (IopCloseFile.c)
 *     FsRtlFindExtraCreateParameter @ 0x1404BB2B0 (FsRtlFindExtraCreateParameter.c)
 *     ObCloseHandle @ 0x1404D4BB0 (ObCloseHandle.c)
 *     FsRtlFreeExtraCreateParameter @ 0x14053D630 (FsRtlFreeExtraCreateParameter.c)
 *     IoCheckEaBufferValidity @ 0x14053D6F0 (IoCheckEaBufferValidity.c)
 *     FsRtlIsEcpFromUserMode @ 0x140575AF0 (FsRtlIsEcpFromUserMode.c)
 *     ExRaiseDatatypeMisalignment @ 0x14075EBC0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall IopCreateFile(
        HANDLE *a1,
        ACCESS_MASK a2,
        __int64 a3,
        int *a4,
        HANDLE *a5,
        int a6,
        int a7,
        unsigned int a8,
        int a9,
        char *Src,
        SIZE_T NumberOfBytes,
        int a12,
        _SLIST_ENTRY *a13,
        int a14,
        int a15,
        __int16 *a16)
{
  ACCESS_MASK v16; // r12d
  int v17; // r14d
  char PreviousMode; // r13
  struct _KPRCB *CurrentPrcb; // rsi
  _GENERAL_LOOKASIDE *P; // rbx
  PSLIST_ENTRY v21; // rdi
  _GENERAL_LOOKASIDE *L; // rbx
  int v23; // eax
  _SLIST_ENTRY *v24; // r13
  struct _KPRCB *v25; // rdx
  _GENERAL_LOOKASIDE *v26; // rcx
  struct _KPRCB *v28; // rdx
  _GENERAL_LOOKASIDE *v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  HANDLE v32; // rbx
  PVOID PoolWithQuotaTag; // rax
  int v34; // eax
  int *v35; // r15
  PVOID PoolWithTag; // rax
  struct _KPRCB *v37; // rdx
  _GENERAL_LOOKASIDE *v38; // rcx
  NTSTATUS v39; // esi
  struct _KPRCB *v40; // rdx
  _GENERAL_LOOKASIDE *v41; // rcx
  unsigned __int8 v42; // bl
  size_t v43; // r8
  struct _KTHREAD *CurrentThread; // rax
  struct _ECP_LIST *v45; // rcx
  int ExtraCreateParameter; // r14d
  _DWORD *v47; // rbx
  bool v48; // zf
  void *v49; // rcx
  __int64 v50; // r13
  __int64 **v51; // rsi
  __int64 *v52; // rax
  __int64 v53; // rcx
  _QWORD *v54; // r15
  void (__fastcall *v55)(_QWORD *, _QWORD *); // rax
  __int64 v56; // rcx
  __int64 *v57; // rbx
  __int64 *v58; // rcx
  _QWORD *v59; // rax
  __int64 v60; // r8
  _QWORD *v61; // rdx
  int Next; // ebx
  int v63; // ecx
  __int64 v64; // rcx
  unsigned __int64 v65; // rcx
  __int64 v66; // rax
  void *v67; // rcx
  unsigned int v68; // [rsp+44h] [rbp-64h]
  KPROCESSOR_MODE v69; // [rsp+48h] [rbp-60h]
  HANDLE Handle; // [rsp+58h] [rbp-50h] BYREF
  PVOID EcpContext; // [rsp+60h] [rbp-48h] BYREF

  v16 = a2;
  v17 = a9;
  v68 = 0;
  EcpContext = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (a14 & 0x100) != 0 )
    PreviousMode = 0;
  v69 = PreviousMode;
  CurrentPrcb = KeGetCurrentPrcb();
  P = CurrentPrcb->PPLookasideList[8].P;
  ++P->TotalAllocates;
  v21 = RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( !v21 )
  {
    ++P->AllocateMisses;
    L = CurrentPrcb->PPLookasideList[8].L;
    ++L->TotalAllocates;
    v21 = RtlpInterlockedPopEntrySList(&L->ListHead);
    if ( !v21 )
    {
      ++L->AllocateMisses;
      v21 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))L->AllocateEx)(
                            (unsigned int)L->Type,
                            L->Size,
                            L->Tag);
    }
  }
  if ( !v21 )
    return 3221225626LL;
  LODWORD(v21->Next) = CurrentPrcb->Number;
  if ( !PreviousMode )
  {
    v23 = a14;
    if ( (a14 & 0x200) == 0 )
    {
      v24 = a13;
LABEL_53:
      if ( v69 )
      {
        *((_QWORD *)&v21[4].Next + 1) = 0LL;
        v30 = 0x7FFFFFFF0000LL;
        if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
          v30 = (__int64)a1;
        *(_QWORD *)v30 = *(_QWORD *)v30;
        v31 = 0x7FFFFFFF0000LL;
        if ( (unsigned __int64)a4 < 0x7FFFFFFF0000LL )
          v31 = (__int64)a4;
        *(_DWORD *)v31 = *(_DWORD *)v31;
        if ( a5 )
        {
          if ( ((unsigned __int8)a5 & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          v32 = *a5;
          Handle = v32;
          if ( (__int64)v32 < 0 )
            RtlRaiseStatus(-1073741811);
        }
        else
        {
          v32 = 0LL;
          Handle = 0LL;
        }
        if ( Src && (_DWORD)NumberOfBytes )
        {
          if ( ((unsigned __int8)Src & 3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( (unsigned __int64)&Src[(unsigned int)NumberOfBytes] > 0x7FFFFFFF0000LL
            || &Src[(unsigned int)NumberOfBytes] < Src )
          {
            MEMORY[0x7FFFFFFF0000] = 0;
          }
          PoolWithQuotaTag = ExAllocatePoolWithQuotaTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x61456F49u);
          *((_QWORD *)&v21[4].Next + 1) = PoolWithQuotaTag;
          LODWORD(v21[5].Next) = NumberOfBytes;
          memmove(PoolWithQuotaTag, Src, (unsigned int)NumberOfBytes);
          v34 = IoCheckEaBufferValidity(*((PFILE_FULL_EA_INFORMATION *)&v21[4].Next + 1), NumberOfBytes, (PULONG)a4 + 2);
          v68 = v34;
          if ( v34 < 0 )
          {
            *a4 = v34;
            RtlRaiseStatus(v34);
          }
          v35 = a4;
LABEL_96:
          v16 = a2;
LABEL_97:
          LODWORD(v21->Next) = 14155784;
          LODWORD(v21[2].Next) = 0;
          *((_QWORD *)&v21[1].Next + 1) = 0LL;
          *((_QWORD *)&v21[3].Next + 1) = v32;
          LODWORD(v21[4].Next) = v17;
          WORD2(v21[4].Next) = a6;
          HIWORD(v21[4].Next) = a7;
          *((_DWORD *)&v21[5].Next + 2) = a8;
          *((_WORD *)&v21[8].Next + 4) = 0;
          *((_BYTE *)&v21[8].Next + 10) = 0;
          HIDWORD(v21[5].Next) = a14;
          *((_QWORD *)&v21[2].Next + 1) = 0LL;
          v21[3].Next = (_SLIST_ENTRY *)a3;
          *((_DWORD *)&v21[7].Next + 2) = a12;
          v21[8].Next = v24;
          *((_DWORD *)&v21[9].Next + 2) = a15;
          v42 = v69;
          *((_BYTE *)&v21[9].Next + 12) = v69;
          v21[10].Next = 0LL;
          *((_QWORD *)&v21[10].Next + 1) = 0LL;
          v21[11].Next = 0LL;
          *((_QWORD *)&v21[11].Next + 1) = 0LL;
          LOWORD(v21[10].Next) = 40;
          v21[12].Next = (_SLIST_ENTRY *)1;
          if ( a16 )
          {
            v43 = *a16;
            if ( v43 > 0x28 )
              v43 = 40LL;
            memmove(&v21[10], a16, v43);
          }
          if ( v21[12].Next == (_SLIST_ENTRY *)1 )
            v21[12].Next = (_SLIST_ENTRY *)PsGetCurrentSilo();
          LODWORD(v21[1].Next) = 0;
          *((_QWORD *)&v21->Next + 1) = 0LL;
          CurrentThread = KeGetCurrentThread();
          ++CurrentThread->OtherOperationCount;
          __incgsdword(0x2EE4u);
          v45 = (struct _ECP_LIST *)*((_QWORD *)&v21[10].Next + 1);
          if ( v45 )
          {
            ExtraCreateParameter = FsRtlFindExtraCreateParameter(v45, &GUID_ECP_FILTER_DEVICE_TYPE, &EcpContext, 0LL);
            v68 = ExtraCreateParameter;
            if ( ExtraCreateParameter >= 0 )
            {
              v47 = EcpContext;
              if ( FsRtlIsEcpFromUserMode(EcpContext) )
              {
                ExtraCreateParameter = -1073740011;
                v68 = -1073740011;
                LODWORD(v21[1].Next) = -1073740011;
              }
              v48 = *v47 == 0;
              v42 = v69;
              if ( v48 )
              {
                *((_DWORD *)&v21[9].Next + 2) |= 0x10u;
                *((_QWORD *)&v21[1].Next + 1) = 2684354563LL;
              }
            }
          }
          else
          {
            ExtraCreateParameter = v68;
          }
          if ( SLODWORD(v21[1].Next) >= 0 )
          {
            ExtraCreateParameter = ObOpenObjectByNameEx(
                                     a3,
                                     (__int64)IoFileObjectType,
                                     v42,
                                     0LL,
                                     v16,
                                     (__int64)v21,
                                     (__int64)v21[12].Next,
                                     &Handle);
            v68 = ExtraCreateParameter;
          }
          v49 = (void *)*((_QWORD *)&v21[4].Next + 1);
          if ( v49 )
            ExFreePoolWithTag(v49, 0);
          v50 = *((_QWORD *)&v21[10].Next + 1);
          if ( v50 )
          {
            v51 = (__int64 **)(v50 + 8);
            if ( (*(_DWORD *)(v50 + 4) & 1) != 0 )
            {
              v57 = *v51;
              while ( v57 != (__int64 *)v51 )
              {
                v58 = v57 - 1;
                v57 = (__int64 *)*v57;
                if ( (v58[6] & 1) == 0 )
                {
                  v59 = v58 + 1;
                  v60 = v58[1];
                  v61 = (_QWORD *)v58[2];
                  if ( *(__int64 **)(v60 + 8) != v58 + 1 || (_QWORD *)*v61 != v59 )
                    __fastfail(3u);
                  *v61 = v60;
                  *(_QWORD *)(v60 + 8) = v61;
                  v58[2] = 0LL;
                  *v59 = 0LL;
                  FsRtlFreeExtraCreateParameter(v58 + 9);
                }
              }
            }
            else
            {
              while ( *v51 != (__int64 *)v51 )
              {
                v52 = *v51;
                v53 = **v51;
                if ( (__int64 **)(*v51)[1] != v51 || *(__int64 **)(v53 + 8) != v52 )
                  __fastfail(3u);
                *v51 = (__int64 *)v53;
                *(_QWORD *)(v53 + 8) = v51;
                v52[1] = 0LL;
                *v52 = 0LL;
                v54 = v52 + 8;
                v55 = (void (__fastcall *)(_QWORD *, _QWORD *))v52[4];
                if ( v55 )
                  v55(v54, v54 - 6);
                if ( (*(_DWORD *)(v54 - 3) & 0x20) != 0 && FltMgrCallbacks )
                  (*(void (__fastcall **)(_QWORD, _QWORD *))FltMgrCallbacks)(*(v54 - 1), v54);
                v56 = *(v54 - 2);
                if ( v56 )
                {
                  if ( (*(_DWORD *)(v54 - 3) & 0x40) != 0 )
                  {
                    ExFreeToNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)v56, v54 - 9);
                  }
                  else
                  {
                    ++*(_DWORD *)(v56 + 28);
                    if ( *(_WORD *)v56 < *(_WORD *)(v56 + 16) )
                    {
                      RtlpInterlockedPushEntrySList((PSLIST_HEADER)v56, (PSLIST_ENTRY)(v54 - 9));
                    }
                    else
                    {
                      ++*(_DWORD *)(v56 + 32);
                      (*(void (__fastcall **)(_QWORD *))(v56 + 56))(v54 - 9);
                    }
                  }
                }
                else
                {
                  ExFreePoolWithTag(v54 - 9, 0);
                }
              }
              if ( (*(_DWORD *)(v50 + 4) & 4) != 0 )
              {
                ++dword_14038D99C;
                if ( LOWORD(FsRtlEcpListLookaside.Alignment) < (unsigned __int16)word_14038D990 )
                {
                  RtlpInterlockedPushEntrySList(&FsRtlEcpListLookaside, (PSLIST_ENTRY)v50);
                }
                else
                {
                  ++dword_14038D9A0;
                  ((void (__fastcall *)(__int64))qword_14038D9B8)(v50);
                }
              }
              else
              {
                ExFreePoolWithTag((PVOID)v50, 0);
              }
              *((_QWORD *)&v21[10].Next + 1) = 0LL;
              v35 = a4;
            }
          }
          Next = (int)v21[2].Next;
          if ( ExtraCreateParameter >= 0 )
          {
            if ( Next == -1096154543 )
            {
              *(_DWORD *)(*((_QWORD *)&v21->Next + 1) + 80LL) |= 0x40000u;
              *(_DWORD *)(*((_QWORD *)&v21->Next + 1) + 80LL) &= ~0x2000000u;
              *a1 = Handle;
              *((_QWORD *)v35 + 1) = *((_QWORD *)&v21[1].Next + 1);
              *v35 = (int)v21[1].Next;
              v68 = (unsigned int)v21[1].Next;
LABEL_166:
              if ( Next == -1096154543 )
              {
                v67 = (void *)*((_QWORD *)&v21->Next + 1);
                if ( v67 )
                  ObfDereferenceObject(v67);
              }
              goto LABEL_91;
            }
            ObCloseHandle(Handle, v69);
            ExtraCreateParameter = -1073741788;
            v68 = -1073741788;
          }
          v63 = (int)v21[1].Next;
          if ( v63 >= 0 )
          {
            v64 = *((_QWORD *)&v21->Next + 1);
            if ( v64 )
            {
              if ( Next == -1096154543 )
              {
                if ( (*(_DWORD *)(v64 + 80) & 0x40000) == 0 )
                  IopCloseFile(0LL, *((struct _FILE_OBJECT **)&v21->Next + 1), 1LL, 1LL);
              }
              else
              {
                if ( *(_WORD *)(v64 + 88) )
                  ExFreePoolWithTag(*(PVOID *)(v64 + 96), 0);
                *(_QWORD *)(*((_QWORD *)&v21->Next + 1) + 8LL) = 0LL;
                ObfDereferenceObject(*((PVOID *)&v21->Next + 1));
              }
            }
          }
          else
          {
            ExtraCreateParameter = (int)v21[1].Next;
            v68 = ExtraCreateParameter;
            if ( (v63 & 0xC0000000) == 0x80000000 || v63 == -1073741191 )
            {
              *v35 = v63;
              *((_QWORD *)v35 + 1) = *((_QWORD *)&v21[1].Next + 1);
            }
          }
          if ( ExtraCreateParameter == -1073741772 )
          {
            v65 = *((_QWORD *)&v21[1].Next + 1) - 2684354563LL;
            if ( v65 <= 0x16 )
            {
              v66 = 4194817LL;
              if ( _bittest64(&v66, v65) )
                v68 = -1073741184;
            }
          }
          goto LABEL_166;
        }
LABEL_74:
        *((_QWORD *)&v21[4].Next + 1) = 0LL;
        LODWORD(v21[5].Next) = 0;
        v35 = a4;
        goto LABEL_97;
      }
      if ( a9 < 0 )
      {
        a14 = v23 | 0x400;
        v17 = a9 & 0x7FFFFFFF;
      }
      if ( !a5 )
      {
        v32 = 0LL;
        Handle = 0LL;
LABEL_81:
        if ( !Src || !(_DWORD)NumberOfBytes )
          goto LABEL_74;
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x61456F49u);
        *((_QWORD *)&v21[4].Next + 1) = PoolWithTag;
        if ( PoolWithTag )
        {
          LODWORD(v21[5].Next) = NumberOfBytes;
          memmove(PoolWithTag, Src, (unsigned int)NumberOfBytes);
          v35 = a4;
          v39 = IoCheckEaBufferValidity(*((PFILE_FULL_EA_INFORMATION *)&v21[4].Next + 1), NumberOfBytes, (PULONG)a4 + 2);
          v68 = v39;
          if ( v39 < 0 )
          {
            ExFreePoolWithTag(*((PVOID *)&v21[4].Next + 1), 0);
            *a4 = v39;
LABEL_91:
            v40 = KeGetCurrentPrcb();
            v41 = v40->PPLookasideList[8].P;
            ++v41->TotalFrees;
            if ( LOWORD(v41->ListHead.Alignment) < v41->Depth
              || (++v41->FreeMisses,
                  v41 = v40->PPLookasideList[8].L,
                  ++v41->TotalFrees,
                  LOWORD(v41->ListHead.Alignment) < v41->Depth) )
            {
              RtlpInterlockedPushEntrySList(&v41->ListHead, v21);
            }
            else
            {
              ++v41->FreeMisses;
              ((void (__fastcall *)(PSLIST_ENTRY))v41->FreeEx)(v21);
            }
            return v68;
          }
          goto LABEL_96;
        }
        v37 = KeGetCurrentPrcb();
        v38 = v37->PPLookasideList[8].P;
        ++v38->TotalFrees;
        if ( LOWORD(v38->ListHead.Alignment) < v38->Depth
          || (++v38->FreeMisses,
              v38 = v37->PPLookasideList[8].L,
              ++v38->TotalFrees,
              LOWORD(v38->ListHead.Alignment) < v38->Depth) )
        {
          RtlpInterlockedPushEntrySList(&v38->ListHead, v21);
        }
        else
        {
          ++v38->FreeMisses;
          ((void (__fastcall *)(PSLIST_ENTRY))v38->FreeEx)(v21);
        }
        return 3221225626LL;
      }
      v32 = *a5;
      if ( (__int64)*a5 >= 0 )
      {
        Handle = *a5;
        goto LABEL_81;
      }
      goto LABEL_43;
    }
  }
  if ( (a6 & 0xFFA50048) != 0
    || (a7 & 0xFFFFFFF8) != 0
    || a8 > 5
    || (a9 & 0xFF000000) != 0
    || (a9 & 0x30) != 0 && (v16 & 0x100000) == 0
    || (a9 & 0x1000) != 0 && (v16 & 0x10000) == 0
    || (a9 & 0x30) == 0x30
    || (a9 & 0x41) == 1 && ((a9 & 0xFF5E0ACC) != 0 || a8 - 1 > 2)
    || (a9 & 0x100100) == 0x100100
    || (a9 & 0x10100) == 0x10100
    || (a9 & 0x110000) == 0x110000
    || (a9 & 8) != 0 && (v16 & 4) != 0 )
  {
LABEL_43:
    v28 = KeGetCurrentPrcb();
    v29 = v28->PPLookasideList[8].P;
    ++v29->TotalFrees;
    if ( LOWORD(v29->ListHead.Alignment) < v29->Depth
      || (++v29->FreeMisses,
          v29 = v28->PPLookasideList[8].L,
          ++v29->TotalFrees,
          LOWORD(v29->ListHead.Alignment) < v29->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v29->ListHead, v21);
    }
    else
    {
      ++v29->FreeMisses;
      ((void (__fastcall *)(PSLIST_ENTRY))v29->FreeEx)(v21);
    }
    return 3221225485LL;
  }
  if ( !IopFailZeroAccessCreate || v16 )
  {
    v24 = a13;
    if ( a12 )
    {
      if ( a12 == 1 )
      {
        if ( !a13
          || ((__int64)a13->Next & 0xFFFFFFFC) != 0
          || HIDWORD(a13->Next) > 1
          || *((_DWORD *)&a13->Next + 2) > 1u
          || (a7 & 4) != 0
          || a8 - 1 > 2 )
        {
          goto LABEL_43;
        }
      }
      else
      {
        if ( a12 != 2 )
          goto LABEL_52;
        if ( !a13 || (a7 & 4) != 0 || (a7 & 0xFFFFFFFD) == 0 || a8 != 2 )
          goto LABEL_43;
      }
      if ( (a9 & 0xFFFFFFCD) != 0 )
        goto LABEL_43;
    }
LABEL_52:
    v23 = a14;
    goto LABEL_53;
  }
  v25 = KeGetCurrentPrcb();
  v26 = v25->PPLookasideList[8].P;
  ++v26->TotalFrees;
  if ( LOWORD(v26->ListHead.Alignment) < v26->Depth
    || (++v26->FreeMisses,
        v26 = v25->PPLookasideList[8].L,
        ++v26->TotalFrees,
        LOWORD(v26->ListHead.Alignment) < v26->Depth) )
  {
    RtlpInterlockedPushEntrySList(&v26->ListHead, v21);
  }
  else
  {
    ++v26->FreeMisses;
    ((void (__fastcall *)(PSLIST_ENTRY))v26->FreeEx)(v21);
  }
  return 3221225506LL;
}
