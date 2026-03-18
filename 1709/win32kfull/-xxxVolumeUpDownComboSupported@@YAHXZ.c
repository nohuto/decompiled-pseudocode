/*
 * XREFs of ?xxxVolumeUpDownComboSupported@@YAHXZ @ 0x1C01C6F00
 * Callers:
 *     ?xxxHandleVolumeUpDownCombo@@YAXXZ @ 0x1C01C6E80 (-xxxHandleVolumeUpDownCombo@@YAXXZ.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0006F2C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0006F60 (--1PUSHLOCKEX@@QEAA@XZ.c)
 */

_BOOL8 __fastcall xxxVolumeUpDownComboSupported(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  char *v6; // rax
  char v7; // cl
  unsigned int v8; // eax
  __int64 v9; // r8
  _BYTE *v10; // rax
  unsigned int v11; // edx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  char v16; // [rsp+30h] [rbp+8h] BYREF

  if ( gPlatformRole != 8 )
    return 0LL;
  v4 = 0;
  EnterDeviceInfoListCrit_(a1, a2, a3, a4);
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v16, gpRimDevBackedDeviceInfoListLock);
  v5 = gpDeviceInfoList;
  while ( v5 )
  {
    v6 = (char *)(v5 + 48);
    v5 = *(_QWORD *)(v5 + 56);
    v7 = *v6;
    v8 = v4 + 1;
    if ( v7 != 1 )
      v8 = v4;
    v4 = v8;
  }
  v9 = gpRimDevBackedDeviceInfoList;
  while ( v9 )
  {
    v10 = (_BYTE *)(v9 + 48);
    v9 = *(_QWORD *)(v9 + 56);
    v11 = v4 + 1;
    if ( *v10 != 1 )
      v11 = v4;
    v4 = v11;
  }
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v16);
  LeaveDeviceInfoListCrit_(v13, v12, v14);
  return v4 <= 1;
}
