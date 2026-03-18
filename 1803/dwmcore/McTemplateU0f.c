/*
 * XREFs of McTemplateU0f @ 0x180200374
 * Callers:
 *     ?DoTextureUpdates@CHolographicClient@@AEAAXXZ @ 0x1801FF00C (-DoTextureUpdates@CHolographicClient@@AEAAXXZ.c)
 * Callees:
 *     McGenEventWriteUM @ 0x1800CF9CC (McGenEventWriteUM.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

ULONG __fastcall McTemplateU0f(__int64 a1, __int64 a2, float a3)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+20h] [rbp-38h] BYREF
  float *v5; // [rsp+30h] [rbp-28h]
  int v6; // [rsp+38h] [rbp-20h]
  int v7; // [rsp+3Ch] [rbp-1Ch]
  float v8; // [rsp+70h] [rbp+18h] BYREF

  v8 = a3;
  v7 = 0;
  v5 = &v8;
  v6 = 4;
  return McGenEventWriteUM(
           Microsoft_Windows_Dwm_Core_Provider_Context,
           &EVTDESC_HOLOGRAPHICINTEROPTARGET_TIMEINQUEUE,
           2u,
           &v4);
}
