/*
 * XREFs of UpdateKeyLights @ 0x1C0096C70
 * Callers:
 *     xxxKeyEvent @ 0x1C0010760 (xxxKeyEvent.c)
 *     xxxChangeForegroundKeyboardTable @ 0x1C0071180 (xxxChangeForegroundKeyboardTable.c)
 * Callees:
 *     ?UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ @ 0x1C000A890 (-UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     ApiSetEditionUpdateRimManagedKeyboardLeds @ 0x1C013BD6C (ApiSetEditionUpdateRimManagedKeyboardLeds.c)
 */

struct tagTHREADINFO *__fastcall UpdateKeyLights(int a1)
{
  __int16 v1; // dx
  char v3; // al
  char v4; // al
  char v5; // al
  struct tagTHREADINFO *result; // rax
  BOOLEAN IsResourceAcquiredExclusiveLite; // al
  int v8; // edi
  _QWORD *i; // rbx
  void *v10; // rcx

  v1 = 0;
  HIWORD(gklp) = 0;
  if ( (BYTE5(gafAsyncKeyState) & 2) != 0 )
  {
    v1 = 4;
    v3 = byte_1C018F545 | 2;
    HIWORD(gklp) = 4;
  }
  else
  {
    v3 = byte_1C018F545 & 0xFD;
  }
  byte_1C018F545 = v3;
  if ( (BYTE4(xmmword_1C018F5C0) & 2) != 0 )
  {
    v1 |= 2u;
    HIWORD(gklp) = v1;
    v4 = byte_1C018F564 | 2;
  }
  else
  {
    v4 = byte_1C018F564 & 0xFD;
  }
  if ( (BYTE4(xmmword_1C018F5C0) & 8) != 0 )
  {
    HIWORD(gklp) = v1 | 1;
    v5 = v4 | 8;
  }
  else
  {
    v5 = v4 & 0xF7;
  }
  byte_1C018F564 = v5;
  if ( gKeyboardInfo == 7 || (unsigned int)IsRemoteConnection() && (_DWORD)gRemoteClientKeyboardType == 7 )
  {
    if ( (BYTE5(gafAsyncKeyState) & 8) != 0 )
    {
      HIWORD(gklp) |= 8u;
      byte_1C018F545 |= 8u;
    }
    else
    {
      byte_1C018F545 &= ~8u;
    }
  }
  if ( (unsigned int)IsRemoteConnection() )
  {
    if ( a1 )
      HIWORD(gklp) |= 0x8000u;
    else
      HIWORD(gklp) &= ~0x8000u;
  }
  result = gptiRit;
  if ( gptiCurrent == gptiRit || !gptiRit )
  {
    IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresDeviceInfoList);
    v8 = IsResourceAcquiredExclusiveLite;
    if ( !IsResourceAcquiredExclusiveLite )
      ExEnterCriticalRegionAndAcquireResourceExclusive(gpresDeviceInfoList);
    for ( i = gpDeviceInfoList; i; i = (_QWORD *)i[7] )
    {
      if ( *((_BYTE *)i + 48) == 1 )
      {
        v10 = (void *)i[28];
        if ( v10 )
          ZwDeviceIoControlFile(v10, 0LL, 0LL, 0LL, &giosbKbdControl, 0xB0008u, &gklp, 4u, 0LL, 0);
      }
    }
    gdwUpdateKeyboard |= 2u;
    if ( (gdwMitConfig & 2) != 0 )
    {
      CKeyboardSensor::UpdateKeyboardLEDs((CKeyboardSensor *)WPP_MAIN_CB.Queue.Wcb.CurrentIrp);
    }
    else
    {
      ApiSetEditionUpdateRimManagedKeyboardLeds();
      gdwUpdateKeyboard &= ~2u;
    }
    if ( !v8 )
      ExReleaseResourceAndLeaveCriticalRegion(gpresDeviceInfoList);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        5u,
        0xEu,
        0x12Eu,
        (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
    result = (struct tagTHREADINFO *)IsEditionUpdateRemoteLightsSupported();
    if ( (int)result >= 0 )
      result = (struct tagTHREADINFO *)EditionUpdateRemoteLights();
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return (struct tagTHREADINFO *)WPP_RECORDER_SF_(
                                       (__int64)WPP_GLOBAL_Control->DeviceExtension,
                                       5u,
                                       0xEu,
                                       0x12Fu,
                                       (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  }
  else
  {
    gdwUpdateKeyboard |= 2u;
  }
  return result;
}
