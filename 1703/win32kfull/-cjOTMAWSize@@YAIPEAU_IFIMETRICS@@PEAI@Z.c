/*
 * XREFs of ?cjOTMAWSize@@YAIPEAU_IFIMETRICS@@PEAI@Z @ 0x1C002D3E4
 * Callers:
 *     GreGetOutlineTextMetricsInternalW @ 0x1C002D170 (GreGetOutlineTextMetricsInternalW.c)
 *     cjIFIMetricsToOTMW @ 0x1C002D514 (cjIFIMetricsToOTMW.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall cjOTMAWSize(struct _IFIMETRICS *a1, unsigned int *a2)
{
  __int64 v3; // rdi
  const WCHAR *v4; // rdx
  int v6; // ebx
  __int64 v7; // rsi
  ULONG v8; // esi
  NTSTATUS v9; // eax
  ULONG v10; // r15d
  bool v11; // r12
  ULONG v12; // r15d
  const WCHAR *v13; // rdx
  __int64 v14; // rsi
  ULONG v15; // esi
  NTSTATUS v16; // eax
  int v17; // r13d
  ULONG v18; // r15d
  __int64 v19; // rsi
  const WCHAR *v20; // rdx
  ULONG v21; // esi
  int v22; // r12d
  ULONG v23; // r15d
  const WCHAR *v24; // rdx
  ULONG v25; // edi
  ULONG v26; // r15d
  ULONG BytesInMultiByteString; // [rsp+50h] [rbp+8h] BYREF

  *a2 = 240;
  v3 = -1LL;
  v4 = (const WCHAR *)((char *)a1 + a1->dpwszFamilyName);
  v6 = 0;
  v7 = -1LL;
  do
    ++v7;
  while ( v4[v7] );
  v8 = 2 * v7;
  v9 = RtlUnicodeToMultiByteSize(&BytesInMultiByteString, v4, v8);
  v10 = BytesInMultiByteString;
  v11 = v9 >= 0;
  *a2 += v8;
  v12 = v10 + 236;
  v13 = (const WCHAR *)((char *)a1 + a1->dpwszFaceName);
  v14 = -1LL;
  do
    ++v14;
  while ( v13[v14] );
  v15 = 2 * v14;
  v16 = RtlUnicodeToMultiByteSize(&BytesInMultiByteString, v13, v15);
  *a2 += v15;
  v17 = v11 && v16 >= 0;
  v18 = BytesInMultiByteString + v12;
  v19 = -1LL;
  v20 = (const WCHAR *)((char *)a1 + a1->dpwszStyleName);
  do
    ++v19;
  while ( v20[v19] );
  v21 = 2 * v19;
  v22 = 0;
  if ( RtlUnicodeToMultiByteSize(&BytesInMultiByteString, v20, v21) >= 0 )
    v22 = v17;
  *a2 += v21;
  v23 = BytesInMultiByteString + v18;
  v24 = (const WCHAR *)((char *)a1 + a1->dpwszUniqueName);
  do
    ++v3;
  while ( v24[v3] );
  v25 = 2 * v3;
  LOBYTE(v6) = RtlUnicodeToMultiByteSize(&BytesInMultiByteString, v24, v25) >= 0;
  v26 = BytesInMultiByteString + v23;
  *a2 += v25;
  return (v22 & v6) != 0 ? v26 : 0;
}
