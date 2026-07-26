/*
 * XREFs of Template_jqxjqxqq @ 0x1C0073C54
 * Callers:
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00F821C (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_jqxjqxqq(
        __int64 a1,
        __int64 a2,
        const GUID *a3,
        unsigned __int64 a4,
        char a5,
        char a6,
        __int64 a7,
        char a8,
        char a9,
        char a10,
        char a11)
{
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-81h] BYREF
  char *v13; // [rsp+40h] [rbp-71h]
  __int64 v14; // [rsp+48h] [rbp-69h]
  char *v15; // [rsp+50h] [rbp-61h]
  __int64 v16; // [rsp+58h] [rbp-59h]
  __int64 v17; // [rsp+60h] [rbp-51h]
  __int64 v18; // [rsp+68h] [rbp-49h]
  char *v19; // [rsp+70h] [rbp-41h]
  __int64 v20; // [rsp+78h] [rbp-39h]
  char *v21; // [rsp+80h] [rbp-31h]
  __int64 v22; // [rsp+88h] [rbp-29h]
  char *v23; // [rsp+90h] [rbp-21h]
  __int64 v24; // [rsp+98h] [rbp-19h]
  char *v25; // [rsp+A0h] [rbp-11h]
  __int64 v26; // [rsp+A8h] [rbp-9h]

  v13 = &a5;
  UserData.Ptr = a4;
  v15 = &a6;
  v17 = a7;
  v19 = &a8;
  v21 = &a9;
  v23 = &a10;
  v25 = &a11;
  *(_QWORD *)&UserData.Size = 16LL;
  v14 = 4LL;
  v16 = 8LL;
  v18 = 16LL;
  v20 = 4LL;
  v22 = 8LL;
  v24 = 4LL;
  v26 = 4LL;
  return EtwWrite(Microsoft_Windows_NDISHandle, &FilterChangedMediaType, a3, 8u, &UserData);
}
