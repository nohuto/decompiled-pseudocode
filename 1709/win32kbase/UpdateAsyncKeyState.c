/*
 * XREFs of UpdateAsyncKeyState @ 0x1C0010C20
 * Callers:
 *     xxxKeyEvent @ 0x1C0010760 (xxxKeyEvent.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall UpdateAsyncKeyState(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v4; // ebx
  int v6; // edx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rdx
  PDEVICE_OBJECT v9; // rcx
  __int64 result; // rax
  int v11; // edx
  int v12; // ecx
  unsigned __int64 v13; // r9
  int v14; // eax
  unsigned int v15; // ecx
  int v16; // eax

  v4 = a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      14,
      294,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  }
  if ( (int)IsEditionPostUpdateKeyStateEventSupported() >= 0 )
    EditionPostUpdateKeyStateEvent(a1);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v6) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v6,
      14,
      295,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  }
  v7 = 0x1C0000000uLL;
  if ( a3 )
  {
    v8 = (unsigned __int64)(unsigned __int8)v4 >> 2;
    *((_BYTE *)&gafAsyncKeyState + v8) &= ~(1 << (2 * (v4 & 3)));
  }
  else
  {
    *((_BYTE *)&gafAsyncKeyStateRecentDown + ((unsigned __int64)(unsigned __int8)v4 >> 3)) |= 1 << (v4 & 7);
    v12 = v4 & 3;
    v13 = (unsigned __int64)(unsigned __int8)v4 >> 2;
    v14 = *((unsigned __int8 *)&gafAsyncKeyState + v13);
    v8 = (unsigned int)(2 * v12);
    if ( !_bittest(&v14, v8) )
    {
      v15 = 2 * v12 + 1;
      if ( _bittest(&v14, v15) )
        v16 = v14 & ~(1 << v15);
      else
        v16 = v14 | (1 << v15);
      *((_BYTE *)&gafAsyncKeyState + v13) = v16;
    }
    *((_BYTE *)&gafAsyncKeyState + v13) |= 1 << v8;
  }
  v9 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v8) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      v8,
      14,
      296,
      (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  }
  result = IsEditionUpdateAsyncKeyStateThreadsSupported(v9, v8, v7);
  if ( (int)result >= 0 )
    result = EditionUpdateAsyncKeyStateThreads(a1, v4);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v11) = 5;
    return WPP_RECORDER_SF_(
             WPP_GLOBAL_Control->DeviceExtension,
             v11,
             14,
             297,
             (__int64)&WPP_4a4e28ac7ee6341f7881ece5013e044f_Traceguids);
  }
  return result;
}
