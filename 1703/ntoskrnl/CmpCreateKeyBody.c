/*
 * XREFs of CmpCreateKeyBody @ 0x140538160
 * Callers:
 *     CmpDoParseKey @ 0x1405343E0 (CmpDoParseKey.c)
 *     CmpStartSiloRegistryNamespace @ 0x1405A383C (CmpStartSiloRegistryNamespace.c)
 * Callees:
 *     PsGetCurrentThreadProcessId @ 0x14003C360 (PsGetCurrentThreadProcessId.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x140189470 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401894B0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     CmpLockTableAdd @ 0x1401DFA5C (CmpLockTableAdd.c)
 *     CmpLockTableRemove @ 0x1401DFB90 (CmpLockTableRemove.c)
 *     ObpPushStackInfo @ 0x140226DAC (ObpPushStackInfo.c)
 *     CmpTransReferenceTransaction @ 0x14042DDF0 (CmpTransReferenceTransaction.c)
 *     CmpTransDereferenceTransaction @ 0x14042DE48 (CmpTransDereferenceTransaction.c)
 *     CmpRecordParseFailure @ 0x140444E0C (CmpRecordParseFailure.c)
 *     CmpFreeKeyControlBlock @ 0x140491410 (CmpFreeKeyControlBlock.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x1404CCC8C (CmpDereferenceKeyControlBlockUnsafe.c)
 *     SeSinglePrivilegeCheck @ 0x1404F3760 (SeSinglePrivilegeCheck.c)
 *     ObpFreeObjectNameBuffer @ 0x1404F3F60 (ObpFreeObjectNameBuffer.c)
 *     CmpUnlockKcb @ 0x140500590 (CmpUnlockKcb.c)
 *     ObpAllocateObject @ 0x140506B40 (ObpAllocateObject.c)
 *     SeReleaseSecurityDescriptor @ 0x14050B570 (SeReleaseSecurityDescriptor.c)
 *     ObpCaptureObjectCreateInformation @ 0x14052DF10 (ObpCaptureObjectCreateInformation.c)
 *     ObpRegisterObject @ 0x1406C30BC (ObpRegisterObject.c)
 */

