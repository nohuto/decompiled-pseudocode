/*
 * XREFs of Template_f @ 0x1801A8984
 * Callers:
 *     ?DoTextureUpdates@CHolographicClient@@AEAAXXZ @ 0x1801A77DC (-DoTextureUpdates@CHolographicClient@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

ULONG __fastcall Template_f(__int64 a1, __int64 a2, float a3)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-28h] BYREF
  float v5; // [rsp+60h] [rbp+18h] BYREF

  v5 = a3;
  UserData.Reserved = 0;
  UserData.Ptr = (ULONGLONG)&v5;
  UserData.Size = 4;
  return EventWrite(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_HOLOGRAPHICINTEROPTARGET_TIMEINQUEUE, 1u, &UserData);
}
