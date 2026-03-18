/*
 * XREFs of rimNotifyPointerDeviceChangeClients @ 0x1C0108A70
 * Callers:
 *     rimSetPointerDeviceDisplayConfig @ 0x1C000B8E4 (rimSetPointerDeviceDisplayConfig.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall rimNotifyPointerDeviceChangeClients(_DWORD *a1, __int64 a2, unsigned int *a3, int a4)
{
  int v4; // r10d
  int v5; // ebx
  int v9; // r10d
  int v10; // r10d
  int v11; // r10d
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  __int64 result; // rax
  unsigned int v16; // esi

  v4 = *(_DWORD *)(a2 + 20);
  v5 = 0;
  if ( a1[185] != v4 )
  {
    v9 = v4 - 1;
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          if ( v11 == 1 )
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
  v12 = *(_DWORD *)(a2 + 24);
  if ( a1[186] != v12 )
  {
    v13 = v12 - 2;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        if ( v14 == 1 )
        {
          v5 |= 0x800u;
        }
        else
        {
          LOBYTE(a2) = 3;
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            a2,
            18,
            10,
            (__int64)&WPP_2af9596112663d0feb47807a2bcd069c_Traceguids);
        }
      }
      else
      {
        v5 |= 0x40u;
      }
    }
    else
    {
      v5 |= 0x80u;
    }
  }
  if ( a1[195] != a3[3] || a1[196] != a3[4] )
    v5 |= 0x400u;
  result = *a3;
  if ( a1[192] != (_DWORD)result || (result = a3[1], a1[193] != (_DWORD)result) )
    v5 |= 0x200u;
  v16 = v5 | 0x100;
  if ( !a4 )
    v16 = v5;
  if ( v16 )
  {
    result = IsPostPointerEventMessageSupported();
    if ( (int)result >= 0 )
      return PostPointerEventMessage(a1, 568LL, v16, 1LL);
  }
  return result;
}
