/*
 * XREFs of RtlIsUntrustedObject @ 0x140066F30
 * Callers:
 *     SeGetImageRequiredSigningLevel @ 0x140546BA4 (SeGetImageRequiredSigningLevel.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x14004B900 (ExAllocatePoolWithQuotaTag.c)
 *     RtlFindAceByType @ 0x1400DBB80 (RtlFindAceByType.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwQuerySecurityObject @ 0x140180900 (ZwQuerySecurityObject.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ObQuerySecurityObject @ 0x1404A1B98 (ObQuerySecurityObject.c)
 */

NTSTATUS __cdecl RtlIsUntrustedObject(HANDLE Handle, PVOID Object, PBOOLEAN IsUntrustedObject)
{
  ACL **PoolWithQuotaTag; // rdi
  int v5; // r12d
  char v7; // r13
  NTSTATUS result; // eax
  NTSTATUS v9; // ebx
  __int64 v10; // rax
  ACL *v11; // rsi
  _BYTE *AceByType; // rax
  NTSTATUS SecurityObject; // eax
  unsigned __int8 v14; // cl
  ULONG LengthNeeded; // [rsp+30h] [rbp-C8h] BYREF
  ULONG Index[3]; // [rsp+34h] [rbp-C4h] BYREF
  _BYTE SecurityDescriptor[128]; // [rsp+40h] [rbp-B8h] BYREF

  *IsUntrustedObject = 1;
  PoolWithQuotaTag = (ACL **)SecurityDescriptor;
  v5 = (int)Object;
  if ( Object )
  {
    if ( !Handle )
      goto LABEL_3;
    return -1073741811;
  }
  if ( !Handle )
    return -1073741811;
LABEL_3:
  v7 = 0;
  if ( Handle )
  {
    result = ZwQuerySecurityObject(Handle, 0x10u, SecurityDescriptor, 0x7Cu, &LengthNeeded);
    v9 = result;
    if ( result >= 0 )
      goto LABEL_5;
    if ( result == -1073741789 )
    {
      PoolWithQuotaTag = (ACL **)ExAllocatePoolWithQuotaTag((POOL_TYPE)520, LengthNeeded, 0x62507452u);
      if ( PoolWithQuotaTag )
      {
        v7 = 1;
        SecurityObject = ZwQuerySecurityObject(Handle, 0x10u, PoolWithQuotaTag, 0x7Cu, &LengthNeeded);
        goto LABEL_24;
      }
      return -1073741801;
    }
  }
  else
  {
    result = ObQuerySecurityObject((_DWORD)Object, 16, (unsigned int)SecurityDescriptor, 124, (__int64)&LengthNeeded);
    v9 = result;
    if ( result >= 0 )
      goto LABEL_5;
    if ( result == -1073741789 )
    {
      PoolWithQuotaTag = (ACL **)ExAllocatePoolWithQuotaTag((POOL_TYPE)520, LengthNeeded, 0x62507452u);
      if ( PoolWithQuotaTag )
      {
        v7 = 1;
        SecurityObject = ObQuerySecurityObject(v5, 16, (_DWORD)PoolWithQuotaTag, 124, (__int64)&LengthNeeded);
LABEL_24:
        v9 = SecurityObject;
        if ( SecurityObject < 0 )
        {
LABEL_25:
          ExFreePoolWithTag(PoolWithQuotaTag, 0);
          return v9;
        }
LABEL_5:
        if ( (~(unsigned __int8)*((_WORD *)PoolWithQuotaTag + 1) & 0x10) == 0 )
        {
          if ( *((__int16 *)PoolWithQuotaTag + 1) >= 0 )
          {
            v11 = PoolWithQuotaTag[3];
          }
          else
          {
            v10 = *((unsigned int *)PoolWithQuotaTag + 3);
            if ( !(_DWORD)v10 )
              goto LABEL_12;
            v11 = (ACL *)((char *)PoolWithQuotaTag + v10);
          }
          if ( v11 )
          {
            Index[0] = 0;
            while ( 1 )
            {
              AceByType = RtlFindAceByType(v11, 0x11u, Index);
              if ( !AceByType )
                break;
              if ( (AceByType[1] & 8) == 0 )
              {
                v14 = AceByType[9];
                if ( !v14 || *(_DWORD *)&AceByType[4 * v14 + 12] < 0x2000u )
                  goto LABEL_13;
                break;
              }
            }
          }
        }
LABEL_12:
        *IsUntrustedObject = 0;
LABEL_13:
        if ( !v7 )
          return v9;
        goto LABEL_25;
      }
      return -1073741801;
    }
  }
  return result;
}
