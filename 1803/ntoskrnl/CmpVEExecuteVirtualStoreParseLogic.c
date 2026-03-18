/*
 * XREFs of CmpVEExecuteVirtualStoreParseLogic @ 0x1406F5AC8
 * Callers:
 *     CmpDoParseKey @ 0x1405A7800 (CmpDoParseKey.c)
 * Callees:
 *     RtlUnicodeStringCopy @ 0x140008980 (RtlUnicodeStringCopy.c)
 *     RtlUnicodeStringCat @ 0x1400C18B4 (RtlUnicodeStringCat.c)
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     CmpVirtualBranchIsReplicated @ 0x1405BFCD4 (CmpVirtualBranchIsReplicated.c)
 *     CmpUnblockHiveWrites @ 0x1405C007C (CmpUnblockHiveWrites.c)
 *     CmpFindPathByName @ 0x1405C00FC (CmpFindPathByName.c)
 *     CmpBlockHiveWrites @ 0x1405C0380 (CmpBlockHiveWrites.c)
 *     CmVirtualKCBToRealPath @ 0x1406F456C (CmVirtualKCBToRealPath.c)
 */

__int64 __fastcall CmpVEExecuteVirtualStoreParseLogic(__int64 a1, UNICODE_STRING *a2, _DWORD *a3, UNICODE_STRING *a4)
{
  volatile signed __int32 *v6; // rsi
  int v9; // ebx
  unsigned __int64 v10; // rcx
  __int64 v11; // r9
  char PathByName; // bl
  __int64 v13; // r9
  wchar_t *Buffer; // rcx
  wchar_t *v15; // rcx
  volatile signed __int32 *v17; // [rsp+30h] [rbp-30h] BYREF
  __int64 v18; // [rsp+38h] [rbp-28h] BYREF
  UNICODE_STRING v19; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v21; // [rsp+A0h] [rbp+40h] BYREF

  v6 = 0LL;
  v17 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&v19, 0LL);
  *a3 |= 8u;
  if ( CmpVirtualBranchIsReplicated(a1, a2, (char *)&v21) )
    goto LABEL_2;
  v9 = CmVirtualKCBToRealPath(a1, &DestinationString);
  if ( v9 >= 0 )
  {
    v19.MaximumLength = DestinationString.Length + a2->Length + 2;
    v19.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v19.MaximumLength, 0x624E4D43u);
    if ( !v19.Buffer )
    {
      v9 = -1073741670;
      goto LABEL_22;
    }
    RtlUnicodeStringCopy(&v19, &DestinationString);
    v10 = (unsigned __int64)v19.Length >> 1;
    v19.Length += 2;
    v19.Buffer[v10] = 92;
    RtlUnicodeStringCat(&v19, a2);
    if ( (*a3 & 1) != 0 && (_BYTE)v21 )
    {
      v9 = CmpBlockHiveWrites(0LL, 16, &v17);
      if ( v9 >= 0 )
      {
        PathByName = CmpFindPathByName(0LL, (__m128i *)&v19, 0LL, &v21, &v18);
        CmpUnblockHiveWrites(0LL, 16LL, (__int64)v17, v13);
        if ( PathByName )
        {
          Buffer = a4->Buffer;
          if ( Buffer )
            ExFreePoolWithTag(Buffer, 0);
          *a4 = v19;
          RtlInitUnicodeString(&v19, 0LL);
          v9 = 260;
          goto LABEL_20;
        }
        goto LABEL_2;
      }
      v6 = v17;
    }
    else
    {
      if ( (*(_DWORD *)(a1 + 4) & 0x7FE00000u) <= 0x800000 )
      {
LABEL_2:
        v9 = -1073741199;
        goto LABEL_20;
      }
      v15 = a4->Buffer;
      if ( v15 )
        ExFreePoolWithTag(v15, 0);
      *a4 = v19;
      RtlInitUnicodeString(&v19, 0LL);
      v9 = 260;
    }
    if ( v6 )
      CmpUnblockHiveWrites(0LL, 16LL, (__int64)v6, v11);
  }
LABEL_20:
  if ( v19.Buffer )
    ExFreePoolWithTag(v19.Buffer, 0);
LABEL_22:
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  return (unsigned int)v9;
}
