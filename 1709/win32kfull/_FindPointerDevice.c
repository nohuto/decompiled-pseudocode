/*
 * XREFs of _FindPointerDevice @ 0x1C00B3C84
 * Callers:
 *     _GetPointerDeviceRects @ 0x1C004A640 (_GetPointerDeviceRects.c)
 *     NtUserGetPointerDeviceProperties @ 0x1C00B3A10 (NtUserGetPointerDeviceProperties.c)
 *     NtUserGetPointerDeviceCursors @ 0x1C0139010 (NtUserGetPointerDeviceCursors.c)
 *     NtUserGetPointerDevice @ 0x1C013B660 (NtUserGetPointerDevice.c)
 *     NtUserGetPhysicalDeviceRect @ 0x1C01E6740 (NtUserGetPhysicalDeviceRect.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     IsPTPPointerDevicePresent @ 0x1C01A7BDC (IsPTPPointerDevicePresent.c)
 */

__int64 __fastcall FindPointerDevice(unsigned __int64 a1, __int64 *a2, __int64 *a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 Flink; // rcx
  struct _LIST_ENTRY *v13; // r8
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0;
  EnterDeviceInfoListCrit_();
  *a2 = 0LL;
  if ( a1 == -2LL )
  {
    v17 = 0LL;
    if ( !(unsigned int)IsPTPPointerDevicePresent(v8, &v17) )
      goto LABEL_9;
    Flink = v17;
  }
  else
  {
    LOBYTE(v7) = 19;
    Flink = HMValidateHandleNoSecure(a1, v7, v9, v10);
  }
  if ( Flink )
  {
    if ( (*(_DWORD *)(Flink + 200) & 0x80u) == 0 )
    {
      if ( !a3 )
      {
        UserSetLastError(6LL, v11);
        goto LABEL_9;
      }
    }
    else if ( !a3 )
    {
LABEL_6:
      if ( (*(_DWORD *)(Flink + 200) & 0x80u) != 0 )
        *a2 = *(_QWORD *)(Flink + 472);
      v6 = 1;
      goto LABEL_9;
    }
    *a3 = Flink;
    goto LABEL_6;
  }
  Flink = (__int64)gPointerDeviceInfoList.Flink;
  v13 = &gPointerDeviceInfoList;
  v11 = 0LL;
  v15 = 0;
  while ( (struct _LIST_ENTRY *)Flink != &gPointerDeviceInfoList )
  {
    v11 = Flink - 824;
    Flink = *(_QWORD *)Flink;
    if ( *(_QWORD *)(v11 + 696) == a1 )
    {
      v15 = 1;
      break;
    }
  }
  v16 = v11 & -(__int64)(v15 != 0);
  *a2 = v16;
  LOBYTE(v6) = v16 != 0;
LABEL_9:
  LeaveDeviceInfoListCrit_(Flink, v11, v13);
  return v6;
}
