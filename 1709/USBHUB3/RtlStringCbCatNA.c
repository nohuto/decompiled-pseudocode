/*
 * XREFs of RtlStringCbCatNA @ 0x1C00348A4
 * Callers:
 *     HUBACPI_EvaluateDsmMethod @ 0x1C0073114 (HUBACPI_EvaluateDsmMethod.c)
 *     HUBACPI_EvalAcpiMethodEx @ 0x1C0073580 (HUBACPI_EvalAcpiMethodEx.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCbCatNA(NTSTRSAFE_PSTR pszDest, size_t cbDest, STRSAFE_PCNZCH pszSrc, size_t cbToAppend)
{
  __int64 v5; // r11
  NTSTRSAFE_PSTR v6; // rax
  NTSTATUS v7; // edx
  __int64 v8; // rax
  char *v9; // rcx
  __int64 v10; // r10
  size_t v11; // r8
  const char *v12; // rbx
  char v13; // al

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
  v7 = v5 == 0 ? 0xC000000D : 0;
  if ( v5 )
    v8 = 256 - v5;
  else
    v8 = 0LL;
  if ( v5 )
  {
    if ( cbToAppend <= 0x7FFFFFFE )
    {
      v9 = &pszDest[v8];
      v7 = 0;
      v10 = 256 - v8;
      if ( 256 == v8 )
        goto LABEL_16;
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
      if ( !v10 )
      {
LABEL_16:
        --v9;
        v7 = -2147483643;
      }
      *v9 = 0;
    }
    else
    {
      return -1073741811;
    }
  }
  return v7;
}
