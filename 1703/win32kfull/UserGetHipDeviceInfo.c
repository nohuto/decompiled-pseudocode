/*
 * XREFs of UserGetHipDeviceInfo @ 0x1C01A7A70
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCbCopyUnicodeString @ 0x1C0023644 (RtlStringCbCopyUnicodeString.c)
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C0024574 (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C002459C (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     RtlStringCchCopyW @ 0x1C003767C (RtlStringCchCopyW.c)
 *     W32GetThreadWin32Thread @ 0x1C0054B98 (W32GetThreadWin32Thread.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 */

__int64 __fastcall UserGetHipDeviceInfo(_DWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  unsigned int v4; // r15d
  unsigned int v6; // r13d
  unsigned int v7; // r12d
  __int64 v8; // rcx
  struct DEVICEINFO *DeviceList; // r14
  __int64 v10; // rbp
  __int64 v11; // rsi
  unsigned int v12; // ecx
  int v13; // eax
  unsigned int v14; // ecx
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // ecx
  int v19; // eax
  int v20; // ecx
  _OWORD *v21; // rcx
  __int64 v22; // rcx
  char v24; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0;
  v4 = *a1 - 4;
  v6 = v4;
  v7 = 0;
  UserEnterUserCritSec(a1, a2, a3);
  EnterDeviceInfoListCrit_(v8);
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v24, gpRimDevBackedDeviceInfoListLock);
  if ( (gdwMitConfig & 4) != 0 )
    DeviceList = CBaseInput::TmpGetDeviceList(gpHidInput);
  else
    DeviceList = (struct DEVICEINFO *)gpRimDevBackedDeviceInfoList;
  while ( DeviceList )
  {
    if ( (*((_DWORD *)DeviceList + 50) & 0x80u) != 0 )
    {
      v10 = *((_QWORD *)DeviceList + 59);
      if ( v6 )
      {
        if ( v4 < 0x450 )
        {
          v3 = -1073741789;
          break;
        }
        v11 = 276LL * v7;
        a1[v11 + 1] = *(_DWORD *)(v10 + 24);
        a1[v11 + 2] = *(_DWORD *)(v10 + 876);
        v12 = a1[v11 + 3] & 0xFFFFFFFD | (*(_QWORD *)(v10 + 320) != 0LL ? 2 : 0);
        a1[v11 + 3] = v12;
        v13 = v12 ^ ((unsigned __int8)v12 ^ (unsigned __int8)(4 * (*(int *)(v10 + 260) >> 10))) & 4;
        a1[v11 + 3] = v13;
        v14 = v13 & 0xFFFC03FF | (*(unsigned __int8 *)(v10 + 696) << 10);
        a1[v11 + 3] = v14;
        v15 = v14 ^ ((unsigned __int8)v14 ^ (unsigned __int8)(8 * (*(int *)(v10 + 260) >> 4))) & 8;
        a1[v11 + 3] = v15;
        v16 = v15 ^ ((unsigned __int8)v15 ^ (unsigned __int8)(16 * (*(int *)(v10 + 260) >> 5))) & 0x10;
        a1[v11 + 3] = v16;
        v17 = v16 ^ ((unsigned __int8)v16 ^ (unsigned __int8)(32 * (*(int *)(v10 + 260) >> 6))) & 0x20;
        a1[v11 + 3] = v17;
        v18 = v17 ^ ((unsigned __int8)v17 ^ (unsigned __int8)((unsigned __int8)(*(int *)(v10 + 260) >> 7) << 6)) & 0x40;
        a1[v11 + 3] = v18;
        v19 = v18 ^ ((unsigned __int8)v18 ^ (unsigned __int8)((unsigned __int8)(*(int *)(v10 + 260) >> 9) << 7)) & 0x80;
        a1[v11 + 3] = v19;
        v20 = v19 ^ ((unsigned __int16)v19 ^ (unsigned __int16)((unsigned __int16)(*(int *)(v10 + 260) >> 11) << 8)) & 0x100;
        a1[v11 + 3] = v20;
        a1[v11 + 3] = v20 ^ ((unsigned __int16)v20 ^ (unsigned __int16)((unsigned __int16)(*(int *)(v10 + 260) >> 12) << 9)) & 0x200;
        a1[v11 + 4] = *(_DWORD *)(v10 + 264);
        *(_OWORD *)&a1[v11 + 5] = *(_OWORD *)(v10 + 268);
        *(_QWORD *)&a1[v11 + 9] = *(_QWORD *)(v10 + 720);
        a1[v11 + 11] = *(_DWORD *)(v10 + 728);
        a1[v11 + 16] = *(_DWORD *)(v10 + 744);
        *(_QWORD *)&a1[v11 + 19] = *(_QWORD *)(*((_QWORD *)DeviceList + 59) + 840LL);
        *(_QWORD *)&a1[v11 + 17] = *(_QWORD *)(*((_QWORD *)DeviceList + 59) + 832LL);
        RtlStringCchCopyW((NTSTRSAFE_PWSTR)&a1[v11 + 85], 0x80uLL, (NTSTRSAFE_PCWSTR)(v10 + 1136));
        RtlStringCchCopyW((NTSTRSAFE_PWSTR)&a1[v11 + 149], 0x80uLL, (NTSTRSAFE_PCWSTR)(v10 + 880));
        if ( *(_QWORD *)(v10 + 288) )
        {
          a1[v11 + 3] |= 1u;
          if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0
            && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
            && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                          + 52LL) & 1) != 0 )
          {
            v21 = (_OWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 288) + 40LL) + 44LL);
          }
          else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1
                 && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                 && (*(_DWORD *)(**(_QWORD **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                             + 8LL)
                               + 52LL) & 1) != 0 )
          {
            v21 = (_OWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 288) + 40LL) + 60LL);
          }
          else
          {
            v21 = (_OWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 288) + 40LL) + 28LL);
          }
          *(_OWORD *)&a1[v11 + 12] = *v21;
        }
        else
        {
          a1[v11 + 3] &= ~1u;
          *(_QWORD *)&a1[v11 + 12] = 0LL;
          *(_QWORD *)&a1[v11 + 14] = 0LL;
        }
        if ( *(_QWORD *)(v10 + 304) )
          RtlStringCbCopyUnicodeString((NTSTRSAFE_PWSTR)&a1[v11 + 21], 0x100uLL, (PCUNICODE_STRING)(v10 + 296));
        else
          LOWORD(a1[v11 + 21]) = 0;
        if ( *(_QWORD *)(v10 + 304) )
          RtlStringCbCopyUnicodeString((NTSTRSAFE_PWSTR)&a1[v11 + 213], 0x100uLL, (PCUNICODE_STRING)(v10 + 1472));
        else
          LOWORD(a1[v11 + 213]) = 0;
        v4 -= 1104;
      }
      ++v7;
    }
    DeviceList = (struct DEVICEINFO *)*((_QWORD *)DeviceList + 7);
  }
  v22 = 1104 * v7 + 4;
  *a1 = v22;
  LeaveDeviceInfoListCrit_(v22);
  UserLeaveUserCritSec();
  PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v24);
  return v3;
}
