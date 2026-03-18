/*
 * XREFs of CmDeleteKeyRecursive @ 0x1406FBD00
 * Callers:
 *     CmDeleteKeyRecursive @ 0x1406FBD00 (CmDeleteKeyRecursive.c)
 *     CmpMoveBiosAliasTable @ 0x1406FCAF8 (CmpMoveBiosAliasTable.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     wcscpy_s @ 0x14018EC10 (wcscpy_s.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401A7700 (ZwOpenKey.c)
 *     ZwEnumerateKey @ 0x1401A7B00 (ZwEnumerateKey.c)
 *     ZwDeleteKey @ 0x1401A8E60 (ZwDeleteKey.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     CmDeleteKeyRecursive @ 0x1406FBD00 (CmDeleteKeyRecursive.c)
 */

NTSTATUS __fastcall CmDeleteKeyRecursive(void *a1, const WCHAR *a2, __int64 a3, int a4, ULONG ResultLength)
{
  NTSTATUS result; // eax
  NTSTATUS i; // eax
  __int64 v10; // rdx
  PVOID PoolWithTag; // rax
  int v12; // edi
  __int64 v13; // rdx
  int v14; // edi
  NTSTATUS v15; // ebx
  ULONG Length; // [rsp+20h] [rbp-50h]
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+90h] [rbp+20h] BYREF
  PVOID P; // [rsp+A0h] [rbp+30h]
  int v21; // [rsp+A8h] [rbp+38h]

  v21 = a4;
  RtlInitUnicodeString(&DestinationString, a2);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = a1;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
  if ( result >= 0 )
  {
    for ( i = ZwEnumerateKey(KeyHandle, 0, KeyBasicInformation, (PVOID)a3, a4 - 2, &ResultLength);
          ;
          i = ZwEnumerateKey(KeyHandle, 0, KeyBasicInformation, (PVOID)a3, v21 - 2, &ResultLength) )
    {
      v14 = i;
      if ( i < 0 )
        break;
      v10 = -1LL;
      *(_WORD *)(a3 + 2 * ((unsigned __int64)*(unsigned int *)(a3 + 12) >> 1) + 16) = 0;
      do
        ++v10;
      while ( *(_WORD *)(a3 + 2 * v10 + 16) );
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 2 * v10 + 2, 0x20204D43u);
      P = PoolWithTag;
      v12 = (int)PoolWithTag;
      if ( !PoolWithTag )
      {
        v14 = -1073741670;
        break;
      }
      v13 = -1LL;
      do
        ++v13;
      while ( *(_WORD *)(a3 + 2 * v13 + 16) );
      wcscpy_s((wchar_t *)PoolWithTag, v13 + 1, (const wchar_t *)(a3 + 16));
      LOBYTE(Length) = 1;
      v14 = CmDeleteKeyRecursive((int)KeyHandle, v12, a3, v21, Length);
      ExFreePoolWithTag(P, 0);
      if ( v14 < 0 )
        break;
    }
    v15 = 0;
    if ( v14 != -2147483622 )
      v15 = v14;
    if ( v15 >= 0 )
      v15 = ZwDeleteKey(KeyHandle);
    ZwClose(KeyHandle);
    return v15;
  }
  return result;
}
