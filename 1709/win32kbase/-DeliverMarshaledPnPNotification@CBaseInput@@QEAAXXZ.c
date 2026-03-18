/*
 * XREFs of ?DeliverMarshaledPnPNotification@CBaseInput@@QEAAXXZ @ 0x1C00A55F8
 * Callers:
 *     ExecuteMarshaledPnpRequest @ 0x1C00A54D0 (ExecuteMarshaledPnpRequest.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     ?RimInputTypeToDeviceInputType@CBaseInput@@AEBAIXZ @ 0x1C0019964 (-RimInputTypeToDeviceInputType@CBaseInput@@AEBAIXZ.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     ?CallUserModeLockFree@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z @ 0x1C00A5960 (-CallUserModeLockFree@InputExtensibilityCallout@@QEAAXPEAU_CLIENT_DEVICE_NOTIFICATION@@@Z.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

void __fastcall CBaseInput::DeliverMarshaledPnPNotification(CBaseInput *this)
{
  char *v1; // rbx
  _QWORD *v3; // rax
  __int64 v4; // rbx
  int v5; // eax
  _QWORD *v6; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v7[24]; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD v8[32]; // [rsp+40h] [rbp-C0h] BYREF

  v1 = (char *)this + 936;
  RIMLockExclusive((__int64)this + 936);
  v3 = (_QWORD *)*((_QWORD *)this + 116);
  *((_QWORD *)this + 116) = 0LL;
  *((_QWORD *)v1 + 1) = 0LL;
  v6 = v3;
  ExReleasePushLockExclusiveEx(v1, 0LL);
  KeLeaveCriticalRegion();
  while ( v6 )
  {
    v4 = (__int64)(v6 - 2);
    v6 = (_QWORD *)*v6;
    LODWORD(v8[0]) = CBaseInput::RimInputTypeToDeviceInputType(this);
    memset((char *)v8 + 4, 0, 0xFCuLL);
    v5 = *(_DWORD *)(v4 + 8);
    v8[1] = *(_QWORD *)v4;
    LODWORD(v8[2]) = v5;
    Win32FreePool(v4);
    PushW32ThreadLock(&v6, v7, lambda_58dd855ded0ce1927ff06923159bc2eb_::_lambda_invoker_cdecl_);
    InputExtensibilityCallout::CallUserModeLockFree(
      (InputExtensibilityCallout *)WPP_MAIN_CB.Queue.Wcb.DeviceContext,
      (struct _CLIENT_DEVICE_NOTIFICATION *)v8);
    PopW32ThreadLock(v7);
  }
}
