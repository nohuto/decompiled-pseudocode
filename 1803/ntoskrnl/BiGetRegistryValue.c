/*
 * XREFs of BiGetRegistryValue @ 0x140608704
 * Callers:
 *     BiWasFirmwareModified @ 0x140164304 (BiWasFirmwareModified.c)
 *     BiUnloadHiveByHandle @ 0x1405EE330 (BiUnloadHiveByHandle.c)
 *     BiMarkTreatAsSystemStore @ 0x1406066B8 (BiMarkTreatAsSystemStore.c)
 *     BiGetObjectDescription @ 0x140606768 (BiGetObjectDescription.c)
 *     BiIsWinPEBoot @ 0x140607744 (BiIsWinPEBoot.c)
 *     BiIsSystemStore @ 0x140607D00 (BiIsSystemStore.c)
 *     BcdGetElementDataWithFlags @ 0x140608AB0 (BcdGetElementDataWithFlags.c)
 *     BiIsPortableWorkspaceBoot @ 0x1407E241C (BiIsPortableWorkspaceBoot.c)
 *     BiGetSavedBootEntry @ 0x1407E4F84 (BiGetSavedBootEntry.c)
 *     BiUpdateBcdObject @ 0x1407E58FC (BiUpdateBcdObject.c)
 * Callees:
 *     CmSiCloseSection @ 0x1400CC154 (CmSiCloseSection.c)
 *     BiSanitizeHandle @ 0x1400D2628 (BiSanitizeHandle.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     BiZwQueryValueKey @ 0x140164384 (BiZwQueryValueKey.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     BiOpenKey @ 0x140608CE0 (BiOpenKey.c)
 */

__int64 __fastcall BiGetRegistryValue(__int64 a1, const WCHAR *a2, __int64 a3, int a4, _QWORD *a5, _DWORD *a6)
{
  const WCHAR *v8; // rax
  unsigned int i; // r15d
  _DWORD *PoolWithTag; // rsi
  unsigned __int64 v12; // rax
  __int64 v13; // r8
  NTSTATUS v14; // ebx
  void *v15; // rdi
  __int64 v16; // r8
  PVOID v17; // rax
  ULONG NumberOfBytes; // [rsp+34h] [rbp-64h] BYREF
  ULONG NumberOfBytes_4; // [rsp+38h] [rbp-60h] BYREF
  int v21[2]; // [rsp+40h] [rbp-58h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-50h] BYREF

  v8 = a2;
  for ( i = 0; ; ++i )
  {
    PoolWithTag = 0LL;
    *(_QWORD *)v21 = 0LL;
    *a5 = 0LL;
    *a6 = 0;
    RtlInitUnicodeString(&DestinationString, v8);
    v12 = BiSanitizeHandle(a1);
    a1 = v12;
    if ( a3 )
    {
      v14 = BiOpenKey(v12, a3, 131097LL, v21);
      v15 = *(void **)v21;
      if ( v14 < 0 )
        goto LABEL_10;
    }
    else
    {
      v15 = (void *)v12;
    }
    v14 = BiZwQueryValueKey(v15, &DestinationString, v13, 0LL, 0, &NumberOfBytes);
    if ( v14 == -1073741789 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x4B444342u);
      if ( !PoolWithTag )
        goto LABEL_18;
      v14 = BiZwQueryValueKey(v15, &DestinationString, v16, PoolWithTag, NumberOfBytes, &NumberOfBytes_4);
      if ( v14 >= 0 )
      {
        if ( PoolWithTag[1] != a4 )
        {
          v14 = -1073741788;
          goto LABEL_10;
        }
        NumberOfBytes -= 12;
        v17 = ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x4B444342u);
        *a5 = v17;
        if ( !v17 )
        {
LABEL_18:
          v14 = -1073741670;
          goto LABEL_10;
        }
        memmove(v17, PoolWithTag + 3, NumberOfBytes);
        *a6 = NumberOfBytes;
        v14 = 0;
      }
    }
LABEL_10:
    if ( v15 != (void *)a1 && v15 )
      CmSiCloseSection(v15);
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0x4B444342u);
    if ( v14 != -1073741443 )
      break;
    __debugbreak();
    if ( i >= 5 )
      break;
    v8 = a2;
  }
  return (unsigned int)v14;
}
