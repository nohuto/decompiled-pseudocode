/*
 * XREFs of ?UpdateRawKeyState@@YAXEH@Z @ 0x1C004D49C
 * Callers:
 *     xxxProcessKeyEvent @ 0x1C004D210 (xxxProcessKeyEvent.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 */

void __fastcall UpdateRawKeyState(unsigned __int8 a1, unsigned int a2, __int64 a3)
{
  unsigned int v4; // ebx
  _BYTE *v5; // r9
  int v6; // eax
  unsigned __int64 v7; // rdx
  PDEVICE_OBJECT v8; // rcx
  int v9; // edx
  unsigned __int64 v10; // rcx

  LOBYTE(a3) = a1;
  if ( (unsigned __int8)(a1 - 16) <= 2u )
  {
    v4 = 4 >> (a1 - 16);
  }
  else
  {
    v4 = 8;
    if ( (unsigned __int8)(a1 - 91) > 1u )
      v4 = 0;
  }
  v5 = gafRawKeyState;
  v6 = a1 & 3;
  if ( a2 )
  {
    v7 = (unsigned __int64)a1 >> 2;
    gafRawKeyState[v7] &= ~(1 << (2 * v6));
  }
  else
  {
    v10 = (unsigned __int64)a1 >> 2;
    v7 = (unsigned __int8)gafRawKeyState[v10];
    if ( !_bittest((const int *)&v7, 2 * v6) )
    {
      LODWORD(v7) = v7 ^ (1 << (2 * v6 + 1));
      gafRawKeyState[v10] = v7;
    }
    gafRawKeyState[v10] |= 1 << (2 * v6);
  }
  v8 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v7) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      14,
      256,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
  if ( (int)IsEditionUpdateModifiersForHotkeySupported(v8, v7, a3, v5) >= 0 )
    EditionUpdateModifiersForHotkey(a2, v4);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v9) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v9,
      14,
      257,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
}
