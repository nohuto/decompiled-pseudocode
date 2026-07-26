/*
 * XREFs of ndisMReadPciPropertiesFromConfigSpace @ 0x1C00BA71C
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C00F904C (ndisMInitializeAdapter.c)
 * Callees:
 *     NdisMGetBusData @ 0x1C001F030 (NdisMGetBusData.c)
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 */

__int64 __fastcall ndisMReadPciPropertiesFromConfigSpace(char *NdisMiniportHandle)
{
  int v2; // ebx
  unsigned __int8 v3; // al
  ULONG v4; // r15d
  unsigned __int8 v5; // bp
  _BYTE Buffer[52]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v8; // [rsp+64h] [rbp-34h]

  v2 = 0;
  if ( NdisMGetBusData(NdisMiniportHandle, 0, 0, Buffer, 0x40u) != 64 )
    return (unsigned int)-1073741823;
  if ( (Buffer[14] & 0x7F) != 0 )
  {
    return (unsigned int)-1073741808;
  }
  else if ( (Buffer[6] & 0x10) != 0 )
  {
    v3 = v8;
    if ( (_BYTE)v8 )
    {
      while ( 1 )
      {
        v4 = v3;
        if ( NdisMGetBusData(NdisMiniportHandle, 0, v3, Buffer, 2u) != 2 )
          break;
        v5 = Buffer[1];
        if ( Buffer[0] == 5 )
        {
          if ( NdisMGetBusData(NdisMiniportHandle, 0, v4, NdisMiniportHandle + 3640, 0x18u) != 24 )
          {
            v2 = -1073741823;
            *((_QWORD *)NdisMiniportHandle + 455) = 0LL;
            *((_QWORD *)NdisMiniportHandle + 456) = 0LL;
            *((_QWORD *)NdisMiniportHandle + 457) = 0LL;
          }
        }
        else if ( Buffer[0] == 17 && NdisMGetBusData(NdisMiniportHandle, 0, v4, NdisMiniportHandle + 3664, 0xCu) != 12 )
        {
          *((_QWORD *)NdisMiniportHandle + 455) = 0LL;
          *((_QWORD *)NdisMiniportHandle + 456) = 0LL;
          *((_QWORD *)NdisMiniportHandle + 457) = 0LL;
          return (unsigned int)-1073741823;
        }
        if ( v2 >= 0 )
        {
          v3 = v5;
          if ( v5 )
            continue;
        }
        return (unsigned int)v2;
      }
      return (unsigned int)-1073741823;
    }
  }
  return (unsigned int)v2;
}
