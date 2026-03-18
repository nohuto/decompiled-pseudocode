/*
 * XREFs of ?DeliverMarshaledPnPNotification@CBaseInput@@QEAAXXZ @ 0x1C009A2B8
 * Callers:
 *     ExecuteMarshaledPnpRequest @ 0x1C009A1D0 (ExecuteMarshaledPnpRequest.c)
 * Callees:
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     ?RimInputTypeToDeviceInputType@CBaseInput@@AEBAIXZ @ 0x1C004EFC0 (-RimInputTypeToDeviceInputType@CBaseInput@@AEBAIXZ.c)
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     ?CallUserModeLockFree@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1C009A620 (-CallUserModeLockFree@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

void __fastcall CBaseInput::DeliverMarshaledPnPNotification(CBaseInput *this)
{
  char *v1; // rbx
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  _QWORD *v5; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v6[24]; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v7[32]; // [rsp+40h] [rbp-C0h] BYREF

  v1 = (char *)this + 616;
  RIMLockExclusive((__int64)this + 616);
  v3 = (_QWORD *)*((_QWORD *)this + 76);
  *((_QWORD *)this + 76) = 0LL;
  *((_QWORD *)v1 + 1) = 0LL;
  v5 = v3;
  ExReleasePushLockExclusiveEx(v1, 0LL);
  KeLeaveCriticalRegion();
  while ( v5 )
  {
    v4 = v5 - 1;
    v5 = (_QWORD *)*v5;
    LODWORD(v7[0]) = CBaseInput::RimInputTypeToDeviceInputType(this);
    memset((char *)v7 + 4, 0, 0xFCuLL);
    v7[1] = *v4;
    Win32FreePool((__int64)v4);
    PushW32ThreadLock(&v5, v6, lambda_58dd855ded0ce1927ff06923159bc2eb_::_lambda_invoker_cdecl_);
    InputExtensibilityCallout::CallUserModeLockFree(
      (InputExtensibilityCallout *)WPP_MAIN_CB.Queue.Wcb.DeviceContext,
      (struct _CLIENT_DEVICE_NOTIFICATION *)v7);
    PopW32ThreadLock(v6);
  }
}
