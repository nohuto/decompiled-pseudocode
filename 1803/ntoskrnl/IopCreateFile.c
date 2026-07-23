/*
 * XREFs of IopCreateFile @ 0x1404F3030
 * Callers:
 *     IoCreateFile @ 0x1404F1130 (IoCreateFile.c)
 *     IoCreateFileEx @ 0x1404F2DE0 (IoCreateFileEx.c)
 *     NtOpenFile @ 0x1404F2F30 (NtOpenFile.c)
 *     NtCreateFile @ 0x1404F2FA0 (NtCreateFile.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140060D7C (ExFreeToNPagedLookasideList.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400EF190 (ExAllocatePoolWithQuotaTag.c)
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     PsGetCurrentSilo @ 0x140105440 (PsGetCurrentSilo.c)
 *     RtlRaiseStatus @ 0x14013EA80 (RtlRaiseStatus.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401B2BD0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401B2C10 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     ObCloseHandle @ 0x1404B5DD0 (ObCloseHandle.c)
 *     FsRtlFreeExtraCreateParameter @ 0x1404D1FD0 (FsRtlFreeExtraCreateParameter.c)
 *     IoCheckEaBufferValidity @ 0x1404F3AD0 (IoCheckEaBufferValidity.c)
 *     ObOpenObjectByNameEx @ 0x1405AC6B0 (ObOpenObjectByNameEx.c)
 *     IopCloseFile @ 0x1405B12E0 (IopCloseFile.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall IopCreateFile(
        HANDLE *a1,
        int a2,
        _SLIST_ENTRY *a3,
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
  int v17; // esi
  char v18; // r13
  char PreviousMode; // al
  struct _KPRCB *CurrentPrcb; // r14
  _GENERAL_LOOKASIDE *P; // rbx
  PSLIST_ENTRY v22; // rdi
  __int16 v23; // r14
  __int16 v24; // r15
  struct _KPRCB *v25; // rdx
  _GENERAL_LOOKASIDE *v26; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  HANDLE v30; // rbx
  size_t v31; // rsi
  struct _KTHREAD *CurrentThread; // rax
  int v33; // r12d
  void *v34; // rcx
  __int64 v35; // r14
  __int64 **v36; // rbx
  __int64 *v37; // rax
  __int64 v38; // rcx
  _QWORD *v39; // r15
  void (__fastcall *v40)(_QWORD *, _QWORD *); // rax
  __int64 v41; // rcx
  int Next; // ebx
  void *v43; // rcx
  struct _KPRCB *v44; // rdx
  _GENERAL_LOOKASIDE *v45; // rcx
  PVOID PoolWithTag; // rcx
  NTSTATUS v47; // r13d
  int v48; // ecx
  unsigned __int64 v49; // rcx
  __int64 v50; // rax
  __int64 *v51; // rsi
  __int64 *v52; // rcx
  _QWORD *v53; // rax
  __int64 v54; // r8
  _QWORD *v55; // rdx
  __int64 v56; // rcx
  char *v57; // rax
  PVOID PoolWithQuotaTag; // rax
  int v59; // eax
  _GENERAL_LOOKASIDE *L; // rbx
  struct _KPRCB *v61; // rdx
  _GENERAL_LOOKASIDE *v62; // rcx
  struct _KPRCB *v63; // rdx
  _GENERAL_LOOKASIDE *v64; // rcx
  unsigned int v65; // [rsp+44h] [rbp-54h]
  unsigned __int8 v66; // [rsp+48h] [rbp-50h]
  HANDLE Handle[8]; // [rsp+58h] [rbp-40h] BYREF

  v17 = a9;
  v18 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (a14 & 0x100) == 0 )
    v18 = PreviousMode;
  v66 = v18;
  CurrentPrcb = KeGetCurrentPrcb();
  P = CurrentPrcb->PPLookasideList[8].P;
  ++P->TotalAllocates;
  v22 = RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( !v22 )
  {
    ++P->AllocateMisses;
    L = CurrentPrcb->PPLookasideList[8].L;
    ++L->TotalAllocates;
    v22 = RtlpInterlockedPopEntrySList(&L->ListHead);
    if ( !v22 )
    {
      ++L->AllocateMisses;
      v22 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))L->AllocateEx)(
                            (unsigned int)L->Type,
                            L->Size,
                            L->Tag);
    }
  }
  if ( !v22 )
    return 3221225626LL;
  LODWORD(v22->Next) = CurrentPrcb->Number;
  if ( !v18 && (a14 & 0x200) == 0 )
  {
    v23 = a7;
    v24 = a6;
    goto LABEL_23;
  }
  v23 = a7;
  v24 = a6;
  if ( (a7 & 0xFFFFFFF8) != 0
    || (a6 & 0xFFA50048) != 0
    || a8 > 5
    || (a9 & 0xFF000000) != 0
    || (a9 & 0x30) != 0 && (a2 & 0x100000) == 0
    || (a2 & 0x10000) == 0 && (a9 & 0x1000) != 0
    || (a9 & 0x30) == 0x30
    || (a9 & 0x41) == 1 && ((a9 & 0xFF5E0ACC) != 0 || a8 - 1 > 2)
    || (a9 & 0x100100) == 0x100100
    || (a9 & 0x10100) == 0x10100
    || (a9 & 0x110000) == 0x110000
    || (a2 & 4) != 0 && (a9 & 8) != 0 )
  {
    goto LABEL_10;
  }
  if ( !IopFailZeroAccessCreate || a2 )
  {
    switch ( a12 )
    {
      case 0:
LABEL_23:
        if ( v18 )
        {
          *((_QWORD *)&v22[4].Next + 1) = 0LL;
          v28 = (__int64)a1;
          if ( (unsigned __int64)a1 >= 0x7FFFFFFF0000LL )
            v28 = 0x7FFFFFFF0000LL;
          *(_QWORD *)v28 = *(_QWORD *)v28;
          v29 = (__int64)a4;
          if ( (unsigned __int64)a4 >= 0x7FFFFFFF0000LL )
            v29 = 0x7FFFFFFF0000LL;
          *(_DWORD *)v29 = *(_DWORD *)v29;
          if ( a5 )
          {
            if ( ((unsigned __int8)a5 & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v30 = *a5;
            Handle[0] = v30;
            if ( (__int64)v30 < 0 )
              RtlRaiseStatus(-1073741811);
          }
          else
          {
            v30 = 0LL;
            Handle[0] = 0LL;
          }
          if ( Src && (_DWORD)NumberOfBytes )
          {
            if ( ((unsigned __int8)Src & 3) != 0 )
              ExRaiseDatatypeMisalignment();
            v57 = &Src[(unsigned int)NumberOfBytes];
            if ( (unsigned __int64)v57 > 0x7FFFFFFF0000LL || v57 < Src )
              MEMORY[0x7FFFFFFF0000] = 0;
            PoolWithQuotaTag = ExAllocatePoolWithQuotaTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x61456F49u);
            *((_QWORD *)&v22[4].Next + 1) = PoolWithQuotaTag;
            LODWORD(v22[5].Next) = NumberOfBytes;
            memmove(PoolWithQuotaTag, Src, (unsigned int)NumberOfBytes);
            v59 = IoCheckEaBufferValidity(
                    *((PFILE_FULL_EA_INFORMATION *)&v22[4].Next + 1),
                    NumberOfBytes,
                    (PULONG)a4 + 2);
            if ( v59 < 0 )
            {
              *a4 = v59;
              RtlRaiseStatus(v59);
            }
            goto LABEL_38;
          }
LABEL_37:
          *((_QWORD *)&v22[4].Next + 1) = 0LL;
          LODWORD(v22[5].Next) = 0;
          goto LABEL_38;
        }
        if ( a9 < 0 )
        {
          a14 |= 0x400u;
          v17 = a9 & 0x7FFFFFFF;
        }
        if ( !a5 )
        {
          v30 = 0LL;
          Handle[0] = 0LL;
          goto LABEL_75;
        }
        v30 = *a5;
        if ( (__int64)*a5 >= 0 )
        {
          Handle[0] = *a5;
LABEL_75:
          if ( !Src || !(_DWORD)NumberOfBytes )
            goto LABEL_37;
          PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x61456F49u);
          *((_QWORD *)&v22[4].Next + 1) = PoolWithTag;
          if ( PoolWithTag )
          {
            LODWORD(v22[5].Next) = NumberOfBytes;
            memmove(PoolWithTag, Src, (unsigned int)NumberOfBytes);
            v47 = IoCheckEaBufferValidity(
                    *((PFILE_FULL_EA_INFORMATION *)&v22[4].Next + 1),
                    NumberOfBytes,
                    (PULONG)a4 + 2);
            v65 = v47;
            if ( v47 < 0 )
            {
              ExFreePoolWithTag(*((PVOID *)&v22[4].Next + 1), 0);
              *a4 = v47;
LABEL_65:
              v44 = KeGetCurrentPrcb();
              v45 = v44->PPLookasideList[8].P;
              ++v45->TotalFrees;
              if ( LOWORD(v45->ListHead.Alignment) < v45->Depth
                || (++v45->FreeMisses,
                    v45 = v44->PPLookasideList[8].L,
                    ++v45->TotalFrees,
                    LOWORD(v45->ListHead.Alignment) < v45->Depth) )
              {
                RtlpInterlockedPushEntrySList(&v45->ListHead, v22);
              }
              else
              {
                ++v45->FreeMisses;
                ((void (__fastcall *)(PSLIST_ENTRY))v45->FreeEx)(v22);
              }
              return v65;
            }
LABEL_38:
            LODWORD(v22->Next) = 14155784;
            LODWORD(v22[2].Next) = 0;
            *((_QWORD *)&v22[1].Next + 1) = 0LL;
            *((_QWORD *)&v22[3].Next + 1) = v30;
            LODWORD(v22[4].Next) = v17;
            WORD2(v22[4].Next) = v24;
            HIWORD(v22[4].Next) = v23;
            *((_DWORD *)&v22[5].Next + 2) = a8;
            *((_WORD *)&v22[8].Next + 4) = 0;
            *((_BYTE *)&v22[8].Next + 10) = 0;
            HIDWORD(v22[5].Next) = a14;
            *((_QWORD *)&v22[2].Next + 1) = 0LL;
            v22[3].Next = a3;
            *((_DWORD *)&v22[7].Next + 2) = a12;
            v22[8].Next = a13;
            *((_DWORD *)&v22[9].Next + 2) = a15;
            *((_BYTE *)&v22[9].Next + 12) = v66;
            v31 = 40LL;
            memset(&v22[10], 0, 0x28uLL);
            LOWORD(v22[10].Next) = 40;
            v22[12].Next = (_SLIST_ENTRY *)1;
            if ( a16 )
            {
              if ( (unsigned __int64)*a16 <= 0x28 )
                v31 = *a16;
              memmove(&v22[10], a16, v31);
            }
            if ( v22[12].Next == (_SLIST_ENTRY *)1 )
              v22[12].Next = (_SLIST_ENTRY *)PsGetCurrentSilo();
            LODWORD(v22[1].Next) = 0;
            *((_QWORD *)&v22->Next + 1) = 0LL;
            CurrentThread = KeGetCurrentThread();
            ++CurrentThread->OtherOperationCount;
            __incgsdword(0x2EE4u);
            v33 = ObOpenObjectByNameEx(a3, IoFileObjectType, v66, 0LL, a2, v22, v22[12].Next, Handle);
            v65 = v33;
            v34 = (void *)*((_QWORD *)&v22[4].Next + 1);
            if ( v34 )
              ExFreePoolWithTag(v34, 0);
            v35 = *((_QWORD *)&v22[10].Next + 1);
            if ( v35 )
            {
              v36 = (__int64 **)(v35 + 8);
              if ( (*(_DWORD *)(v35 + 4) & 1) != 0 )
              {
                v51 = *v36;
                while ( v51 != (__int64 *)v36 )
                {
                  v52 = v51 - 1;
                  v51 = (__int64 *)*v51;
                  if ( (v52[6] & 1) == 0 )
                  {
                    v53 = v52 + 1;
                    v54 = v52[1];
                    v55 = (_QWORD *)v52[2];
                    if ( *(__int64 **)(v54 + 8) != v52 + 1 || (_QWORD *)*v55 != v53 )
                      __fastfail(3u);
                    *v55 = v54;
                    *(_QWORD *)(v54 + 8) = v55;
                    v52[2] = 0LL;
                    *v53 = 0LL;
                    FsRtlFreeExtraCreateParameter(v52 + 9);
                  }
                }
              }
              else
              {
                while ( 1 )
                {
                  v37 = *v36;
                  if ( *v36 == (__int64 *)v36 )
                    break;
                  v38 = *v37;
                  if ( (__int64 **)v37[1] != v36 || *(__int64 **)(v38 + 8) != v37 )
                    __fastfail(3u);
                  *v36 = (__int64 *)v38;
                  *(_QWORD *)(v38 + 8) = v36;
                  v37[1] = 0LL;
                  *v37 = 0LL;
                  v39 = v37 + 8;
                  v40 = (void (__fastcall *)(_QWORD *, _QWORD *))v37[4];
                  if ( v40 )
                    v40(v39, v39 - 6);
                  if ( (*(_DWORD *)(v39 - 3) & 0x20) != 0 && FltMgrCallbacks )
                    (*(void (__fastcall **)(_QWORD, _QWORD *))FltMgrCallbacks)(*(v39 - 1), v39);
                  v41 = *(v39 - 2);
                  if ( v41 )
                  {
                    if ( (*(_DWORD *)(v39 - 3) & 0x40) != 0 )
                    {
                      ExFreeToNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)v41, v39 - 9);
                    }
                    else
                    {
                      ++*(_DWORD *)(v41 + 28);
                      if ( *(_WORD *)v41 >= *(_WORD *)(v41 + 16) )
                      {
                        ++*(_DWORD *)(v41 + 32);
                        (*(void (__fastcall **)(_QWORD *))(v41 + 56))(v39 - 9);
                      }
                      else
                      {
                        RtlpInterlockedPushEntrySList((PSLIST_HEADER)v41, (PSLIST_ENTRY)(v39 - 9));
                      }
                    }
                  }
                  else
                  {
                    ExFreePoolWithTag(v39 - 9, 0);
                  }
                }
                if ( (*(_DWORD *)(v35 + 4) & 4) != 0 )
                {
                  ++unk_1403D191C;
                  if ( LOWORD(FsRtlEcpListLookaside.Alignment) >= unk_1403D1910 )
                  {
                    ++unk_1403D1920;
                    unk_1403D1938(v35);
                  }
                  else
                  {
                    RtlpInterlockedPushEntrySList(&FsRtlEcpListLookaside, (PSLIST_ENTRY)v35);
                  }
                }
                else
                {
                  ExFreePoolWithTag((PVOID)v35, 0);
                }
                *((_QWORD *)&v22[10].Next + 1) = 0LL;
              }
            }
            Next = (int)v22[2].Next;
            if ( v33 >= 0 )
            {
              if ( Next == -1096154543 )
              {
                *(_DWORD *)(*((_QWORD *)&v22->Next + 1) + 80LL) |= 0x40000u;
                *(_DWORD *)(*((_QWORD *)&v22->Next + 1) + 80LL) &= ~0x2000000u;
                *a1 = Handle[0];
                *((_QWORD *)a4 + 1) = *((_QWORD *)&v22[1].Next + 1);
                *a4 = (int)v22[1].Next;
                v65 = (unsigned int)v22[1].Next;
LABEL_62:
                if ( Next == -1096154543 )
                {
                  v43 = (void *)*((_QWORD *)&v22->Next + 1);
                  if ( v43 )
                    ObfDereferenceObject(v43);
                }
                goto LABEL_65;
              }
              ObCloseHandle(Handle[0], v66);
              v33 = -1073741788;
              v65 = -1073741788;
            }
            v48 = (int)v22[1].Next;
            if ( v48 >= 0 )
            {
              v56 = *((_QWORD *)&v22->Next + 1);
              if ( v56 )
              {
                if ( Next == -1096154543 )
                {
                  if ( (*(_DWORD *)(v56 + 80) & 0x40000) == 0 )
                    IopCloseFile(0LL, *((_QWORD *)&v22->Next + 1), 1LL);
                }
                else
                {
                  if ( *(_WORD *)(v56 + 88) )
                  {
                    ExFreePoolWithTag(*(PVOID *)(v56 + 96), 0);
                    v56 = *((_QWORD *)&v22->Next + 1);
                  }
                  *(_QWORD *)(v56 + 8) = 0LL;
                  ObfDereferenceObject(*((PVOID *)&v22->Next + 1));
                }
              }
            }
            else
            {
              v33 = (int)v22[1].Next;
              v65 = v33;
              if ( (v48 & 0xC0000000) == 0x80000000 || v48 == -1073741191 )
              {
                *a4 = v48;
                *((_QWORD *)a4 + 1) = *((_QWORD *)&v22[1].Next + 1);
              }
            }
            if ( v33 == -1073741772 )
            {
              v49 = *((_QWORD *)&v22[1].Next + 1) - 2684354563LL;
              if ( v49 <= 0x16 )
              {
                v50 = 4194817LL;
                if ( _bittest64(&v50, v49) )
                  v65 = -1073741184;
              }
            }
            goto LABEL_62;
          }
          v63 = KeGetCurrentPrcb();
          v64 = v63->PPLookasideList[8].P;
          ++v64->TotalFrees;
          if ( LOWORD(v64->ListHead.Alignment) < v64->Depth
            || (++v64->FreeMisses,
                v64 = v63->PPLookasideList[8].L,
                ++v64->TotalFrees,
                LOWORD(v64->ListHead.Alignment) < v64->Depth) )
          {
            RtlpInterlockedPushEntrySList(&v64->ListHead, v22);
          }
          else
          {
            ++v64->FreeMisses;
            ((void (__fastcall *)(PSLIST_ENTRY))v64->FreeEx)(v22);
          }
          return 3221225626LL;
        }
        goto LABEL_10;
      case 1:
        if ( !a13
          || ((__int64)a13->Next & 0xFFFFFFFC) != 0
          || HIDWORD(a13->Next) > 1
          || *((_DWORD *)&a13->Next + 2) > 1u
          || (a7 & 4) != 0
          || a8 - 1 > 2 )
        {
          goto LABEL_10;
        }
        break;
      case 2:
        if ( !a13 || (a7 & 0xFFFFFFFD) == 0 || (a7 & 4) != 0 || a8 != 2 )
          goto LABEL_10;
        break;
      default:
        goto LABEL_23;
    }
    if ( (a9 & 0xFFFFFFCD) == 0 )
      goto LABEL_23;
LABEL_10:
    v25 = KeGetCurrentPrcb();
    v26 = v25->PPLookasideList[8].P;
    ++v26->TotalFrees;
    if ( LOWORD(v26->ListHead.Alignment) < v26->Depth
      || (++v26->FreeMisses,
          v26 = v25->PPLookasideList[8].L,
          ++v26->TotalFrees,
          LOWORD(v26->ListHead.Alignment) < v26->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v26->ListHead, v22);
    }
    else
    {
      ++v26->FreeMisses;
      ((void (__fastcall *)(PSLIST_ENTRY))v26->FreeEx)(v22);
    }
    return 3221225485LL;
  }
  v61 = KeGetCurrentPrcb();
  v62 = v61->PPLookasideList[8].P;
  ++v62->TotalFrees;
  if ( LOWORD(v62->ListHead.Alignment) < v62->Depth
    || (++v62->FreeMisses,
        v62 = v61->PPLookasideList[8].L,
        ++v62->TotalFrees,
        LOWORD(v62->ListHead.Alignment) < v62->Depth) )
  {
    RtlpInterlockedPushEntrySList(&v62->ListHead, v22);
  }
  else
  {
    ++v62->FreeMisses;
    ((void (__fastcall *)(PSLIST_ENTRY))v62->FreeEx)(v22);
  }
  return 3221225506LL;
}
