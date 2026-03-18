/*
 * XREFs of ExpRotateFastOwnerEntrySublistHead @ 0x14013FF08
 * Callers:
 *     ExDisownFastResource @ 0x14013F6A0 (ExDisownFastResource.c)
 *     ExpReleaseFastResourceExclusive @ 0x1401408BC (ExpReleaseFastResourceExclusive.c)
 *     ExpReleaseDisownedFastResourceExclusive @ 0x14028575C (ExpReleaseDisownedFastResourceExclusive.c)
 * Callees:
 *     ExpReplaceListEntry @ 0x1401406F0 (ExpReplaceListEntry.c)
 */

__int64 __fastcall ExpRotateFastOwnerEntrySublistHead(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v3; // rbx
  __int64 *v5; // r10
  __int64 v6; // rax
  char v7; // al
  __int64 v8; // r10
  __int64 *v9; // rdx
  _QWORD *v10; // r9
  __int64 v11; // r10
  __int64 v12; // r11
  __int64 v13; // rax
  __int64 result; // rax
  __int64 **v15; // rcx
  __int64 *v16; // r10

  v3 = (_QWORD *)(a2 + 40);
  v5 = *(__int64 **)(a2 + 40);
  if ( v5[1] != a2 + 40 || (v6 = *v5, *(__int64 **)(*v5 + 8) != v5) )
    __fastfail(3u);
  *v3 = v6;
  *(_QWORD *)(v6 + 8) = v3;
  *((_BYTE *)v5 + 18) = 1;
  v7 = *(_BYTE *)(a2 + 16);
  *(_BYTE *)(a2 + 18) = 0;
  *((_BYTE *)v5 + 16) = v7;
  *(_BYTE *)(a2 + 16) = 0;
  ExpReplaceListEntry(a2, v5);
  ExpReplaceListEntry(v3, v8 + 40);
  v13 = *v9;
  if ( *(__int64 **)(*v9 + 8) != v9 )
    __fastfail(3u);
  *v10 = v13;
  v10[1] = v9;
  *(_QWORD *)(v13 + 8) = v10;
  *v9 = (__int64)v10;
  if ( a3 )
    return ExpReplaceListEntry(v10 + 7, v11 + 56);
  ++*(_DWORD *)(v12 + 64);
  result = v12 + 48;
  v15 = *(__int64 ***)(v12 + 56);
  v16 = (__int64 *)(v11 + 56);
  if ( *v15 != (__int64 *)(v12 + 48) )
    __fastfail(3u);
  *v16 = result;
  v16[1] = (__int64)v15;
  *v15 = v16;
  *(_QWORD *)(v12 + 56) = v16;
  return result;
}
