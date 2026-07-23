/*
 * XREFs of SepGetCachedHandlesEntry @ 0x14053F570
 * Callers:
 *     SepSetTokenCachedHandles @ 0x14053F3B4 (SepSetTokenCachedHandles.c)
 * Callees:
 *     RtlInsertEntryHashTable @ 0x14006C450 (RtlInsertEntryHashTable.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     RtlHashUnicodeString @ 0x140507780 (RtlHashUnicodeString.c)
 *     SepAllocateAndInitializeCachedHandleEntry @ 0x14053ED50 (SepAllocateAndInitializeCachedHandleEntry.c)
 *     SepFindMatchingCachedHandlesEntry @ 0x14053F64C (SepFindMatchingCachedHandlesEntry.c)
 */

__int64 __fastcall SepGetCachedHandlesEntry(__int64 a1, __int64 a2, _BYTE *a3, PRTL_DYNAMIC_HASH_TABLE_ENTRY *a4)
{
  _RTL_DYNAMIC_HASH_TABLE *v4; // rbp
  unsigned int v5; // ebx
  int v6; // ecx
  ULONG_PTR v10; // rsi
  unsigned int v11; // edx
  __int64 result; // rax
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v13; // rdi
  ULONG HashValue; // [rsp+50h] [rbp+8h] BYREF
  __int64 v15; // [rsp+58h] [rbp+10h]
  PRTL_DYNAMIC_HASH_TABLE_ENTRY Entry; // [rsp+60h] [rbp+18h] BYREF

  v4 = *(_RTL_DYNAMIC_HASH_TABLE **)(a1 + 8);
  v5 = 0;
  v6 = *(_DWORD *)a2;
  HashValue = 0;
  v10 = 0LL;
  if ( v6 )
  {
    if ( v6 == 1 )
    {
      RtlHashUnicodeString((PCUNICODE_STRING)(a2 + 8), 1u, 0, &HashValue);
      v10 = HashValue;
    }
  }
  else
  {
    v10 = 1LL;
    v11 = *(_DWORD *)(*(_QWORD *)(a2 + 8) + 4LL * ((unsigned int)*(unsigned __int8 *)(*(_QWORD *)(a2 + 8) + 1LL) - 1) + 8);
    if ( v11 )
      v10 = v11;
  }
  *a3 = 0;
  SepFindMatchingCachedHandlesEntry(v4);
  if ( v15 )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v15 + 24)) <= 1 )
      __fastfail(0xEu);
    *a4 = (PRTL_DYNAMIC_HASH_TABLE_ENTRY)v15;
    result = 0LL;
    *a3 = 1;
  }
  else
  {
    result = SepAllocateAndInitializeCachedHandleEntry((int *)a2, &Entry);
    if ( (int)result >= 0 )
    {
      v13 = Entry;
      if ( RtlInsertEntryHashTable(v4, Entry, v10, 0LL) )
      {
        *a4 = v13;
      }
      else
      {
        ExFreePoolWithTag(v13, 0);
        return (unsigned int)-1073741670;
      }
      return v5;
    }
  }
  return result;
}
