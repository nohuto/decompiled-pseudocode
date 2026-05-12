/*
 * XREFs of Template_zqcccqqqt @ 0x1C0035360
 * Callers:
 *     StorPortSetDeviceQueueDepth @ 0x1C00060C0 (StorPortSetDeviceQueueDepth.c)
 *     RaUnitSetQueueDepth @ 0x1C001AF68 (RaUnitSetQueueDepth.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001EB90 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_zqcccqqqt(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        char a5,
        char a6,
        char a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12)
{
  __int64 v12; // rax
  unsigned int v13; // ecx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-99h] BYREF
  char *v16; // [rsp+40h] [rbp-89h]
  __int64 v17; // [rsp+48h] [rbp-81h]
  char *v18; // [rsp+50h] [rbp-79h]
  __int64 v19; // [rsp+58h] [rbp-71h]
  char *v20; // [rsp+60h] [rbp-69h]
  __int64 v21; // [rsp+68h] [rbp-61h]
  char *v22; // [rsp+70h] [rbp-59h]
  __int64 v23; // [rsp+78h] [rbp-51h]
  char *v24; // [rsp+80h] [rbp-49h]
  __int64 v25; // [rsp+88h] [rbp-41h]
  char *v26; // [rsp+90h] [rbp-39h]
  __int64 v27; // [rsp+98h] [rbp-31h]
  char *v28; // [rsp+A0h] [rbp-29h]
  __int64 v29; // [rsp+A8h] [rbp-21h]
  char *v30; // [rsp+B0h] [rbp-19h]
  __int64 v31; // [rsp+B8h] [rbp-11h]

  if ( a4 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( a4[v12] );
    v13 = 2 * v12 + 2;
  }
  else
  {
    v13 = 10;
  }
  UserData.Size = v13;
  UserData.Reserved = 0;
  if ( !a4 )
    a4 = L"NULL";
  v17 = 4LL;
  UserData.Ptr = (unsigned __int64)a4;
  v16 = &a5;
  v19 = 1LL;
  v18 = &a6;
  v21 = 1LL;
  v20 = &a7;
  v23 = 1LL;
  v22 = &a8;
  v24 = &a9;
  v26 = &a10;
  v28 = &a11;
  v30 = &a12;
  v25 = 4LL;
  v27 = 4LL;
  v29 = 4LL;
  v31 = 4LL;
  return EtwWrite(Microsoft_Windows_StorPortHandle, &EventSetLunQueueDepthBtl8, 0LL, 9u, &UserData);
}
