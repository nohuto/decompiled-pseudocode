/*
 * XREFs of Template_qzz @ 0x1C004FE1C
 * Callers:
 *     ndisHandleUModePnPOp @ 0x1C00D9594 (ndisHandleUModePnPOp.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qzz(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        int a4,
        const wchar_t *a5,
        const wchar_t *a6)
{
  const wchar_t *v6; // rcx
  __int64 v8; // rax
  int v9; // r9d
  __int64 v10; // rdx
  int v11; // r8d
  const wchar_t *v12; // rcx
  bool v13; // zf
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-40h] BYREF
  const wchar_t *v16; // [rsp+40h] [rbp-30h]
  int v17; // [rsp+48h] [rbp-28h]
  int v18; // [rsp+4Ch] [rbp-24h]
  const wchar_t *v19; // [rsp+50h] [rbp-20h]
  int v20; // [rsp+58h] [rbp-18h]
  int v21; // [rsp+5Ch] [rbp-14h]
  int v22; // [rsp+98h] [rbp+28h] BYREF

  v22 = a4;
  v6 = a5;
  UserData.Ptr = (unsigned __int64)&v22;
  v8 = -1LL;
  *(_QWORD *)&UserData.Size = 4LL;
  v9 = 10;
  if ( a5 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( a5[v10] );
    v11 = 2 * v10 + 2;
  }
  else
  {
    v11 = 10;
  }
  v17 = v11;
  v18 = 0;
  if ( !a5 )
    v6 = L"NULL";
  v16 = v6;
  v12 = a6;
  v13 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v8;
    while ( a6[v8] );
    v9 = 2 * v8 + 2;
    v13 = a6 == 0LL;
  }
  if ( v13 )
    v12 = L"NULL";
  v20 = v9;
  v19 = v12;
  v21 = 0;
  return EtwWrite(Microsoft_Windows_NDISHandle, a2, &NDIS_PROVIDER_ID, 3u, &UserData);
}
