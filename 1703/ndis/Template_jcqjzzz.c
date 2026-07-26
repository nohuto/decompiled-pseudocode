/*
 * XREFs of Template_jcqjzzz @ 0x1C0073AF8
 * Callers:
 *     ?ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x1C00F7440 (-ndisPauseFilterInner@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?ndisRestartFilterInner@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00F75E0 (-ndisRestartFilterInner@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00F821C (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00FAB6C (-ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_jcqjzzz(
        __int64 a1,
        __int64 a2,
        const GUID *a3,
        unsigned __int64 a4,
        char a5,
        char a6,
        __int64 a7,
        const wchar_t *a8,
        const wchar_t *a9,
        const wchar_t *a10)
{
  const wchar_t *v10; // rdx
  int v12; // r9d
  __int64 v13; // rax
  __int64 v14; // rcx
  int v15; // r8d
  const wchar_t *v16; // rcx
  __int64 v17; // rdx
  int v18; // r8d
  const wchar_t *v19; // rcx
  bool v20; // zf
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-69h] BYREF
  char *v23; // [rsp+40h] [rbp-59h]
  __int64 v24; // [rsp+48h] [rbp-51h]
  char *v25; // [rsp+50h] [rbp-49h]
  __int64 v26; // [rsp+58h] [rbp-41h]
  __int64 v27; // [rsp+60h] [rbp-39h]
  __int64 v28; // [rsp+68h] [rbp-31h]
  const wchar_t *v29; // [rsp+70h] [rbp-29h]
  int v30; // [rsp+78h] [rbp-21h]
  int v31; // [rsp+7Ch] [rbp-1Dh]
  const wchar_t *v32; // [rsp+80h] [rbp-19h]
  int v33; // [rsp+88h] [rbp-11h]
  int v34; // [rsp+8Ch] [rbp-Dh]
  const wchar_t *v35; // [rsp+90h] [rbp-9h]
  int v36; // [rsp+98h] [rbp-1h]
  int v37; // [rsp+9Ch] [rbp+3h]

  v10 = a8;
  v23 = &a5;
  UserData.Ptr = a4;
  v25 = &a6;
  v12 = 10;
  v27 = a7;
  v13 = -1LL;
  *(_QWORD *)&UserData.Size = 16LL;
  v24 = 1LL;
  v26 = 4LL;
  v28 = 16LL;
  if ( a8 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( a8[v14] );
    v15 = 2 * v14 + 2;
  }
  else
  {
    v15 = 10;
  }
  v16 = a9;
  v30 = v15;
  v31 = 0;
  if ( !a8 )
    v10 = L"NULL";
  v29 = v10;
  if ( a9 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( a9[v17] );
    v18 = 2 * v17 + 2;
  }
  else
  {
    v18 = 10;
  }
  v33 = v18;
  v34 = 0;
  if ( !a9 )
    v16 = L"NULL";
  v32 = v16;
  v19 = a10;
  v20 = a10 == 0LL;
  if ( a10 )
  {
    do
      ++v13;
    while ( a10[v13] );
    v12 = 2 * v13 + 2;
    v20 = a10 == 0LL;
  }
  if ( v20 )
    v19 = L"NULL";
  v36 = v12;
  v35 = v19;
  v37 = 0;
  return EtwWrite(Microsoft_Windows_NDISHandle, &FilterStateChangeEx, a3, 7u, &UserData);
}
