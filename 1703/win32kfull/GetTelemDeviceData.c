/*
 * XREFs of GetTelemDeviceData @ 0x1C019BD1C
 * Callers:
 *     _TelemPTPConfigUpdateEx @ 0x1C019C138 (_TelemPTPConfigUpdateEx.c)
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0024574 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C002459C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     GetHidVidPidStrings @ 0x1C0105118 (GetHidVidPidStrings.c)
 *     IsLegacyTouchPad @ 0x1C019BEDC (IsLegacyTouchPad.c)
 */

__int64 __fastcall GetTelemDeviceData(
        WCHAR *a1,
        WCHAR *a2,
        int *a3,
        int *a4,
        int *a5,
        _DWORD *a6,
        _OWORD *a7,
        _OWORD *a8)
{
  int v8; // ebp
  unsigned int v9; // edi
  __int64 v11; // rcx
  struct DEVICEINFO *DeviceList; // rbx
  _OWORD *v13; // r15
  int v14; // r8d
  _OWORD *v15; // r12
  int v16; // edx
  _DWORD *v17; // r14
  int *v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rcx
  int v21; // eax
  int HidVidPidStrings; // eax
  struct _UNICODE_STRING v24; // [rsp+20h] [rbp-58h] BYREF
  struct _UNICODE_STRING v25; // [rsp+30h] [rbp-48h] BYREF
  char v26; // [rsp+80h] [rbp+8h] BYREF
  int *v27; // [rsp+90h] [rbp+18h]

  v27 = a3;
  v25.Buffer = a1;
  v8 = 0;
  *(_DWORD *)&v25.Length = 0x100000;
  v9 = 0;
  v24.Buffer = a2;
  *(_DWORD *)&v24.Length = 0x100000;
  EnterDeviceInfoListCrit_(a1);
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v26, gpRimDevBackedDeviceInfoListLock);
  v11 = gdwMitConfig;
  if ( (gdwMitConfig & 4) != 0 )
    DeviceList = CBaseInput::TmpGetDeviceList(gpHidInput);
  else
    DeviceList = (struct DEVICEINFO *)gpRimDevBackedDeviceInfoList;
  if ( DeviceList )
  {
    v13 = a8;
    v14 = 1;
    v15 = a7;
    v16 = 0;
    v17 = a6;
    v18 = a5;
    do
    {
      if ( *((_BYTE *)DeviceList + 48) == (_BYTE)v16 )
      {
        if ( *((_WORD *)DeviceList + 366) == (_WORD)v16 )
        {
          *v27 = v14;
        }
        else if ( (unsigned int)IsLegacyTouchPad(DeviceList) )
        {
          goto LABEL_22;
        }
      }
      else if ( (*((_DWORD *)DeviceList + 50) & 0x80u) != 0 )
      {
        v19 = *((_QWORD *)DeviceList + 59);
        if ( *(_DWORD *)(v19 + 24) != 7 || v8 )
        {
          if ( (unsigned int)(*(_DWORD *)(v19 + 24) - v14) <= 3 )
            *a4 = v14;
          goto LABEL_25;
        }
        *v17 = v16;
        v8 = v14;
        v20 = *((_QWORD *)DeviceList + 59);
        v21 = *(_DWORD *)(v20 + 1528);
        if ( v21 == v14 )
        {
          *v18 = v14;
        }
        else if ( v21 == 2 )
        {
          *v18 = 2;
        }
        else if ( v21 == 3 )
        {
          *v18 = 3;
        }
        *v15 = *(_OWORD *)(v20 + 172);
        *v13 = *(_OWORD *)(*((_QWORD *)DeviceList + 59) + 204LL);
        HidVidPidStrings = GetHidVidPidStrings((__int64)DeviceList, &v25, &v24);
        v16 = 0;
        if ( HidVidPidStrings < 0 )
          break;
        v14 = 1;
LABEL_22:
        v9 = v14;
      }
LABEL_25:
      DeviceList = (struct DEVICEINFO *)*((_QWORD *)DeviceList + 7);
    }
    while ( DeviceList );
  }
  LeaveDeviceInfoListCrit_(v11);
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v26);
  return v9;
}
