/*
 * XREFs of SepBuildObjectSecurityDescriptor @ 0x1406F8998
 * Callers:
 *     SeAdjustObjectAppContainerSecurity @ 0x1406F8654 (SeAdjustObjectAppContainerSecurity.c)
 * Callees:
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     RtlCreateSecurityDescriptor @ 0x1404A1C80 (RtlCreateSecurityDescriptor.c)
 *     RtlSetSaclSecurityDescriptor @ 0x1404A2390 (RtlSetSaclSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1404F5D90 (RtlSetDaclSecurityDescriptor.c)
 *     RtlMakeSelfRelativeSD @ 0x140572C1C (RtlMakeSelfRelativeSD.c)
 *     SepBuildDaclWithAllApplicationPackageSid @ 0x1406F87EC (SepBuildDaclWithAllApplicationPackageSid.c)
 */

NTSTATUS __fastcall SepBuildObjectSecurityDescriptor(__int64 a1, unsigned __int8 *a2, char a3, _QWORD *a4)
{
  ULONG v8; // edx
  void *v9; // rdi
  PACL v10; // rsi
  NTSTATUS result; // eax
  __int16 v12; // cx
  __int64 v13; // rax
  ACL *v14; // rcx
  NTSTATUS v15; // eax
  NTSTATUS SelfRelativeSD; // ebx
  ACL *v17; // r8
  __int64 v18; // rax
  PVOID PoolWithTag; // rax
  _WORD SecurityDescriptor[24]; // [rsp+20h] [rbp-30h] BYREF
  PACL Dacl; // [rsp+88h] [rbp+38h] BYREF

  memset(SecurityDescriptor, 0, 0x28uLL);
  v8 = *a2;
  v9 = 0LL;
  Dacl = 0LL;
  v10 = 0LL;
  *a4 = 0LL;
  result = RtlCreateSecurityDescriptor(SecurityDescriptor, v8);
  if ( result >= 0 )
  {
    v12 = *((_WORD *)a2 + 1);
    SecurityDescriptor[1] = v12 & 0x7FFF;
    if ( (v12 & 4) == 0 )
      goto LABEL_12;
    if ( v12 >= 0 )
    {
      v14 = (ACL *)*((_QWORD *)a2 + 4);
    }
    else
    {
      v13 = *((unsigned int *)a2 + 4);
      if ( !(_DWORD)v13 )
        goto LABEL_12;
      v14 = (ACL *)&a2[v13];
    }
    if ( v14 && v14->AceCount )
    {
      v15 = SepBuildDaclWithAllApplicationPackageSid(v14, a3, &Dacl);
      v10 = Dacl;
      SelfRelativeSD = v15;
      if ( v15 < 0
        || (SelfRelativeSD = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, Dacl, 0), SelfRelativeSD < 0) )
      {
LABEL_26:
        if ( v10 )
          ExFreePoolWithTag(v10, 0);
        if ( SelfRelativeSD < 0 )
        {
          if ( v9 )
            ExFreePoolWithTag(v9, 0);
        }
        return SelfRelativeSD;
      }
LABEL_19:
      if ( (*((_WORD *)a2 + 1) & 0x10) == 0
        || (SelfRelativeSD = RtlSetSaclSecurityDescriptor(
                               SecurityDescriptor,
                               (*((_WORD *)a2 + 1) & 0x10) != 0,
                               0LL,
                               (*((_WORD *)a2 + 1) & 0x20) != 0),
            SelfRelativeSD >= 0) )
      {
        LODWORD(Dacl) = 0;
        SelfRelativeSD = RtlMakeSelfRelativeSD(SecurityDescriptor, 0LL, (PULONG)&Dacl);
        if ( SelfRelativeSD == -1073741789 )
        {
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)Dacl, 0x64536553u);
          v9 = PoolWithTag;
          if ( PoolWithTag )
          {
            SelfRelativeSD = RtlMakeSelfRelativeSD(SecurityDescriptor, PoolWithTag, (PULONG)&Dacl);
            if ( SelfRelativeSD >= 0 )
              *a4 = v9;
          }
          else
          {
            SelfRelativeSD = -1073741801;
          }
        }
      }
      goto LABEL_26;
    }
LABEL_12:
    if ( (~(unsigned __int8)*(_WORD *)(a1 + 2) & 4) != 0 )
    {
LABEL_13:
      v17 = 0LL;
      goto LABEL_18;
    }
    if ( *(__int16 *)(a1 + 2) >= 0 )
    {
      v17 = *(ACL **)(a1 + 32);
    }
    else
    {
      v18 = *(unsigned int *)(a1 + 16);
      if ( !(_DWORD)v18 )
        goto LABEL_13;
      v17 = (ACL *)(a1 + v18);
    }
LABEL_18:
    SelfRelativeSD = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v17, 0);
    if ( SelfRelativeSD < 0 )
      return SelfRelativeSD;
    goto LABEL_19;
  }
  return result;
}
