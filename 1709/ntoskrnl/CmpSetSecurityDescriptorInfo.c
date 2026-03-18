/*
 * XREFs of CmpSetSecurityDescriptorInfo @ 0x140476DE8
 * Callers:
 *     CmpSetKeySecurity @ 0x1400161F0 (CmpSetKeySecurity.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x14001655C (CmpFreeTransientPoolWithTag.c)
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     CmpRemoveSecurityCellList @ 0x14010A40C (CmpRemoveSecurityCellList.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     SepCheckForCriticalAceRemoval @ 0x14046CC94 (SepCheckForCriticalAceRemoval.c)
 *     CmpAddSecurityCellToCache @ 0x140475744 (CmpAddSecurityCellToCache.c)
 *     CmpAssignSecurityToKcb @ 0x1404765F8 (CmpAssignSecurityToKcb.c)
 *     CmpFindMatchingDescriptorCell @ 0x1404773FC (CmpFindMatchingDescriptorCell.c)
 *     CmpTraceSecurityChanging @ 0x14047760C (CmpTraceSecurityChanging.c)
 *     HvFreeCell @ 0x1404778AC (HvFreeCell.c)
 *     HvAllocateCell @ 0x140479BF4 (HvAllocateCell.c)
 *     HvpMarkCellDirty @ 0x14047D0F4 (HvpMarkCellDirty.c)
 *     CmpConstructNameWithStatus @ 0x14047F6E0 (CmpConstructNameWithStatus.c)
 *     CmpFindSecurityCellCacheIndex @ 0x1404813C0 (CmpFindSecurityCellCacheIndex.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140481B84 (CmpUpdateKeyNodeAccessBits.c)
 *     CmGetKCBCacheSecurity @ 0x140482BA4 (CmGetKCBCacheSecurity.c)
 *     SeSetSecurityDescriptorInfo @ 0x1404855E0 (SeSetSecurityDescriptorInfo.c)
 *     RtlLengthSecurityDescriptor @ 0x1404C0030 (RtlLengthSecurityDescriptor.c)
 *     CmAddLogForAction @ 0x140593D1C (CmAddLogForAction.c)
 *     SeAdjustObjectSecurity @ 0x140730224 (SeAdjustObjectSecurity.c)
 */

