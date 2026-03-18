/*
 * XREFs of AslPathToNetworkPathNt @ 0x140541914
 * Callers:
 *     SdbpResolveMatchingFile @ 0x140542220 (SdbpResolveMatchingFile.c)
 * Callees:
 *     wcscat_s @ 0x140164BF0 (wcscat_s.c)
 *     wcscpy_s @ 0x140164CA0 (wcscpy_s.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     AslAlloc @ 0x140548100 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x140772254 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslPathToNetworkPathNt(wchar_t **a1, _WORD *a2)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // rax
  wchar_t *v5; // rdi
  int v6; // ebx
  wchar_t *v7; // rcx
  __int16 v9; // ax
  const wchar_t *v10; // rsi
  __int16 v11; // ax
  __int16 v12; // ax
  rsize_t v13; // rbx
  wchar_t *v14; // rax

  v3 = -1LL;
  *a1 = 0LL;
  v4 = -1LL;
  v5 = 0LL;
  do
    ++v4;
  while ( a2[v4] );
  if ( v4 > 4
    && (*a2 == 92 || *a2 == 47)
    && ((v9 = a2[1], v9 == 92) || v9 == 47)
    && ((v10 = a2 + 2, v11 = a2[2], v11 != 46) && v11 != 63 || (v12 = a2[3], v12 != 92) && v12 != 47 && v12) )
  {
    do
      ++v3;
    while ( a2[v3] );
    v13 = v3 + 9;
    v14 = (wchar_t *)AslAlloc(a1, 2 * v13);
    v5 = v14;
    if ( v14 )
    {
      wcscpy_s(v14, v13, L"\\??\\UNC\\");
      wcscat_s(v5, v13, v10);
      v6 = 0;
      *a1 = v5;
    }
    else
    {
      v6 = -1073741801;
      AslLogCallPrintf(1, (unsigned int)"AslPathToNetworkPathNt", 252, (unsigned int)"Out of memory");
    }
  }
  else
  {
    v6 = -1073741811;
  }
  v7 = 0LL;
  if ( v6 < 0 )
    v7 = v5;
  if ( v7 )
    ExFreePoolWithTag(v7, 0x74705041u);
  return (unsigned int)v6;
}
