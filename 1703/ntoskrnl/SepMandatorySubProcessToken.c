/*
 * XREFs of SepMandatorySubProcessToken @ 0x1400662F4
 * Callers:
 *     SeSubProcessToken @ 0x1404A138C (SeSubProcessToken.c)
 * Callees:
 *     RtlSidDominates @ 0x140064060 (RtlSidDominates.c)
 *     SepLocateTokenIntegrity @ 0x140064184 (SepLocateTokenIntegrity.c)
 *     RtlFindAceByType @ 0x1400DBB80 (RtlFindAceByType.c)
 *     ObfDereferenceObjectWithTag @ 0x1400EFC60 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ObQuerySecurityObject @ 0x1404A1B98 (ObQuerySecurityObject.c)
 *     RtlCreateSecurityDescriptor @ 0x1404A1C80 (RtlCreateSecurityDescriptor.c)
 *     PsReferenceProcessFilePointer @ 0x1404A1CC0 (PsReferenceProcessFilePointer.c)
 *     SeTokenIsAdmin @ 0x140560050 (SeTokenIsAdmin.c)
 */

__int64 __fastcall SepMandatorySubProcessToken(_DWORD *Token, __int64 a2, __int64 a3, _QWORD *a4)
{
  _QWORD *v4; // r14
  int v5; // eax
  NTSTATUS SecurityObject; // edi
  void *v9; // r12
  _BYTE *v10; // rsi
  __int64 v11; // rax
  ACL *v12; // rcx
  char *AceByType; // rax
  _BYTE *PoolWithTag; // rax
  _BYTE *v16; // r14
  PSID *TokenIntegrity; // rax
  PSID *v18; // r15
  unsigned __int8 v19; // al
  int v20; // ecx
  _QWORD *v21; // rcx
  unsigned __int8 v22; // al
  __int64 v23; // rax
  _QWORD *v24; // r8
  __int64 v25; // rcx
  __int64 v26; // rdx
  unsigned __int8 v27; // al
  __int64 *v28; // r8
  __int64 v29; // r11
  __int64 v30; // r9
  unsigned __int8 v31; // cl
  unsigned int v32; // r10d
  __int64 v33; // rdx
  unsigned __int8 v34; // cl
  unsigned int v35; // eax
  int v36; // eax
  unsigned __int8 v37; // al
  BOOLEAN Dominates[4]; // [rsp+30h] [rbp-99h] BYREF
  _DWORD NumberOfBytes[3]; // [rsp+34h] [rbp-95h] BYREF
  void *v40; // [rsp+40h] [rbp-89h] BYREF
  _BYTE SecurityDescriptor[128]; // [rsp+50h] [rbp-79h] BYREF

  *(_QWORD *)&NumberOfBytes[1] = a4;
  *a4 = 0LL;
  v4 = a4;
  v5 = *(_DWORD *)(a3 + 1740);
  v40 = 0LL;
  Dominates[0] = 0;
  SecurityObject = 0;
  v9 = 0LL;
  v10 = 0LL;
  if ( (v5 & 1) != 0 || (*(_DWORD *)(a2 + 212) & 2) == 0 )
    goto LABEL_13;
  SecurityObject = PsReferenceProcessFilePointer(a3, &v40);
  if ( SecurityObject < 0
    || (NumberOfBytes[0] = 128,
        v10 = SecurityDescriptor,
        SecurityObject = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u),
        SecurityObject < 0) )
  {
    v9 = v40;
    goto LABEL_15;
  }
  v9 = v40;
  SecurityObject = ObQuerySecurityObject((_DWORD)v40, 16, (unsigned int)SecurityDescriptor, 128, (__int64)NumberOfBytes);
  if ( SecurityObject != -1073741789 )
  {
LABEL_6:
    if ( SecurityObject >= 0 && v10 )
    {
      if ( (~(unsigned __int8)*((_WORD *)v10 + 1) & 0x10) == 0 )
      {
        if ( *((__int16 *)v10 + 1) >= 0 )
        {
          v12 = (ACL *)*((_QWORD *)v10 + 3);
LABEL_12:
          AceByType = (char *)RtlFindAceByType(v12, 0x11u, 0LL);
          if ( AceByType )
          {
            v16 = AceByType + 8;
            TokenIntegrity = (PSID *)SepLocateTokenIntegrity(a2);
            v18 = TokenIntegrity;
            if ( !TokenIntegrity )
              goto LABEL_40;
            SecurityObject = RtlSidDominates(*TokenIntegrity, v16, Dominates);
            if ( SecurityObject < 0 )
              goto LABEL_15;
            if ( Dominates[0] )
            {
              v19 = v16[1];
              if ( v19 )
                v20 = *(_DWORD *)&v16[4 * v19 + 4];
              else
                v20 = 0;
              *((_DWORD *)*v18 + 2) = v20;
              v21 = *(_QWORD **)&NumberOfBytes[1];
              **(_QWORD **)&NumberOfBytes[1] = *v18;
              v22 = v16[1];
              if ( v22 && *(_DWORD *)&v16[4 * v22 + 4] >= 0x2000u )
                *(_DWORD *)(a2 + 200) |= 0x2000u;
              else
                *(_DWORD *)(a2 + 200) &= ~0x2000u;
              v4 = v21;
            }
            else
            {
LABEL_40:
              v4 = *(_QWORD **)&NumberOfBytes[1];
            }
          }
          goto LABEL_13;
        }
        v11 = *((unsigned int *)v10 + 3);
        if ( (_DWORD)v11 )
        {
          v12 = (ACL *)&v10[v11];
          goto LABEL_12;
        }
      }
      v12 = 0LL;
      goto LABEL_12;
    }
    SecurityObject = 0;
LABEL_13:
    if ( Token )
    {
      if ( (Token[50] & 0x1000) != 0 && !SeTokenIsAdmin(Token) )
      {
        *(_DWORD *)(a2 + 200) &= ~0x1000u;
        v23 = SepLocateTokenIntegrity(a2);
        v24 = (_QWORD *)v23;
        if ( v23 )
        {
          v25 = *(_QWORD *)(*(_QWORD *)(a2 + 216) + 48LL);
          if ( v25 )
          {
            v29 = SepLocateTokenIntegrity(v25);
            if ( v29 )
            {
              v30 = *v28;
              v31 = *(_BYTE *)(*v28 + 1);
              v32 = v31 ? *(_DWORD *)(v30 + 4LL * ((unsigned int)v31 - 1) + 8) : 0;
              v33 = *(_QWORD *)v29;
              v34 = *(_BYTE *)(*(_QWORD *)v29 + 1LL);
              v35 = v34 ? *(_DWORD *)(v33 + 4LL * ((unsigned int)v34 - 1) + 8) : 0;
              if ( v32 > v35 )
              {
                if ( v34 )
                  v36 = *(_DWORD *)(v33 + 4LL * ((unsigned int)v34 - 1) + 8);
                else
                  v36 = 0;
                *(_DWORD *)(v30 + 8) = v36;
                *v4 = *v28;
                v37 = *(_BYTE *)(*(_QWORD *)v29 + 1LL);
                if ( v37 && *(_DWORD *)(*(_QWORD *)v29 + 4LL * ((unsigned int)v37 - 1) + 8) >= 0x2000u )
                  *(_DWORD *)(a2 + 200) |= 0x2000u;
                else
                  *(_DWORD *)(a2 + 200) &= ~0x2000u;
              }
            }
          }
          else
          {
            v26 = *(_QWORD *)v23;
            v27 = *(_BYTE *)(*(_QWORD *)v23 + 1LL);
            if ( v27 && *(_DWORD *)(v26 + 4LL * ((unsigned int)v27 - 1) + 8) > 0x2000u )
            {
              *(_DWORD *)(v26 + 8) = 0x2000;
              *v4 = *v24;
            }
          }
        }
      }
    }
    goto LABEL_15;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes[0], 0x20206553u);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
  {
    SecurityObject = -1073741801;
    goto LABEL_15;
  }
  SecurityObject = RtlCreateSecurityDescriptor(PoolWithTag, 1u);
  if ( SecurityObject >= 0 )
  {
    SecurityObject = ObQuerySecurityObject((_DWORD)v9, 16, (_DWORD)v10, NumberOfBytes[0], (__int64)NumberOfBytes);
    goto LABEL_6;
  }
LABEL_15:
  if ( v9 )
    ObfDereferenceObjectWithTag(v9, 0x746C6644u);
  if ( v10 && v10 != SecurityDescriptor )
    ExFreePoolWithTag(v10, 0);
  return (unsigned int)SecurityObject;
}
