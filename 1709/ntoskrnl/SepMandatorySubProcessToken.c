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
  _BYTE *v13; // rcx
  __int64 AceByType; // rax
  _BYTE *PoolWithTag; // rax
  void *v17; // r14
  void **TokenIntegrity; // rax
  __int64 v19; // rax
  _QWORD *v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rdx
  unsigned __int8 v23; // al
  __int64 *v24; // r8
  __int64 v25; // r11
  __int64 v26; // r9
  unsigned __int8 v27; // cl
  unsigned int v28; // r10d
  __int64 v29; // rdx
  unsigned __int8 v30; // cl
  unsigned int v31; // eax
  int v32; // eax
  unsigned __int8 v33; // al
  _DWORD NumberOfBytes[3]; // [rsp+34h] [rbp-95h] BYREF
  void *v35; // [rsp+40h] [rbp-89h] BYREF
  _BYTE SecurityDescriptor[128]; // [rsp+50h] [rbp-79h] BYREF

  *(_QWORD *)&NumberOfBytes[1] = a4;
  *a4 = 0LL;
  v4 = a4;
  v5 = *(_DWORD *)(a3 + 1740);
  v35 = 0LL;
  SecurityObject = 0;
  v9 = 0LL;
  v10 = 0LL;
  if ( (v5 & 1) != 0 || (*(_DWORD *)(a2 + 212) & 2) == 0 )
    goto LABEL_13;
  SecurityObject = PsReferenceProcessFilePointer(a3, &v35);
  if ( SecurityObject < 0
    || (NumberOfBytes[0] = 128,
        v10 = SecurityDescriptor,
        SecurityObject = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u),
        SecurityObject < 0) )
  {
    v9 = v35;
    goto LABEL_15;
  }
  v9 = v35;
  SecurityObject = ObQuerySecurityObject((_DWORD)v35, 16, (unsigned int)SecurityDescriptor, 128, (__int64)NumberOfBytes);
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
          v13 = (_BYTE *)*((_QWORD *)v10 + 3);
LABEL_12:
          AceByType = RtlFindAceByType(v13, 17LL, 0LL);
          if ( AceByType )
          {
            v17 = (void *)(AceByType + 8);
            TokenIntegrity = (void **)SepLocateTokenIntegrity(a2);
            if ( TokenIntegrity )
            {
              SecurityObject = RtlSidDominates(*TokenIntegrity, v17);
              if ( SecurityObject < 0 )
                goto LABEL_15;
            }
            v4 = *(_QWORD **)&NumberOfBytes[1];
          }
          goto LABEL_13;
        }
        v12 = *((unsigned int *)v10 + 3);
        if ( (_DWORD)v12 )
        {
          v13 = &v10[v12];
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
        v19 = SepLocateTokenIntegrity(a2);
        v20 = (_QWORD *)v19;
        if ( v19 )
        {
          v21 = *(_QWORD *)(*(_QWORD *)(a2 + 216) + 48LL);
          if ( v21 )
          {
            v25 = SepLocateTokenIntegrity(v21);
            if ( v25 )
            {
              v26 = *v24;
              v27 = *(_BYTE *)(*v24 + 1);
              v28 = v27 ? *(_DWORD *)(v26 + 4LL * ((unsigned int)v27 - 1) + 8) : 0;
              v29 = *(_QWORD *)v25;
              v30 = *(_BYTE *)(*(_QWORD *)v25 + 1LL);
              v31 = v30 ? *(_DWORD *)(v29 + 4LL * ((unsigned int)v30 - 1) + 8) : 0;
              if ( v28 > v31 )
              {
                if ( v30 )
                  v32 = *(_DWORD *)(v29 + 4LL * ((unsigned int)v30 - 1) + 8);
                else
                  v32 = 0;
                *(_DWORD *)(v26 + 8) = v32;
                *v4 = *v24;
                v33 = *(_BYTE *)(*(_QWORD *)v25 + 1LL);
                if ( v33 && *(_DWORD *)(*(_QWORD *)v25 + 4LL * ((unsigned int)v33 - 1) + 8) >= 0x2000u )
                  *(_DWORD *)(a2 + 200) |= 0x2000u;
                else
                  *(_DWORD *)(a2 + 200) &= ~0x2000u;
              }
            }
          }
          else
          {
            v22 = *(_QWORD *)v19;
            v23 = *(_BYTE *)(*(_QWORD *)v19 + 1LL);
            if ( v23 && *(_DWORD *)(v22 + 4LL * ((unsigned int)v23 - 1) + 8) > 0x2000u )
            {
              *(_DWORD *)(v22 + 8) = 0x2000;
              *v4 = *v20;
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
