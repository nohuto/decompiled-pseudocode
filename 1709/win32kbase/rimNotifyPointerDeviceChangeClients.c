/*
 * XREFs of rimNotifyPointerDeviceChangeClients @ 0x1C0106A98
 * Callers:
 *     rimSetDeviceDisplayConfig @ 0x1C008DEC8 (rimSetDeviceDisplayConfig.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall rimNotifyPointerDeviceChangeClients(_DWORD *a1, __int64 a2, _DWORD *a3, int a4)
{
  int v4; // r10d
  int v5; // ebx
  int v10; // r10d
  int v11; // r10d
  int v12; // r10d
  __int64 result; // rax
  unsigned int v14; // edi

  v4 = a3[26];
  v5 = 0;
  if ( a1[356] != v4 )
  {
    v10 = v4 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( v12 )
        {
          if ( v12 == 1 )
            v5 = 32;
        }
        else
        {
          v5 = 16;
        }
      }
      else
      {
        v5 = 8;
      }
    }
    else
    {
      v5 = 4;
    }
  }
  if ( a1[357] != a3[27] )
  {
    switch ( a3[28] )
    {
      case 2:
        v5 |= 0x80u;
        break;
      case 3:
        v5 |= 0x40u;
        break;
      case 4:
        v5 |= 0x800u;
        break;
      default:
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          0x12u,
          0xAu,
          (__int64)&WPP_fde1f29744cf32a1006834eb8d6e2bcd_Traceguids);
        break;
    }
  }
  if ( a1[359] != a3[29] || a1[360] != a3[30] )
    v5 |= 0x400u;
  result = (unsigned int)a3[31];
  if ( a1[361] != (_DWORD)result || (result = (unsigned int)a3[32], a1[362] != (_DWORD)result) )
    v5 |= 0x200u;
  v14 = v5 | 0x100;
  if ( !a4 )
    v14 = v5;
  if ( v14 )
  {
    result = IsPostPointerEventMessageSupported();
    if ( (int)result >= 0 )
      return PostPointerEventMessage(a2, 568LL, v14, 1LL);
  }
  return result;
}
