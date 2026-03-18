/*
 * XREFs of ?InsertProcRequest@@YAHPEAUtagPROCESSINFO@@PEBUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KHPEAUtagWND@@H@Z @ 0x1C00C7D64
 * Callers:
 *     ?SetProcDeviceRequest@@YAHPEAUtagPROCESSINFO@@PEAUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@@KW4_REGISTER_RAW_INPUT_INTERNAL@@@Z @ 0x1C00C7C04 (-SetProcDeviceRequest@@YAHPEAUtagPROCESSINFO@@PEAUtagRAWINPUTDEVICE@@PEAUtagPROCESS_HID_REQUEST@.c)
 * Callees:
 *     ?SetHidPOCountToTLCInfo@@YAXGKH@Z @ 0x1C00093EC (-SetHidPOCountToTLCInfo@@YAXGKH@Z.c)
 *     ?AllocateAndLinkHidPageOnlyRequest@@YAPEAUtagHID_PAGEONLY_REQUEST@@G@Z @ 0x1C000AF64 (-AllocateAndLinkHidPageOnlyRequest@@YAPEAUtagHID_PAGEONLY_REQUEST@@G@Z.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     AllocateAndLinkHidTLCInfo @ 0x1C00C6AC0 (AllocateAndLinkHidTLCInfo.c)
 *     SearchHidTLCInfo @ 0x1C00C6F78 (SearchHidTLCInfo.c)
 *     PostDeviceNotification @ 0x1C00C7F8C (PostDeviceNotification.c)
 */

__int64 __fastcall InsertProcRequest(
        struct tagPROCESSINFO *a1,
        const struct tagRAWINPUTDEVICE *a2,
        struct tagPROCESS_HID_REQUEST *a3,
        int a4,
        int a5,
        struct tagWND *a6,
        int a7)
{
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // ecx
  int v13; // ecx
  unsigned int v14; // ecx
  struct DEVICEINFO *DeviceList; // rdi
  __int64 v17; // rax
  struct tagHID_PAGEONLY_REQUEST *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  char *v21; // [rsp+30h] [rbp-18h] BYREF
  struct tagWND *v22; // [rsp+38h] [rbp-10h]

  if ( a4 != 1 )
  {
    if ( a4 != 2 )
    {
      if ( a4 != 3 )
        goto LABEL_7;
      if ( !a5 )
      {
        v20 = (__int64)SearchHidTLCInfo(*((_WORD *)a3 + 8), *((_WORD *)a3 + 9));
        if ( !v20 )
        {
          v20 = AllocateAndLinkHidTLCInfo(*((_WORD *)a3 + 8), *((_WORD *)a3 + 9));
          if ( !v20 )
            goto LABEL_29;
        }
        *((_QWORD *)a3 + 3) = v20;
        ++*(_DWORD *)(v20 + 36);
      }
      v10 = *((_QWORD *)a1 + 98) + 48LL;
      v11 = *(_QWORD *)v10;
      if ( *(_QWORD *)(*(_QWORD *)v10 + 8LL) != v10 )
        __fastfail(3u);
      goto LABEL_6;
    }
    v18 = (struct tagHID_PAGEONLY_REQUEST *)RawInputManagerObject::gHidRequestTable[2];
    if ( v18 == (struct tagHID_PAGEONLY_REQUEST *)&RawInputManagerObject::gHidRequestTable[2] )
    {
LABEL_23:
      v18 = 0LL;
    }
    else
    {
      while ( *((_WORD *)v18 + 8) != *((_WORD *)a3 + 8) )
      {
        v18 = *(struct tagHID_PAGEONLY_REQUEST **)v18;
        if ( v18 == (struct tagHID_PAGEONLY_REQUEST *)&RawInputManagerObject::gHidRequestTable[2] )
          goto LABEL_23;
      }
    }
    if ( v18 || (v18 = AllocateAndLinkHidPageOnlyRequest(*((_WORD *)a3 + 8))) != 0LL )
    {
      *((_QWORD *)a3 + 3) = v18;
      ++*((_DWORD *)v18 + 5);
      SetHidPOCountToTLCInfo();
      v21 = (char *)a3 + 32;
      v22 = a6;
      HMAssignmentLock(&v21);
      v10 = *((_QWORD *)a1 + 98) + 32LL;
      v11 = *(_QWORD *)v10;
      if ( *(_QWORD *)(*(_QWORD *)v10 + 8LL) != v10 )
        __fastfail(3u);
      goto LABEL_6;
    }
LABEL_29:
    UserSetLastError(8LL, v19);
    return 0LL;
  }
  if ( !a5 )
  {
    v17 = (__int64)SearchHidTLCInfo(*((_WORD *)a3 + 8), *((_WORD *)a3 + 9));
    if ( v17 || (v17 = AllocateAndLinkHidTLCInfo(*((_WORD *)a3 + 8), *((_WORD *)a3 + 9))) != 0 )
    {
      *((_QWORD *)a3 + 3) = v17;
      ++*(_DWORD *)(v17 + 24);
      goto LABEL_3;
    }
    goto LABEL_29;
  }
LABEL_3:
  if ( !a7 )
  {
    v21 = (char *)a3 + 32;
    v22 = a6;
    HMAssignmentLock(&v21);
  }
  v10 = *((_QWORD *)a1 + 98) + 16LL;
  v11 = *(_QWORD *)v10;
  if ( *(_QWORD *)(*(_QWORD *)v10 + 8LL) != v10 )
    __fastfail(3u);
LABEL_6:
  *(_QWORD *)a3 = v11;
  *((_QWORD *)a3 + 1) = v10;
  *(_QWORD *)(v11 + 8) = a3;
  *(_QWORD *)v10 = a3;
LABEL_7:
  v12 = *((_DWORD *)a3 + 5) ^ (*((_DWORD *)a3 + 5) ^ (*((_DWORD *)a2 + 1) >> 11)) & 4;
  *((_DWORD *)a3 + 5) = v12;
  if ( (*((_DWORD *)a2 + 1) & 0x1100) != 0 )
  {
    if ( !a5 && (v12 & 1) == 0 )
    {
      ++*(_DWORD *)(*((_QWORD *)a1 + 98) + 80LL);
      ++gHidCounters[2];
    }
    v13 = *((_DWORD *)a3 + 5) | 1;
    *((_DWORD *)a3 + 5) = v13;
    if ( (*((_DWORD *)a2 + 1) & 0x1000) != 0 )
      v14 = v13 | 2;
    else
      v14 = v13 & 0xFFFFFFFD;
    *((_DWORD *)a3 + 5) = v14;
  }
  if ( (gdwMitConfig & 4) != 0 )
    DeviceList = CBaseInput::TmpGetDeviceList(gpHidInput);
  else
    DeviceList = (struct DEVICEINFO *)gpRimDevBackedDeviceInfoList;
  while ( DeviceList )
  {
    PostDeviceNotification(a3, DeviceList, 0);
    DeviceList = (struct DEVICEINFO *)*((_QWORD *)DeviceList + 7);
  }
  return 1LL;
}
