/*
 * XREFs of InitializeFontSignatures @ 0x1C0388918
 * Callers:
 *     vInitMapper @ 0x1C0388900 (vInitMapper.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C002CB34 (PALLOCMEM2.c)
 */

char InitializeFontSignatures()
{
  unsigned int *v0; // rax
  __int64 v1; // r8
  __int64 Context; // [rsp+30h] [rbp-49h] BYREF
  unsigned int *v4; // [rsp+38h] [rbp-41h]
  unsigned __int16 *v5; // [rsp+40h] [rbp-39h]
  unsigned __int16 *v6; // [rsp+48h] [rbp-31h]
  unsigned __int8 v7; // [rsp+50h] [rbp-29h]
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+60h] [rbp-19h] BYREF
  __int64 v9; // [rsp+98h] [rbp+1Fh]
  int v10; // [rsp+A0h] [rbp+27h]
  __int64 v11; // [rsp+A8h] [rbp+2Fh]

  QueryTable.Flags = 4;
  QueryTable.QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)DefaultFontQueryRoutine;
  memset(&QueryTable.Name, 0, 20);
  QueryTable.DefaultData = 0LL;
  QueryTable.DefaultLength = 0;
  v9 = 0LL;
  v10 = 0;
  v11 = 0LL;
  Context = 0LL;
  v4 = 0LL;
  MAPPER::SignatureTable = 0LL;
  MAPPER::FaceNameTable = 0LL;
  LODWORD(v0) = RtlQueryRegistryValues(3u, L"FontMapper", &QueryTable, &Context, 0LL);
  if ( (int)v0 >= 0 )
  {
    v0 = (unsigned int *)PALLOCMEM2((unsigned int)(HIDWORD(Context) + 4 * Context), 1885433159LL, 1);
    MAPPER::SignatureTable = v0;
    if ( v0 )
    {
      v1 = (unsigned int)Context;
      v4 = v0;
      LODWORD(Context) = 0;
      v5 = (unsigned __int16 *)&v0[v1];
      v6 = v5;
      if ( RtlQueryRegistryValues(3u, L"FontMapper", &QueryTable, &Context, 0LL) < 0 )
      {
        LOBYTE(v0) = Win32FreePool(MAPPER::SignatureTable);
        MAPPER::SignatureTable = 0LL;
      }
      else
      {
        MAPPER::FaceNameTable = v5;
        LOBYTE(v0) = v7;
        MAPPER::DefaultCharset = v7;
      }
    }
  }
  return (char)v0;
}
