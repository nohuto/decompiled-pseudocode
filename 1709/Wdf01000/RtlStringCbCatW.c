/*
 * XREFs of RtlStringCbCatW @ 0x1C00A3FBC
 * Callers:
 *     USBDInternal_BuildServicePath @ 0x1C00A41D4 (USBDInternal_BuildServicePath.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringCbCatW(wchar_t *pszDest, unsigned __int64 cbDest, const wchar_t *a3)
{
  unsigned __int64 v3; // r10
  signed int v4; // r8d
  unsigned __int64 v6; // rcx
  wchar_t *v7; // rax
  unsigned __int64 v8; // rdx
  wchar_t *v9; // rcx
  unsigned __int64 v10; // r9
  __int64 v11; // r10
  char *v12; // rdx
  wchar_t v13; // ax

  v3 = cbDest >> 1;
  v4 = 0;
  if ( (cbDest >> 1) - 1 > 0x7FFFFFFE )
    v4 = -1073741811;
  if ( v4 < 0 )
    goto LABEL_9;
  v6 = cbDest >> 1;
  v7 = pszDest;
  if ( v3 )
  {
    do
    {
      if ( !*v7 )
        break;
      ++v7;
      --v6;
    }
    while ( v6 );
  }
  v4 = v6 == 0 ? 0xC000000D : 0;
  if ( v6 )
    v8 = v3 - v6;
  else
LABEL_9:
    v8 = 0LL;
  if ( v4 >= 0 )
  {
    v9 = &pszDest[v8];
    v4 = 0;
    v10 = v3 - v8;
    if ( v3 == v8 )
      goto LABEL_17;
    v11 = 2147483646LL;
    v12 = (char *)((char *)L"\\Parameters" - (char *)v9);
    do
    {
      if ( !v11 )
        break;
      v13 = *(wchar_t *)((char *)v9 + (_QWORD)v12);
      if ( !v13 )
        break;
      *v9 = v13;
      --v11;
      ++v9;
      --v10;
    }
    while ( v10 );
    if ( !v10 )
    {
LABEL_17:
      --v9;
      v4 = -2147483643;
    }
    *v9 = 0;
  }
  return (unsigned int)v4;
}
