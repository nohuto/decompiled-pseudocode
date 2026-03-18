/*
 * XREFs of IopAllocRealFileObject @ 0x1405B3C40
 * Callers:
 *     IopParseDevice @ 0x1405B17F0 (IopParseDevice.c)
 * Callees:
 *     IoGetSilo @ 0x1400ACAA0 (IoGetSilo.c)
 *     KeInitializeEvent @ 0x140107370 (KeInitializeEvent.c)
 *     PsIsHostSilo @ 0x140108640 (PsIsHostSilo.c)
 *     IopCheckInitiatorHint @ 0x14012B520 (IopCheckInitiatorHint.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401B2BD0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401B2C10 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ObpPushStackInfo @ 0x140271018 (ObpPushStackInfo.c)
 *     SeReleaseSecurityDescriptor @ 0x1404C8E50 (SeReleaseSecurityDescriptor.c)
 *     ObpFreeObjectNameBuffer @ 0x1404D2B80 (ObpFreeObjectNameBuffer.c)
 *     SeSinglePrivilegeCheck @ 0x1404D5650 (SeSinglePrivilegeCheck.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x1404E36C8 (IopAllocateFoExtensionsOnCreate.c)
 *     ObpAllocateObject @ 0x1405A1430 (ObpAllocateObject.c)
 *     ObpCaptureObjectCreateInformation @ 0x1405ACE00 (ObpCaptureObjectCreateInformation.c)
 *     IopRetrieveTransactionParameters @ 0x1405B4060 (IopRetrieveTransactionParameters.c)
 *     ObpRegisterObject @ 0x14075AF1C (ObpRegisterObject.c)
 */

