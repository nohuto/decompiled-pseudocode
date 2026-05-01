/*
 * XREFs of McTemplateU0zqtq @ 0x18001F1A0
 * Callers:
 *     _lambda_c35d5355421e51b91e1b7dc40faf7951_::operator() @ 0x18001DBC0 (_lambda_c35d5355421e51b91e1b7dc40faf7951_--operator().c)
 * Callees:
 *     McGenEventWriteUM @ 0x18001F258 (McGenEventWriteUM.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateU0zqtq(__int64 a1, __int64 a2, const wchar_t *a3, int a4, char a5, char a6)
{
  __int64 v6; // rax
  int v7; // ecx
  _BYTE v9[16]; // [rsp+20h] [rbp-60h] BYREF
  const wchar_t *v10; // [rsp+30h] [rbp-50h]
  int v11; // [rsp+38h] [rbp-48h]
  int v12; // [rsp+3Ch] [rbp-44h]
  int *v13; // [rsp+40h] [rbp-40h]
  __int64 v14; // [rsp+48h] [rbp-38h]
  char *v15; // [rsp+50h] [rbp-30h]
  __int64 v16; // [rsp+58h] [rbp-28h]
  char *v17; // [rsp+60h] [rbp-20h]
  __int64 v18; // [rsp+68h] [rbp-18h]
  int v19; // [rsp+A8h] [rbp+28h] BYREF

  v19 = a4;
  if ( a3 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( a3[v6] );
    v7 = 2 * v6 + 2;
  }
  else
  {
    v7 = 10;
  }
  v11 = v7;
  v12 = 0;
  if ( !a3 )
    a3 = L"NULL";
  v14 = 4LL;
  v10 = a3;
  v13 = &v19;
  v16 = 4LL;
  v15 = &a5;
  v18 = 4LL;
  v17 = &a6;
  return McGenEventWriteUM(
           &MICROSOFT_TWINUI_PUBLISHER_Context,
           &ImmersiveShell_AppManager_ApplicationStateChanged,
           5LL,
           v9);
}
