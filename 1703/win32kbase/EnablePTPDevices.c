/*
 * XREFs of EnablePTPDevices @ 0x1C00D8C90
 * Callers:
 *     NtUserEnableTouchPad @ 0x1C00E0CE0 (NtUserEnableTouchPad.c)
 * Callees:
 *     RIMDeliverConfigRequest @ 0x1C0007C54 (RIMDeliverConfigRequest.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C007DD6C (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C007DDA0 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     EtwTraceTouchPadEnabledStatusChangeStart @ 0x1C00DA9C0 (EtwTraceTouchPadEnabledStatusChangeStart.c)
 *     EtwTraceTouchPadEnabledStatusChangeStop @ 0x1C00DA9F0 (EtwTraceTouchPadEnabledStatusChangeStop.c)
 *     ApiSetAccessPTPEnabledStatus @ 0x1C0139C10 (ApiSetAccessPTPEnabledStatus.c)
 *     ApiSetTelemPTPConfigUpdate @ 0x1C013DE44 (ApiSetTelemPTPConfigUpdate.c)
 */

__int64 __fastcall EnablePTPDevices(unsigned int a1)
{
  unsigned int v2; // ebx
  int v3; // r14d
  int v4; // ebp
  struct DEVICEINFO *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // eax
  char v10; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  v3 = 0;
  v4 = -1073741668;
  ExEnterCriticalRegionAndAcquireResourceExclusive(gpresDeviceInfoList);
  EtwTraceTouchPadEnabledStatusChangeStart();
  PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v10, (struct _EX_PUSH_LOCK *)&gpRimDevBackedDeviceInfoListLock);
  v5 = (struct DEVICEINFO *)gpRimDevBackedDeviceInfoList;
  if ( (gdwMitConfig & 4) != 0 )
    v5 = CBaseInput::_spDevList;
  while ( v5 )
  {
    if ( *((_BYTE *)v5 + 48) == 3 && (v6 = *((_QWORD *)v5 + 57), *(_WORD *)(v6 + 42) == 13) && *(_WORD *)(v6 + 40) == 14 )
    {
      v4 = RIMDeliverConfigRequest((__int64)v5, v6, 0x57u, a1 != 0);
      if ( v4 < 0 )
        v3 = 1;
    }
    else if ( (*((_DWORD *)v5 + 50) & 0x80u) != 0 )
    {
      v7 = *((_QWORD *)v5 + 59);
      if ( *(_DWORD *)(v7 + 24) == 7 )
        *(_DWORD *)(v7 + 260) ^= (*(_DWORD *)(v7 + 260) ^ (a1 << 13)) & 0x2000;
    }
    v5 = (struct DEVICEINFO *)*((_QWORD *)v5 + 7);
  }
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v10);
  ExReleaseResourceAndLeaveCriticalRegion(gpresDeviceInfoList);
  gPTPEnabled = a1;
  v8 = ApiSetAccessPTPEnabledStatus(a1);
  if ( v4 >= 0 && v8 && !v3 )
  {
    v2 = 1;
    ApiSetTelemPTPConfigUpdate();
  }
  EtwTraceTouchPadEnabledStatusChangeStop();
  return v2;
}
