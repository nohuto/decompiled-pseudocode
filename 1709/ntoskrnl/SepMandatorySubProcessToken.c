/*
 * XREFs of SepMandatorySubProcessToken @ 0x140019E94
 * Callers:
 *     SeSubProcessToken @ 0x14048CA94 (SeSubProcessToken.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140082F70 (ObfDereferenceObjectWithTag.c)
 *     RtlFindAceByType @ 0x140087840 (RtlFindAceByType.c)
 *     SepLocateTokenIntegrity @ 0x1400878E8 (SepLocateTokenIntegrity.c)
 *     RtlSidDominates @ 0x140087AD0 (RtlSidDominates.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     SeTokenIsAdmin @ 0x140513270 (SeTokenIsAdmin.c)
 *     RtlCreateSecurityDescriptor @ 0x14054A4B0 (RtlCreateSecurityDescriptor.c)
 *     ObQuerySecurityObject @ 0x140576FE4 (ObQuerySecurityObject.c)
 *     PsReferenceProcessFilePointer @ 0x1405770C0 (PsReferenceProcessFilePointer.c)
 */

__int64 __fastcall SepMandatorySubProcessToken(_DWORD *Token, __int64 a2, __int64 a3, _QWORD *a4)
{
  _QWORD *v4; // r14
  int v5; // eax
  NTSTATUS SecurityObject; // edi
  void *v9; // r12
  _BYTE *v10; // rsi
  __int16 v11; // ax
  __int64 v12; // rax
  ACL *v13; // rcx
  char *AceByType; // rax
  _BYTE *PoolWithTag; // rax
  _BYTE *v17; // r14
  PSID *TokenIntegrity; // rax
  PSID *v19; // r15
  unsigned __int8 v20; // al
  int v21; // ecx
  _QWORD *v22; // rcx
  unsigned __int8 v23; // al
  __int64 v24; // rax
  _QWORD *v25; // r8
  __int64 v26; // rcx
  __int64 v27; // rdx
  unsigned __int8 v28; // al
  __int64 *v29; // r8
  __int64 v30; // r11
  __int64 v31; // r9
  unsigned __int8 v32; // cl
  unsigned int v33; // r10d
  __int64 v34; // rdx
  unsigned __int8 v35; // cl
  unsigned int v36; // eax
  int v37; // eax
  unsigned __int8 v38; // al
  BOOLEAN Dominates[4]; // [rsp+30h] [rbp-99h] BYREF
  _DWORD NumberOfBytes[3]; // [rsp+34h] [rbp-95h] BYREF
  void *v41; // [rsp+40h] [rbp-89h] BYREF
  _BYTE SecurityDescriptor[128]; // [rsp+50h] [rbp-79h] BYREF

  *(_QWORD *)&NumberOfBytes[1] = a4;
  *a4 = 0LL;
  v4 = a4;
  v5 = *(_DWORD *)(a3 + 1740);
  v41 = 0LL;
  Dominates[0] = 0;
  SecurityObject = 0;
  v9 = 0LL;
  v10 = 0LL;
  if ( (v5 & 1) != 0 || (*(_DWORD *)(a2 + 212) & 2) == 0 )
    goto LABEL_13;
  SecurityObject = PsReferenceProcessFilePointer(a3, &v41);
  if ( SecurityObject < 0
    || (NumberOfBytes[0] = 128,
        v10 = SecurityDescriptor,
        SecurityObject = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u),
        SecurityObject < 0) )
  {
    v9 = v41;
    goto LABEL_15;
  }
  v9 = v41;
  SecurityObject = ObQuerySecurityObject((_DWORD)v41, 16, (unsigned int)SecurityDescriptor, 128, (__int64)NumberOfBytes);
  if ( SecurityObject != -1073741789 )
  {
LABEL_6:
    if ( SecurityObject >= 0 && v10 )
    {
      v11 = *((_WORD *)v10 + 1);
      if ( (v11 & 0x10) != 0 )
      {
        if ( v11 >= 0 )
        {
          v13 = (ACL *)*((_QWORD *)v10 + 3);
LABEL_12:
          AceByType = (char *)RtlFindAceByType(v13, 0x11u, 0LL);
          if ( AceByType )
          {
            v17 = AceByType + 8;
            TokenIntegrity = (PSID *)SepLocateTokenIntegrity(a2);
            v19 = TokenIntegrity;
            if ( !TokenIntegrity )
              goto LABEL_40;
            SecurityObject = RtlSidDominates(*TokenIntegrity, v17, Dominates);
            if ( SecurityObject < 0 )
              goto LABEL_15;
            if ( Dominates[0] )
            {
              v20 = v17[1];
              if ( v20 )
                v21 = *(_DWORD *)&v17[4 * v20 + 4];
              else
                v21 = 0;
              *((_DWORD *)*v19 + 2) = v21;
              v22 = *(_QWORD **)&NumberOfBytes[1];
              **(_QWORD **)&NumberOfBytes[1] = *v19;
              v23 = v17[1];
              if ( v23 && *(_DWORD *)&v17[4 * v23 + 4] >= 0x2000u )
                *(_DWORD *)(a2 + 200) |= 0x2000u;
              else
                *(_DWORD *)(a2 + 200) &= ~0x2000u;
              v4 = v22;
            }
            else
            {
LABEL_40:
              v4 = *(_QWORD **)&NumberOfBytes[1];
            }
          }
          goto LABEL_13;
        }
        v12 = *((unsigned int *)v10 + 3);
        if ( (_DWORD)v12 )
        {
          v13 = (ACL *)&v10[v12];
          goto LABEL_12;
        }
      }
      v13 = 0LL;
      goto LABEL_12;
    }
    SecurityObject = 0;
LABEL_13:
    if ( Token )
    {
      if ( (Token[50] & 0x1000) != 0 && !SeTokenIsAdmin(Token) )
      {
        *(_DWORD *)(a2 + 200) &= ~0x1000u;
        v24 = SepLocateTokenIntegrity(a2);
        v25 = (_QWORD *)v24;
        if ( v24 )
        {
          v26 = *(_QWORD *)(*(_QWORD *)(a2 + 216) + 48LL);
          if ( v26 )
          {
            v30 = SepLocateTokenIntegrity(v26);
            if ( v30 )
            {
              v31 = *v29;
              v32 = *(_BYTE *)(*v29 + 1);
              v33 = v32 ? *(_DWORD *)(v31 + 4LL * ((unsigned int)v32 - 1) + 8) : 0;
              v34 = *(_QWORD *)v30;
              v35 = *(_BYTE *)(*(_QWORD *)v30 + 1LL);
              v36 = v35 ? *(_DWORD *)(v34 + 4LL * ((unsigned int)v35 - 1) + 8) : 0;
              if ( v33 > v36 )
              {
                if ( v35 )
                  v37 = *(_DWORD *)(v34 + 4LL * ((unsigned int)v35 - 1) + 8);
                else
                  v37 = 0;
                *(_DWORD *)(v31 + 8) = v37;
                *v4 = *v29;
                v38 = *(_BYTE *)(*(_QWORD *)v30 + 1LL);
                if ( v38 && *(_DWORD *)(*(_QWORD *)v30 + 4LL * ((unsigned int)v38 - 1) + 8) >= 0x2000u )
                  *(_DWORD *)(a2 + 200) |= 0x2000u;
                else
                  *(_DWORD *)(a2 + 200) &= ~0x2000u;
              }
            }
          }
          else
          {
            v27 = *(_QWORD *)v24;
            v28 = *(_BYTE *)(*(_QWORD *)v24 + 1LL);
            if ( v28 && *(_DWORD *)(v27 + 4LL * ((unsigned int)v28 - 1) + 8) > 0x2000u )
            {
              *(_DWORD *)(v27 + 8) = 0x2000;
              *v4 = *v25;
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
