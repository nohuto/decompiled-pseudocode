/*
 * XREFs of ??_GKglDefaults@GamesEnumeration@Preview@Gaming@Windows@@UEAAPEAXI@Z @ 0x18003A120
 * Callers:
 *     <none>
 * Callees:
 *     ??1KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@UEAA@XZ @ 0x18003A154 (--1KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800415E4 (--3@YAXPEAX_K@Z.c)
 */

Windows::Gaming::Preview::GamesEnumeration::KglDefaults *__fastcall Windows::Gaming::Preview::GamesEnumeration::KglDefaults::`scalar deleting destructor'(
        Windows::Gaming::Preview::GamesEnumeration::KglDefaults *this,
        char a2)
{
  Windows::Gaming::Preview::GamesEnumeration::KglDefaults::~KglDefaults(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x20uLL);
  return this;
}
