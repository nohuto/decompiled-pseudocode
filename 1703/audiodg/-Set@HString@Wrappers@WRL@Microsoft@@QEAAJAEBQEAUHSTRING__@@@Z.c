/*
 * XREFs of ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x14004ED10
 * Callers:
 *     ??0AudioDeviceModule@Devices@Media@Windows@@QEAA@PEAUHSTRING__@@I0IIPEAUIAudioDeviceBroker@Internal@123@@Z @ 0x14004940C (--0AudioDeviceModule@Devices@Media@Windows@@QEAA@PEAUHSTRING__@@I0IIPEAUIAudioDeviceBroker@Inter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Wrappers::HString::Set(HSTRING *newString, HSTRING *a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( !*a2 || *a2 != *newString )
  {
    WindowsDeleteString(*newString);
    *newString = 0LL;
    return (unsigned int)WindowsDuplicateString(*a2, newString);
  }
  return v2;
}
