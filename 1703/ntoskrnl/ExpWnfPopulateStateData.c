/*
 * XREFs of ExpWnfPopulateStateData @ 0x14057499C
 * Callers:
 *     ExpWnfCreateNameInstance @ 0x1404EF640 (ExpWnfCreateNameInstance.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x14017E220 (ZwQueryValueKey.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     ExpWnfComposeValueName @ 0x1404C0378 (ExpWnfComposeValueName.c)
 */

__int64 __fastcall ExpWnfPopulateStateData(__int64 a1)
{
  ULONG v2; // ebp
  SIZE_T v3; // rdx
  _QWORD *PoolWithTag; // rbx
  __int64 v5; // rcx
  NTSTATUS v6; // eax
  unsigned int v7; // edi
  int v8; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-68h] BYREF
  UNICODE_STRING ValueName; // [rsp+38h] [rbp-60h] BYREF
  char v12; // [rsp+48h] [rbp-50h] BYREF

  if ( *(_QWORD *)(a1 + 88) || !*(_QWORD *)(a1 + 104) )
    return 0LL;
  v2 = *(_DWORD *)(a1 + 56);
  v3 = v2 + 16;
  while ( 1 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v3, 0x20666E57u);
    if ( !PoolWithTag )
      return 3221225626LL;
    v5 = *(_QWORD *)(a1 + 40);
    ValueName.Buffer = (wchar_t *)&v12;
    *(_DWORD *)&ValueName.Length = 2228224;
    ExpWnfComposeValueName(v5, &ValueName);
    ResultLength = v2 + 16;
    v6 = ZwQueryValueKey(
           *(HANDLE *)(a1 + 104),
           &ValueName,
           KeyValuePartialInformation,
           PoolWithTag,
           v2 + 16,
           &ResultLength);
    v7 = v6;
    if ( v6 == -1073741772 )
    {
      *PoolWithTag = 0LL;
      PoolWithTag[1] = 0LL;
LABEL_7:
      *(_DWORD *)PoolWithTag = 1050884;
      v8 = *((_DWORD *)PoolWithTag + 3);
      *((_DWORD *)PoolWithTag + 1) = v2;
      *(_DWORD *)(a1 + 96) = v8;
      *(_QWORD *)(a1 + 88) = PoolWithTag;
      return 0LL;
    }
    if ( v6 != -1073741789 )
      break;
    ExFreePoolWithTag(PoolWithTag, 0x20666E57u);
    v3 = ResultLength;
    v2 = ResultLength - 16;
  }
  if ( v6 >= 0 )
  {
    if ( *((_DWORD *)PoolWithTag + 1) == 3 && *((_DWORD *)PoolWithTag + 2) >= 4u )
    {
      *((_DWORD *)PoolWithTag + 2) -= 4;
      goto LABEL_7;
    }
    v7 = -1073741823;
  }
  ExFreePoolWithTag(PoolWithTag, 0x20666E57u);
  return v7;
}
