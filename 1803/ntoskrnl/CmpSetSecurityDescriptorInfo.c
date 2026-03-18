/*
 * XREFs of CmpSetSecurityDescriptorInfo @ 0x1404E1604
 * Callers:
 *     CmpSetKeySecurity @ 0x1400633D0 (CmpSetKeySecurity.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140002440 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x140009020 (CmpAllocateTransientPoolWithTag.c)
 *     CmpFreeTransientPoolWithTag @ 0x140009034 (CmpFreeTransientPoolWithTag.c)
 *     CmpRemoveSecurityCellList @ 0x1400CE6D8 (CmpRemoveSecurityCellList.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     CmpFindMatchingDescriptorCell @ 0x1404A0A60 (CmpFindMatchingDescriptorCell.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x1404A339C (CmpUpdateKeyNodeAccessBits.c)
 *     CmGetKCBCacheSecurity @ 0x1404A822C (CmGetKCBCacheSecurity.c)
 *     CmpFindSecurityCellCacheIndex @ 0x1404A9B50 (CmpFindSecurityCellCacheIndex.c)
 *     CmpConstructNameWithStatus @ 0x1404ABC50 (CmpConstructNameWithStatus.c)
 *     RtlLengthSecurityDescriptor @ 0x1404C7070 (RtlLengthSecurityDescriptor.c)
 *     SeCheckForCriticalAceRemoval @ 0x1404E14B0 (SeCheckForCriticalAceRemoval.c)
 *     CmpTraceSecurityChanging @ 0x1404E1C30 (CmpTraceSecurityChanging.c)
 *     HvpMarkCellDirty @ 0x1404E3EC4 (HvpMarkCellDirty.c)
 *     RtlpSetSecurityObject @ 0x1404EB1D0 (RtlpSetSecurityObject.c)
 *     HvFreeCell @ 0x14051584C (HvFreeCell.c)
 *     HvAllocateCell @ 0x140515B84 (HvAllocateCell.c)
 *     CmpAssignSecurityToKcb @ 0x140516C04 (CmpAssignSecurityToKcb.c)
 *     CmpAddSecurityCellToCache @ 0x140516D50 (CmpAddSecurityCellToCache.c)
 *     CmAddLogForAction @ 0x140576A18 (CmAddLogForAction.c)
 */

