/*
 * XREFs of SepSddlGetSidForString @ 0x1C00F3590
 * Callers:
 *     SepSddlGetAclForString @ 0x1C00F3230 (SepSddlGetAclForString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SepSddlGetSidForString(wchar_t *Str1, _QWORD *a2, _QWORD *a3)
{
  unsigned int *v4; // rsi
  __int64 v7; // rbx
  __int64 v9; // rbx
  bool v10; // zf

  v4 = (unsigned int *)&unk_1C0091BE4;
  v7 = 0LL;
  while ( _wcsnicmp(Str1, (const wchar_t *)&unk_1C0091BD0 + 12 * v7 + 6, *v4) )
  {
    v7 = (unsigned int)(v7 + 1);
    v4 += 6;
    if ( (unsigned int)v7 >= 0xE )
    {
      *a2 = 0LL;
      return 3221225587LL;
    }
  }
  v9 = 3 * v7;
  v10 = *((_DWORD *)&unk_1C0091BD0 + 2 * v9 + 2) == 1;
  *a3 = &Str1[*((unsigned int *)&unk_1C0091BD0 + 2 * v9 + 5)];
  if ( !v10 || IoIsWdmVersionAvailable(1u, 0x20u) )
    *a2 = *(LUID *)((char *)&SeExports->SeCreateTokenPrivilege + *((_QWORD *)&unk_1C0091BD0 + v9));
  else
    *a2 = 0LL;
  return 0LL;
}
