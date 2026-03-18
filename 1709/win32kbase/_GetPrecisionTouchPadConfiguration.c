/*
 * XREFs of _GetPrecisionTouchPadConfiguration @ 0x1C008D410
 * Callers:
 *     NtUserGetPrecisionTouchPadConfiguration @ 0x1C0004370 (NtUserGetPrecisionTouchPadConfiguration.c)
 * Callees:
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C001F06C (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C001F0A0 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     UpdateTPCurrentActiveState @ 0x1C008D530 (UpdateTPCurrentActiveState.c)
 *     ApiSetUpdatePTPConfigFromRegistry @ 0x1C008D6F8 (ApiSetUpdatePTPConfigFromRegistry.c)
 */

__int64 __fastcall GetPrecisionTouchPadConfiguration(__int64 a1)
{
  struct DEVICEINFO *v2; // rcx
  char v4; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 && *(_DWORD *)a1 || !(unsigned int)ApiSetUpdatePTPConfigFromRegistry() )
    return 0LL;
  dword_1C018EC74 &= 0xFFFFFFAE;
  ExEnterCriticalRegionAndAcquireResourceExclusive(gpresDeviceInfoList);
  PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v4, (struct _EX_PUSH_LOCK *)&gpRimDevBackedDeviceInfoListLock);
  v2 = (struct DEVICEINFO *)gpRimDevBackedDeviceInfoList;
  if ( (gdwMitConfig & 4) != 0 )
    v2 = CBaseInput::_spDevList;
  while ( v2 && ((dword_1C018EC74 & 0x10) == 0 || (dword_1C018EC74 & 0x40) == 0) )
  {
    if ( *((_BYTE *)v2 + 48) || *((_WORD *)v2 + 366) != 1 )
    {
      if ( (*((_DWORD *)v2 + 50) & 0x80u) != 0 && *(_DWORD *)(*((_QWORD *)v2 + 59) + 24LL) == 7 )
      {
        dword_1C018EC74 |= 0x40u;
        if ( *(_DWORD *)(*((_QWORD *)v2 + 59) + 680LL) >= 5u )
          HIDWORD(qword_1C018EC78) |= 0x20u;
      }
    }
    else
    {
      dword_1C018EC74 |= 0x10u;
    }
    v2 = (struct DEVICEINFO *)*((_QWORD *)v2 + 7);
  }
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v4);
  ExReleaseResourceAndLeaveCriticalRegion(gpresDeviceInfoList);
  if ( (unsigned int)IsPrecisionTouchPadEnabled() )
    dword_1C018EC74 |= 1u;
  if ( a1 )
  {
    *(_OWORD *)a1 = gTouchPadParameters;
    *(_QWORD *)(a1 + 16) = qword_1C018EC78;
    if ( dword_1C018EC70 == 4 && (dword_1C018EC74 & 0x10) != 0 && (dword_1C018EC74 & 0x40) == 0 )
      *(_DWORD *)(a1 + 8) = 3;
  }
  UpdateTPCurrentActiveState();
  return 1LL;
}