__int64 CmpSetSecurityDescriptorInfo(__int64 a1, unsigned int *a2, ...)
{
  unsigned int v4; // r13d
  ULONG_PTR v5; // rsi
  __int64 v6; // r14
  unsigned int v7; // r15d
  __int64 (__fastcall *v8)(ULONG_PTR, _QWORD, _DWORD *); // rax
  __int64 v9; // rax
  __int64 v10; // r12
  unsigned int *KCBCacheSecurity; // rax
  __int64 v12; // rax
  unsigned int *v13; // r15
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rdi
  int v19; // edi
  PSECURITY_DESCRIPTOR v20; // r13
  unsigned int v21; // r14d
  __int64 v22; // r13
  __int64 v23; // rbx
  unsigned int v24; // r14d
  __int64 v25; // rbx
  unsigned int v27; // eax
  ULONG_PTR BugCheckParameter4; // r12
  __int64 v29; // r13
  ULONG v30; // eax
  unsigned int Cell; // eax
  __int64 v32; // rax
  PSECURITY_DESCRIPTOR v33; // rdx
  unsigned int v34; // eax
  int v35; // eax
  UNICODE_STRING *p_DestinationString; // rcx
  UNICODE_STRING *v37; // rbx
  _DWORD *v38; // rcx
  int *v39; // rcx
  __int64 v41; // [rsp+50h] [rbp-89h]
  unsigned int v42; // [rsp+58h] [rbp-81h]
  __int64 v43; // [rsp+60h] [rbp-79h] BYREF
  ULONG_PTR v44; // [rsp+68h] [rbp-71h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+70h] [rbp-69h] BYREF
  _DWORD v46[2]; // [rsp+78h] [rbp-61h] BYREF
  __int64 v47; // [rsp+80h] [rbp-59h]
  _DWORD v48[2]; // [rsp+88h] [rbp-51h] BYREF
  size_t Size; // [rsp+90h] [rbp-49h]
  PPRIVILEGE_SET Privileges; // [rsp+98h] [rbp-41h]
  _DWORD v51[2]; // [rsp+A0h] [rbp-39h] BYREF
  _DWORD v52[2]; // [rsp+A8h] [rbp-31h] BYREF
  UNICODE_STRING *v53; // [rsp+B0h] [rbp-29h] BYREF
  int *v54; // [rsp+B8h] [rbp-21h] BYREF
  UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-19h] BYREF
  ULONG_PTR v58; // [rsp+138h] [rbp+5Fh] BYREF
  va_list va; // [rsp+138h] [rbp+5Fh]
  __int64 v60; // [rsp+140h] [rbp+67h] BYREF
  va_list va1; // [rsp+140h] [rbp+67h]
  __int64 v62; // [rsp+148h] [rbp+6Fh]
  __int64 v63; // [rsp+150h] [rbp+77h]
  __int64 v64; // [rsp+158h] [rbp+7Fh]
  __int64 v65; // [rsp+160h] [rbp+87h]
  __int64 *v66; // [rsp+168h] [rbp+8Fh]
  va_list va2; // [rsp+170h] [rbp+97h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v58 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v60 = va_arg(va2, _QWORD);
  v62 = va_arg(va2, _QWORD);
  v63 = va_arg(va2, _QWORD);
  v64 = va_arg(va2, _QWORD);
  v65 = va_arg(va2, _QWORD);
  v66 = va_arg(va2, __int64 *);
  v41 = 0LL;
  v46[1] = 0;
  v46[0] = -1;
  v48[0] = -1;
  v4 = 0;
  v5 = *(_QWORD *)(a1 + 24);
  v6 = 0LL;
  v7 = *(_DWORD *)(a1 + 32);
  v51[0] = -1;
  v52[0] = -1;
  v48[1] = 0;
  v51[1] = 0;
  v52[1] = 0;
  v8 = *(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v5 + 8);
  v43 = 0LL;
  LODWORD(v44) = v7;
  v9 = v8(v5, v7, v52);
  v47 = v9;
  if ( v9 )
  {
    CmpUpdateKeyNodeAccessBits(v5, v9, v7);
    v10 = v64;
    KCBCacheSecurity = (unsigned int *)CmGetKCBCacheSecurity(a1, v64);
    v42 = *KCBCacheSecurity;
    v12 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v5 + 8))(v5, *KCBCacheSecurity, v46);
    v13 = (unsigned int *)v12;
    if ( !v12 )
    {
      v19 = -1073741670;
LABEL_30:
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v5 + 16))(v5, v52);
      return (unsigned int)v19;
    }
    TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(
                                                      PagedPool,
                                                      *(unsigned int *)(v12 + 16),
                                                      0x36384D43u);
    Privileges = TransientPoolWithTag;
    if ( !TransientPoolWithTag )
    {
      v19 = -1073741670;
LABEL_28:
      if ( v13 )
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v5 + 16))(v5, v46);
      goto LABEL_30;
    }
    memmove(TransientPoolWithTag, v13 + 5, v13[4]);
    v17 = *a2;
    v18 = (__int64)v66;
    if ( (v17 & 4) != 0 && (SeCheckForCriticalAceRemoval(v16, v15, v66, (__int64 *)va1), (_BYTE)v60) )
    {
      v53 = 0LL;
      CmpConstructNameWithStatus(a1, &v53);
      p_DestinationString = v53;
      v37 = v53;
      if ( !v53 )
      {
        RtlInitUnicodeString(&DestinationString, L"<Unknown registry key>");
        p_DestinationString = &DestinationString;
      }
      v19 = -1073741822;
      if ( v37 )
        CmpFreeTransientPoolWithTag(p_DestinationString, 0x624E4D43u);
    }
    else
    {
      SecurityDescriptor = Privileges;
      v19 = RtlpSetSecurityObject(v16, *a2, v58, (unsigned int)&SecurityDescriptor, 0, v62, v63, v18);
      if ( v19 >= 0 )
      {
        v20 = SecurityDescriptor;
        v19 = CmpTraceSecurityChanging(a1, Privileges, *a2, v58, SecurityDescriptor);
        if ( v19 < 0 )
        {
          v4 = 0;
          goto LABEL_19;
        }
        LODWORD(Size) = RtlLengthSecurityDescriptor(v20);
        if ( v10 )
          v21 = 1;
        else
          v21 = (unsigned int)v44 >> 31;
        v22 = v65;
        v23 = MEMORY[0xFFFFF78000000014];
        if ( v10 )
        {
          if ( !(unsigned __int8)HvpMarkCellDirty(v5, v42) )
          {
LABEL_75:
            v19 = -1073741443;
LABEL_17:
            v6 = v43;
LABEL_18:
            v4 = 0;
LABEL_19:
            v25 = v41;
            goto LABEL_20;
          }
          *(_DWORD *)(v22 + 96) = -1;
          *(_QWORD *)(v22 + 88) = 0LL;
          *(_DWORD *)(v22 + 68) = 9;
        }
        else if ( !(unsigned __int8)HvpMarkCellDirty(v5, (unsigned int)v44)
               || !(unsigned __int8)HvpMarkCellDirty(v5, v42) )
        {
          goto LABEL_75;
        }
        if ( CmpFindMatchingDescriptorCell(v5, SecurityDescriptor, v21, (ULONG_PTR *)va, &v54) )
        {
          v24 = v58;
          if ( (_DWORD)v58 == v42 )
          {
            if ( v10 )
            {
              ++v13[3];
              *(_QWORD *)(v22 + 88) = v54;
              *(_DWORD *)(v22 + 96) = v24;
            }
            else
            {
              *(_QWORD *)(v47 + 4) = v23;
              *(_QWORD *)(a1 + 160) = v23;
            }
            goto LABEL_17;
          }
          if ( !(unsigned __int8)HvpMarkCellDirty(v5, (unsigned int)v58) )
            goto LABEL_75;
          if ( v10 )
          {
            v39 = v54;
            *(_DWORD *)(v22 + 96) = *v54;
            *(_QWORD *)(v22 + 88) = v39;
          }
          else if ( v13[3] == 1
                 && (!(unsigned __int8)HvpMarkCellDirty(v5, v13[1]) || !(unsigned __int8)HvpMarkCellDirty(v5, v13[2])) )
          {
            goto LABEL_75;
          }
          v6 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v5 + 8))(v5, v24, v48);
          if ( !v6 )
          {
            if ( !v10 )
              KeBugCheckEx(0x51u, 4uLL, 5uLL, v5, (unsigned int)v58);
            v19 = -1073741670;
            goto LABEL_18;
          }
          if ( !v10 )
          {
            v27 = v13[3];
            if ( v27 == 1 )
            {
              (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v5 + 16))(v5, v46);
              v13 = 0LL;
              CmpRemoveSecurityCellList(v5, v42);
              HvFreeCell(v5, v42);
            }
            else
            {
              v13[3] = v27 - 1;
            }
            *(_DWORD *)(v47 + 44) = v58;
          }
          ++*(_DWORD *)(v6 + 12);
          LODWORD(BugCheckParameter4) = v42;
        }
        else
        {
          v30 = RtlLengthSecurityDescriptor(SecurityDescriptor);
          Cell = HvAllocateCell(v5, v30 + 20, v21, (unsigned int)&v43, (__int64)v48);
          BugCheckParameter4 = Cell;
          if ( Cell == -1 )
          {
            v19 = -1073741670;
            goto LABEL_17;
          }
          if ( v64 )
          {
            v6 = v43;
            *(_DWORD *)(v43 + 8) = Cell;
            *(_DWORD *)(v6 + 4) = Cell;
          }
          else
          {
            if ( !(unsigned __int8)HvpMarkCellDirty(v5, v13[1])
              || v13[3] == 1 && !(unsigned __int8)HvpMarkCellDirty(v5, v13[2]) )
            {
              v6 = v43;
              v19 = -1073741443;
              v4 = BugCheckParameter4;
              goto LABEL_19;
            }
            v32 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v5 + 8))(v5, v13[1], v51);
            v6 = v43;
            v41 = v32;
            if ( !v32 )
            {
              v19 = -1073741670;
              v4 = BugCheckParameter4;
              v25 = 0LL;
LABEL_20:
              if ( SecurityDescriptor )
                ExFreePoolWithTag(SecurityDescriptor, 0);
              goto LABEL_22;
            }
            *(_DWORD *)(v43 + 4) = v13[1];
            *(_DWORD *)(v6 + 8) = v42;
            v13[1] = BugCheckParameter4;
            *(_DWORD *)(v32 + 8) = BugCheckParameter4;
            --v13[3];
          }
          v33 = SecurityDescriptor;
          *(_WORD *)v6 = 27507;
          v34 = Size;
          *(_DWORD *)(v6 + 12) = 1;
          *(_DWORD *)(v6 + 16) = v34;
          memmove((void *)(v6 + 20), v33, v34);
          if ( (int)CmpAddSecurityCellToCache(v5, (unsigned int)BugCheckParameter4, 0LL) < 0 )
          {
            v25 = v41;
            if ( !v64 )
            {
              ++v13[3];
              v13[1] = *(_DWORD *)(v6 + 4);
              *(_DWORD *)(v41 + 8) = *(_DWORD *)(v6 + 8);
            }
            v19 = -1073741670;
            v4 = BugCheckParameter4;
            goto LABEL_20;
          }
          if ( !v64 )
          {
            v29 = v47;
            *(_DWORD *)(v47 + 44) = BugCheckParameter4;
            if ( !v13[3] )
            {
              (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v5 + 16))(v5, v46);
              v13 = 0LL;
              CmpRemoveSecurityCellList(v5, v42);
              HvFreeCell(v5, v42);
            }
