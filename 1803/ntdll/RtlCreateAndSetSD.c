/*
 * XREFs of RtlCreateAndSetSD @ 0x18006BEC0
 * Callers:
 *     RtlCreateUserSecurityObject @ 0x1800D1F40 (RtlCreateUserSecurityObject.c)
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800190C0 (RtlAllocateHeap.c)
 *     RtlCreateSecurityDescriptor @ 0x18002ED10 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x180030680 (RtlCreateAcl.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x1800320D0 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x180032130 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x180032190 (RtlSetDaclSecurityDescriptor.c)
 *     RtlAddAce @ 0x18006C1B0 (RtlAddAce.c)
 *     RtlCopySid @ 0x18006C490 (RtlCopySid.c)
 *     RtlSetSaclSecurityDescriptor @ 0x18006C540 (RtlSetSaclSecurityDescriptor.c)
 */

NTSTATUS __cdecl RtlCreateAndSetSD(
        PRTL_ACE_DATA AceData,
        ULONG AceCount,
        PSID OwnerSid,
        PSID GroupSid,
        PSECURITY_DESCRIPTOR *NewSecurityDescriptor)
{
  int SecurityDescriptor; // ebx
  unsigned int v6; // r12d
  _DWORD *v7; // r14
  ULONG v8; // r9d
  PVOID ProcessHeap; // r13
  ULONG v10; // esi
  ULONG v11; // r15d
  PRTL_ACE_DATA v12; // r8
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  ACL *Heap; // rax
  ACL *v16; // rdi
  ACL *v17; // rbp
  ULONG v18; // r15d
  ACCESS_MASK *p_AccessMask; // rsi
  ACL *v20; // r12
  unsigned __int8 *v21; // r8
  int v22; // eax
  ULONG AceListLength; // ebp
  ACCESS_MASK v24; // edx
  char v25; // al
  int v26; // ecx
  ACL *Acl; // [rsp+30h] [rbp-58h]
  ACL *Sacl; // [rsp+38h] [rbp-50h]

  SecurityDescriptor = 0;
  Acl = 0LL;
  v6 = 0;
  Sacl = 0LL;
  v7 = 0LL;
  v8 = 0;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v10 = 8;
  v11 = 8;
  if ( !AceCount )
  {
LABEL_9:
    v14 = 40;
    if ( v10 != 8 )
    {
      if ( v10 + 40 < 0x28 )
        return -1073741801;
      v14 = v10 + 40;
    }
    if ( v11 != 8 )
    {
      if ( v14 + v11 < v14 )
        return -1073741801;
      v14 += v11;
    }
    Heap = (ACL *)RtlAllocateHeap(ProcessHeap, Flags + 1310720, v14);
    v16 = Heap;
    if ( Heap )
    {
      v17 = Heap + 5;
      if ( v10 != 8 )
      {
        Acl = Heap + 5;
        v17 = (ACL *)((char *)v17 + v10);
        SecurityDescriptor = RtlCreateAcl(Heap + 5, v10, 2u);
        if ( SecurityDescriptor < 0 )
          goto LABEL_48;
      }
      if ( v11 != 8 )
      {
        Sacl = v17;
        SecurityDescriptor = RtlCreateAcl(v17, v11, 2u);
        if ( SecurityDescriptor < 0 )
          goto LABEL_48;
      }
      v7 = RtlAllocateHeap(ProcessHeap, Flags + 1310720, v6);
      if ( v7 )
      {
        v18 = 0;
        if ( AceCount )
        {
          p_AccessMask = &AceData->AccessMask;
          while ( 1 )
          {
            v20 = 0LL;
            v21 = **(unsigned __int8 ***)(p_AccessMask + 1);
            v22 = v21[1];
            AceListLength = 4 * v22 + 8;
            if ( !*((_BYTE *)p_AccessMask - 4) )
              break;
            if ( *((_BYTE *)p_AccessMask - 4) == 1 )
            {
              v24 = *p_AccessMask;
              AceListLength = 4 * v22 + 20;
              v25 = *((_BYTE *)p_AccessMask - 2);
              v26 = *((unsigned __int8 *)p_AccessMask - 3);
              *(_BYTE *)v7 = 1;
              goto LABEL_22;
            }
            if ( *((_BYTE *)p_AccessMask - 4) != 2 )
              goto LABEL_24;
            v24 = *p_AccessMask;
            AceListLength = 4 * v22 + 20;
            v25 = *((_BYTE *)p_AccessMask - 2);
            LOBYTE(v26) = *((_BYTE *)p_AccessMask - 3);
            v20 = Sacl;
            *(_BYTE *)v7 = 2;
LABEL_23:
            v7[1] = v24;
            *((_BYTE *)v7 + 1) = v25 | v26;
            *((_WORD *)v7 + 1) = AceListLength;
            SecurityDescriptor = RtlCopySid(4 * v21[1] + 8, v7 + 2, v21);
LABEL_24:
            if ( SecurityDescriptor < 0 )
              goto LABEL_48;
            SecurityDescriptor = RtlAddAce(v20, 2u, 0xFFFFFFFF, v7, AceListLength);
            if ( SecurityDescriptor < 0 )
              goto LABEL_48;
            ++v18;
            p_AccessMask += 4;
            if ( v18 >= AceCount )
              goto LABEL_27;
          }
          v24 = *p_AccessMask;
          AceListLength = 4 * v22 + 20;
          v25 = *((_BYTE *)p_AccessMask - 2);
          LOBYTE(v26) = *((_BYTE *)p_AccessMask - 3);
          *(_BYTE *)v7 = 0;
LABEL_22:
          v20 = Acl;
          goto LABEL_23;
        }
LABEL_27:
        SecurityDescriptor = RtlCreateSecurityDescriptor(v16, 1u);
        if ( SecurityDescriptor >= 0 )
        {
          SecurityDescriptor = RtlSetOwnerSecurityDescriptor(v16, OwnerSid, 0);
          if ( SecurityDescriptor >= 0 )
          {
            SecurityDescriptor = RtlSetGroupSecurityDescriptor(v16, GroupSid, 0);
            if ( SecurityDescriptor >= 0 )
            {
              SecurityDescriptor = RtlSetDaclSecurityDescriptor(v16, 1u, Acl, 0);
              if ( SecurityDescriptor >= 0 )
              {
                SecurityDescriptor = RtlSetSaclSecurityDescriptor(v16, Sacl != 0LL, Sacl, 0);
                if ( SecurityDescriptor >= 0 )
                {
                  SecurityDescriptor = 0;
                  *NewSecurityDescriptor = v16;
                  goto LABEL_33;
                }
              }
            }
          }
        }
      }
      else
      {
        SecurityDescriptor = -1073741801;
      }
LABEL_48:
      RtlFreeHeap(ProcessHeap, 0, v16);
LABEL_33:
      if ( v7 )
        RtlFreeHeap(ProcessHeap, 0, v7);
      return SecurityDescriptor;
    }
    return -1073741801;
  }
  v12 = AceData;
  while ( !v12->AceType || v12->AceType == 1 )
  {
    v13 = 4 * *((unsigned __int8 *)*v12->Sid + 1) + 20;
    if ( v13 + v10 < v10 )
      return -1073741801;
    v10 += v13;
LABEL_6:
    if ( v6 > v13 )
      v13 = v6;
    ++v8;
    ++v12;
    v6 = v13;
    if ( v8 >= AceCount )
      goto LABEL_9;
  }
  if ( v12->AceType == 2 )
  {
    v13 = 4 * *((unsigned __int8 *)*v12->Sid + 1) + 20;
    if ( v13 + v11 < v11 )
      return -1073741801;
    v11 += v13;
    goto LABEL_6;
  }
  return -1073741811;
}
