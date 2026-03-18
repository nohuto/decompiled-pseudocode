/*
 * XREFs of _GetPrecisionTouchPadConfiguration @ 0x1C007D3B0
 * Callers:
 *     NtUserGetPrecisionTouchPadConfiguration @ 0x1C0004370 (NtUserGetPrecisionTouchPadConfiguration.c)
 * Callees:
 *     UpdateTPCurrentActiveState @ 0x1C007D4E0 (UpdateTPCurrentActiveState.c)
 *     ??0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C007DD6C (--0PUSHLOCKEX@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C007DDA0 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ApiSetUpdatePTPConfigFromRegistry @ 0x1C007E168 (ApiSetUpdatePTPConfigFromRegistry.c)
 */

__int64 __fastcall GetPrecisionTouchPadConfiguration(__int64 a1)
{
  struct DEVICEINFO *v2; // rcx
  int v3; // r8d
  int v4; // edx
  char v6; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 && *(_DWORD *)a1 || !(unsigned int)ApiSetUpdatePTPConfigFromRegistry() )
    return 0LL;
  dword_1C018A104 &= 0xFFFFFFAE;
  ExEnterCriticalRegionAndAcquireResourceExclusive(gpresDeviceInfoList);
  PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v6, (struct _EX_PUSH_LOCK *)&gpRimDevBackedDeviceInfoListLock);
  v2 = (struct DEVICEINFO *)gpRimDevBackedDeviceInfoList;
  if ( (gdwMitConfig & 4) != 0 )
    v2 = CBaseInput::_spDevList;
  if ( v2 )
  {
    v3 = HIDWORD(qword_1C018A108);
    v4 = dword_1C018A104;
    do
    {
      if ( (v4 & 0x10) != 0 && (v4 & 0x40) != 0 )
        break;
      if ( *((_BYTE *)v2 + 48) || *((_WORD *)v2 + 366) != 1 )
      {
        if ( (*((_DWORD *)v2 + 50) & 0x80u) != 0 && *(_DWORD *)(*((_QWORD *)v2 + 59) + 24LL) == 7 )
        {
          v4 |= 0x40u;
          dword_1C018A104 = v4;
          if ( *(_DWORD *)(*((_QWORD *)v2 + 59) + 696LL) >= 5u )
          {
            v3 |= 0x20u;
            HIDWORD(qword_1C018A108) = v3;
          }
        }
      }
      else
      {
        v4 |= 0x10u;
        dword_1C018A104 = v4;
      }
      v2 = (struct DEVICEINFO *)*((_QWORD *)v2 + 7);
    }
    while ( v2 );
  }
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v6);
  ExReleaseResourceAndLeaveCriticalRegion(gpresDeviceInfoList);
  if ( (unsigned int)IsPrecisionTouchPadEnabled() )
    dword_1C018A104 |= 1u;
  if ( a1 )
  {
    *(_OWORD *)a1 = gTouchPadParameters;
    *(_QWORD *)(a1 + 16) = qword_1C018A108;
    if ( dword_1C018A100 == 4 && (dword_1C018A104 & 0x10) != 0 && (dword_1C018A104 & 0x40) == 0 )
      *(_DWORD *)(a1 + 8) = 3;
  }
  UpdateTPCurrentActiveState();
  return 1LL;
}