__int64 __fastcall IopAllocRealFileObject(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        char a5,
        __int64 a6,
        __int64 a7,
        char a8,
        unsigned int a9)
{
  struct _KPRCB *CurrentPrcb; // rbp
  POBJECT_TYPE *v10; // rsi
  _GENERAL_LOOKASIDE *P; // rdi
  char v13; // r15
  __int64 v14; // r12
  PSLIST_ENTRY v15; // rbx
  unsigned int Number; // eax
  char v17; // bp
  char v18; // dl
  int Information; // edi
  int v20; // ecx
  __int64 v21; // rbx
  _DWORD *v22; // rbx
  int TransactionParameters; // esi
  __int64 v24; // rdi
  unsigned int v25; // r12d
  __int64 v26; // r13
  __int64 v27; // rcx
  __int64 v28; // r13
  int v29; // ecx
  int v30; // eax
  _QWORD *v31; // rbx
  __int64 v33; // rcx
  unsigned __int64 v34; // rax
  __int64 v35; // rcx
  __int64 Silo; // rax
  __int64 v37; // r9
  _GENERAL_LOOKASIDE *L; // rdi
  __int64 Size; // rdx
  void *(__fastcall *AllocateEx)(_POOL_TYPE, unsigned __int64, unsigned int, _LOOKASIDE_LIST_EX *); // rax
  __int64 Tag; // r8
  __int64 Type; // rcx
  struct _KPRCB *v43; // rax
  _GENERAL_LOOKASIDE *v44; // r8
  _SLIST_ENTRY *Next; // rcx
  struct _KPRCB *v46; // rdx
  _GENERAL_LOOKASIDE *v47; // rcx
  _DWORD *v48; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v49[2]; // [rsp+48h] [rbp-80h] BYREF
  int v50; // [rsp+58h] [rbp-70h] BYREF
  __int64 v51; // [rsp+60h] [rbp-68h]
  __int64 v52; // [rsp+68h] [rbp-60h]
  int v53; // [rsp+70h] [rbp-58h]
  __int128 v54; // [rsp+78h] [rbp-50h]
  __int16 v57; // [rsp+E8h] [rbp+20h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v10 = IoFileObjectType;
  v50 = 48;
  v51 = 0LL;
  P = CurrentPrcb->PPLookasideList[4].P;
  v13 = a4;
  v53 = a4;
  v52 = 0LL;
  v14 = a3;
  v57 = 0;
  ++P->TotalAllocates;
  v54 = 0LL;
  LOBYTE(v57) = 1;
  v15 = RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( !v15 )
  {
    ++P->AllocateMisses;
    L = CurrentPrcb->PPLookasideList[4].L;
    ++L->TotalAllocates;
    v15 = RtlpInterlockedPopEntrySList(&L->ListHead);
    if ( !v15 )
    {
      Size = L->Size;
      AllocateEx = L->AllocateEx;
      Tag = L->Tag;
      Type = (unsigned int)L->Type;
      ++L->AllocateMisses;
      v15 = (PSLIST_ENTRY)((__int64 (__fastcall *)(__int64, __int64, __int64))AllocateEx)(Type, Size, Tag);
      if ( !v15 )
      {
        TransactionParameters = -1073741670;
LABEL_56:
        if ( !a8 )
          *(_QWORD *)a1 = 0LL;
        return (unsigned int)TransactionParameters;
      }
    }
  }
  Number = CurrentPrcb->Number;
  v17 = a5;
  v18 = a5;
  LODWORD(v15->Next) = Number;
  Information = ObpCaptureObjectCreateInformation(0, v18, (__int64)&v50, v49, (__int64)v15, 0);
  if ( Information < 0 )
  {
    v43 = KeGetCurrentPrcb();
    v44 = v43->PPLookasideList[4].P;
    ++v44->TotalFrees;
    if ( LOWORD(v44->ListHead.Alignment) < v44->Depth
      || (++v44->FreeMisses,
          v44 = v43->PPLookasideList[4].L,
          ++v44->TotalFrees,
          LOWORD(v44->ListHead.Alignment) < v44->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v44->ListHead, v15);
    }
    else
    {
      ++v44->FreeMisses;
      ((void (__fastcall *)(PSLIST_ENTRY))v44->FreeEx)(v15);
    }
    goto LABEL_63;
  }
  if ( ((__int64)v15->Next & (_DWORD)v10[9]) != 0 )
  {
    Information = -1073741811;
    goto LABEL_67;
  }
  if ( ((__int64)v15->Next & 0x10) != 0 && !SeSinglePrivilegeCheck(SeCreatePermanentPrivilege, 0) )
  {
    Information = -1073741727;
    goto LABEL_67;
  }
  v20 = *((_DWORD *)v10 + 27);
  HIDWORD(v15[1].Next) = *((_DWORD *)v10 + 26);
  *((_DWORD *)&v15[1].Next + 2) = v20;
  Information = ObpAllocateObject((int *)v15, v17, (__int64)v10, v49, 216, &v48, &v57);
  if ( Information < 0 )
  {
LABEL_67:
    if ( v49[1] )
      ObpFreeObjectNameBuffer((__int64)v49);
    Next = v15[2].Next;
    if ( Next )
    {
      SeReleaseSecurityDescriptor(Next, (char)v15[1].Next, 1);
      v15[2].Next = 0LL;
    }
    v46 = KeGetCurrentPrcb();
    v47 = v46->PPLookasideList[4].P;
    ++v47->TotalFrees;
    if ( LOWORD(v47->ListHead.Alignment) < v47->Depth
      || (++v47->FreeMisses,
          v47 = v46->PPLookasideList[4].L,
          ++v47->TotalFrees,
          LOWORD(v47->ListHead.Alignment) < v47->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v47->ListHead, v15);
      v22 = v48;
      goto LABEL_9;
    }
    ++v47->FreeMisses;
    ((void (__fastcall *)(PSLIST_ENTRY))v47->FreeEx)(v15);
LABEL_63:
    v22 = v48;
    goto LABEL_9;
  }
  v21 = (__int64)v48;
  if ( ObpTraceFlags )
  {
    ObpRegisterObject(v48);
    ObpPushStackInfo(v21, 1, 1u, 1953261124);
  }
  v22 = (_DWORD *)(v21 + 48);
LABEL_9:
  TransactionParameters = Information;
  if ( Information < 0 )
    goto LABEL_56;
  memset(v22, 0, 0xD8uLL);
  v24 = a6;
  if ( a8 )
  {
    *((_QWORD *)v22 + 3) = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
    *((_QWORD *)v22 + 4) = *(_QWORD *)(*(_QWORD *)a1 + 32LL);
    *((_WORD *)v22 + 44) = *(_WORD *)(*(_QWORD *)a1 + 88LL);
    *((_WORD *)v22 + 45) = *(_WORD *)(*(_QWORD *)a1 + 90LL);
    *((_QWORD *)v22 + 12) = *(_QWORD *)(*(_QWORD *)a1 + 96LL);
    v33 = *(_QWORD *)(*(_QWORD *)a1 + 208LL);
    if ( v33 )
      *((_QWORD *)v22 + 26) = v33;
  }
  else
  {
    v25 = a9;
    v26 = a7;
    if ( (*(_DWORD *)(a6 + 152) & 0x47) == 0
      && PsIsHostSilo(*(_QWORD *)(a7 + 8))
      && ((v27 = *(_QWORD *)(v24 + 40)) == 0 || (Silo = IoGetSilo(v27), PsIsHostSilo(Silo))) )
    {
      v28 = a2;
    }
    else
    {
      v37 = v26;
      v28 = a2;
      TransactionParameters = IopAllocateFoExtensionsOnCreate((__int64)v22, a2, v24, v37, v25);
    }
    if ( TransactionParameters >= 0 )
    {
      if ( v17 )
      {
        if ( (*(_DWORD *)(v24 + 152) & 0x20) != 0 )
        {
          if ( (*(_DWORD *)(v28 + 48) & 0x40000) != 0
            || (v34 = *(unsigned int *)(v28 + 72), (unsigned int)v34 <= 0x35)
            && (v35 = 0x20000100100108LL, _bittest64(&v35, v34)) )
          {
            TransactionParameters = IopRetrieveTransactionParameters(v28, v24, v25, v22);
          }
        }
      }
      if ( TransactionParameters >= 0 && v17 && (*(_DWORD *)(v24 + 64) & 0x20000) != 0 )
        TransactionParameters = IopCheckInitiatorHint((__int64)v22, *(_QWORD *)(v24 + 40));
    }
    v14 = a3;
  }
  *(_QWORD *)a1 = v22;
  if ( !*(_BYTE *)(v24 + 138) && !*(_BYTE *)(v24 + 137) )
  {
    if ( (*(_DWORD *)(v24 + 64) & 0x30) != 0 )
    {
      v29 = v22[20] | 2;
      v22[20] = v29;
      if ( (*(_DWORD *)(v24 + 64) & 0x10) != 0 )
        v22[20] = v29 | 4;
    }
    if ( (v22[20] & 2) != 0 )
    {
      KeInitializeEvent((PRKEVENT)(v22 + 32), SynchronizationEvent, 0);
      v22[28] = 0;
      *((_QWORD *)v22 + 13) = 0LL;
    }
    v30 = *(_DWORD *)(v24 + 64);
    if ( (v30 & 8) != 0 )
    {
      v22[20] |= 8u;
      v30 = *(_DWORD *)(v24 + 64);
    }
    if ( (v30 & 2) != 0 )
    {
      v22[20] |= 0x10u;
      v30 = *(_DWORD *)(v24 + 64);
    }
    if ( (v30 & 4) != 0 )
    {
      v22[20] |= 0x20u;
      v30 = *(_DWORD *)(v24 + 64);
    }
    if ( (v30 & 0x800) != 0 )
    {
      v22[20] |= 0x100000u;
      v30 = *(_DWORD *)(v24 + 64);
    }
    if ( (v30 & 0x20000) != 0 )
      v22[20] |= 0x2000000u;
  }
  if ( (v13 & 0x40) == 0 )
    v22[20] |= 0x20000u;
  *v22 = 14155781;
  *((_QWORD *)v22 + 8) = *(_QWORD *)(v24 + 40);
  *((_QWORD *)v22 + 1) = v14;
  *((_QWORD *)v22 + 23) = 0LL;
  v31 = v22 + 48;
  v31[1] = v31;
  *v31 = v31;
  return (unsigned int)TransactionParameters;
}
