/*
 * XREFs of RtlStringCbCatNA @ 0x1C0035BA4
 * Callers:
 *     HUBACPI_EvaluateDsmMethod @ 0x1C0072FE4 (HUBACPI_EvaluateDsmMethod.c)
 *     HUBACPI_EvalAcpiMethodEx @ 0x1C0073450 (HUBACPI_EvalAcpiMethodEx.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCbCatNA(NTSTRSAFE_PSTR pszDest, size_t cbDest, STRSAFE_PCNZCH pszSrc, size_t cbToAppend)
{
  __int64 v5; // r10
  NTSTRSAFE_PSTR v6; // rax
  NTSTATUS result; // eax
  __int64 v8; // r8
  char *v9; // rcx
  __int64 v10; // rdx
  size_t v11; // r8
  const char *v12; // r11
  char v13; // al
  char *v14; // rax

  v5 = 256LL;
  v6 = pszDest;
  do
  {
    if ( !*v6 )
      break;
    ++v6;
    --v5;
  }
  while ( v5 );
  result = v5 == 0 ? 0xC000000D : 0;
  if ( v5 )
    v8 = 256 - v5;
  else
    v8 = 0LL;
  if ( v5 )
  {
    if ( cbToAppend <= 0x7FFFFFFE )
    {
      v9 = &pszDest[v8];
      v10 = 256 - v8;
      if ( 256 != v8 )
      {
        v11 = cbToAppend;
        v12 = (const char *)(pszSrc - v9);
        do
        {
          if ( !v11 )
            break;
          v13 = v9[(_QWORD)v12];
          if ( !v13 )
            break;
          *v9 = v13;
          --v11;
          ++v9;
          --v10;
        }
        while ( v10 );
      }
      v14 = v9 - 1;
      if ( v10 )
        v14 = v9;
      *v14 = 0;
      return v10 == 0 ? 0x80000005 : 0;
    }
    else
    {
      return -1073741811;
    }
  }
  return result;
}
