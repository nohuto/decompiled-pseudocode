/*
 * XREFs of CmpSetSecurityDescriptorInfo @ 0x1404BF12C
 * Callers:
 *     CmpSetKeySecurity @ 0x14006E950 (CmpSetKeySecurity.c)
 * Callees:
 *     CmpRemoveSecurityCellList @ 0x14003388C (CmpRemoveSecurityCellList.c)
 *     CmpFreeTransientPoolWithTag @ 0x1400DB880 (CmpFreeTransientPoolWithTag.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     CmAddLogForAction @ 0x14042C988 (CmAddLogForAction.c)
 *     HvFreeCell @ 0x14048C8DC (HvFreeCell.c)
 *     HvAllocateCell @ 0x14048CDA0 (HvAllocateCell.c)
 *     CmpFindSecurityCellCacheIndex @ 0x14048E4D4 (CmpFindSecurityCellCacheIndex.c)
 *     CmpAddSecurityCellToCache @ 0x1404BFB50 (CmpAddSecurityCellToCache.c)
 *     CmpFindMatchingDescriptorCell @ 0x1404BFD5C (CmpFindMatchingDescriptorCell.c)
 *     CmpAssignSecurityToKcb @ 0x1404D0F50 (CmpAssignSecurityToKcb.c)
 *     SeSetSecurityDescriptorInfo @ 0x1404F50B0 (SeSetSecurityDescriptorInfo.c)
 *     CmGetKCBCacheSecurity @ 0x1404FCF10 (CmGetKCBCacheSecurity.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140500654 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpConstructNameWithStatus @ 0x1405014C0 (CmpConstructNameWithStatus.c)
 *     RtlLengthSecurityDescriptor @ 0x14050E880 (RtlLengthSecurityDescriptor.c)
 *     HvpMarkCellDirty @ 0x14051559C (HvpMarkCellDirty.c)
 *     SepCheckForAllAppPackagesAceRemoval @ 0x14059AF88 (SepCheckForAllAppPackagesAceRemoval.c)
 *     SeAdjustObjectAppContainerSecurity @ 0x1406F8654 (SeAdjustObjectAppContainerSecurity.c)
 */

