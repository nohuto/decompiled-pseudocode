/*
 * XREFs of CmpCreateKeyBody @ 0x14054C380
 * Callers:
 *     CmpDoParseKey @ 0x1405A7800 (CmpDoParseKey.c)
 *     CmpStartSiloRegistryNamespace @ 0x140620458 (CmpStartSiloRegistryNamespace.c)
 * Callees:
 *     PsGetCurrentThreadProcessId @ 0x1400A1C70 (PsGetCurrentThreadProcessId.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401B2BD0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401B2C10 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ObpPushStackInfo @ 0x140271018 (ObpPushStackInfo.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x1404959F8 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpFreeKeyControlBlock @ 0x1404A82B0 (CmpFreeKeyControlBlock.c)
 *     SeReleaseSecurityDescriptor @ 0x1404C8E50 (SeReleaseSecurityDescriptor.c)
 *     ObpFreeObjectNameBuffer @ 0x1404D2B80 (ObpFreeObjectNameBuffer.c)
 *     SeSinglePrivilegeCheck @ 0x1404D5650 (SeSinglePrivilegeCheck.c)
 *     CmpTransReferenceTransaction @ 0x14054C710 (CmpTransReferenceTransaction.c)
 *     CmpTransDereferenceTransaction @ 0x14054C8AC (CmpTransDereferenceTransaction.c)
 *     CmpRecordParseFailure @ 0x14056D188 (CmpRecordParseFailure.c)
 *     ObpAllocateObject @ 0x1405A1430 (ObpAllocateObject.c)
 *     ObpCaptureObjectCreateInformation @ 0x1405ACE00 (ObpCaptureObjectCreateInformation.c)
 *     ObpRegisterObject @ 0x14075AF1C (ObpRegisterObject.c)
 */