__int64 CmpSetSecurityDescriptorInfo(ULONG_PTR a1, DWORD *a2, PVOID a3, ...)
{
  ULONG_PTR v5; // rsi
  PSECURITY_DESCRIPTOR v6; // r12
  unsigned int v7; // edi
  __int64 v8; // r14
  __int64 (__fastcall *v9)(ULONG_PTR, _QWORD, _DWORD *); // rax
  __int64 v10; // rax
  unsigned int *KCBCacheSecurity; // rax
  unsigned int *v12; // r15
  __int64 v13; // rax
  NTSTATUS v14; // edi
  ULONG v15; // eax
  __int64 v16; // r14
  unsigned int v17; // r12d
  __int64 v18; // r13
  __int64 v19; // rbx
  __int64 v20; // r8
  PSECURITY_DESCRIPTOR v21; // r12
  ULONG_PTR v22; // r12
  bool v23; // zf
  unsigned int v24; // ebx
  __int64 v25; // r13
  unsigned int v27; // eax
  ULONG_PTR v28; // r12
  __int64 v29; // r13
  ULONG v30; // eax
  unsigned int Cell; // eax
  __int64 v32; // rax
  PVOID v33; // rdx
  ULONG v34; // eax
  _DWORD *v35; // rcx
  __int64 v36; // rcx
  _DWORD *v37; // rcx
  unsigned int v38; // [rsp+38h] [rbp-91h]
  __int64 v39; // [rsp+40h] [rbp-89h]
  unsigned int v40; // [rsp+48h] [rbp-81h]
  _DWORD v41[3]; // [rsp+4Ch] [rbp-7Dh] BYREF
  unsigned int BugCheckParameter4; // [rsp+58h] [rbp-71h] BYREF
  unsigned int BugCheckParameter4_4; // [rsp+5Ch] [rbp-6Dh]
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor; // [rsp+60h] [rbp-69h] BYREF
  _DWORD v45[2]; // [rsp+68h] [rbp-61h] BYREF
  UNICODE_STRING *p_DestinationString; // [rsp+70h] [rbp-59h] BYREF
  __int64 v47; // [rsp+78h] [rbp-51h]
  _DWORD v48[2]; // [rsp+80h] [rbp-49h] BYREF
  ULONG Size; // [rsp+88h] [rbp-41h]
  unsigned int Size_4; // [rsp+8Ch] [rbp-3Dh] BYREF
  PVOID v51; // [rsp+90h] [rbp-39h] BYREF
  _DWORD v52[2]; // [rsp+98h] [rbp-31h] BYREF
  _DWORD v53[2]; // [rsp+A0h] [rbp-29h] BYREF
  _DWORD *v54; // [rsp+A8h] [rbp-21h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-19h] BYREF
  char v58; // [rsp+128h] [rbp+5Fh] BYREF
  PVOID P; // [rsp+130h] [rbp+67h] BYREF
  va_list Pa; // [rsp+130h] [rbp+67h]
  __int64 PoolType; // [rsp+138h] [rbp+6Fh]
  PGENERIC_MAPPING GenericMapping; // [rsp+140h] [rbp+77h]
  __int64 v63; // [rsp+148h] [rbp+7Fh]
  __int64 v64; // [rsp+150h] [rbp+87h]
  va_list va1; // [rsp+158h] [rbp+8Fh] BYREF

  va_start(va1, a3);
  va_start(Pa, a3);
  P = va_arg(va1, PVOID);
  PoolType = va_arg(va1, _QWORD);
  GenericMapping = va_arg(va1, PGENERIC_MAPPING);
  v63 = va_arg(va1, _QWORD);
  v64 = va_arg(va1, _QWORD);
  v45[1] = 0;
  v48[1] = 0;
  v45[0] = -1;
  v48[0] = -1;
  v5 = *(_QWORD *)(a1 + 24);
  v6 = 0LL;
  v7 = *(_DWORD *)(a1 + 32);
  v8 = 0LL;
  v52[0] = -1;
  v53[0] = -1;
  v52[1] = 0;
  v53[1] = 0;
  v9 = *(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v5 + 8);
  v51 = 0LL;
  v58 = 0;
  v39 = 0LL;
  *(_QWORD *)&v41[1] = 0LL;
  BugCheckParameter4 = v7;
  v10 = v9(v5, v7, v53);
  v47 = v10;
  if ( v10 )
  {
    CmpUpdateKeyNodeAccessBits(v5, v10, v7);
    KCBCacheSecurity = (unsigned int *)CmGetKCBCacheSecurity(a1, v63);
    v40 = *KCBCacheSecurity;
    v12 = (unsigned int *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v5 + 8))(v5, *KCBCacheSecurity, v45);
    if ( !v12 )
    {
      v14 = -1073741670;
LABEL_31:
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v5 + 16))(v5, v53);
      return (unsigned int)v14;
    }
    v13 = *(_QWORD *)(a1 + 24);
    if ( (v13 == qword_140353E20 || v13 == qword_140353EB8) && (*a2 & 4) != 0 )
    {
      SepCheckForCriticalAceRemoval(v12 + 5, a3, (PVOID *)Pa, 0LL, v41, 0LL);
      if ( (_BYTE)P || LOBYTE(v41[0]) )
      {
        p_DestinationString = 0LL;
        CmpConstructNameWithStatus(a1, &p_DestinationString);
        if ( p_DestinationString )
        {
          LOBYTE(P) = 1;
        }
        else
        {
          RtlInitUnicodeString(&DestinationString, L"<Unknown registry key>");
          LOBYTE(P) = 0;
          p_DestinationString = &DestinationString;
        }
        v14 = SeAdjustObjectSecurity(v36, v12 + 5, a3, &v51, &v58);
        if ( (_BYTE)P )
          CmpFreeTransientPoolWithTag(p_DestinationString, 0x624E4D43u);
        if ( v14 < 0 )
          goto LABEL_101;
        if ( v58 )
          a3 = v51;
      }
    }
    ObjectsSecurityDescriptor = v12 + 5;
    v14 = SeSetSecurityDescriptorInfo(0LL, a2, a3, &ObjectsSecurityDescriptor, (POOL_TYPE)PoolType, GenericMapping);
    if ( v14 >= 0 )
    {
      v6 = ObjectsSecurityDescriptor;
      v14 = CmpTraceSecurityChanging(a1, v12 + 5, *a2, a3, ObjectsSecurityDescriptor);
      if ( v14 < 0 )
      {
        v24 = 0;
        goto LABEL_18;
      }
      v15 = RtlLengthSecurityDescriptor(v6);
      v16 = v63;
      Size = v15;
      if ( v63 )
        v17 = 1;
      else
        v17 = BugCheckParameter4 >> 31;
      v18 = v64;
      BugCheckParameter4_4 = v17;
      v19 = MEMORY[0xFFFFF78000000014];
      if ( v63 )
      {
        if ( (unsigned __int8)HvpMarkCellDirty(v5, v40) )
        {
          *(_DWORD *)(v18 + 96) = -1;
          *(_QWORD *)(v18 + 88) = 0LL;
          *(_DWORD *)(v18 + 68) = 9;
          goto LABEL_12;
        }
      }
      else if ( (unsigned __int8)HvpMarkCellDirty(v5, BugCheckParameter4) && (unsigned __int8)HvpMarkCellDirty(v5, v40) )
      {
LABEL_12:
        v20 = v17;
        v21 = ObjectsSecurityDescriptor;
        P = ObjectsSecurityDescriptor;
        if ( (unsigned __int8)CmpFindMatchingDescriptorCell(
                                v5,
                                ObjectsSecurityDescriptor,
                                v20,
                                &BugCheckParameter4,
                                &v54) )
        {
          v22 = BugCheckParameter4;
          if ( BugCheckParameter4 == v40 )
          {
            v23 = v16 == 0;
            v8 = *(_QWORD *)&v41[1];
            if ( v23 )
            {
              *(_QWORD *)(v47 + 4) = v19;
              *(_QWORD *)(a1 + 160) = v19;
            }
            else
            {
              ++v12[3];
              *(_QWORD *)(v18 + 88) = v54;
              *(_DWORD *)(v18 + 96) = v22;
            }
            goto LABEL_16;
          }
          if ( !(unsigned __int8)HvpMarkCellDirty(v5, BugCheckParameter4) )
            goto LABEL_85;
          if ( v16 )
          {
            v37 = v54;
            *(_DWORD *)(v18 + 96) = *v54;
            *(_QWORD *)(v18 + 88) = v37;
          }
          else if ( v12[3] == 1
                 && (!(unsigned __int8)HvpMarkCellDirty(v5, v12[1]) || !(unsigned __int8)HvpMarkCellDirty(v5, v12[2])) )
          {
LABEL_85:
            v14 = -1073741443;
LABEL_87:
            v8 = *(_QWORD *)&v41[1];
LABEL_16:
            v6 = P;
LABEL_17:
            v24 = 0;
LABEL_18:
            v25 = 0LL;
LABEL_19:
            if ( v51 )
              ExFreePoolWithTag(v51, 0);
            if ( v6 )
              ExFreePoolWithTag(v6, 0);
            if ( v24 )
              HvFreeCell(v5, v24);
            if ( v25 )
              (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v5 + 16))(v5, v52);
            if ( v8 )
              (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v5 + 16))(v5, v48);
            if ( v12 )
              (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v5 + 16))(v5, v45);
            goto LABEL_31;
          }
          v8 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v5 + 8))(v5, (unsigned int)v22, v48);
          if ( !v8 )
          {
            if ( !v63 )
              KeBugCheckEx(0x51u, 4uLL, 5uLL, v5, v22);
            v14 = -1073741670;
            goto LABEL_16;
          }
          if ( !v63 )
          {
            v27 = v12[3];
            if ( v27 == 1 )
            {
              (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v5 + 16))(v5, v45);
              v12 = 0LL;
              CmpRemoveSecurityCellList(v5, v40);
              HvFreeCell(v5, v40);
            }
            else
            {
              v12[3] = v27 - 1;
            }
            *(_DWORD *)(v47 + 44) = v22;
          }
          ++*(_DWORD *)(v8 + 12);
          LODWORD(v28) = v40;
        }
        else
        {
          v30 = RtlLengthSecurityDescriptor(v21);
          Cell = HvAllocateCell(v5, v30 + 20, BugCheckParameter4_4, (unsigned int)&v41[1], (__int64)v48);
          v28 = Cell;
          if ( Cell == -1 )
          {
            v14 = -1073741670;
            goto LABEL_87;
          }
          v38 = Cell;
          if ( v16 )
          {
            v8 = *(_QWORD *)&v41[1];
            *(_DWORD *)(*(_QWORD *)&v41[1] + 8LL) = Cell;
            *(_DWORD *)(v8 + 4) = Cell;
          }
          else
          {
            if ( !(unsigned __int8)HvpMarkCellDirty(v5, v12[1])
              || v12[3] == 1 && !(unsigned __int8)HvpMarkCellDirty(v5, v12[2]) )
            {
              v8 = *(_QWORD *)&v41[1];
              v14 = -1073741443;
              v24 = v28;
              goto LABEL_48;
            }
            v32 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v5 + 8))(v5, v12[1], v52);
            v8 = *(_QWORD *)&v41[1];
            v39 = v32;
            if ( !v32 )
            {
              v6 = P;
              v14 = -1073741670;
              v24 = v38;
              v25 = 0LL;
              goto LABEL_19;
            }
            *(_DWORD *)(*(_QWORD *)&v41[1] + 4LL) = v12[1];
            *(_DWORD *)(v8 + 8) = v40;
            v12[1] = v28;
            *(_DWORD *)(v32 + 8) = v28;
            --v12[3];
          }
          v33 = P;
          *(_WORD *)v8 = 27507;
          v34 = Size;
          *(_DWORD *)(v8 + 12) = 1;
          *(_DWORD *)(v8 + 16) = v34;
          memmove((void *)(v8 + 20), v33, v34);
          if ( (int)CmpAddSecurityCellToCache(v5, (unsigned int)v28, 0) < 0 )
          {
            v25 = v39;
            if ( !v63 )
            {
              ++v12[3];
              v12[1] = *(_DWORD *)(v8 + 4);
              *(_DWORD *)(v39 + 8) = *(_DWORD *)(v8 + 8);
            }
            v6 = P;
            v14 = -1073741670;
            v24 = v38;
            goto LABEL_19;
          }
          if ( !v63 )
          {
            v29 = v47;
            *(_DWORD *)(v47 + 44) = v28;
            if ( !v12[3] )
            {
              (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v5 + 16))(v5, v45);
              v12 = 0LL;
              CmpRemoveSecurityCellList(v5, v40);
              HvFreeCell(v5, v40);
            }
