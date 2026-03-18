/*
 * XREFs of ?SelectStorageTable@RFONTOBJ@@SAPEBEPEAVRFONT@@PEBE1@Z @ 0x1C00D5758
 * Callers:
 *     ?ulClearTypeFilter_6x1@@YAKPEAU_GLYPHBITS@@PEAU_GLYPHDATA@@PEAVRFONT@@@Z @ 0x1C00D54D0 (-ulClearTypeFilter_6x1@@YAKPEAU_GLYPHBITS@@PEAU_GLYPHDATA@@PEAVRFONT@@@Z.c)
 * Callees:
 *     <none>
 */

const unsigned __int8 *__fastcall RFONTOBJ::SelectStorageTable(
        struct RFONT *a1,
        const unsigned __int8 *a2,
        const unsigned __int8 *a3)
{
  int v3; // eax
  void *v4; // rdi
  char v6; // cl
  __int64 v7; // rdx

  v3 = *((_DWORD *)a1 + 49);
  v4 = &gajStorageTable;
  v6 = 1;
  if ( (v3 & 1) == 0 || *((_DWORD *)a1 + 80) )
    v6 = 0;
  v7 = *(_QWORD *)(*((_QWORD *)a1 + 14) + 32LL);
  if ( (*(_DWORD *)(v7 + 48) & 0x401000) != 0
    && v6
    && *(_WORD *)(v7 + 46) <= 0x190u
    && (!_wcsicmp((const wchar_t *)(v7 + *(int *)(v7 + 8)), L"Courier New")
     || !_wcsicmp(
           (const wchar_t *)(*(_QWORD *)(*((_QWORD *)a1 + 14) + 32LL)
                           + *(int *)(*(_QWORD *)(*((_QWORD *)a1 + 14) + 32LL) + 8LL)),
           L"Rod")
     || !_wcsicmp(
           (const wchar_t *)(*(_QWORD *)(*((_QWORD *)a1 + 14) + 32LL)
                           + *(int *)(*(_QWORD *)(*((_QWORD *)a1 + 14) + 32LL) + 8LL)),
           L"Rod Transparent")
     || !_wcsicmp(
           (const wchar_t *)(*(_QWORD *)(*((_QWORD *)a1 + 14) + 32LL)
                           + *(int *)(*(_QWORD *)(*((_QWORD *)a1 + 14) + 32LL) + 8LL)),
           L"Fixed Miriam Transparent")
     || !_wcsicmp(
           (const wchar_t *)(*(_QWORD *)(*((_QWORD *)a1 + 14) + 32LL)
                           + *(int *)(*(_QWORD *)(*((_QWORD *)a1 + 14) + 32LL) + 8LL)),
           L"Miriam Fixed")
     || !_wcsicmp(
           (const wchar_t *)(*(_QWORD *)(*((_QWORD *)a1 + 14) + 32LL)
                           + *(int *)(*(_QWORD *)(*((_QWORD *)a1 + 14) + 32LL) + 8LL)),
           L"Simplified Arabic Fixed")) )
  {
    return (const unsigned __int8 *)&gajStorageTableBloated;
  }
  return (const unsigned __int8 *)v4;
}