LABEL_42:
            *(_QWORD *)(v29 + 4) = v23;
            ++*(_QWORD *)(a1 + 296);
            *(_QWORD *)(a1 + 160) = v23;
            CmpAssignSecurityToKcb(a1, *(unsigned int *)(v29 + 44), 0);
            v4 = 0;
            goto LABEL_19;
          }
          if ( !CmpFindSecurityCellCacheIndex(v5, BugCheckParameter4, (unsigned int *)&v44) )
            KeBugCheckEx(0x51u, 4uLL, 3uLL, a1, BugCheckParameter4);
          v38 = *(_DWORD **)(*(_QWORD *)(v5 + 1880) + 16LL * (unsigned int)v44 + 8);
          *(_QWORD *)(v22 + 88) = v38;
          *(_DWORD *)(v22 + 96) = *v38;
        }
        if ( v64 )
        {
          v35 = CmAddLogForAction(v22);
          v4 = 0;
          v19 = v35;
          if ( v35 < 0 && (*(_DWORD *)(v6 + 12))-- == 1 )
          {
            CmpRemoveSecurityCellList(v5, (unsigned int)BugCheckParameter4);
            HvFreeCell(v5, (unsigned int)BugCheckParameter4);
          }
          goto LABEL_19;
        }
        v29 = v47;
        goto LABEL_42;
      }
    }
    v25 = 0LL;
LABEL_22:
    CmSiFreeMemory(Privileges);
    if ( v4 )
      HvFreeCell(v5, v4);
    if ( v25 )
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v5 + 16))(v5, v51);
    if ( v6 )
      (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v5 + 16))(v5, v48);
    goto LABEL_28;
  }
  return 3221225626LL;
}
