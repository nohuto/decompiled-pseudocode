/*
 * XREFs of AslPathCleanUstr @ 0x1407D9D08
 * Callers:
 *     AslPathWildcardFindFirst @ 0x1407DA2FC (AslPathWildcardFindFirst.c)
 * Callees:
 *     _wcsnicmp @ 0x1401889A0 (_wcsnicmp.c)
 *     wcsncmp @ 0x14018A6F0 (wcsncmp.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslPathCleanUstr(unsigned __int16 *a1)
{
  unsigned __int16 v2; // bp
  const wchar_t *v3; // rcx
  unsigned int v4; // edi
  int v5; // ebx
  unsigned __int16 v6; // r9
  unsigned __int64 v7; // rcx
  __int16 v8; // dx
  unsigned __int16 v9; // dx
  unsigned __int16 i; // r8
  __int64 v11; // r10
  __int16 v12; // cx
  __int64 v13; // rax
  __int16 v14; // cx
  __int64 v15; // rax
  __int16 v16; // cx
  __int64 v17; // rax
  unsigned __int16 v18; // r11
  __int16 v19; // r10
  __int64 v20; // rax
  unsigned __int16 v21; // r11
  __int16 v22; // r10
  __int64 v23; // r10
  __int16 v24; // cx

  v2 = *a1 >> 1;
  if ( *a1 < 2u || (v3 = (const wchar_t *)*((_QWORD *)a1 + 1), v4 = 0, !*v3) )
  {
    v4 = -1073741582;
    AslLogCallPrintf(
      1LL,
      (unsigned int)"AslPathCleanUstr",
      729,
      (unsigned int)"AslpPathGetFormatInfo failed [%x]",
      -1073741582);
    return v4;
  }
  if ( v2 < 8u || wcsnicmp(v3, L"\\??\\UNC\\", 8uLL) )
  {
    v5 = 4;
    if ( v2 >= 4u )
    {
      if ( !wcsncmp(*((const wchar_t **)a1 + 1), L"\\??\\", 4uLL) )
      {
        v5 = 3;
        goto LABEL_14;
      }
      if ( !wcsncmp(*((const wchar_t **)a1 + 1), L"\\\\?\\", 4uLL)
        || !wcsncmp(*((const wchar_t **)a1 + 1), L"\\\\.\\", 4uLL) )
      {
        goto LABEL_14;
      }
    }
    if ( v2 <= 2u || wcsncmp(*((const wchar_t **)a1 + 1), L"\\\\", 2uLL) )
      v5 = 1;
  }
  else
  {
    v5 = 5;
  }
LABEL_14:
  v6 = 0;
  do
  {
    v7 = 2LL * v6;
    if ( v7 >= *a1 )
      break;
    v8 = *(_WORD *)(v7 + *((_QWORD *)a1 + 1));
    if ( v8 == 92 || v8 == 47 )
      --v5;
    ++v6;
  }
  while ( v5 > 0 );
  v9 = v6;
  if ( v6 < v2 )
  {
    for ( i = v6; i < v2; ++i )
    {
      if ( i < v9 )
      {
        AslLogCallPrintf(
          1LL,
          (unsigned int)"AslPathCleanUstr",
          741,
          (unsigned int)"AslPathCleanUstr failed with source pointer behind destination pointer.");
        return (unsigned int)-1073741595;
      }
      v11 = *((_QWORD *)a1 + 1);
      v12 = *(_WORD *)(v11 + 2LL * i);
      if ( v12 == 92 || v12 == 47 )
      {
        if ( !v9 || *(_WORD *)(v11 + 2LL * v9 - 2) != 92 )
          *(_WORD *)(v11 + 2LL * v9++) = 92;
        continue;
      }
      if ( v12 != 46 )
      {
        while ( i < v2 )
        {
          v23 = *((_QWORD *)a1 + 1);
          v24 = *(_WORD *)(v23 + 2LL * i);
          if ( v24 == 92 || v24 == 47 )
            break;
          if ( i != v9 )
            *(_WORD *)(v23 + 2LL * v9) = v24;
          ++v9;
          ++i;
        }
        --i;
        continue;
      }
      v13 = (unsigned int)i + 1;
      if ( (_DWORD)v13 == v2 )
        break;
      v14 = *(_WORD *)(v11 + 2 * v13);
      if ( v14 != 92 && v14 != 47 )
      {
        if ( v14 != 46 )
          continue;
        v15 = (unsigned int)i + 2;
        if ( (_DWORD)v15 != v2 )
        {
          v16 = *(_WORD *)(v11 + 2 * v15);
          if ( v16 != 92 && v16 != 47 )
            continue;
        }
        if ( v9 < v6 )
          goto LABEL_44;
        do
        {
          v17 = *((_QWORD *)a1 + 1);
          v18 = v9;
          v19 = *(_WORD *)(v17 + 2LL * v9);
          *(_WORD *)(v17 + 2LL * v9) = 0;
          if ( v19 == 92 )
            break;
          --v9;
        }
        while ( v9 >= v6 );
        v9 = v18 - 1;
        if ( v19 == 92 )
          v9 = v18;
        if ( v9 < v6 )
          goto LABEL_44;
        do
        {
          v20 = *((_QWORD *)a1 + 1);
          v21 = v9;
          v22 = *(_WORD *)(v20 + 2LL * v9);
          *(_WORD *)(v20 + 2LL * v9) = 0;
          if ( v22 == 92 )
            break;
          --v9;
        }
        while ( v9 >= v6 );
        v9 = v21 - 1;
        if ( v22 == 92 )
          v9 = v21;
        if ( v9 < v6 )
LABEL_44:
          ++v9;
      }
      ++i;
    }
  }
  *(_WORD *)(*((_QWORD *)a1 + 1) + 2LL * v9) = 0;
  *a1 = 2 * v9;
  return v4;
}