__int64 __fastcall CmpSetSecurityDescriptorInfo(
        ULONG_PTR a1,
        DWORD *a2,
        PVOID a3,
        void *a4,
        POOL_TYPE PoolType,
        PGENERIC_MAPPING GenericMapping,
        __int64 a7,
        __int64 a8)
{
  ULONG_PTR v10; // rsi
  PVOID v11; // r13
  unsigned int v12; // edi
  __int64 v13; // r14
  __int64 (__fastcall *v14)(ULONG_PTR, _QWORD, _DWORD *); // rax
  __int64 v15; // rax
  unsigned int *KCBCacheSecurity; // rax
  unsigned int *v17; // r15
  int v18; // edi
  ULONG v19; // eax
  __int64 v20; // r14
  unsigned int v21; // r12d
  __int64 v22; // r13
  __int64 v23; // rbx
  ULONG_PTR v24; // r12
  bool v25; // zf
  unsigned int v26; // ebx
  __int64 v27; // r12
  ULONG v29; // edx
  unsigned int v30; // eax
  ULONG_PTR v31; // r12
  __int64 v32; // r13
  ULONG v33; // eax
  unsigned int Cell; // eax
  __int64 v35; // rax
  PVOID v36; // rdx
  ULONG v37; // eax
  _DWORD *v38; // rcx
  UNICODE_STRING *p_DestinationString; // r12
  _DWORD *v40; // rcx
  unsigned int v41; // [rsp+38h] [rbp-91h]
  __int64 v42; // [rsp+40h] [rbp-89h]
  unsigned int v43; // [rsp+48h] [rbp-81h]
  __int64 v44; // [rsp+50h] [rbp-79h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+58h] [rbp-71h] BYREF
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor; // [rsp+60h] [rbp-69h] BYREF
  _DWORD v47[2]; // [rsp+68h] [rbp-61h] BYREF
  __int64 v48; // [rsp+70h] [rbp-59h]
  _DWORD v49[2]; // [rsp+78h] [rbp-51h] BYREF
  ULONG Size; // [rsp+80h] [rbp-49h]
  unsigned int Size_4; // [rsp+84h] [rbp-45h] BYREF
  PVOID v52; // [rsp+88h] [rbp-41h] BYREF
  _DWORD v53[2]; // [rsp+90h] [rbp-39h] BYREF
  _DWORD v54[2]; // [rsp+98h] [rbp-31h] BYREF
  UNICODE_STRING *v55; // [rsp+A0h] [rbp-29h] BYREF
  _DWORD *v56; // [rsp+A8h] [rbp-21h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-19h] BYREF
  char v60; // [rsp+128h] [rbp+5Fh] BYREF
  PVOID P; // [rsp+130h] [rbp+67h]

  P = a4;
  v47[1] = 0;
  v49[1] = 0;
  v47[0] = -1;
  v49[0] = -1;
  v10 = *(_QWORD *)(a1 + 24);
  v11 = 0LL;
  v12 = *(_DWORD *)(a1 + 32);
  v13 = 0LL;
  v53[0] = -1;
  v54[0] = -1;
  v53[1] = 0;
  v54[1] = 0;
  v14 = *(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v10 + 8);
  v52 = 0LL;
  v60 = 0;
  v42 = 0LL;
  v44 = 0LL;
  LODWORD(BugCheckParameter4) = v12;
  v15 = v14(v10, v12, v54);
  v48 = v15;
  if ( v15 )
  {
    CmpUpdateKeyNodeAccessBits(v10, v15, v12);
    KCBCacheSecurity = (unsigned int *)CmGetKCBCacheSecurity(a1, a7);
    v43 = *KCBCacheSecurity;
    v17 = (unsigned int *)(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v10 + 8))(
                            v10,
                            *KCBCacheSecurity,
                            v47);
    if ( !v17 )
    {
      v18 = -1073741670;
LABEL_29:
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v10 + 16))(v10, v54);
      return (unsigned int)v18;
    }
    if ( *(_QWORD *)(a1 + 24) == qword_14033BE88 && (*a2 & 4) != 0 )
    {
      SepCheckForAllAppPackagesAceRemoval(v17 + 5, a3);
      if ( (_BYTE)P )
      {
        v55 = 0LL;
        CmpConstructNameWithStatus(a1, &v55);
        p_DestinationString = v55;
        if ( v55 )
        {
          LOBYTE(P) = 1;
        }
        else
        {
          RtlInitUnicodeString(&DestinationString, L"<Unknown registry key>");
          p_DestinationString = &DestinationString;
          LOBYTE(P) = 0;
        }
        v18 = SeAdjustObjectAppContainerSecurity(p_DestinationString, v17 + 5, a3, &v52, &v60);
        if ( (_BYTE)P )
          CmpFreeTransientPoolWithTag(p_DestinationString, 0x624E4D43u);
        if ( v18 < 0 )
          goto LABEL_97;
        if ( v60 )
          a3 = v52;
      }
    }
    ObjectsSecurityDescriptor = v17 + 5;
    v18 = SeSetSecurityDescriptorInfo(0LL, a2, a3, &ObjectsSecurityDescriptor, PoolType, GenericMapping);
    if ( v18 >= 0 )
    {
      v19 = RtlLengthSecurityDescriptor(ObjectsSecurityDescriptor);
      v20 = a7;
      Size = v19;
      if ( a7 )
        v21 = 1;
      else
        v21 = (unsigned int)BugCheckParameter4 >> 31;
      v22 = a8;
      v23 = MEMORY[0xFFFFF78000000014];
      if ( a7 )
      {
        if ( (unsigned __int8)HvpMarkCellDirty(v10, v43) )
        {
          *(_DWORD *)(v22 + 96) = -1;
          *(_QWORD *)(v22 + 88) = 0LL;
          *(_DWORD *)(v22 + 68) = 9;
          goto LABEL_10;
        }
      }
      else if ( (unsigned __int8)HvpMarkCellDirty(v10, (unsigned int)BugCheckParameter4)
             && (unsigned __int8)HvpMarkCellDirty(v10, v43) )
      {
LABEL_10:
        P = ObjectsSecurityDescriptor;
        if ( (unsigned __int8)CmpFindMatchingDescriptorCell(
                                v10,
                                ObjectsSecurityDescriptor,
                                v21,
                                &BugCheckParameter4,
                                &v56) )
        {
          v24 = (unsigned int)BugCheckParameter4;
          if ( (_DWORD)BugCheckParameter4 == v43 )
          {
            v25 = v20 == 0;
            v13 = v44;
            if ( v25 )
            {
              *(_QWORD *)(v48 + 4) = v23;
              *(_QWORD *)(a1 + 160) = v23;
            }
            else
            {
              ++v17[3];
              *(_QWORD *)(v22 + 88) = v56;
              *(_DWORD *)(v22 + 96) = v24;
            }
            goto LABEL_14;
          }
          if ( !(unsigned __int8)HvpMarkCellDirty(v10, (unsigned int)BugCheckParameter4) )
            goto LABEL_82;
          if ( v20 )
          {
            v40 = v56;
            *(_DWORD *)(v22 + 96) = *v56;
            *(_QWORD *)(v22 + 88) = v40;
          }
          else if ( v17[3] == 1
                 && (!(unsigned __int8)HvpMarkCellDirty(v10, v17[1]) || !(unsigned __int8)HvpMarkCellDirty(v10, v17[2])) )
          {
LABEL_82:
            v18 = -1073741443;
LABEL_84:
            v13 = v44;
LABEL_14:
            v11 = P;
LABEL_15:
            v26 = 0;
LABEL_16:
            v27 = 0LL;
LABEL_17:
            if ( v52 )
              ExFreePoolWithTag(v52, 0);
            if ( v11 )
              ExFreePoolWithTag(v11, 0);
            if ( v26 )
              HvFreeCell(v10, v26);
            if ( v27 )
              (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v10 + 16))(v10, v53);
            if ( v13 )
              (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v10 + 16))(v10, v49);
            if ( v17 )
              (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v10 + 16))(v10, v47);
            goto LABEL_29;
          }
          v13 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v10 + 8))(v10, (unsigned int)v24, v49);
          if ( !v13 )
          {
            if ( !a7 )
              KeBugCheckEx(0x51u, 4uLL, 5uLL, v10, v24);
            v18 = -1073741670;
            goto LABEL_14;
          }
          if ( !a7 )
          {
            v30 = v17[3];
            if ( v30 == 1 )
            {
              (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v10 + 16))(v10, v47);
              v17 = 0LL;
              CmpRemoveSecurityCellList(v10, v43);
              HvFreeCell(v10, v43);
            }
            else
            {
              v17[3] = v30 - 1;
            }
            *(_DWORD *)(v48 + 44) = v24;
          }
          ++*(_DWORD *)(v13 + 12);
          LODWORD(v31) = v43;
        }
        else
        {
          v33 = RtlLengthSecurityDescriptor(P);
          Cell = HvAllocateCell(v10, v33 + 20, v21, (__int64)&v44, (__int64)v49);
          v31 = Cell;
          if ( Cell == -1 )
          {
            v18 = -1073741670;
            goto LABEL_84;
          }
          v41 = Cell;
          if ( v20 )
          {
            v13 = v44;
            *(_DWORD *)(v44 + 8) = Cell;
            *(_DWORD *)(v13 + 4) = Cell;
          }
          else
          {
            if ( !(unsigned __int8)HvpMarkCellDirty(v10, v17[1])
              || v17[3] == 1 && !(unsigned __int8)HvpMarkCellDirty(v10, v17[2]) )
            {
              v13 = v44;
              v18 = -1073741443;
              v26 = v31;
              goto LABEL_42;
            }
            v35 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v10 + 8))(v10, v17[1], v53);
            v13 = v44;
            v42 = v35;
            if ( !v35 )
            {
              v11 = P;
              v26 = v31;
              v27 = 0LL;
              v18 = -1073741670;
              goto LABEL_17;
            }
            *(_DWORD *)(v44 + 4) = v17[1];
            *(_DWORD *)(v13 + 8) = v43;
            v17[1] = v31;
            *(_DWORD *)(v35 + 8) = v31;
            --v17[3];
          }
          v36 = P;
          *(_WORD *)v13 = 27507;
          v37 = Size;
          *(_DWORD *)(v13 + 12) = 1;
          *(_DWORD *)(v13 + 16) = v37;
          memmove((void *)(v13 + 20), v36, v37);
          if ( (int)CmpAddSecurityCellToCache(v10, (unsigned int)v31, 0LL) < 0 )
          {
            v27 = v42;
            if ( !a7 )
            {
              ++v17[3];
              v17[1] = *(_DWORD *)(v13 + 4);
              *(_DWORD *)(v42 + 8) = *(_DWORD *)(v13 + 8);
            }
            v11 = P;
            v18 = -1073741670;
            v26 = v41;
            goto LABEL_17;
          }
          if ( !a7 )
          {
            v32 = v48;
            *(_DWORD *)(v48 + 44) = v31;
            if ( !v17[3] )
            {
              (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v10 + 16))(v10, v47);
              v17 = 0LL;
              CmpRemoveSecurityCellList(v10, v43);
              HvFreeCell(v10, v43);
            }
