/*
 * XREFs of Template_jq @ 0x1401E4118
 * Callers:
 *     McGenControlCallbackV2 @ 0x140164190 (McGenControlCallbackV2.c)
 *     FsRtlpHeatRegisterVolume @ 0x1406869D0 (FsRtlpHeatRegisterVolume.c)
 * Callees:
 *     EtwWriteEx @ 0x140094690 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_jq(__int64 a1, __int64 a2, const GUID *a3, ULONGLONG a4, __int64 a5)
{
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+40h] [rbp-38h] BYREF
  __int64 *v7; // [rsp+50h] [rbp-28h]
  __int64 v8; // [rsp+58h] [rbp-20h]

  v7 = &a5;
  v6.Ptr = a4;
  *(_QWORD *)&v6.Size = 16LL;
  v8 = 4LL;
  return EtwWriteEx(Microsoft_Windows_Storage_Tiering_IoHeatHandle, &TieredStorage_NewVolume, 0LL, 0, a3, 0LL, 2u, &v6);
}
