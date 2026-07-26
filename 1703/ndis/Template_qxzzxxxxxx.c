/*
 * XREFs of Template_qxzzxxxxxx @ 0x1C00733A4
 * Callers:
 *     ?ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@Z @ 0x1C0072A90 (-ndisUpdateMiniportCsTrafficStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_CS_TRAFFIC_STATS@@@.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qxzzxxxxxx(
        __int64 a1,
        __int64 a2,
        const GUID *a3,
        int a4,
        char a5,
        const wchar_t *a6,
        const wchar_t *a7,
        char a8,
        char a9,
        char a10,
        char a11,
        char a12,
        char a13)
{
  __int64 v13; // rcx
  const wchar_t *v14; // rax
  __int64 v16; // rdx
  unsigned int v17; // r8d
  const wchar_t *v18; // rax
  int v19; // edx
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+38h] [rbp-B1h] BYREF
  char *v22; // [rsp+48h] [rbp-A1h]
  __int64 v23; // [rsp+50h] [rbp-99h]
  const wchar_t *v24; // [rsp+58h] [rbp-91h]
  __int64 v25; // [rsp+60h] [rbp-89h]
  const wchar_t *v26; // [rsp+68h] [rbp-81h]
  int v27; // [rsp+70h] [rbp-79h]
  int v28; // [rsp+74h] [rbp-75h]
  char *v29; // [rsp+78h] [rbp-71h]
  __int64 v30; // [rsp+80h] [rbp-69h]
  char *v31; // [rsp+88h] [rbp-61h]
  __int64 v32; // [rsp+90h] [rbp-59h]
  char *v33; // [rsp+98h] [rbp-51h]
  __int64 v34; // [rsp+A0h] [rbp-49h]
  char *v35; // [rsp+A8h] [rbp-41h]
  __int64 v36; // [rsp+B0h] [rbp-39h]
  char *v37; // [rsp+B8h] [rbp-31h]
  __int64 v38; // [rsp+C0h] [rbp-29h]
  char *v39; // [rsp+C8h] [rbp-21h]
  __int64 v40; // [rsp+D0h] [rbp-19h]
  int v41; // [rsp+120h] [rbp+37h] BYREF

  v41 = a4;
  UserData.Ptr = (unsigned __int64)&v41;
  *(_QWORD *)&UserData.Size = 4LL;
  v22 = &a5;
  v13 = -1LL;
  v14 = a6;
  v23 = 8LL;
  if ( a6 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( a6[v16] );
    v17 = 2 * v16 + 2;
  }
  else
  {
    v17 = 10;
  }
  v25 = v17;
  if ( !a6 )
    v14 = L"NULL";
  v24 = v14;
  v18 = a7;
  if ( a7 )
  {
    do
      ++v13;
    while ( a7[v13] );
    v19 = 2 * v13 + 2;
  }
  else
  {
    v19 = 10;
  }
  v27 = v19;
  v28 = 0;
  if ( !a7 )
    v18 = L"NULL";
  v30 = 8LL;
  v26 = v18;
  v32 = 8LL;
  v29 = &a8;
  v34 = 8LL;
  v31 = &a9;
  v36 = 8LL;
  v33 = &a10;
  v35 = &a11;
  v37 = &a12;
  v39 = &a13;
  v38 = 8LL;
  v40 = 8LL;
  return EtwWrite(Microsoft_Windows_NDISHandle, &MiniportCsTraffic, a3, 0xAu, &UserData);
}
