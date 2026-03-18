/*
 * XREFs of InitializeFontSignatures @ 0x1C0382B5C
 * Callers:
 *     vInitMapper @ 0x1C03821F0 (vInitMapper.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00B22B0 (PALLOCMEM2.c)
 */

char InitializeFontSignatures()
{
  unsigned int *v0; // rax
  __int64 v1; // r8
  __int64 v2; // rdx
  __int64 Context; // [rsp+30h] [rbp-49h] BYREF
  unsigned int *v5; // [rsp+38h] [rbp-41h]
  unsigned __int16 *v6; // [rsp+40h] [rbp-39h]
  unsigned __int16 *v7; // [rsp+48h] [rbp-31h]
  unsigned __int8 v8; // [rsp+50h] [rbp-29h]
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+60h] [rbp-19h] BYREF
  __int64 v10; // [rsp+98h] [rbp+1Fh]
  int v11; // [rsp+A0h] [rbp+27h]
  __int64 v12; // [rsp+A8h] [rbp+2Fh]

  QueryTable.Flags = 4;
  QueryTable.QueryRoutine = (PRTL_QUERY_REGISTRY_ROUTINE)DefaultFontQueryRoutine;
  memset(&QueryTable.Name, 0, 20);
  QueryTable.DefaultData = 0LL;
  QueryTable.DefaultLength = 0;
  v10 = 0LL;
  v11 = 0;
  v12 = 0LL;
  Context = 0LL;
  v5 = 0LL;
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
      v5 = v0;
      LODWORD(Context) = 0;
      v6 = (unsigned __int16 *)&v0[v1];
      v7 = v6;
      if ( RtlQueryRegistryValues(3u, L"FontMapper", &QueryTable, &Context, 0LL) < 0 )
      {
        LOBYTE(v0) = Win32FreePool(MAPPER::SignatureTable, v2);
        MAPPER::SignatureTable = 0LL;
      }
      else
      {
        MAPPER::FaceNameTable = v6;
        LOBYTE(v0) = v8;
        MAPPER::DefaultCharset = v8;
      }
    }
  }
  return (char)v0;
}
