/*
 * XREFs of ?RegisterForCMNotifications@HolographicDriverDetectedWatcher@Mirage@Windows@@QEAAJXZ @ 0x180049418
 * Callers:
 *     ??0CAnalogCompositorManager@@AEAA@XZ @ 0x180048FE8 (--0CAnalogCompositorManager@@AEAA@XZ.c)
 * Callees:
 *     ?DriverDetected@HolographicDriverDetectedWatcher@Mirage@Windows@@SA_NXZ @ 0x180049564 (-DriverDetected@HolographicDriverDetectedWatcher@Mirage@Windows@@SA_NXZ.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     memset_0 @ 0x18004DE90 (memset_0.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1800745BC (-SetEvent@details@wil@@YAXPEAX@Z.c)
 */

__int64 __fastcall Windows::Mirage::HolographicDriverDetectedWatcher::RegisterForCMNotifications(wil::details **this)
{
  void *v2; // rdx
  int v4; // [rsp+20h] [rbp-1C8h] BYREF
  _BYTE v5[4]; // [rsp+24h] [rbp-1C4h] BYREF
  int v6; // [rsp+28h] [rbp-1C0h]
  GUID v7; // [rsp+30h] [rbp-1B8h]

  v4 = 416;
  memset_0(v5, 0, 0x19CuLL);
  v6 = 0;
  v7 = GUID_DEVINTERFACE_HOLOGRAPHIC_DISPLAY;
  ((void (__fastcall *)(int *, wil::details **, __int64 (__fastcall *)(), wil::details **))CM_Register_Notification)(
    &v4,
    this,
    lambda_acfb370dec9f0af1ea203035a4ccbb17_::_lambda_invoker_cdecl_,
    this + 4);
  if ( Windows::Mirage::HolographicDriverDetectedWatcher::DriverDetected() )
    wil::details::SetEvent(*this, v2);
  return 0LL;
}
