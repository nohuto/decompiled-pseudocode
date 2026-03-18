/*
 * XREFs of NtGdiDdDDISharedPrimaryLockNotification @ 0x1C0251160
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?DxLddmSharedPrimaryLockNotification@@YAJU_LUID@@IPEBU_RECTL@@@Z @ 0x1C024F2F0 (-DxLddmSharedPrimaryLockNotification@@YAJU_LUID@@IPEBU_RECTL@@@Z.c)
 */

__int64 __fastcall NtGdiDdDDISharedPrimaryLockNotification(unsigned __int64 a1)
{
  unsigned __int64 v1; // rdx
  struct _LUID v3[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v4; // [rsp+30h] [rbp-28h]
  int v5; // [rsp+38h] [rbp-20h]

  v1 = a1;
  if ( gbDisableLddmSpriteTearDown )
    return 0LL;
  if ( a1 >= W32UserProbeAddress )
    v1 = W32UserProbeAddress;
  *(_OWORD *)&v3[0].LowPart = *(_OWORD *)v1;
  v4 = *(_QWORD *)(v1 + 16);
  v5 = *(_DWORD *)(v1 + 24);
  return DxLddmSharedPrimaryLockNotification(v3[0], v3[1].LowPart, (const struct _RECTL *)&v3[1].HighPart);
}
