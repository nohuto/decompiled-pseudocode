/*
 * XREFs of UpdateMouseConnectionState @ 0x1C007D540
 * Callers:
 *     UpdateTPCurrentActiveState @ 0x1C007D4E0 (UpdateTPCurrentActiveState.c)
 * Callees:
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C007DD6C (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C007DDA0 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ApiSetIsMouseDeviceOnIgnoreList @ 0x1C007E0F0 (ApiSetIsMouseDeviceOnIgnoreList.c)
 */

__int64 UpdateMouseConnectionState()
{
  int v0; // edi
  BOOLEAN IsResourceAcquiredExclusiveLite; // si
  struct DEVICEINFO *v2; // rbx
  int v3; // edi
  __int64 result; // rax
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0;
  IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresDeviceInfoList);
  if ( !IsResourceAcquiredExclusiveLite )
    ExEnterCriticalRegionAndAcquireResourceExclusive(gpresDeviceInfoList);
  PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v5, (struct _EX_PUSH_LOCK *)&gpRimDevBackedDeviceInfoListLock);
  v2 = (struct DEVICEINFO *)gpRimDevBackedDeviceInfoList;
  if ( (gdwMitConfig & 4) != 0 )
    v2 = CBaseInput::_spDevList;
  while ( v2 )
  {
    if ( !*((_BYTE *)v2 + 48)
      && !*((_WORD *)v2 + 366)
      && (*((_DWORD *)v2 + 46) & 0x200) == 0
      && !(unsigned int)ApiSetIsMouseDeviceOnIgnoreList(v2) )
    {
      v0 = 1;
      break;
    }
    v2 = (struct DEVICEINFO *)*((_QWORD *)v2 + 7);
  }
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v5);
  if ( !IsResourceAcquiredExclusiveLite )
    ExReleaseResourceAndLeaveCriticalRegion(gpresDeviceInfoList);
  v3 = 16 * v0;
  result = v3 | HIDWORD(qword_1C018A108) & 0xFFFFFFEF;
  HIDWORD(qword_1C018A108) = v3 | HIDWORD(qword_1C018A108) & 0xFFFFFFEF;
  return result;
}
