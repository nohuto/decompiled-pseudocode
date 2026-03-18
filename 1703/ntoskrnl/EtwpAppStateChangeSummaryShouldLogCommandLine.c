/*
 * XREFs of EtwpAppStateChangeSummaryShouldLogCommandLine @ 0x140443E20
 * Callers:
 *     EtwTraceAppStateChange @ 0x1404E977C (EtwTraceAppStateChange.c)
 *     EtwTraceProcess @ 0x1404ED910 (EtwTraceProcess.c)
 * Callees:
 *     _wcsnicmp @ 0x14016A210 (_wcsnicmp.c)
 */

char __fastcall EtwpAppStateChangeSummaryShouldLogCommandLine(__int64 a1)
{
  __int16 *v1; // rcx
  char v2; // di
  unsigned __int16 v3; // ax
  const wchar_t *v4; // rcx
  unsigned __int64 v5; // rsi
  const wchar_t *v6; // rbx
  const wchar_t *v7; // rax
  size_t v8; // rsi

  v1 = *(__int16 **)(a1 + 1128);
  v2 = 0;
  v3 = *v1;
  if ( *v1 )
  {
    v4 = (const wchar_t *)*((_QWORD *)v1 + 1);
    v5 = (unsigned __int64)v3 >> 1;
    v6 = &v4[v5];
    while ( v6 != v4 )
    {
      v7 = v6--;
      if ( *v6 == 92 )
      {
        v6 = v7;
        break;
      }
    }
    v8 = v5 - (v6 - v4);
    if ( !wcsnicmp(v6, L"svchost.exe", v8) || !wcsnicmp(v6, L"oemsvchost.exe", v8) )
      return 1;
  }
  return v2;
}
