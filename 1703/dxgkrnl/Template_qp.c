/*
 * XREFs of Template_qp @ 0x1C0001CD8
 * Callers:
 *     DxgkStatusChangeNotify @ 0x1C0098C20 (DxgkStatusChangeNotify.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_qp(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v7; // [rsp+48h] [rbp-30h]
  __int64 v8; // [rsp+50h] [rbp-28h]
  int v9; // [rsp+98h] [rbp+20h] BYREF

  v9 = a4;
  v6.Ptr = (ULONGLONG)&v9;
  v5 = 0LL;
  v7 = &v5;
  *(_QWORD *)&v6.Size = 4LL;
  v8 = 8LL;
  return EtwWrite(Microsoft_Windows_DxgKrnlHandle, &Dxgk_PerfTrack_StatusChangeNotify, 0LL, 2u, &v6);
}