__int64 __fastcall CmpCreateKeyBody(
        unsigned __int64 a1,
        char a2,
        __int64 a3,
        __int64 a4,
        char a5,
        unsigned __int64 **a6,
        char *a7)
{
  signed __int32 v7; // eax
  __int64 v10; // rbx
  unsigned __int64 *v11; // rdi
  signed __int32 v12; // ecx
  signed __int32 v13; // ett
  char v14; // r15
  struct _KPRCB *CurrentPrcb; // r12
  POBJECT_TYPE *v16; // r13
  _GENERAL_LOOKASIDE *P; // rbp
  PSLIST_ENTRY v18; // rsi
  int Information; // ebp
  char v20; // r12
  int v21; // ecx
  __int64 v22; // rdi
  unsigned int v23; // esi
  char v24; // r15
  __int64 *v25; // rsi
  __int64 v26; // r8
  unsigned __int64 v27; // rbp
  bool v28; // r13
  unsigned __int64 v29; // rbp
  __int64 v30; // rax
  __int64 **v31; // rcx
  bool v32; // zf
  _GENERAL_LOOKASIDE *L; // rbp
  __int64 Size; // rdx
  void *(__fastcall *AllocateEx)(_POOL_TYPE, unsigned __int64, unsigned int, _LOOKASIDE_LIST_EX *); // rax
  __int64 Tag; // r8
  __int64 Type; // rcx
  int v39; // eax
  unsigned __int64 v40; // rax
  __int64 v41; // rax
  struct _KPRCB *v42; // rax
  _GENERAL_LOOKASIDE *v43; // r8
  _SLIST_ENTRY *Next; // rcx
  struct _KPRCB *v45; // rdx
  _GENERAL_LOOKASIDE *v46; // rcx
  __int16 v47; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int64 v48; // [rsp+48h] [rbp-60h]
  __int64 v49; // [rsp+50h] [rbp-58h] BYREF
  __int128 v50[5]; // [rsp+58h] [rbp-50h] BYREF

  v7 = *(_DWORD *)a1;
  v48 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v12 = v7 + 1;
  if ( v7 == -1 )
  {
LABEL_79:
    v23 = -1073741670;
    CmpRecordParseFailure(a3, 131584, -1073741670);
    return v23;
  }
  while ( 1 )
  {
    if ( v12 == 1 )
      KeBugCheckEx(0x51u, 0x15uLL, 0LL, 0LL, 0LL);
    v13 = v7;
    v7 = _InterlockedCompareExchange((volatile signed __int32 *)a1, v12, v7);
    if ( v13 == v7 )
      break;
    v12 = v7 + 1;
    if ( v7 == -1 )
      goto LABEL_79;
  }
  v14 = 1;
  if ( a4 )
  {
    if ( *(_QWORD *)(a4 + 56) )
    {
      v10 = *(_QWORD *)(a4 + 56);
      v39 = CmpTransReferenceTransaction(v10);
      v23 = v39;
      if ( v39 < 0 )
      {
        CmpRecordParseFailure(a3, 131840, v39);
LABEL_56:
        CmpDereferenceKeyControlBlockUnsafe((volatile signed __int32 *)a1);
        return v23;
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
        v23 = -1073741670;
        goto LABEL_58;
      }
    }
  }
  LODWORD(v18->Next) = CurrentPrcb->Number;
  Information = ObpCaptureObjectCreateInformation(a2, a2, 0LL, v50, (__int64)v18, 0);
  v20 = 1;
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
    goto LABEL_66;
  }
  if ( ((__int64)v18->Next & 0x10) != 0 && !SeSinglePrivilegeCheck(SeCreatePermanentPrivilege, a2) )
  {
    Information = -1073741727;
    goto LABEL_66;
  }
  v21 = *((_DWORD *)v16 + 27);
  HIDWORD(v18[1].Next) = *((_DWORD *)v16 + 26);
  *((_DWORD *)&v18[1].Next + 2) = v21;
  Information = ObpAllocateObject(v18, a2, (__int64)v16, v50, 88, &v49, &v47);
  if ( Information < 0 )
  {
LABEL_66:
    if ( *((_QWORD *)&v50[0] + 1) )
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
  v22 = v49;
  if ( ObpTraceFlags )
  {
    ObpRegisterObject(v49);
    ObpPushStackInfo(v22, 1, 1u, 1953261124);
  }
  v11 = (unsigned __int64 *)(v22 + 48);
LABEL_13:
  v23 = Information;
  if ( Information < 0 )
  {
LABEL_58:
    CmpRecordParseFailure(a3, 132096, v23);
    goto LABEL_42;
  }
  memset(v11, 0, 0x58uLL);
  *((_WORD *)v11 + 25) = *(_WORD *)(a3 + 20);
  v11[1] = a1;
  v11[3] = PsGetCurrentThreadProcessId();
  if ( (*(_BYTE *)(a1 + 178) & 0x40) != 0 )
  {
    v41 = *(int *)(a1 + 88);
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
  v11[10] = (unsigned __int64)(v11 + 9);
  v11[9] = (unsigned __int64)(v11 + 9);
  if ( (*(_DWORD *)(a3 + 24) & 0x10) != 0 )
    *((_WORD *)v11 + 24) |= 0x10u;
  if ( (*(_BYTE *)(a1 + 178) & 0x40) == 0 )
  {
    if ( a5 )
      v24 = 2;
    else
      v24 = 1;
    v25 = (__int64 *)(v11 + 4);
    v26 = 0LL;
    v11[5] = (unsigned __int64)(v11 + 4);
    v11[4] = (unsigned __int64)(v11 + 4);
    while ( _InterlockedCompareExchange64((volatile signed __int64 *)(v11[1] + 8 * v26 + 128), (signed __int64)v11, 0LL) )
    {
      v26 = (unsigned int)(v26 + 1);
      if ( (unsigned int)v26 >= 4 )
      {
        if ( (v24 & 1) != 0 )
        {
          v27 = v11[1];
          v28 = (*(_DWORD *)(v27 + 4) & 0x80000) != 0;
          if ( *(struct _KTHREAD **)(v27 + 48) == KeGetCurrentThread() )
            *(_QWORD *)(v27 + 48) = 0LL;
          else
            _InterlockedDecrement((volatile signed __int32 *)(v27 + 48));
          ExReleasePushLockEx(v27 + 40, 0LL);
          if ( (*(_DWORD *)(v27 + 4) & 0x100000) != 0 )
            CmpLockTableRemove(v27, *(_DWORD *)(v27 + 60));
          if ( v28 && (*(_DWORD *)(v27 + 4) & 0x80000) != 0 )
            CmpFreeKeyControlBlock(v27);
        }
        if ( (v24 & 2) == 0 )
        {
          v29 = v11[1];
          if ( (*(_DWORD *)(v29 + 4) & 0x100000) != 0 )
            *(_DWORD *)(v29 + 60) = CmpLockTableAdd(v11[1], 1);
          ExAcquirePushLockExclusiveEx(v29 + 40, 0LL);
          *(_QWORD *)(v29 + 48) = KeGetCurrentThread();
        }
        v30 = v11[1] + 112;
        v31 = *(__int64 ***)(v11[1] + 120);
        if ( *v31 != (__int64 *)v30 )
          __fastfail(3u);
        *v25 = v30;
        v11[5] = (unsigned __int64)v31;
        *v31 = v25;
        *(_QWORD *)(v30 + 8) = v25;
        if ( (v24 & 3) == 0 )
          CmpUnlockKcb(v11[1]);
        break;
      }
    }
  }
  v14 = 0;
  v32 = (*(_BYTE *)(a1 + 178) & 0x40) == 0;
  *a6 = v11;
  if ( v32 )
    v20 = 0;
  v23 = 0;
  *a7 = v20;
LABEL_42:
  if ( v10 )
    CmpTransDereferenceTransaction(v10);
  if ( v14 )
    goto LABEL_56;
  return v23;
}