LABEL_47:
            *(_QWORD *)(v29 + 4) = v19;
            ++*(_QWORD *)(a1 + 296);
            *(_QWORD *)(a1 + 160) = v19;
            CmpAssignSecurityToKcb(a1, *(unsigned int *)(v29 + 44), 0LL, 1, 0);
            v24 = 0;
LABEL_48:
            v6 = P;
            v25 = v39;
            goto LABEL_19;
          }
          if ( !(unsigned __int8)CmpFindSecurityCellCacheIndex(v5, (unsigned int)v28, &Size_4) )
            KeBugCheckEx(0x51u, 4uLL, 3uLL, a1, v28);
          v35 = *(_DWORD **)(*(_QWORD *)(v5 + 3056) + 16LL * Size_4 + 8);
          *(_QWORD *)(v18 + 88) = v35;
          *(_DWORD *)(v18 + 96) = *v35;
        }
        if ( v63 )
        {
          v24 = 0;
          v14 = CmAddLogForAction(v18);
          if ( v14 < 0 )
          {
            v23 = (*(_DWORD *)(v8 + 12))-- == 1;
            if ( v23 )
            {
              CmpRemoveSecurityCellList(v5, (unsigned int)v28);
              HvFreeCell(v5, (unsigned int)v28);
            }
          }
          goto LABEL_48;
        }
        v29 = v47;
        goto LABEL_47;
      }
      v6 = ObjectsSecurityDescriptor;
      v14 = -1073741443;
      v8 = *(_QWORD *)&v41[1];
      goto LABEL_17;
    }
LABEL_101:
    v24 = 0;
    goto LABEL_18;
  }
  return 3221225626LL;
}
