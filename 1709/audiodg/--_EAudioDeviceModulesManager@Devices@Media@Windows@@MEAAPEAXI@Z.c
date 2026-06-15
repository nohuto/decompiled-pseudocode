/*
 * XREFs of ??_EAudioDeviceModulesManager@Devices@Media@Windows@@MEAAPEAXI@Z @ 0x14000EB50
 * Callers:
 *     ?Release@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAKXZ @ 0x14000EC10 (-Release@AudioDeviceModulesManager@Devices@Media@Windows@@UEAAKXZ.c)
 * Callees:
 *     ??1AudioDeviceModulesManager@Devices@Media@Windows@@MEAA@XZ @ 0x14000E934 (--1AudioDeviceModulesManager@Devices@Media@Windows@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x14001C890 (--3@YAXPEAX@Z.c)
 */

Windows::Media::Devices::AudioDeviceModulesManager *__fastcall Windows::Media::Devices::AudioDeviceModulesManager::`vector deleting destructor'(
        Windows::Media::Devices::AudioDeviceModulesManager *this,
        char a2)
{
  Windows::Media::Devices::AudioDeviceModulesManager::~AudioDeviceModulesManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
