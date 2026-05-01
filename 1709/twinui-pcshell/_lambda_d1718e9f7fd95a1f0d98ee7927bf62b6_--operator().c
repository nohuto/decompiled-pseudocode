/*
 * XREFs of _lambda_d1718e9f7fd95a1f0d98ee7927bf62b6_::operator() @ 0x180005138
 * Callers:
 *     _lambda_d1718e9f7fd95a1f0d98ee7927bf62b6_::_lambda_invoker_cdecl_ @ 0x180005260 (_lambda_d1718e9f7fd95a1f0d98ee7927bf62b6_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

void __fastcall lambda_d1718e9f7fd95a1f0d98ee7927bf62b6_::operator()(__int64 a1, __int64 a2)
{
  const wchar_t *v2; // r8
  const wchar_t *v3; // rcx
  __int64 v4; // rax
  const wchar_t *v5; // r9
  const wchar_t *v6; // rcx
  const WCHAR *v7; // rcx
  const WCHAR *v8; // rdx
  int v9; // [rsp+30h] [rbp-39h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-29h] BYREF
  int *v11; // [rsp+60h] [rbp-9h]
  __int64 v12; // [rsp+68h] [rbp-1h]
  const wchar_t *v13; // [rsp+70h] [rbp+7h]
  int v14; // [rsp+78h] [rbp+Fh]
  int v15; // [rsp+7Ch] [rbp+13h]
  __int64 v16; // [rsp+80h] [rbp+17h]
  __int64 v17; // [rsp+88h] [rbp+1Fh]
  const wchar_t *v18; // [rsp+90h] [rbp+27h]
  int v19; // [rsp+98h] [rbp+2Fh]
  int v20; // [rsp+9Ch] [rbp+33h]
  const WCHAR *v21; // [rsp+A0h] [rbp+37h]
  int v22; // [rsp+A8h] [rbp+3Fh]
  int v23; // [rsp+ACh] [rbp+43h]

  if ( hProvider > 5u )
  {
    v2 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
    v3 = *(const wchar_t **)(a2 + 48);
    v9 = *(_DWORD *)(a2 + 4);
    v12 = 4LL;
    v11 = &v9;
    LODWORD(v4) = 0;
    v5 = &`DesktopSingleViewShellExperiencePersonality::GetTypeId'::`2'::unique;
    if ( v3 )
    {
      v5 = v3;
      v4 = -1LL;
      do
        ++v4;
      while ( *((_BYTE *)v3 + v4) );
    }
    v6 = *(const wchar_t **)(a2 + 40);
    v14 = v4 + 1;
    v16 = a2 + 56;
    LODWORD(v4) = 0;
    v13 = v5;
    v15 = 0;
    v17 = 4LL;
    if ( v6 )
    {
      v2 = v6;
      v4 = -1LL;
      do
        ++v4;
      while ( *((_BYTE *)v6 + v4) );
    }
    v7 = *(const WCHAR **)(a2 + 16);
    v19 = v4 + 1;
    LODWORD(v4) = 0;
    v18 = v2;
    v8 = &word_18021F3A8;
    v20 = 0;
    if ( v7 )
    {
      v8 = v7;
      v4 = -1LL;
      do
        ++v4;
      while ( v7[v4] );
    }
    v21 = v8;
    v22 = 2 * v4 + 2;
    v23 = 0;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180254149, 0LL, 0LL, 7u, &pData);
  }
}
