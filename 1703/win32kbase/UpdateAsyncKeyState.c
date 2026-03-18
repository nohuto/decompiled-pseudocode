/*
 * XREFs of UpdateAsyncKeyState @ 0x1C004DA40
 * Callers:
 *     xxxKeyEvent @ 0x1C004D5A0 (xxxKeyEvent.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall UpdateAsyncKeyState(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v4; // ebx
  int v6; // edx
  PDEVICE_OBJECT v7; // r10
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 result; // rax
  int v12; // edx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r9
  int v15; // r11d
  int v16; // eax
  int v17; // eax

  v4 = a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      14,
      282,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
  if ( (int)IsEditionPostUpdateKeyStateEventSupported() >= 0 )
    EditionPostUpdateKeyStateEvent(a1);
  v7 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v6) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v6,
      14,
      283,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
    v7 = WPP_GLOBAL_Control;
  }
  v8 = 0x1C0000000uLL;
  if ( a3 )
  {
    v9 = (unsigned __int64)(unsigned __int8)v4 >> 2;
    v10 = *((unsigned __int8 *)&gafAsyncKeyState + v9);
    LODWORD(v10) = v10 & ~(1 << (2 * (v4 & 3)));
    *((_BYTE *)&gafAsyncKeyState + v9) = v10;
  }
  else
  {
    v13 = (unsigned __int64)(unsigned __int8)v4 >> 3;
    v14 = (unsigned __int64)(unsigned __int8)v4 >> 2;
    v15 = v4 & 3;
    v10 = *((unsigned __int8 *)&gafAsyncKeyStateRecentDown + v13);
    LODWORD(v10) = v10 | (1 << (v4 & 7));
    v16 = *((unsigned __int8 *)&gafAsyncKeyState + v14);
    *((_BYTE *)&gafAsyncKeyStateRecentDown + v13) = v10;
    v9 = (unsigned int)(2 * v15);
    if ( !_bittest(&v16, v9) )
    {
      v10 = (unsigned int)(2 * v15 + 1);
      if ( _bittest(&v16, v10) )
        v17 = v16 & ~(1 << (2 * v15 + 1));
      else
        v17 = v16 | (1 << (2 * v15 + 1));
      *((_BYTE *)&gafAsyncKeyState + v14) = v17;
    }
    *((_BYTE *)&gafAsyncKeyState + v14) |= 1 << (2 * v15);
  }
  if ( LOWORD(v7->DeviceType) )
  {
    LOBYTE(v9) = 5;
    WPP_RECORDER_SF_(v7->DeviceExtension, v9, 14, 284, (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
  result = IsEditionUpdateAsyncKeyStateThreadsSupported(v10, v9, v8);
  if ( (int)result >= 0 )
    result = EditionUpdateAsyncKeyStateThreads(a1, v4);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v12) = 5;
    return WPP_RECORDER_SF_(
             WPP_GLOBAL_Control->DeviceExtension,
             v12,
             14,
             285,
             (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
  return result;
}
