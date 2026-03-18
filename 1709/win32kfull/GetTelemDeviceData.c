/*
 * XREFs of GetTelemDeviceData @ 0x1C01A79CC
 * Callers:
 *     _TelemPTPConfigUpdateEx @ 0x1C01A7DE8 (_TelemPTPConfigUpdateEx.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0006F2C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0006F60 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     GetHidVidPidStrings @ 0x1C0043B5C (GetHidVidPidStrings.c)
 *     IsLegacyTouchPad @ 0x1C01A7B88 (IsLegacyTouchPad.c)
 */

__int64 __fastcall GetTelemDeviceData(
        WCHAR *a1,
        WCHAR *a2,
        _DWORD *a3,
        _DWORD *a4,
        _DWORD *a5,
        _DWORD *a6,
        _OWORD *a7,
        _OWORD *a8)
{
  int v8; // ebp
  unsigned int v9; // edi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rcx
  struct DEVICEINFO *DeviceList; // rbx
  _OWORD *v15; // r15
  _OWORD *v16; // r12
  _DWORD *v17; // r14
  _DWORD *v18; // rsi
  int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  int HidVidPidStrings; // eax
  struct _UNICODE_STRING v24; // [rsp+20h] [rbp-58h] BYREF
  struct _UNICODE_STRING v25; // [rsp+30h] [rbp-48h] BYREF
  char v26; // [rsp+80h] [rbp+8h] BYREF
  _DWORD *v27; // [rsp+90h] [rbp+18h]

  v27 = a3;
  v25.Buffer = a1;
  v8 = 0;
  *(_DWORD *)&v25.Length = 0x100000;
  v9 = 0;
  v24.Buffer = a2;
  *(_DWORD *)&v24.Length = 0x100000;
  EnterDeviceInfoListCrit_(a1, a2, a3, a4);
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v26, gpRimDevBackedDeviceInfoListLock);
  v13 = gdwMitConfig;
  if ( (gdwMitConfig & 4) != 0 )
    DeviceList = CBaseInput::TmpGetDeviceList(gpHidInput);
  else
    DeviceList = (struct DEVICEINFO *)gpRimDevBackedDeviceInfoList;
  if ( DeviceList )
  {
    v15 = a8;
    v12 = 1LL;
    v16 = a7;
    v11 = 0LL;
    v17 = a6;
    v18 = a5;
    do
    {
      if ( *((_BYTE *)DeviceList + 48) == (_BYTE)v11 )
      {
        if ( *((_WORD *)DeviceList + 366) == (_WORD)v11 )
        {
          *v27 = v12;
        }
        else if ( (unsigned int)IsLegacyTouchPad(DeviceList) )
        {
          goto LABEL_22;
        }
      }
      else if ( (*((_DWORD *)DeviceList + 50) & 0x80u) != 0 )
      {
        v19 = *(_DWORD *)(*((_QWORD *)DeviceList + 59) + 24LL);
        if ( v19 != 7 )
        {
          if ( (unsigned int)(v19 - 1) <= 3 )
            *a4 = v12;
          goto LABEL_25;
        }
        if ( !v8 )
        {
          *v17 = v11;
          v8 = v12;
          v20 = *((_QWORD *)DeviceList + 59);
          v21 = *(_DWORD *)(v20 + 864);
          if ( v21 == (_DWORD)v12 )
          {
            *v18 = v12;
          }
          else if ( v21 == 2 )
          {
            *v18 = 2;
          }
          else if ( v21 == 3 )
          {
            *v18 = 3;
          }
          *v16 = *(_OWORD *)(v20 + 124);
          *v15 = *(_OWORD *)(*((_QWORD *)DeviceList + 59) + 140LL);
          HidVidPidStrings = GetHidVidPidStrings((__int64)DeviceList, &v25, &v24);
          v11 = 0LL;
          if ( HidVidPidStrings < 0 )
            break;
          v12 = 1LL;
LABEL_22:
          v9 = v12;
        }
      }
LABEL_25:
      DeviceList = (struct DEVICEINFO *)*((_QWORD *)DeviceList + 7);
    }
    while ( DeviceList );
  }
  LeaveDeviceInfoListCrit_(v13, v11, v12);
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v26);
  return v9;
}
