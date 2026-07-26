/*
 * XREFs of Template_jqxzq @ 0x1C0064DA0
 * Callers:
 *     ndisLogMiniportEvent @ 0x1C0015BF0 (ndisLogMiniportEvent.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00B5D68 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_jqxzq(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        const GUID *a3,
        unsigned __int64 a4,
        char a5,
        char a6,
        const wchar_t *a7,
        char a8)
{
  const wchar_t *v8; // rcx
  __int64 v10; // rax
  int v11; // edx
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-39h] BYREF
  char *v14; // [rsp+40h] [rbp-29h]
  __int64 v15; // [rsp+48h] [rbp-21h]
  char *v16; // [rsp+50h] [rbp-19h]
  __int64 v17; // [rsp+58h] [rbp-11h]
  const wchar_t *v18; // [rsp+60h] [rbp-9h]
  int v19; // [rsp+68h] [rbp-1h]
  int v20; // [rsp+6Ch] [rbp+3h]
  char *v21; // [rsp+70h] [rbp+7h]
  __int64 v22; // [rsp+78h] [rbp+Fh]

  v8 = a7;
  UserData.Ptr = a4;
  v14 = &a5;
  v16 = &a6;
  *(_QWORD *)&UserData.Size = 16LL;
  v15 = 4LL;
  v17 = 8LL;
  if ( a7 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( a7[v10] );
    v11 = 2 * v10 + 2;
  }
  else
  {
    v11 = 10;
  }
  v19 = v11;
  v20 = 0;
  if ( !a7 )
    v8 = L"NULL";
  v22 = 4LL;
  v18 = v8;
  v21 = &a8;
  return EtwWrite(Microsoft_Windows_NDISHandle, a2, a3, 5u, &UserData);
}
