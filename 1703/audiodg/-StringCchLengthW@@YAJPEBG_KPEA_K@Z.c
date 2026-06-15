/*
 * XREFs of ?StringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x14004EF44
 * Callers:
 *     ?GetAudioModules@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJPEAPEAU?$IVector@PEAVAudioDeviceModule@Devices@Media@Windows@@@Collections@Foundation@5@@Z @ 0x140017050 (-GetAudioModules@AudioDeviceBroker@Internal@Devices@Media@Windows@@UEAAJPEAPEAU-$IVector@PEAVAud.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringCchLengthW(const unsigned __int16 *a1, __int64 a2, unsigned __int64 *a3)
{
  __int64 v3; // rdx
  __int64 result; // rax

  if ( a1 )
  {
    v3 = 128LL;
    do
    {
      if ( !*a1 )
        break;
      ++a1;
      --v3;
    }
    while ( v3 );
    result = v3 == 0 ? 0x80070057 : 0;
    if ( a3 )
    {
      if ( v3 )
        *a3 = 128 - v3;
      else
        *a3 = 0LL;
    }
  }
  else
  {
    result = 2147942487LL;
  }
  if ( (int)result < 0 )
  {
    if ( a3 )
      *a3 = 0LL;
  }
  return result;
}
