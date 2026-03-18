/*
 * XREFs of McTemplateK0qqx @ 0x1C00085C0
 * Callers:
 *     SecureChannel_SendRequestSynchronously @ 0x1C006053C (SecureChannel_SendRequestSynchronously.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00070C0 (__security_check_cookie.c)
 *     McGenEventWriteKM @ 0x1C00074CC (McGenEventWriteKM.c)
 */

NTSTATUS __fastcall McTemplateK0qqx(__int64 a1, __int64 a2, const GUID *a3, int a4, char a5, char a6)
{
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+30h] [rbp-50h] BYREF
  int *v8; // [rsp+40h] [rbp-40h]
  __int64 v9; // [rsp+48h] [rbp-38h]
  char *v10; // [rsp+50h] [rbp-30h]
  __int64 v11; // [rsp+58h] [rbp-28h]
  char *v12; // [rsp+60h] [rbp-20h]
  __int64 v13; // [rsp+68h] [rbp-18h]
  int v14; // [rsp+A8h] [rbp+28h] BYREF

  v14 = a4;
  v13 = 8LL;
  v9 = 4LL;
  v8 = &v14;
  v11 = 4LL;
  v10 = &a5;
  v12 = &a6;
  return McGenEventWriteKM(a1, &USBXHCI_ETW_EVENT_COMPLETED_TRUSTLET_REQUEST, a3, 4u, &v7);
}
