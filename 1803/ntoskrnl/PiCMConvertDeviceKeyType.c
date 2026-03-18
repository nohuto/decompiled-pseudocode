/*
 * XREFs of PiCMConvertDeviceKeyType @ 0x14057332C
 * Callers:
 *     PiCMOpenDeviceKey @ 0x1405731B0 (PiCMOpenDeviceKey.c)
 *     PiCMDeleteDeviceKey @ 0x140736D98 (PiCMDeleteDeviceKey.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiCMConvertDeviceKeyType(__int16 a1, int *a2)
{
  unsigned int v2; // r9d
  int v3; // eax
  int v4; // ecx
  int v6; // r8d

  v2 = 0;
  *a2 = 0;
  v3 = 17;
  if ( (unsigned __int8)a1 != 17 )
  {
    switch ( (unsigned __int8)a1 )
    {
      case 0x12u:
        v3 = 18;
        break;
      case 0x13u:
        v3 = 19;
        break;
      case 0x14u:
        v3 = 20;
        break;
      default:
        return (unsigned int)-1073741811;
    }
  }
  *a2 = v3;
  v4 = a1 & 0xFF00;
  if ( v4 )
  {
    v6 = 256;
    if ( v4 == 256 || (v6 = 512, v4 == 512) )
    {
      *a2 = v6 | v3;
      return v2;
    }
    return (unsigned int)-1073741811;
  }
  return v2;
}
