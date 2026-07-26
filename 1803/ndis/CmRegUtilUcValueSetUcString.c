/*
 * XREFs of CmRegUtilUcValueSetUcString @ 0x1C00FF988
 * Callers:
 *     PpRegStateReadCreateClassCreationSettings @ 0x1C00FF3E4 (PpRegStateReadCreateClassCreationSettings.c)
 *     CmRegUtilWstrValueSetWstrString @ 0x1C00FFAE4 (CmRegUtilWstrValueSetWstrString.c)
 * Callees:
 *     memmove @ 0x1C0025E40 (memmove.c)
 */

__int64 __fastcall CmRegUtilUcValueSetUcString(HANDLE KeyHandle, PUNICODE_STRING ValueName, unsigned __int16 *a3)
{
  __int64 v4; // r8
  unsigned int v7; // ebx
  wchar_t *PoolWithTag; // rax
  const void *v9; // rdx
  _UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-28h] BYREF

  v4 = *a3;
  if ( a3[1] - (unsigned int)v4 < 2 )
  {
    UnicodeString.Length = 0;
    UnicodeString.MaximumLength = v4 + 2;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v4 + 2, 0x63557050u);
    UnicodeString.Buffer = PoolWithTag;
    v7 = PoolWithTag == 0LL ? 0xC000009A : 0;
    if ( PoolWithTag )
    {
      v9 = (const void *)*((_QWORD *)a3 + 1);
      UnicodeString.Length = *a3;
      memmove(PoolWithTag, v9, UnicodeString.Length);
      UnicodeString.Buffer[(unsigned __int64)UnicodeString.Length >> 1] = 0;
      v7 = ZwSetValueKey(KeyHandle, ValueName, 0, 1u, UnicodeString.Buffer, UnicodeString.Length + 2);
      RtlFreeUnicodeString(&UnicodeString);
    }
  }
  else
  {
    *(_WORD *)(*((_QWORD *)a3 + 1) + 2 * ((unsigned __int64)(unsigned int)v4 >> 1)) = 0;
    return (unsigned int)ZwSetValueKey(KeyHandle, ValueName, 0, 1u, *((PVOID *)a3 + 1), *a3 + 2);
  }
  return v7;
}
