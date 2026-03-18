/*
 * XREFs of EtwpGetGuidSecurityDescriptor @ 0x140486964
 * Callers:
 *     EtwpGetSecurityDescriptorByGuid @ 0x14048685C (EtwpGetSecurityDescriptorByGuid.c)
 *     EtwpInitializeSecurity @ 0x1408576E8 (EtwpInitializeSecurity.c)
 * Callees:
 *     ZwQueryValueKey @ 0x14017DBA0 (ZwQueryValueKey.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     SeValidSecurityDescriptor @ 0x140522E20 (SeValidSecurityDescriptor.c)
 */

__int64 __fastcall EtwpGetGuidSecurityDescriptor(PUNICODE_STRING ValueName, _QWORD *a2)
{
  _DWORD *v2; // rbx
  _DWORD *PoolWithTag; // rax
  NTSTATUS ValueKey; // eax
  int v7; // edi
  PVOID v9; // rax
  SIZE_T NumberOfBytes; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0LL;
  LODWORD(NumberOfBytes) = 524;
  *a2 = 0LL;
  while ( 1 )
  {
    if ( v2 )
      ExFreePoolWithTag(v2, 0);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x50777445u);
    v2 = PoolWithTag;
    if ( !PoolWithTag )
      break;
    ValueKey = ZwQueryValueKey(
                 EtwpSecurityKeyHandle,
                 ValueName,
                 KeyValuePartialInformation,
                 PoolWithTag,
                 NumberOfBytes,
                 (PULONG)&NumberOfBytes);
    v7 = ValueKey;
    if ( ValueKey != -2147483643 && ValueKey != -1073741789 )
      goto LABEL_7;
  }
  v7 = -1073741670;
LABEL_7:
  if ( v7 >= 0 && v2[1] == 3 )
  {
    if ( SeValidSecurityDescriptor(v2[2], v2 + 3) )
    {
      v9 = ExAllocatePoolWithTag(PagedPool, (unsigned int)v2[2], 0x50777445u);
      *a2 = v9;
      if ( v9 )
        memmove(v9, v2 + 3, (unsigned int)v2[2]);
      else
        v7 = -1073741670;
    }
    else
    {
      v7 = -1073741703;
    }
  }
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  return (unsigned int)v7;
}
