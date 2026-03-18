/*
 * XREFs of SepBuildObjectSecurityDescriptor @ 0x140730628
 * Callers:
 *     SeAdjustObjectSecurity @ 0x140730224 (SeAdjustObjectSecurity.c)
 * Callees:
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140486330 (RtlSetDaclSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x140549920 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x140549980 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x14054A4B0 (RtlCreateSecurityDescriptor.c)
 *     RtlSetSaclSecurityDescriptor @ 0x14054A4F0 (RtlSetSaclSecurityDescriptor.c)
 *     RtlMakeSelfRelativeSD @ 0x14057BC68 (RtlMakeSelfRelativeSD.c)
 *     SepBuildDaclWithCriticalAces @ 0x1407303A4 (SepBuildDaclWithCriticalAces.c)
 */

NTSTATUS __fastcall SepBuildObjectSecurityDescriptor(
        __int64 a1,
        unsigned __int8 *a2,
        char a3,
        char a4,
        char a5,
        char a6,
        _QWORD *a7)
{
  ULONG v10; // edx
  void *v11; // r14
  PACL v12; // r12
  NTSTATUS result; // eax
  __int16 v14; // cx
  __int64 v15; // rax
  unsigned __int8 *v16; // rdx
  NTSTATUS SelfRelativeSD; // ebx
  __int64 v18; // rax
  unsigned __int8 *v19; // rdx
  __int16 v20; // ax
  BOOLEAN v21; // r15
  __int64 v22; // rax
  ACL *v23; // rcx
  NTSTATUS v24; // eax
  __int16 v25; // ax
  ACL *v26; // r8
  __int64 v27; // rax
  __int16 v28; // ax
  ACL *v29; // r8
  __int64 v30; // rax
  PVOID PoolWithTag; // rax
  _WORD SecurityDescriptor[24]; // [rsp+30h] [rbp-30h] BYREF
  PACL Dacl; // [rsp+A8h] [rbp+48h] BYREF
  char v34; // [rsp+B0h] [rbp+50h]

  v34 = a3;
  memset(SecurityDescriptor, 0, 0x28uLL);
  v10 = *a2;
  v11 = 0LL;
  Dacl = 0LL;
  v12 = 0LL;
  *a7 = 0LL;
  result = RtlCreateSecurityDescriptor(SecurityDescriptor, v10);
  if ( result >= 0 )
  {
    v14 = *((_WORD *)a2 + 1);
    SecurityDescriptor[1] = v14 & 0x7FFF;
    if ( v14 >= 0 )
    {
      v16 = (unsigned __int8 *)*((_QWORD *)a2 + 1);
    }
    else
    {
      v15 = *((unsigned int *)a2 + 1);
      if ( (_DWORD)v15 )
        v16 = &a2[v15];
      else
        v16 = 0LL;
    }
    SelfRelativeSD = RtlSetOwnerSecurityDescriptor(SecurityDescriptor, v16, v14 & 1);
    if ( SelfRelativeSD < 0 )
      return SelfRelativeSD;
    if ( *((__int16 *)a2 + 1) >= 0 )
    {
      v19 = (unsigned __int8 *)*((_QWORD *)a2 + 2);
    }
    else
    {
      v18 = *((unsigned int *)a2 + 2);
      v19 = (_DWORD)v18 ? &a2[v18] : 0LL;
    }
    SelfRelativeSD = RtlSetGroupSecurityDescriptor(SecurityDescriptor, v19, (*((_WORD *)a2 + 1) & 2) != 0);
    if ( SelfRelativeSD < 0 )
      return SelfRelativeSD;
    v20 = *((_WORD *)a2 + 1);
    v21 = (v20 & 8) != 0;
    if ( (v20 & 4) != 0 )
    {
      if ( v20 >= 0 )
      {
        v23 = (ACL *)*((_QWORD *)a2 + 4);
      }
      else
      {
        v22 = *((unsigned int *)a2 + 4);
        v23 = (_DWORD)v22 ? (ACL *)&a2[v22] : 0LL;
      }
      if ( v23 && v23->AceCount )
      {
        v24 = SepBuildDaclWithCriticalAces(v23, v34, a4, a5, a6, &Dacl);
        v12 = Dacl;
        SelfRelativeSD = v24;
        if ( v24 < 0 )
          goto LABEL_45;
        SelfRelativeSD = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, Dacl, v21);
        if ( SelfRelativeSD < 0 )
          goto LABEL_45;
LABEL_32:
        if ( (*((_WORD *)a2 + 1) & 0x10) == 0 )
          goto LABEL_40;
        v28 = *(_WORD *)(a1 + 2);
        if ( (v28 & 0x10) == 0 )
          goto LABEL_34;
        if ( v28 >= 0 )
        {
          v29 = *(ACL **)(a1 + 24);
        }
        else
        {
          v30 = *(unsigned int *)(a1 + 12);
          if ( !(_DWORD)v30 )
          {
LABEL_34:
            v29 = 0LL;
            goto LABEL_39;
          }
          v29 = (ACL *)(a1 + v30);
        }
LABEL_39:
        SelfRelativeSD = RtlSetSaclSecurityDescriptor(
                           SecurityDescriptor,
                           (*((_WORD *)a2 + 1) & 0x10) != 0,
                           v29,
                           (*((_WORD *)a2 + 1) & 0x20) != 0);
        if ( SelfRelativeSD < 0 )
        {
LABEL_45:
          if ( v12 )
            ExFreePoolWithTag(v12, 0);
          if ( SelfRelativeSD < 0 )
          {
            if ( v11 )
              ExFreePoolWithTag(v11, 0);
          }
          return SelfRelativeSD;
        }
LABEL_40:
        LODWORD(Dacl) = 0;
        SelfRelativeSD = RtlMakeSelfRelativeSD(SecurityDescriptor, 0LL, (PULONG)&Dacl);
        if ( SelfRelativeSD == -1073741789 )
        {
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)Dacl, 0x64536553u);
          v11 = PoolWithTag;
          if ( PoolWithTag )
          {
            SelfRelativeSD = RtlMakeSelfRelativeSD(SecurityDescriptor, PoolWithTag, (PULONG)&Dacl);
            if ( SelfRelativeSD >= 0 )
              *a7 = v11;
          }
          else
          {
            SelfRelativeSD = -1073741801;
          }
        }
        goto LABEL_45;
      }
    }
    v25 = *(_WORD *)(a1 + 2);
    if ( (v25 & 4) == 0 )
      goto LABEL_26;
    if ( v25 >= 0 )
    {
      v26 = *(ACL **)(a1 + 32);
    }
    else
    {
      v27 = *(unsigned int *)(a1 + 16);
      if ( !(_DWORD)v27 )
      {
LABEL_26:
        v26 = 0LL;
        goto LABEL_31;
      }
      v26 = (ACL *)(a1 + v27);
    }
LABEL_31:
    SelfRelativeSD = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v26, (*((_WORD *)a2 + 1) & 8) != 0);
    if ( SelfRelativeSD >= 0 )
      goto LABEL_32;
    return SelfRelativeSD;
  }
  return result;
}
