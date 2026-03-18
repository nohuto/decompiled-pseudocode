/*
 * XREFs of IopCreateFile @ 0x140541AA0
 * Callers:
 *     IoCreateFile @ 0x140446D90 (IoCreateFile.c)
 *     IoCreateFileEx @ 0x140541850 (IoCreateFileEx.c)
 *     NtOpenFile @ 0x1405419A0 (NtOpenFile.c)
 *     NtCreateFile @ 0x140541A10 (NtCreateFile.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140009390 (RtlRaiseStatus.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14004B900 (ExAllocatePoolWithQuotaTag.c)
 *     PsGetCurrentSilo @ 0x1400EDEE0 (PsGetCurrentSilo.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     ExFreeToNPagedLookasideList @ 0x140114B0C (ExFreeToNPagedLookasideList.c)
 *     RtlpInterlockedPopEntrySList @ 0x140189470 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401894B0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     FsRtlIsEcpFromUserMode @ 0x14043FB50 (FsRtlIsEcpFromUserMode.c)
 *     ObCloseHandle @ 0x1404F9C90 (ObCloseHandle.c)
 *     IopCloseFile @ 0x140527CA0 (IopCloseFile.c)
 *     ObOpenObjectByNameEx @ 0x14052E3C0 (ObOpenObjectByNameEx.c)
 *     FsRtlFindExtraCreateParameter @ 0x14053B570 (FsRtlFindExtraCreateParameter.c)
 *     FsRtlFreeExtraCreateParameter @ 0x140542BD0 (FsRtlFreeExtraCreateParameter.c)
 *     IoCheckEaBufferValidity @ 0x140544020 (IoCheckEaBufferValidity.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
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
  ACCESS_MASK v17; // r13d
  char PreviousMode; // r14
  struct _KPRCB *CurrentPrcb; // rsi
  _GENERAL_LOOKASIDE *P; // rbx
  PSLIST_ENTRY v21; // rdi
  _GENERAL_LOOKASIDE *L; // rbx
  int v23; // esi
  struct _KPRCB *v24; // rdx
  _GENERAL_LOOKASIDE *v25; // rcx
  _SLIST_ENTRY *v27; // r14
  struct _KPRCB *v28; // rdx
  _GENERAL_LOOKASIDE *v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  HANDLE v32; // rbx
  PVOID PoolWithQuotaTag; // rax
  int *v34; // r15
  int v35; // eax
  PVOID PoolWithTag; // rax
  struct _KPRCB *v37; // rdx
  _GENERAL_LOOKASIDE *v38; // rcx
  NTSTATUS v39; // r15d
  struct _KPRCB *v40; // rdx
  _GENERAL_LOOKASIDE *v41; // rcx
  size_t v42; // r8
  struct _KTHREAD *CurrentThread; // rax
  struct _ECP_LIST *v44; // rcx
  int ExtraCreateParameter; // r14d
  _DWORD *v46; // rbx
  void *v47; // rcx
  __int64 v48; // r13
  __int64 **v49; // rsi
  __int64 *v50; // rax
  __int64 v51; // rcx
  _QWORD *v52; // r15
  void (__fastcall *v53)(_QWORD *, _QWORD *); // rax
  __int64 v54; // rcx
  __int64 *v55; // rbx
  __int64 *v56; // rcx
  _QWORD *v57; // rax
  __int64 v58; // r8
  _QWORD *v59; // rdx
  bool v60; // bl
  int v61; // ecx
  __int64 v62; // rcx
  unsigned __int64 v63; // rcx
  __int64 v64; // rax
  void *v65; // rcx
  unsigned int Next; // [rsp+44h] [rbp-64h]
  char v67; // [rsp+48h] [rbp-60h]
  HANDLE Handle; // [rsp+58h] [rbp-50h] BYREF
  PVOID EcpContext; // [rsp+60h] [rbp-48h] BYREF

  v17 = a2;
  Next = 0;
  EcpContext = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( (a14 & 0x100) != 0 )
    PreviousMode = 0;
  v67 = PreviousMode;
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
  if ( !PreviousMode && (a14 & 0x200) == 0 )
  {
    v23 = a9;
LABEL_52:
    v27 = a13;
    goto LABEL_53;
  }
  if ( (a6 & 0xFFA50048) != 0
    || (a7 & 0xFFFFFFF8) != 0
    || a8 > 5
    || (v23 = a9, (a9 & 0xFF000000) != 0)
    || (a9 & 0x30) != 0 && (v17 & 0x100000) == 0
    || (a9 & 0x1000) != 0 && (v17 & 0x10000) == 0
    || (a9 & 0x30) == 0x30
    || (a9 & 0x41) == 1 && ((a9 & 0xFF5E0ACC) != 0 || a8 - 1 > 2)
    || (a9 & 0x100100) == 0x100100
    || (a9 & 0x10100) == 0x10100
    || (a9 & 0x110000) == 0x110000
    || (a9 & 8) != 0 && (v17 & 4) != 0 )
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
  if ( !IopFailZeroAccessCreate || v17 )
  {
    if ( !a12 )
      goto LABEL_52;
    v27 = a13;
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
        goto LABEL_53;
      if ( !a13 || (a7 & 4) != 0 || (a7 & 0xFFFFFFFD) == 0 || a8 != 2 )
        goto LABEL_43;
    }
    if ( (a9 & 0xFFFFFFCD) != 0 )
      goto LABEL_43;
LABEL_53:
    if ( v67 )
    {
      *((_QWORD *)&v21[4].Next + 1) = 0LL;
      v30 = (__int64)a1;
      if ( (unsigned __int64)a1 >= 0x7FFFFFFF0000LL )
        v30 = 0x7FFFFFFF0000LL;
      *(_QWORD *)v30 = *(_QWORD *)v30;
      v31 = (__int64)a4;
      if ( (unsigned __int64)a4 >= 0x7FFFFFFF0000LL )
        v31 = 0x7FFFFFFF0000LL;
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
        v34 = a4;
        v35 = IoCheckEaBufferValidity(*((PFILE_FULL_EA_INFORMATION *)&v21[4].Next + 1), NumberOfBytes, (PULONG)a4 + 2);
        Next = v35;
        if ( v35 < 0 )
        {
          *a4 = v35;
          RtlRaiseStatus(v35);
        }
LABEL_97:
        v17 = a2;
LABEL_98:
        LODWORD(v21->Next) = 14155784;
        LODWORD(v21[2].Next) = 0;
        *((_QWORD *)&v21[1].Next + 1) = 0LL;
        *((_QWORD *)&v21[3].Next + 1) = v32;
        LODWORD(v21[4].Next) = v23;
        WORD2(v21[4].Next) = a6;
        HIWORD(v21[4].Next) = a7;
        *((_DWORD *)&v21[5].Next + 2) = a8;
        *((_WORD *)&v21[8].Next + 4) = 0;
        *((_BYTE *)&v21[8].Next + 10) = 0;
        HIDWORD(v21[5].Next) = a14;
        *((_QWORD *)&v21[2].Next + 1) = 0LL;
        v21[3].Next = (_SLIST_ENTRY *)a3;
        *((_DWORD *)&v21[7].Next + 2) = a12;
        v21[8].Next = v27;
        *((_DWORD *)&v21[9].Next + 2) = a15;
        *((_BYTE *)&v21[9].Next + 12) = v67;
        v21[10].Next = 0LL;
        *((_QWORD *)&v21[10].Next + 1) = 0LL;
        v21[11].Next = 0LL;
        *((_QWORD *)&v21[11].Next + 1) = 0LL;
        LOWORD(v21[10].Next) = 40;
        v21[12].Next = (_SLIST_ENTRY *)1;
        if ( a16 )
        {
          v42 = *a16;
          if ( v42 > 0x28 )
            v42 = 40LL;
          memmove(&v21[10], a16, v42);
        }
        if ( v21[12].Next == (_SLIST_ENTRY *)1 )
          v21[12].Next = (_SLIST_ENTRY *)PsGetCurrentSilo();
        LODWORD(v21[1].Next) = 0;
        *((_QWORD *)&v21->Next + 1) = 0LL;
        CurrentThread = KeGetCurrentThread();
        ++CurrentThread->OtherOperationCount;
        __incgsdword(0x2EE4u);
        v44 = (struct _ECP_LIST *)*((_QWORD *)&v21[10].Next + 1);
        if ( v44 )
        {
          ExtraCreateParameter = FsRtlFindExtraCreateParameter(v44, &GUID_ECP_FILTER_DEVICE_TYPE, &EcpContext, 0LL);
          Next = ExtraCreateParameter;
          if ( ExtraCreateParameter >= 0 )
          {
            v46 = EcpContext;
            if ( FsRtlIsEcpFromUserMode(EcpContext) )
            {
              ExtraCreateParameter = -1073740011;
              Next = -1073740011;
              LODWORD(v21[1].Next) = -1073740011;
            }
            if ( !*v46 )
            {
              *((_DWORD *)&v21[9].Next + 2) |= 0x10u;
              *((_QWORD *)&v21[1].Next + 1) = 2684354563LL;
            }
          }
        }
        else
        {
          ExtraCreateParameter = Next;
        }
        if ( SLODWORD(v21[1].Next) >= 0 )
        {
          ExtraCreateParameter = ObOpenObjectByNameEx(
                                   a3,
                                   (__int64)IoFileObjectType,
                                   v67,
                                   0LL,
                                   v17,
                                   (__int64)v21,
                                   (__int64)v21[12].Next,
                                   &Handle);
          Next = ExtraCreateParameter;
        }
        v47 = (void *)*((_QWORD *)&v21[4].Next + 1);
        if ( v47 )
          ExFreePoolWithTag(v47, 0);
        v48 = *((_QWORD *)&v21[10].Next + 1);
        if ( v48 )
        {
          v49 = (__int64 **)(v48 + 8);
          if ( (*(_DWORD *)(v48 + 4) & 1) != 0 )
          {
            v55 = *v49;
            while ( v55 != (__int64 *)v49 )
            {
              v56 = v55 - 1;
              v55 = (__int64 *)*v55;
              if ( (v56[6] & 1) == 0 )
              {
                v57 = v56 + 1;
                v58 = v56[1];
                v59 = (_QWORD *)v56[2];
                if ( *(__int64 **)(v58 + 8) != v56 + 1 || (_QWORD *)*v59 != v57 )
                  __fastfail(3u);
                *v59 = v58;
                *(_QWORD *)(v58 + 8) = v59;
                v56[2] = 0LL;
                *v57 = 0LL;
                FsRtlFreeExtraCreateParameter(v56 + 9);
              }
            }
          }
          else
          {
            while ( *v49 != (__int64 *)v49 )
            {
              v50 = *v49;
              v51 = **v49;
              if ( (__int64 **)(*v49)[1] != v49 || *(__int64 **)(v51 + 8) != v50 )
                __fastfail(3u);
              *v49 = (__int64 *)v51;
              *(_QWORD *)(v51 + 8) = v49;
              v50[1] = 0LL;
              *v50 = 0LL;
              v52 = v50 + 8;
              v53 = (void (__fastcall *)(_QWORD *, _QWORD *))v50[4];
              if ( v53 )
                v53(v52, v52 - 6);
              if ( (*(_DWORD *)(v52 - 3) & 0x20) != 0 && FltMgrCallbacks )
                (*(void (__fastcall **)(_QWORD, _QWORD *))FltMgrCallbacks)(*(v52 - 1), v52);
              v54 = *(v52 - 2);
              if ( v54 )
              {
                if ( (*(_DWORD *)(v52 - 3) & 0x40) != 0 )
                {
                  ExFreeToNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)v54, v52 - 9);
                }
                else
                {
                  ++*(_DWORD *)(v54 + 28);
                  if ( *(_WORD *)v54 < *(_WORD *)(v54 + 16) )
                  {
                    RtlpInterlockedPushEntrySList((PSLIST_HEADER)v54, (PSLIST_ENTRY)(v52 - 9));
                  }
                  else
                  {
                    ++*(_DWORD *)(v54 + 32);
                    (*(void (__fastcall **)(_QWORD *))(v54 + 56))(v52 - 9);
                  }
                }
              }
              else
              {
                ExFreePoolWithTag(v52 - 9, 0);
              }
            }
            if ( (*(_DWORD *)(v48 + 4) & 4) != 0 )
            {
              ++dword_14036F25C;
              if ( LOWORD(FsRtlEcpListLookaside.Alignment) < (unsigned __int16)word_14036F250 )
              {
                RtlpInterlockedPushEntrySList(&FsRtlEcpListLookaside, (PSLIST_ENTRY)v48);
              }
              else
              {
                ++dword_14036F260;
                ((void (__fastcall *)(__int64))qword_14036F278)(v48);
              }
            }
            else
            {
              ExFreePoolWithTag((PVOID)v48, 0);
            }
            *((_QWORD *)&v21[10].Next + 1) = 0LL;
            v34 = a4;
          }
        }
        v60 = LODWORD(v21[2].Next) == -1096154543;
        if ( ExtraCreateParameter >= 0 )
        {
          if ( LODWORD(v21[2].Next) == -1096154543 )
          {
            *(_DWORD *)(*((_QWORD *)&v21->Next + 1) + 80LL) |= 0x40000u;
            *(_DWORD *)(*((_QWORD *)&v21->Next + 1) + 80LL) &= ~0x2000000u;
            *a1 = Handle;
            *((_QWORD *)v34 + 1) = *((_QWORD *)&v21[1].Next + 1);
            *v34 = (int)v21[1].Next;
            Next = (unsigned int)v21[1].Next;
LABEL_166:
            if ( v60 )
            {
              v65 = (void *)*((_QWORD *)&v21->Next + 1);
              if ( v65 )
                ObfDereferenceObject(v65);
            }
            goto LABEL_91;
          }
          ObCloseHandle(Handle, v67);
          ExtraCreateParameter = -1073741788;
          Next = -1073741788;
        }
        v61 = (int)v21[1].Next;
        if ( v61 >= 0 )
        {
          v62 = *((_QWORD *)&v21->Next + 1);
          if ( v62 )
          {
            if ( v60 )
            {
              if ( (*(_DWORD *)(v62 + 80) & 0x40000) == 0 )
                IopCloseFile(0LL, *((struct _FILE_OBJECT **)&v21->Next + 1), 1LL, 1LL);
            }
            else
            {
              if ( *(_WORD *)(v62 + 88) )
                ExFreePoolWithTag(*(PVOID *)(v62 + 96), 0);
              *(_QWORD *)(*((_QWORD *)&v21->Next + 1) + 8LL) = 0LL;
              ObfDereferenceObject(*((PVOID *)&v21->Next + 1));
            }
          }
        }
        else
        {
          ExtraCreateParameter = (int)v21[1].Next;
          Next = ExtraCreateParameter;
          if ( (v61 & 0xC0000000) == 0x80000000 || v61 == -1073741191 )
          {
            *v34 = v61;
            *((_QWORD *)v34 + 1) = *((_QWORD *)&v21[1].Next + 1);
          }
        }
        if ( ExtraCreateParameter == -1073741772 )
        {
          v63 = *((_QWORD *)&v21[1].Next + 1) - 2684354563LL;
          if ( v63 <= 0x16 )
          {
            v64 = 4194817LL;
            if ( _bittest64(&v64, v63) )
              Next = -1073741184;
          }
        }
        goto LABEL_166;
      }
LABEL_74:
      *((_QWORD *)&v21[4].Next + 1) = 0LL;
      LODWORD(v21[5].Next) = 0;
      v34 = a4;
      goto LABEL_98;
    }
    if ( v23 < 0 )
    {
      a14 |= 0x400u;
      v23 &= ~0x80000000;
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
        v39 = IoCheckEaBufferValidity(*((PFILE_FULL_EA_INFORMATION *)&v21[4].Next + 1), NumberOfBytes, (PULONG)a4 + 2);
        Next = v39;
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
          return Next;
        }
        v34 = a4;
        goto LABEL_97;
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
  v24 = KeGetCurrentPrcb();
  v25 = v24->PPLookasideList[8].P;
  ++v25->TotalFrees;
  if ( LOWORD(v25->ListHead.Alignment) < v25->Depth
    || (++v25->FreeMisses,
        v25 = v24->PPLookasideList[8].L,
        ++v25->TotalFrees,
        LOWORD(v25->ListHead.Alignment) < v25->Depth) )
  {
    RtlpInterlockedPushEntrySList(&v25->ListHead, v21);
  }
  else
  {
    ++v25->FreeMisses;
    ((void (__fastcall *)(PSLIST_ENTRY))v25->FreeEx)(v21);
  }
  return 3221225506LL;
}
