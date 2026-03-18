/*
 * XREFs of CmpVEExecuteVirtualStoreParseLogic @ 0x140667D78
 * Callers:
 *     CmpDoParseKey @ 0x1405343E0 (CmpDoParseKey.c)
 * Callees:
 *     RtlUnicodeStringCat @ 0x140026D10 (RtlUnicodeStringCat.c)
 *     RtlUnicodeStringCopy @ 0x14007FB50 (RtlUnicodeStringCopy.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     CmpVirtualBranchIsReplicated @ 0x1404D37D0 (CmpVirtualBranchIsReplicated.c)
 *     CmpUnblockHiveWrites @ 0x1404D451C (CmpUnblockHiveWrites.c)
 *     CmpFindPathByName @ 0x1404D4574 (CmpFindPathByName.c)
 *     CmpBlockHiveWrites @ 0x1404D5900 (CmpBlockHiveWrites.c)
 *     CmVirtualKCBToRealPath @ 0x140666C60 (CmVirtualKCBToRealPath.c)
 */

__int64 __fastcall CmpVEExecuteVirtualStoreParseLogic(__int64 a1, UNICODE_STRING *a2, _DWORD *a3, UNICODE_STRING *a4)
{
  __int64 v6; // rsi
  int v9; // ebx
  unsigned __int64 v10; // rcx
  char PathByName; // bl
  wchar_t *Buffer; // rcx
  wchar_t *v13; // rcx
  __int64 v15; // [rsp+30h] [rbp-30h] BYREF
  __int64 v16; // [rsp+38h] [rbp-28h] BYREF
  UNICODE_STRING v17; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  int v19; // [rsp+A0h] [rbp+40h] BYREF

  v6 = 0LL;
  v15 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&v17, 0LL);
  *a3 |= 8u;
  if ( CmpVirtualBranchIsReplicated(a1, a2, (char *)&v19) )
    goto LABEL_2;
  v9 = CmVirtualKCBToRealPath(a1, &DestinationString);
  if ( v9 >= 0 )
  {
    v17.MaximumLength = DestinationString.Length + a2->Length + 2;
    v17.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v17.MaximumLength, 0x624E4D43u);
    if ( !v17.Buffer )
    {
      v9 = -1073741670;
      goto LABEL_22;
    }
    RtlUnicodeStringCopy(&v17, &DestinationString);
    v10 = (unsigned __int64)v17.Length >> 1;
    v17.Length += 2;
    v17.Buffer[v10] = 92;
    RtlUnicodeStringCat(&v17, a2);
    if ( (*a3 & 1) != 0 && (_BYTE)v19 )
    {
      v9 = CmpBlockHiveWrites(0LL, 16, &v15);
      if ( v9 >= 0 )
      {
        PathByName = CmpFindPathByName(0LL, (__m128i *)&v17, 0LL, &v19, &v16);
        CmpUnblockHiveWrites(0LL, 16, v15);
        if ( PathByName )
        {
          Buffer = a4->Buffer;
          if ( Buffer )
            ExFreePoolWithTag(Buffer, 0);
          *a4 = v17;
          RtlInitUnicodeString(&v17, 0LL);
          v9 = 260;
          goto LABEL_20;
        }
        goto LABEL_2;
      }
      v6 = v15;
    }
    else
    {
      if ( (*(_DWORD *)(a1 + 4) & 0x7FE00000u) <= 0x800000 )
      {
LABEL_2:
        v9 = -1073741199;
        goto LABEL_20;
      }
      v13 = a4->Buffer;
      if ( v13 )
        ExFreePoolWithTag(v13, 0);
      *a4 = v17;
      RtlInitUnicodeString(&v17, 0LL);
      v9 = 260;
    }
    if ( v6 )
      CmpUnblockHiveWrites(0LL, 16, v6);
  }
LABEL_20:
  if ( v17.Buffer )
    ExFreePoolWithTag(v17.Buffer, 0);
LABEL_22:
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  return (unsigned int)v9;
}