LABEL_41:
            *(_QWORD *)(v32 + 4) = v23;
            *(_QWORD *)(a1 + 160) = v23;
            CmpAssignSecurityToKcb(a1, *(unsigned int *)(v32 + 44), 0);
            v26 = 0;
LABEL_42:
            v11 = P;
            v27 = v42;
            goto LABEL_17;
          }
          if ( !CmpFindSecurityCellCacheIndex(v10, v31, &Size_4) )
            KeBugCheckEx(0x51u, 4uLL, 3uLL, a1, v31);
          v38 = *(_DWORD **)(*(_QWORD *)(v10 + 3056) + 16LL * Size_4 + 8);
          *(_QWORD *)(v22 + 88) = v38;
          *(_DWORD *)(v22 + 96) = *v38;
        }
        if ( a7 )
        {
          v26 = 0;
          v18 = CmAddLogForAction(v22, v29);
          if ( v18 < 0 )
          {
            v25 = (*(_DWORD *)(v13 + 12))-- == 1;
            if ( v25 )
            {
              CmpRemoveSecurityCellList(v10, (unsigned int)v31);
              HvFreeCell(v10, (unsigned int)v31);
            }
          }
          goto LABEL_42;
        }
        v32 = v48;
        goto LABEL_41;
      }
      v11 = ObjectsSecurityDescriptor;
      v18 = -1073741443;
      v13 = v44;
      goto LABEL_15;
    }
LABEL_97:
    v26 = 0;
    goto LABEL_16;
  }
  return 3221225626LL;
}
