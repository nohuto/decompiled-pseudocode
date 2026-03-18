/*
 * XREFs of CmpCreateKeyBody @ 0x1404B8240
 * Callers:
 *     CmpDoParseKey @ 0x1404B47B0 (CmpDoParseKey.c)
 *     CmpStartSiloRegistryNamespace @ 0x1405BFCC4 (CmpStartSiloRegistryNamespace.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     PsGetCurrentThreadProcessId @ 0x1400851E0 (PsGetCurrentThreadProcessId.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x140188F70 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140188FB0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ObpPushStackInfo @ 0x140239558 (ObpPushStackInfo.c)
 *     SeSinglePrivilegeCheck @ 0x14046C2E0 (SeSinglePrivilegeCheck.c)
 *     CmpFreeKeyControlBlock @ 0x140478B50 (CmpFreeKeyControlBlock.c)
 *     CmpUnlockKcb @ 0x14047F670 (CmpUnlockKcb.c)
 *     ObpFreeObjectNameBuffer @ 0x1404848F0 (ObpFreeObjectNameBuffer.c)
 *     SeReleaseSecurityDescriptor @ 0x14049CFE0 (SeReleaseSecurityDescriptor.c)
 *     ObpAllocateObject @ 0x1404AA4C0 (ObpAllocateObject.c)
 *     ObpCaptureObjectCreateInformation @ 0x1404ACCF0 (ObpCaptureObjectCreateInformation.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x1404E6360 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpTransReferenceTransaction @ 0x140568F54 (CmpTransReferenceTransaction.c)
 *     CmpTransDereferenceTransaction @ 0x140568FAC (CmpTransDereferenceTransaction.c)
 *     CmpRecordParseFailure @ 0x14057F118 (CmpRecordParseFailure.c)
 *     ObpRegisterObject @ 0x1406F1B2C (ObpRegisterObject.c)
 */

