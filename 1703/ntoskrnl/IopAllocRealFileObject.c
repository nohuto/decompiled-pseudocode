/*
 * XREFs of IopAllocRealFileObject @ 0x14053AC70
 * Callers:
 *     IopParseDevice @ 0x1405385E0 (IopParseDevice.c)
 * Callees:
 *     IopCheckInitiatorHint @ 0x14001E214 (IopCheckInitiatorHint.c)
 *     PsIsHostSilo @ 0x140050C00 (PsIsHostSilo.c)
 *     KeInitializeEvent @ 0x1400F14C0 (KeInitializeEvent.c)
 *     RtlpInterlockedPopEntrySList @ 0x140189470 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401894B0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ObpPushStackInfo @ 0x140226DAC (ObpPushStackInfo.c)
 *     IopRetrieveTransactionParameters @ 0x140429360 (IopRetrieveTransactionParameters.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x14048BEC8 (IopAllocateFoExtensionsOnCreate.c)
 *     SeSinglePrivilegeCheck @ 0x1404F3760 (SeSinglePrivilegeCheck.c)
 *     ObpFreeObjectNameBuffer @ 0x1404F3F60 (ObpFreeObjectNameBuffer.c)
 *     ObpAllocateObject @ 0x140506B40 (ObpAllocateObject.c)
 *     SeReleaseSecurityDescriptor @ 0x14050B570 (SeReleaseSecurityDescriptor.c)
 *     ObpCaptureObjectCreateInformation @ 0x14052DF10 (ObpCaptureObjectCreateInformation.c)
 *     ObpRegisterObject @ 0x1406C30BC (ObpRegisterObject.c)
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
        int a9)
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
  int v19; // edi
  int v20; // ecx
  __int64 v21; // rbx
  _DWORD *v22; // rbx
  int TransactionParameters; // esi
  __int64 v24; // rdi
  int v25; // r12d
  __int64 v26; // r13
  __int64 v27; // r13
  int v28; // ecx
  _QWORD *v29; // rbx
  __int64 v31; // rcx
  __int64 v32; // r9
  unsigned __int64 v33; // rax
  __int64 v34; // rcx
  _GENERAL_LOOKASIDE *L; // rdi
  __int64 Size; // rdx
  void *(__fastcall *AllocateEx)(_POOL_TYPE, unsigned __int64, unsigned int, _LOOKASIDE_LIST_EX *); // rax
  __int64 Tag; // r8
  __int64 Type; // rcx
  struct _KPRCB *v40; // rax
  _GENERAL_LOOKASIDE *v41; // r8
  _SLIST_ENTRY *Next; // rcx
  struct _KPRCB *v43; // rdx
  _GENERAL_LOOKASIDE *v44; // rcx
  _DWORD *v45; // [rsp+40h] [rbp-88h] BYREF
  __int128 v46; // [rsp+48h] [rbp-80h] BYREF
  int v47; // [rsp+58h] [rbp-70h] BYREF
  __int64 v48; // [rsp+60h] [rbp-68h]
  __int64 v49; // [rsp+68h] [rbp-60h]
  int v50; // [rsp+70h] [rbp-58h]
  __int128 v51; // [rsp+78h] [rbp-50h]
  __int16 v54; // [rsp+E8h] [rbp+20h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v10 = IoFileObjectType;
  v47 = 48;
  v48 = 0LL;
  P = CurrentPrcb->PPLookasideList[4].P;
  v13 = a4;
  v50 = a4;
  v49 = 0LL;
  v14 = a3;
  v54 = 0;
  ++P->TotalAllocates;
  v51 = 0LL;
  LOBYTE(v54) = 1;
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
LABEL_54:
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
  v19 = ObpCaptureObjectCreateInformation(0, v18, (__int64)&v47, &v46, (__int64)v15, 0);
  if ( v19 < 0 )
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
      RtlpInterlockedPushEntrySList(&v41->ListHead, v15);
    }
    else
    {
      ++v41->FreeMisses;
      ((void (__fastcall *)(PSLIST_ENTRY))v41->FreeEx)(v15);
    }
    goto LABEL_61;
  }
  if ( ((__int64)v15->Next & (_DWORD)v10[9]) != 0 )
  {
    v19 = -1073741811;
    goto LABEL_65;
  }
  if ( ((__int64)v15->Next & 0x10) != 0 && !SeSinglePrivilegeCheck(SeCreatePermanentPrivilege, 0) )
  {
    v19 = -1073741727;
    goto LABEL_65;
  }
  v20 = *((_DWORD *)v10 + 27);
  HIDWORD(v15[1].Next) = *((_DWORD *)v10 + 26);
  *((_DWORD *)&v15[1].Next + 2) = v20;
  v19 = ObpAllocateObject(v15, v17, (__int64)v10, &v46, 216, &v45, &v54);
  if ( v19 < 0 )
  {
LABEL_65:
    if ( *((_QWORD *)&v46 + 1) )
      ObpFreeObjectNameBuffer((__int64)&v46);
    Next = v15[2].Next;
    if ( Next )
    {
      SeReleaseSecurityDescriptor(Next, (char)v15[1].Next, 1);
      v15[2].Next = 0LL;
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
      RtlpInterlockedPushEntrySList(&v44->ListHead, v15);
      v22 = v45;
      goto LABEL_9;
    }
    ++v44->FreeMisses;
    ((void (__fastcall *)(PSLIST_ENTRY))v44->FreeEx)(v15);
LABEL_61:
    v22 = v45;
    goto LABEL_9;
  }
  v21 = (__int64)v45;
  if ( ObpTraceFlags )
  {
    ObpRegisterObject(v45);
    ObpPushStackInfo(v21, 1, 1u, 1953261124);
  }
  v22 = (_DWORD *)(v21 + 48);
LABEL_9:
  TransactionParameters = v19;
  if ( v19 < 0 )
    goto LABEL_54;
  memset(v22, 0, 0xD8uLL);
  v24 = a6;
  if ( a8 )
  {
    *((_QWORD *)v22 + 3) = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
    *((_QWORD *)v22 + 4) = *(_QWORD *)(*(_QWORD *)a1 + 32LL);
    *((_WORD *)v22 + 44) = *(_WORD *)(*(_QWORD *)a1 + 88LL);
    *((_WORD *)v22 + 45) = *(_WORD *)(*(_QWORD *)a1 + 90LL);
    *((_QWORD *)v22 + 12) = *(_QWORD *)(*(_QWORD *)a1 + 96LL);
    v31 = *(_QWORD *)(*(_QWORD *)a1 + 208LL);
    if ( v31 )
      *((_QWORD *)v22 + 26) = v31;
  }
  else
  {
    v25 = a9;
    v26 = a7;
    if ( (*(_DWORD *)(a6 + 152) & 0x47) != 0 || !PsIsHostSilo(*(_QWORD *)(a7 + 8)) )
    {
      v32 = v26;
      v27 = a2;
      TransactionParameters = IopAllocateFoExtensionsOnCreate((__int64)v22, a2, v24, v32, v25);
    }
    else
    {
      v27 = a2;
    }
    if ( TransactionParameters >= 0 )
    {
      if ( v17 )
      {
        if ( (*(_DWORD *)(v24 + 152) & 0x20) != 0 )
        {
          if ( (*(_DWORD *)(v27 + 48) & 0x40000) != 0
            || (v33 = *(unsigned int *)(v27 + 72), (unsigned int)v33 <= 0x35)
            && (v34 = 0x20000100100108LL, _bittest64(&v34, v33)) )
          {
            TransactionParameters = IopRetrieveTransactionParameters(v27, v24, v25, (__int64)v22);
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
      v28 = v22[20] | 2;
      v22[20] = v28;
      if ( (*(_DWORD *)(v24 + 64) & 0x10) != 0 )
        v22[20] = v28 | 4;
    }
    if ( (v22[20] & 2) != 0 )
    {
      KeInitializeEvent((PRKEVENT)(v22 + 32), SynchronizationEvent, 0);
      v22[28] = 0;
      *((_QWORD *)v22 + 13) = 0LL;
    }
    if ( (*(_DWORD *)(v24 + 64) & 8) != 0 )
      v22[20] |= 8u;
    if ( (*(_DWORD *)(v24 + 64) & 2) != 0 )
      v22[20] |= 0x10u;
    if ( (*(_DWORD *)(v24 + 64) & 4) != 0 )
      v22[20] |= 0x20u;
    if ( (*(_DWORD *)(v24 + 64) & 0x800) != 0 )
      v22[20] |= 0x100000u;
    if ( (*(_DWORD *)(v24 + 64) & 0x20000) != 0 )
      v22[20] |= 0x2000000u;
  }
  if ( (v13 & 0x40) == 0 )
    v22[20] |= 0x20000u;
  *v22 = 14155781;
  *((_QWORD *)v22 + 8) = *(_QWORD *)(v24 + 40);
  *((_QWORD *)v22 + 1) = v14;
  *((_QWORD *)v22 + 23) = 0LL;
  v29 = v22 + 48;
  v29[1] = v29;
  *v29 = v29;
  return (unsigned int)TransactionParameters;
}
