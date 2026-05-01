/*
 * XREFs of ??$SetDesiredNavigationLevel@PEBGAEAIW4VIEW_TYPE@ViewManagerInteropTelemetry@@@ViewManagerInteropTelemetry@@SAX$$QEAPEBGAEAI$$QEAW4VIEW_TYPE@0@@Z @ 0x18013B1A4
 * Callers:
 *     ?v_SetDesiredNavigationLevel@LegacyViewWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18013ADD0 (-v_SetDesiredNavigationLevel@LegacyViewWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@Shell@.c)
 *     ?v_SetDesiredNavigationLevel@UAPViewWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18013B520 (-v_SetDesiredNavigationLevel@UAPViewWrapper@@EEAAXW4NavigationLevel@ViewManagerInterop@Shell@Int.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x180118474 (-Provider@ViewManagerInteropLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

int __fastcall ViewManagerInteropTelemetry::SetDesiredNavigationLevel<unsigned short const *,unsigned int &,enum ViewManagerInteropTelemetry::VIEW_TYPE>(
        const WCHAR **a1,
        int *a2,
        int *a3)
{
  const struct _TlgProvider_t *v6; // rax
  const struct _TlgProvider_t *v7; // r10
  const WCHAR *v8; // rdx
  __int64 v9; // rax
  int v11; // [rsp+38h] [rbp-19h] BYREF
  int v12; // [rsp+3Ch] [rbp-15h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-9h] BYREF
  const WCHAR *v14; // [rsp+68h] [rbp+17h]
  int v15; // [rsp+70h] [rbp+1Fh]
  int v16; // [rsp+74h] [rbp+23h]
  int *v17; // [rsp+78h] [rbp+27h]
  __int64 v18; // [rsp+80h] [rbp+2Fh]
  int *v19; // [rsp+88h] [rbp+37h]
  __int64 v20; // [rsp+90h] [rbp+3Fh]

  v6 = ViewManagerInteropLogging::Provider();
  v7 = v6;
  if ( *(_DWORD *)v6 > 5u )
  {
    LODWORD(v6) = 0;
    if ( (*((_QWORD *)v7 + 2) & 0x200000000000LL) != 0
      && (*((_QWORD *)v7 + 3) & 0x200000000000LL) == *((_QWORD *)v7 + 3) )
    {
      v8 = &word_18021F3A8;
      LODWORD(v9) = 0;
      if ( *a1 )
      {
        v8 = *a1;
        v9 = -1LL;
        do
          ++v9;
        while ( (*a1)[v9] );
      }
      v14 = v8;
      v15 = 2 * v9 + 2;
      v11 = *a2;
      v17 = &v11;
      v12 = *a3;
      v19 = &v12;
      v16 = 0;
      v18 = 4LL;
      v20 = 4LL;
      LODWORD(v6) = TlgWrite(v7, &unk_180263C3E, 0LL, 0LL, 5u, &pData);
    }
  }
  return (int)v6;
}
