/*
 * XREFs of Template_zqqqqx @ 0x1C0040590
 * Callers:
 *     RaInitializeRaidResources @ 0x1C0019758 (RaInitializeRaidResources.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001EB90 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_zqqqqx(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        char a5,
        char a6,
        char a7,
        char a8)
{
  __int64 v8; // rax
  unsigned int v9; // ecx
  __int64 v11; // [rsp+30h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-51h] BYREF
  char *v13; // [rsp+50h] [rbp-41h]
  __int64 v14; // [rsp+58h] [rbp-39h]
  char *v15; // [rsp+60h] [rbp-31h]
  __int64 v16; // [rsp+68h] [rbp-29h]
  char *v17; // [rsp+70h] [rbp-21h]
  __int64 v18; // [rsp+78h] [rbp-19h]
  char *v19; // [rsp+80h] [rbp-11h]
  __int64 v20; // [rsp+88h] [rbp-9h]
  __int64 *v21; // [rsp+90h] [rbp-1h]
  __int64 v22; // [rsp+98h] [rbp+7h]

  v11 = PhysicalMemorySize;
  if ( a4 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( a4[v8] );
    v9 = 2 * v8 + 2;
  }
  else
  {
    v9 = 10;
  }
  UserData.Size = v9;
  UserData.Reserved = 0;
  if ( !a4 )
    a4 = L"NULL";
  v14 = 4LL;
  UserData.Ptr = (unsigned __int64)a4;
  v13 = &a5;
  v16 = 4LL;
  v15 = &a6;
  v18 = 4LL;
  v17 = &a7;
  v20 = 4LL;
  v19 = &a8;
  v22 = 8LL;
  v21 = &v11;
  return EtwWrite(Microsoft_Windows_StorPortHandle, &EventSetAdapterResourceList, 0LL, 6u, &UserData);
}
