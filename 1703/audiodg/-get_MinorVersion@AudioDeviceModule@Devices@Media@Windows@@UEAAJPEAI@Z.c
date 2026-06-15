/*
 * XREFs of ?get_MinorVersion@AudioDeviceModule@Devices@Media@Windows@@UEAAJPEAI@Z @ 0x14004F650
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Media::Devices::AudioDeviceModule::get_MinorVersion(
        Windows::Media::Devices::AudioDeviceModule *this,
        unsigned int *a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a2 )
    return 2147500035LL;
  *a2 = *((_DWORD *)this + 15);
  return result;
}
