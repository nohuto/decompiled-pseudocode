/*
 * XREFs of ?FindDeviceInfo@CBaseInput@@QEBAPEAUDEVICEINFO@@PEAXH@Z @ 0x1C009A210
 * Callers:
 *     ?ProcessInput@CMouseSensor@@EEAAJPEAXKK0@Z @ 0x1C0099E80 (-ProcessInput@CMouseSensor@@EEAAJPEAXKK0@Z.c)
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C012C950 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 *     ?ProcessInput@CKeyboardSensor@@EEAAJPEAXKK0@Z @ 0x1C012D3D0 (-ProcessInput@CKeyboardSensor@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0054210 (RawInputManagerDeviceObjectResolveHandle.c)
 */

struct DEVICEINFO *__fastcall CBaseInput::FindDeviceInfo(CBaseInput *this, char *a2, int a3)
{
  struct DEVICEINFO *v3; // rsi
  PVOID v4; // rbx
  struct DEVICEINFO *v5; // rdi
  struct DEVICEINFO *i; // rax
  PVOID Object; // [rsp+48h] [rbp+20h] BYREF

  v3 = 0LL;
  if ( (int)RawInputManagerDeviceObjectResolveHandle(a2, 3u, a3 == 0, &Object) >= 0 )
  {
    v4 = Object;
    if ( Object )
      v5 = (struct DEVICEINFO *)((char *)Object + 64);
    else
      v5 = 0LL;
    RIMLockExclusive((__int64)&CBaseInput::_sLock);
    for ( i = CBaseInput::_spDevList; i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
    {
      if ( i == v5 )
      {
        v3 = i;
        break;
      }
    }
    ObfDereferenceObject(v4);
    qword_1C018EC98 = 0LL;
    ExReleasePushLockExclusiveEx(&CBaseInput::_sLock, 0LL);
    KeLeaveCriticalRegion();
  }
  return v3;
}