__int64 __fastcall CmpCreateKeyBody(
        signed __int32 *a1,
        char a2,
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
  __int64 *v23; // r14
  char v24; // si
  unsigned int v25; // r8d
  ULONG_PTR v26; // rbp
  bool v27; // r12
  ULONG_PTR v28; // rsi
  __int64 v29; // rax
  __int64 **v30; // rcx
  bool v31; // cl
  _GENERAL_LOOKASIDE *L; // rbp
  __int64 Size; // rdx
  void *(__fastcall *AllocateEx)(_POOL_TYPE, unsigned __int64, unsigned int, _LOOKASIDE_LIST_EX *); // rax
  __int64 Tag; // r8
  __int64 Type; // rcx
  ULONG_PTR v38; // rax
  __int64 v39; // rax
  struct _KPRCB *v40; // rax
  _GENERAL_LOOKASIDE *v41; // r8
  _SLIST_ENTRY *Next; // rcx
  struct _KPRCB *v43; // rdx
  _GENERAL_LOOKASIDE *v44; // rcx
  __int16 v45; // [rsp+40h] [rbp-68h] BYREF
  ULONG_PTR v46; // [rsp+48h] [rbp-60h]
  __int64 v47; // [rsp+50h] [rbp-58h] BYREF
  _QWORD v48[10]; // [rsp+58h] [rbp-50h] BYREF

  v7 = *a1;
  v46 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v12 = v7 + 1;
  if ( v7 == -1 )
  {
LABEL_69:
    v22 = -1073741670;
    CmpRecordParseFailure(a3, 131584LL);
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
      v22 = CmpTransReferenceTransaction(v10);
      if ( (v22 & 0x80000000) != 0 )
      {
        CmpRecordParseFailure(a3, 131840LL);
LABEL_46:
        CmpDereferenceKeyControlBlockUnsafe(a1);
        return v22;
      }
    }
    else
    {
      v46 = a4 + 88;
    }
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v16 = CmKeyObjectType;
  v45 = 1;
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
  Information = ObpCaptureObjectCreateInformation(a2, a2, 0LL, v48, (__int64)v18, 0);
  if ( Information < 0 )
  {
    v40 = KeGetCurrentPrcb();
    v41 = v40->PPLookasideList[4].P;
    ++v41->TotalFrees;
    if ( LOWORD(v41->ListHead.Alignment) < v41->Depth
      || (++v41->FreeMisses,
          v41 = v40->PPLookasideList[4].L,
          ++v41->TotalFrees,
          LOWORD(v41->ListHead.Alignment) < v41->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v41->ListHead, v18);
    }
    else
    {
      ++v41->FreeMisses;
      ((void (__fastcall *)(PSLIST_ENTRY))v41->FreeEx)(v18);
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
  Information = ObpAllocateObject(v18, a2, (__int64)v16, v48, 96, &v47, &v45);
  if ( Information < 0 )
  {
LABEL_56:
    if ( v48[1] )
      ObpFreeObjectNameBuffer((__int64)v48);
    Next = v18[2].Next;
    if ( Next )
    {
      SeReleaseSecurityDescriptor(Next, (char)v18[1].Next, 1);
      v18[2].Next = 0LL;
    }
    v43 = KeGetCurrentPrcb();
    v44 = v43->PPLookasideList[4].P;
    ++v44->TotalFrees;
    if ( LOWORD(v44->ListHead.Alignment) < v44->Depth
      || (++v44->FreeMisses,
          v44 = v43->PPLookasideList[4].L,
          ++v44->TotalFrees,
          LOWORD(v44->ListHead.Alignment) < v44->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v44->ListHead, v18);
    }
    else
    {
      ++v44->FreeMisses;
      ((void (__fastcall *)(PSLIST_ENTRY))v44->FreeEx)(v18);
    }
    goto LABEL_13;
  }
  v21 = v47;
  if ( ObpTraceFlags )
  {
    ObpRegisterObject(v47);
    ObpPushStackInfo(v21, 1, 1u, 1953261124);
  }
  v11 = (ULONG_PTR *)(v21 + 48);
LABEL_13:
  v22 = Information;
  if ( Information < 0 )
  {
LABEL_48:
    CmpRecordParseFailure(a3, 132096LL);
    goto LABEL_33;
  }
  memset(v11, 0, 0x60uLL);
  *((_WORD *)v11 + 25) = *(_WORD *)(a3 + 20);
  v11[1] = (ULONG_PTR)a1;
  v11[3] = PsGetCurrentThreadProcessId();
  if ( (a1[44] & 0x400000) != 0 )
  {
    v39 = a1[22];
    *(_DWORD *)v11 = v39;
    *(_QWORD *)(a3 + 56) = v39;
  }
  else
  {
    *(_DWORD *)v11 = 1803104306;
  }
  if ( a4 )
  {
    v38 = v46;
    v11[7] = v10;
    v10 = 0LL;
    v11[8] = v38;
  }
  v11[10] = (ULONG_PTR)(v11 + 9);
  v11[9] = (ULONG_PTR)(v11 + 9);
  if ( (*(_DWORD *)(a3 + 24) & 0x10) != 0 )
    *((_WORD *)v11 + 24) |= 0x10u;
  if ( (a1[44] & 0x400000) == 0 )
  {
    v23 = (__int64 *)(v11 + 4);
    v11[5] = (ULONG_PTR)(v11 + 4);
    v11[4] = (ULONG_PTR)(v11 + 4);
    v24 = (a5 != 0) + 1;
    v25 = 0;
    while ( _InterlockedCompareExchange64(
              (volatile signed __int64 *)(v11[1] + 8LL * v25 + 128),
              (signed __int64)v11,
              0LL) )
    {
      if ( ++v25 >= 4 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = v11[1];
          v27 = (*(_DWORD *)(v26 + 4) & 0x80000) != 0;
          if ( *(struct _KTHREAD **)(v26 + 48) == KeGetCurrentThread() )
            *(_QWORD *)(v26 + 48) = 0LL;
          else
            _InterlockedDecrement((volatile signed __int32 *)(v26 + 48));
          ExReleasePushLockEx(v26 + 40, 0LL);
          if ( v27 && (*(_DWORD *)(v26 + 4) & 0x80000) != 0 )
            CmpFreeKeyControlBlock(v26);
        }
        if ( (v24 & 2) == 0 )
        {
          v28 = v11[1];
          ExAcquirePushLockExclusiveEx(v28 + 40, 0LL);
          *(_QWORD *)(v28 + 48) = KeGetCurrentThread();
        }
        v29 = v11[1] + 112;
        v30 = *(__int64 ***)(v11[1] + 120);
        if ( *v30 != (__int64 *)v29 )
          __fastfail(3u);
        *v23 = v29;
        v11[5] = (ULONG_PTR)v30;
        *v30 = v23;
        *(_QWORD *)(v29 + 8) = v23;
        break;
      }
    }
  }
  v14 = 0;
  v22 = 0;
  v31 = (a1[44] & 0x400000) != 0;
  *a6 = v11;
  *a7 = v31;
LABEL_33:
  if ( v10 )
    CmpTransDereferenceTransaction(v10);
  if ( v14 )
    goto LABEL_46;
  return v22;
}
