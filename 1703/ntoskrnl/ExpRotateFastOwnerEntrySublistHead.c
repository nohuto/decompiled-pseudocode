/*
 * XREFs of ExpRotateFastOwnerEntrySublistHead @ 0x14014E098
 * Callers:
 *     ExpReleaseDisownedFastResourceExclusive @ 0x14014D0C4 (ExpReleaseDisownedFastResourceExclusive.c)
 *     ExDisownFastResource @ 0x14014D6F0 (ExDisownFastResource.c)
 *     ExpReleaseDisownedFastResourceShared @ 0x14014DCBC (ExpReleaseDisownedFastResourceShared.c)
 *     ExpReleaseFastResourceShared @ 0x14014DF20 (ExpReleaseFastResourceShared.c)
 *     ExpReleaseFastResourceExclusive @ 0x14014E868 (ExpReleaseFastResourceExclusive.c)
 * Callees:
 *     ExpReplaceListEntry @ 0x14014E148 (ExpReplaceListEntry.c)
 */

__int64 __fastcall ExpRotateFastOwnerEntrySublistHead(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v3; // rdi
  __int64 *v5; // r11
  __int64 v7; // rax
  char v8; // al
  __int64 v9; // r11
  __int64 *v10; // rdx
  _QWORD *v11; // r10
  __int64 v12; // r11
  __int64 v13; // rax
  __int64 result; // rax
  __int64 **v15; // rcx
  __int64 *v16; // r11

  v3 = (_QWORD *)(a2 + 40);
  v5 = *(__int64 **)(a2 + 40);
  v7 = *v5;
  if ( v5[1] != a2 + 40 || *(__int64 **)(v7 + 8) != v5 )
    __fastfail(3u);
  *v3 = v7;
  *(_QWORD *)(v7 + 8) = v3;
  *((_BYTE *)v5 + 18) = 1;
  v8 = *(_BYTE *)(a2 + 16);
  *(_BYTE *)(a2 + 18) = 0;
  *((_BYTE *)v5 + 16) = v8;
  *(_BYTE *)(a2 + 16) = 0;
  ExpReplaceListEntry(a2, v5);
  ExpReplaceListEntry(v3, v9 + 40);
  v13 = *v10;
  if ( *(__int64 **)(*v10 + 8) != v10 )
    __fastfail(3u);
  *v11 = v13;
  v11[1] = v10;
  *(_QWORD *)(v13 + 8) = v11;
  *v10 = (__int64)v11;
  if ( a3 )
    return ExpReplaceListEntry(v11 + 7, v12 + 56);
  ++*(_DWORD *)(a1 + 64);
  result = a1 + 48;
  v15 = *(__int64 ***)(a1 + 56);
  v16 = (__int64 *)(v12 + 56);
  if ( *v15 != (__int64 *)(a1 + 48) )
    __fastfail(3u);
  *v16 = result;
  v16[1] = (__int64)v15;
  *v15 = v16;
  *(_QWORD *)(a1 + 56) = v16;
  return result;
}
