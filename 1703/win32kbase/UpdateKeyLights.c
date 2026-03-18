/*
 * XREFs of UpdateKeyLights @ 0x1C008EA30
 * Callers:
 *     xxxKeyEvent @ 0x1C004D5A0 (xxxKeyEvent.c)
 *     xxxChangeForegroundKeyboardTable @ 0x1C0078DC0 (xxxChangeForegroundKeyboardTable.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     ?UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ @ 0x1C006E700 (-UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ.c)
 *     ApiSetEditionUpdateRimManagedKeyboardLeds @ 0x1C013CAB0 (ApiSetEditionUpdateRimManagedKeyboardLeds.c)
 */

struct tagTHREADINFO *__fastcall UpdateKeyLights(int a1)
{
  char v1; // r9
  __int16 v2; // dx
  char v4; // al
  char v5; // cl
  char v6; // cl
  char v7; // al
  struct tagTHREADINFO *result; // rax
  BOOLEAN IsResourceAcquiredExclusiveLite; // al
  int v10; // edi
  _QWORD *i; // rbx
  int v12; // edx
  int v13; // edx
  void *v14; // rcx

  v1 = BYTE5(gafAsyncKeyState);
  v2 = 0;
  word_1C018AA62 = 0;
  if ( (BYTE5(gafAsyncKeyState) & 2) != 0 )
  {
    v2 = 4;
    v4 = byte_1C018A9C5 | 2;
    word_1C018AA62 = 4;
  }
  else
  {
    v4 = byte_1C018A9C5 & 0xFD;
  }
  byte_1C018A9C5 = v4;
  if ( (BYTE4(xmmword_1C018AA40) & 2) != 0 )
  {
    v2 |= 2u;
    word_1C018AA62 = v2;
    v5 = byte_1C018A9E4 | 2;
  }
  else
  {
    v5 = byte_1C018A9E4 & 0xFD;
  }
  if ( (BYTE4(xmmword_1C018AA40) & 8) != 0 )
  {
    v2 |= 1u;
    word_1C018AA62 = v2;
    v6 = v5 | 8;
  }
  else
  {
    v6 = v5 & 0xF7;
  }
  byte_1C018A9E4 = v6;
  if ( gKeyboardInfo != 7 )
  {
    if ( !(unsigned int)IsRemoteConnection() || (_DWORD)gRemoteClientKeyboardType != 7 )
      goto LABEL_11;
    v2 = word_1C018AA62;
    v1 = BYTE5(gafAsyncKeyState);
    v4 = byte_1C018A9C5;
  }
  if ( (v1 & 8) != 0 )
  {
    word_1C018AA62 = v2 | 8;
    v7 = v4 | 8;
  }
  else
  {
    v7 = v4 & 0xF7;
  }
  byte_1C018A9C5 = v7;
LABEL_11:
  if ( (unsigned int)IsRemoteConnection() )
  {
    if ( a1 )
      word_1C018AA62 |= 0x8000u;
    else
      word_1C018AA62 &= ~0x8000u;
  }
  result = gptiRit;
  if ( gptiCurrent == gptiRit )
  {
    IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresDeviceInfoList);
    v10 = IsResourceAcquiredExclusiveLite;
    if ( !IsResourceAcquiredExclusiveLite )
      ExEnterCriticalRegionAndAcquireResourceExclusive(gpresDeviceInfoList);
    for ( i = gpDeviceInfoList; i; i = (_QWORD *)i[7] )
    {
      if ( *((_BYTE *)i + 48) == 1 )
      {
        v14 = (void *)i[28];
        if ( v14 )
          ZwDeviceIoControlFile(v14, 0LL, 0LL, 0LL, &giosbKbdControl, 0xB0008u, &gklp, 4u, 0LL, 0);
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
    if ( !v10 )
      ExReleaseResourceAndLeaveCriticalRegion(gpresDeviceInfoList);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v12) = 5;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v12,
        14,
        290,
        (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
    }
    result = (struct tagTHREADINFO *)IsEditionUpdateRemoteLightsSupported();
    if ( (int)result >= 0 )
      result = (struct tagTHREADINFO *)EditionUpdateRemoteLights();
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v13) = 5;
      return (struct tagTHREADINFO *)WPP_RECORDER_SF_(
                                       WPP_GLOBAL_Control->DeviceExtension,
                                       v13,
                                       14,
                                       291,
                                       (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
    }
  }
  else
  {
    gdwUpdateKeyboard |= 2u;
  }
  return result;
}
