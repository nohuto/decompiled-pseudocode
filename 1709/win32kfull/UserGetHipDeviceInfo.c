/*
 * XREFs of UserGetHipDeviceInfo @ 0x1C01CA6A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0006F2C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0006F60 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     GetMonitorRect @ 0x1C004BA6C (GetMonitorRect.c)
 *     RtlStringCchCopyW @ 0x1C009DD08 (RtlStringCchCopyW.c)
 *     RtlStringCbCopyUnicodeString @ 0x1C00B16D0 (RtlStringCbCopyUnicodeString.c)
 */

__int64 __fastcall UserGetHipDeviceInfo(_DWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // esi
  unsigned int v4; // r15d
  unsigned int v6; // edi
  unsigned int v7; // r12d
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r8
  struct DEVICEINFO *DeviceList; // rbp
  __int64 v15; // r14
  __int64 v16; // r13
  __int64 v17; // rdi
  unsigned int v18; // ecx
  int v19; // eax
  unsigned int v20; // ecx
  int v21; // eax
  int v22; // ecx
  int v23; // eax
  int v24; // ecx
  int v25; // eax
  int v26; // ecx
  __int64 v27; // rcx
  _OWORD v29[4]; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v30; // [rsp+70h] [rbp+8h]
  char v31; // [rsp+78h] [rbp+10h] BYREF

  v3 = 0;
  v4 = *a1 - 4;
  v6 = v4;
  v7 = 0;
  v30 = v4;
  UserEnterUserCritSec(a1, a2, a3);
  EnterDeviceInfoListCrit_(v9, v8, v10, v11);
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v31, gpRimDevBackedDeviceInfoListLock);
  if ( (gdwMitConfig & 4) != 0 )
    DeviceList = CBaseInput::TmpGetDeviceList(gpHidInput);
  else
    DeviceList = (struct DEVICEINFO *)gpRimDevBackedDeviceInfoList;
  while ( DeviceList )
  {
    if ( (*((_DWORD *)DeviceList + 50) & 0x80u) != 0 )
    {
      v15 = *((_QWORD *)DeviceList + 59);
      v16 = *(_QWORD *)(v15 + 16);
      if ( v6 )
      {
        if ( v4 < 0x450 )
        {
          v3 = -1073741789;
          break;
        }
        v17 = 276LL * v7;
        a1[v17 + 1] = *(_DWORD *)(v15 + 24);
        a1[v17 + 2] = *(_DWORD *)(v16 + 792);
        v18 = a1[v17 + 3] & 0xFFFFFFFD | (*(_QWORD *)(v15 + 304) != 0LL ? 2 : 0);
        a1[v17 + 3] = v18;
        v19 = v18 ^ ((unsigned __int8)v18 ^ (unsigned __int8)(4 * (*(int *)(v15 + 276) >> 10))) & 4;
        a1[v17 + 3] = v19;
        v20 = v19 & 0xFFFC03FF | (*(unsigned __int8 *)(v15 + 680) << 10);
        a1[v17 + 3] = v20;
        v21 = v20 ^ ((unsigned __int8)v20 ^ (unsigned __int8)(8 * (*(int *)(v15 + 276) >> 4))) & 8;
        a1[v17 + 3] = v21;
        v22 = v21 ^ ((unsigned __int8)v21 ^ (unsigned __int8)(16 * (*(int *)(v15 + 276) >> 5))) & 0x10;
        a1[v17 + 3] = v22;
        v23 = v22 ^ ((unsigned __int8)v22 ^ (unsigned __int8)(32 * (*(int *)(v15 + 276) >> 6))) & 0x20;
        a1[v17 + 3] = v23;
        v24 = v23 ^ ((unsigned __int8)v23 ^ (unsigned __int8)((unsigned __int8)(*(int *)(v15 + 276) >> 7) << 6)) & 0x40;
        a1[v17 + 3] = v24;
        v25 = v24 ^ ((unsigned __int8)v24 ^ (unsigned __int8)((unsigned __int8)(*(int *)(v15 + 276) >> 9) << 7)) & 0x80;
        a1[v17 + 3] = v25;
        v26 = v25 ^ ((unsigned __int16)v25 ^ (unsigned __int16)((unsigned __int16)(*(int *)(v15 + 276) >> 11) << 8)) & 0x100;
        a1[v17 + 3] = v26;
        a1[v17 + 3] = v26 ^ ((unsigned __int16)v26 ^ (unsigned __int16)((unsigned __int16)(*(int *)(v15 + 276) >> 12) << 9)) & 0x200;
        a1[v17 + 4] = *(_DWORD *)(v16 + 768);
        *(_OWORD *)&a1[v17 + 5] = *(_OWORD *)(v16 + 1528);
        *(_QWORD *)&a1[v17 + 9] = *(_QWORD *)(v16 + 1336);
        a1[v17 + 11] = *(_DWORD *)(v16 + 1348);
        a1[v17 + 16] = *(_DWORD *)(v16 + 1428);
        *(_QWORD *)&a1[v17 + 19] = *(_QWORD *)(v16 + 1520);
        *(_QWORD *)&a1[v17 + 17] = *(_QWORD *)(v16 + 1512);
        RtlStringCchCopyW((NTSTRSAFE_PWSTR)&a1[v17 + 85], 0x80uLL, (NTSTRSAFE_PCWSTR)(v16 + 1052));
        RtlStringCchCopyW((NTSTRSAFE_PWSTR)&a1[v17 + 149], 0x80uLL, (NTSTRSAFE_PCWSTR)(v16 + 796));
        if ( *(_QWORD *)(v16 + 784) )
        {
          a1[v17 + 3] |= 1u;
          *(_OWORD *)&a1[v17 + 12] = *GetMonitorRect(v29, *(_QWORD *)(v16 + 784));
        }
        else
        {
          a1[v17 + 3] &= ~1u;
          *(_QWORD *)&a1[v17 + 12] = 0LL;
          *(_QWORD *)&a1[v17 + 14] = 0LL;
        }
        if ( *(_QWORD *)(v15 + 288) )
          RtlStringCbCopyUnicodeString((NTSTRSAFE_PWSTR)&a1[v17 + 21], 0x100uLL, (PCUNICODE_STRING)(v15 + 280));
        else
          LOWORD(a1[v17 + 21]) = 0;
        if ( *(_QWORD *)(v15 + 288) )
          RtlStringCbCopyUnicodeString((NTSTRSAFE_PWSTR)&a1[v17 + 213], 0x100uLL, (PCUNICODE_STRING)(v15 + 808));
        else
          LOWORD(a1[v17 + 213]) = 0;
        v6 = v30;
        v4 -= 1104;
      }
      ++v7;
    }
    DeviceList = (struct DEVICEINFO *)*((_QWORD *)DeviceList + 7);
  }
  v27 = 1104 * v7 + 4;
  *a1 = v27;
  LeaveDeviceInfoListCrit_(v27, v12, v13);
  UserLeaveUserCritSec();
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v31);
  return v3;
}
