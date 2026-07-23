/*
 * XREFs of RtlpGetNormalization @ 0x14078B538
 * Callers:
 *     RtlIsNormalizedString @ 0x14078A980 (RtlIsNormalizedString.c)
 *     RtlNormalizeString @ 0x14078AA10 (RtlNormalizeString.c)
 * Callees:
 *     ZwGetNlsSectionPtr @ 0x1401A9300 (ZwGetNlsSectionPtr.c)
 *     NormalizationListEntry_Alloc @ 0x140294078 (NormalizationListEntry_Alloc.c)
 *     NormalizationList__InsertTail @ 0x14029409C (NormalizationList__InsertTail.c)
 *     NormalizationList__Lock @ 0x1402940D0 (NormalizationList__Lock.c)
 *     NormalizationList__Lookup @ 0x140294100 (NormalizationList__Lookup.c)
 *     NormalizationList__Unlock @ 0x140294130 (NormalizationList__Unlock.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     Normalization__LoadTables @ 0x140789DD4 (Normalization__LoadTables.c)
 */

__int64 __fastcall RtlpGetNormalization(unsigned int a1, char **a2)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  char *v7; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  char *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  NTSTATUS NlsSectionPtr; // ebx
  __int64 v14; // r8
  __int64 v15; // r9
  char *v16; // rax
  _DWORD *v17; // rbx
  int Tables; // ebp
  unsigned __int64 SectionSize; // [rsp+58h] [rbp+10h] BYREF
  PVOID SectionPointer; // [rsp+60h] [rbp+18h] BYREF

  if ( !a2 )
    return 3221225712LL;
  NormalizationList__Lock();
  v7 = NormalizationList__Lookup(a1);
  if ( !v7 )
  {
    v10 = NormalizationList__Lookup((unsigned int)v6 ^ 0x100);
    if ( v10 )
    {
      SectionPointer = (PVOID)*((_QWORD *)v10 + 1);
      SectionSize = *((_QWORD *)v10 + 2);
    }
    else
    {
      NlsSectionPtr = ZwGetNlsSectionPtr(0xCu, a1 & 0xFFFFFEFF, 0LL, &SectionPointer, (PULONG)&SectionSize);
      if ( NlsSectionPtr < 0 )
        goto LABEL_12;
    }
    v16 = (char *)NormalizationListEntry_Alloc();
    v17 = v16;
    if ( !v16 )
    {
      NlsSectionPtr = -1073741801;
LABEL_12:
      NormalizationList__Unlock(v12, v11, v14, v15);
      return (unsigned int)NlsSectionPtr;
    }
    v7 = v16 + 24;
    Tables = Normalization__LoadTables(a1, (unsigned __int16 *)SectionPointer, SectionSize, (_DWORD *)v16 + 6);
    if ( Tables < 0 )
    {
      ExFreePoolWithTag(v17, 0);
      NlsSectionPtr = Tables;
      goto LABEL_12;
    }
    v17[4] = a1;
    NormalizationList__InsertTail((__int64)v17);
  }
  NormalizationList__Unlock(v6, v5, v8, v9);
  result = 0LL;
  *a2 = v7;
  return result;
}
