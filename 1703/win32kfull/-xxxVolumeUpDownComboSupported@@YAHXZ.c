/*
 * XREFs of ?xxxVolumeUpDownComboSupported@@YAHXZ @ 0x1C01C4B9C
 * Callers:
 *     ?xxxHandleVolumeUpDownCombo@@YAXXZ @ 0x1C01C4B1C (-xxxHandleVolumeUpDownCombo@@YAXXZ.c)
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0024574 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C002459C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 */

_BOOL8 __fastcall xxxVolumeUpDownComboSupported(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdx
  char *v3; // rax
  char v4; // cl
  unsigned int v5; // eax
  __int64 v6; // r8
  _BYTE *v7; // rax
  unsigned int v8; // edx
  __int64 v9; // rcx
  char v11; // [rsp+30h] [rbp+8h] BYREF

  if ( gPlatformRole != 8 )
    return 0LL;
  v1 = 0;
  EnterDeviceInfoListCrit_(a1);
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v11, gpRimDevBackedDeviceInfoListLock);
  v2 = gpDeviceInfoList;
  while ( v2 )
  {
    v3 = (char *)(v2 + 48);
    v2 = *(_QWORD *)(v2 + 56);
    v4 = *v3;
    v5 = v1 + 1;
    if ( v4 != 1 )
      v5 = v1;
    v1 = v5;
  }
  v6 = gpRimDevBackedDeviceInfoList;
  while ( v6 )
  {
    v7 = (_BYTE *)(v6 + 48);
    v6 = *(_QWORD *)(v6 + 56);
    v8 = v1 + 1;
    if ( *v7 != 1 )
      v8 = v1;
    v1 = v8;
  }
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v11);
  LeaveDeviceInfoListCrit_(v9);
  return v1 <= 1;
}