__int64 __fastcall CmpCreateKeyBody(
        signed __int32 *a1,
        unsigned __int8 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        ULONG_PTR **a6,
        bool *a7)
{
  signed __int32 v7; // eax
  ULONG_PTR v10; // rbx
  ULONG_PTR *v11; // rdi
  signed __int32 v12; // ecx
  signed __int32 v13; // ett
  char v14; // r14
  struct _KPRCB *CurrentPrcb; // r12
  POBJECT_TYPE *v16; // r13
  _GENERAL_LOOKASIDE *P; // rbp
  PSLIST_ENTRY v18; // rsi
  int Information; // ebp
  int v20; // ecx
  __int64 v21; // rdi
  unsigned int v22; // esi
  __int64 v23; // r9
  __int64 *v24; // r14
  char v25; // si
  __int64 v26; // r8
  ULONG_PTR v27; // rbp
  bool v28; // r12
  ULONG_PTR v29; // rsi
  __int64 v30; // rax
  __int64 **v31; // rcx
  bool v32; // cl
  _GENERAL_LOOKASIDE *L; // rbp
  __int64 Size; // rdx
  void *(__fastcall *AllocateEx)(_POOL_TYPE, unsigned __int64, unsigned int, _LOOKASIDE_LIST_EX *); // rax
  __int64 Tag; // r8
  __int64 Type; // rcx
  int v39; // eax
  ULONG_PTR v40; // rax
  __int64 v41; // rax
  struct _KPRCB *v42; // rax
  _GENERAL_LOOKASIDE *v43; // r8
  _SLIST_ENTRY *Next; // rcx
  struct _KPRCB *v45; // rdx
  _GENERAL_LOOKASIDE *v46; // rcx
  __int16 v47; // [rsp+40h] [rbp-68h] BYREF
  ULONG_PTR v48; // [rsp+48h] [rbp-60h]
  __int64 v49; // [rsp+50h] [rbp-58h] BYREF
  char v50[8]; // [rsp+58h] [rbp-50h] BYREF
  __int64 v51; // [rsp+60h] [rbp-48h]

  v7 = *a1;
  v48 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v12 = v7 + 1;
  if ( v7 == -1 )
  {
LABEL_69:
    v22 = -1073741670;
    CmpRecordParseFailure(a3, 131584LL, 3221225626LL);
    return v22;
  }
  while ( 1 )
  {
    if ( v12 == 1 )
      KeBugCheckEx(0x51u, 0x15uLL, 0LL, 0LL, 0LL);
    v13 = v7;
    v7 = _InterlockedCompareExchange(a1, v12, v7);
    if ( v13 == v7 )
      break;
    v12 = v7 + 1;
    if ( v7 == -1 )
      goto LABEL_69;
  }
  v14 = 1;
  if ( a4 )
  {
    if ( *(_QWORD *)(a4 + 56) )
    {
      v10 = *(_QWORD *)(a4 + 56);
      v39 = CmpTransReferenceTransaction(v10);
      v22 = v39;
      if ( v39 < 0 )
      {
        CmpRecordParseFailure(a3, 131840LL, (unsigned int)v39);
LABEL_46:
        CmpDereferenceKeyControlBlockUnsafe(a1);
        return v22;
      }
    }
    else
    {
      v48 = a4 + 88;
    }
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v16 = CmKeyObjectType;
  v47 = 1;
  P = CurrentPrcb->PPLookasideList[4].P;
  ++P->TotalAllocates;
  v18 = RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( !v18 )
  {
    ++P->AllocateMisses;
    L = CurrentPrcb->PPLookasideList[4].L;
    ++L->TotalAllocates;
    v18 = RtlpInterlockedPopEntrySList(&L->ListHead);
    if ( !v18 )
    {
      Size = L->Size;
      AllocateEx = L->AllocateEx;
      Tag = L->Tag;
      Type = (unsigned int)L->Type;
      ++L->AllocateMisses;
      v18 = (PSLIST_ENTRY)((__int64 (__fastcall *)(__int64, __int64, __int64))AllocateEx)(Type, Size, Tag);
      if ( !v18 )
      {
        v22 = -1073741670;
        goto LABEL_48;
      }
    }
  }
  LODWORD(v18->Next) = CurrentPrcb->Number;
  Information = ObpCaptureObjectCreateInformation(a2, a2, 0, (unsigned int)v50, (__int64)v18, 0);
  if ( Information < 0 )
  {
    v42 = KeGetCurrentPrcb();
    v43 = v42->PPLookasideList[4].P;
    ++v43->TotalFrees;
    if ( LOWORD(v43->ListHead.Alignment) < v43->Depth
      || (++v43->FreeMisses,
          v43 = v42->PPLookasideList[4].L,
          ++v43->TotalFrees,
          LOWORD(v43->ListHead.Alignment) < v43->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v43->ListHead, v18);
    }
    else
    {
      ++v43->FreeMisses;
      ((void (__fastcall *)(PSLIST_ENTRY))v43->FreeEx)(v18);
    }
    goto LABEL_13;
  }
  if ( ((__int64)v18->Next & (_DWORD)v16[9]) != 0 )
  {
    Information = -1073741811;
    goto LABEL_56;
  }
  if ( ((__int64)v18->Next & 0x10) != 0 && !SeSinglePrivilegeCheck(SeCreatePermanentPrivilege, a2) )
  {
    Information = -1073741727;
    goto LABEL_56;
  }
  v20 = *((_DWORD *)v16 + 27);
  HIDWORD(v18[1].Next) = *((_DWORD *)v16 + 26);
  *((_DWORD *)&v18[1].Next + 2) = v20;
  Information = ObpAllocateObject((_DWORD)v18, a2, (_DWORD)v16, (unsigned int)v50, 96, (__int64)&v49, (__int64)&v47);
  if ( Information < 0 )
  {
LABEL_56:
    if ( v51 )
      ObpFreeObjectNameBuffer((__int64)v50);
    Next = v18[2].Next;
    if ( Next )
    {
      SeReleaseSecurityDescriptor(Next, (char)v18[1].Next, 1);
      v18[2].Next = 0LL;
    }
    v45 = KeGetCurrentPrcb();
    v46 = v45->PPLookasideList[4].P;
    ++v46->TotalFrees;
    if ( LOWORD(v46->ListHead.Alignment) < v46->Depth
      || (++v46->FreeMisses,
          v46 = v45->PPLookasideList[4].L,
          ++v46->TotalFrees,
          LOWORD(v46->ListHead.Alignment) < v46->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v46->ListHead, v18);
    }
    else
    {
      ++v46->FreeMisses;
      ((void (__fastcall *)(PSLIST_ENTRY))v46->FreeEx)(v18);
    }
    goto LABEL_13;
  }
  v21 = v49;
  if ( ObpTraceFlags )
  {
    ObpRegisterObject(v49);
    ObpPushStackInfo(v21, 1, 1u, 1953261124);
  }
  v11 = (ULONG_PTR *)(v21 + 48);
LABEL_13:
  v22 = Information;
  if ( Information < 0 )
  {
LABEL_48:
    CmpRecordParseFailure(a3, 132096LL, v22);
    goto LABEL_33;
  }
  memset(v11, 0, 0x60uLL);
  *((_WORD *)v11 + 25) = *(_WORD *)(a3 + 20);
  v11[1] = (ULONG_PTR)a1;
  v11[3] = PsGetCurrentThreadProcessId();
  if ( (a1[44] & 0x400000) != 0 )
  {
    v41 = a1[22];
    *(_DWORD *)v11 = v41;
    *(_QWORD *)(a3 + 56) = v41;
  }
  else
  {
    *(_DWORD *)v11 = 1803104306;
  }
  if ( a4 )
  {
    v40 = v48;
    v11[7] = v10;
    v10 = 0LL;
    v11[8] = v40;
  }
  v11[10] = (ULONG_PTR)(v11 + 9);
  v11[9] = (ULONG_PTR)(v11 + 9);
  if ( (*(_DWORD *)(a3 + 24) & 0x10) != 0 )
    *((_WORD *)v11 + 24) |= 0x10u;
  if ( (a1[44] & 0x400000) == 0 )
  {
    v24 = (__int64 *)(v11 + 4);
    v11[5] = (ULONG_PTR)(v11 + 4);
    v11[4] = (ULONG_PTR)(v11 + 4);
    v25 = (a5 != 0) + 1;
    v26 = 0LL;
    while ( _InterlockedCompareExchange64((volatile signed __int64 *)(v11[1] + 8 * v26 + 128), (signed __int64)v11, 0LL) )
    {
      v26 = (unsigned int)(v26 + 1);
      if ( (unsigned int)v26 >= 4 )
      {
        if ( (v25 & 1) != 0 )
        {
          v27 = v11[1];
          v28 = (*(_DWORD *)(v27 + 4) & 0x80000) != 0;
          if ( *(struct _KTHREAD **)(v27 + 48) == KeGetCurrentThread() )
            *(_QWORD *)(v27 + 48) = 0LL;
          else
            _InterlockedDecrement((volatile signed __int32 *)(v27 + 48));
          ExReleasePushLockEx(v27 + 40, 0LL, v26, v23);
          if ( v28 && (*(_DWORD *)(v27 + 4) & 0x80000) != 0 )
            CmpFreeKeyControlBlock(v27);
        }
        if ( (v25 & 2) == 0 )
        {
          v29 = v11[1];
          ExAcquirePushLockExclusiveEx(v29 + 40, 0LL);
          *(_QWORD *)(v29 + 48) = KeGetCurrentThread();
        }
        v30 = v11[1] + 112;
        v31 = *(__int64 ***)(v11[1] + 120);
        if ( *v31 != (__int64 *)v30 )
          __fastfail(3u);
        *v24 = v30;
        v11[5] = (ULONG_PTR)v31;
        *v31 = v24;
        *(_QWORD *)(v30 + 8) = v24;
        break;
      }
    }
  }
  v14 = 0;
  v32 = (a1[44] & 0x400000) != 0;
  *a6 = v11;
  v22 = 0;
  *a7 = v32;
LABEL_33:
  if ( v10 )
    CmpTransDereferenceTransaction(v10);
  if ( v14 )
    goto LABEL_46;
  return v22;
}
