/*
 * XREFs of FindRimDevBackedDeviceInfo @ 0x1C01A8160
 * Callers:
 *     ?ProcessKeyboardInputViaRim@@YAXPEAXKK0@Z @ 0x1C0195FC8 (-ProcessKeyboardInputViaRim@@YAXPEAXKK0@Z.c)
 *     ?ProcessMouseInputViaRim@@YAXPEAUDEVICEINFO@@PEAXK1@Z @ 0x1C019CEF8 (-ProcessMouseInputViaRim@@YAXPEAUDEVICEINFO@@PEAXK1@Z.c)
 *     EditionRimDeviceReadNotification @ 0x1C01A80E0 (EditionRimDeviceReadNotification.c)
 *     ProcessHidInputViaRim @ 0x1C01A821C (ProcessHidInputViaRim.c)
 *     CreatePseudoDigitizerDevice @ 0x1C01B99AC (CreatePseudoDigitizerDevice.c)
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0024574 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C002459C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 */

struct DEVICEINFO *__fastcall FindRimDevBackedDeviceInfo(void *a1, int a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 i; // rcx
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  if ( (gdwMitConfig & 4) != 0 && (_DWORD)a3 == 2 )
    return CBaseInput::FindDeviceInfo(gpHidInput, a1, a2);
  v4 = 0LL;
  LOBYTE(a3) = a2 == 0;
  if ( (int)RawInputManagerDeviceObjectResolveHandle(a1, 3LL, a3, &v8) >= 0 )
  {
    v5 = v8 + 64;
    if ( !v8 )
      v5 = 0LL;
    CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)v7, gpRimDevBackedDeviceInfoListLock);
    for ( i = gpRimDevBackedDeviceInfoList; i; i = *(_QWORD *)(i + 56) )
    {
      if ( i == v5 )
      {
        v4 = i;
        break;
      }
    }
    RawInputManagerDeviceObjectDereference(v8);
    PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)v7);
  }
  return (struct DEVICEINFO *)v4;
}
