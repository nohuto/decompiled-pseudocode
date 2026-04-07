/*
 * XREFs of ?GetPathInfo@@YAJPEBG_NPEAUDISPLAYCONFIG_PATH_INFO@@@Z @ 0x18000AAF0
 * Callers:
 *     ?TryGetPathInfoFromHMonitor@@YAHPEAUHMONITOR__@@PEAUDISPLAYCONFIG_PATH_INFO@@@Z @ 0x1800393A8 (-TryGetPathInfoFromHMonitor@@YAHPEAUHMONITOR__@@PEAUDISPLAYCONFIG_PATH_INFO@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     memset_0 @ 0x18004B360 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GetPathInfo(const unsigned __int16 *a1, __int64 a2, struct DISPLAYCONFIG_PATH_INFO *a3)
{
  DISPLAYCONFIG_PATH_INFO *v3; // rbx
  DISPLAYCONFIG_MODE_INFO *v4; // r14
  int DisplayConfigBufferSizes; // eax
  bool v8; // sf
  signed int v9; // edi
  __int64 v11; // rsi
  UINT32 id; // eax
  LONG DeviceInfo; // eax
  const unsigned __int16 *v14; // rax
  int v15; // edx
  int v16; // ecx
  __int64 v17; // rdx
  unsigned __int64 v18; // rdx
  DISPLAYCONFIG_MODE_INFO *modeInfoArray; // rax
  UINT32 numPathArrayElements; // [rsp+30h] [rbp-49h] BYREF
  UINT32 numModeInfoArrayElements[3]; // [rsp+34h] [rbp-45h] BYREF
  DISPLAYCONFIG_DEVICE_INFO_HEADER requestPacket; // [rsp+40h] [rbp-39h] BYREF
  char v23; // [rsp+54h] [rbp-25h] BYREF

  numPathArrayElements = 0;
  v3 = 0LL;
  numModeInfoArrayElements[0] = 0;
  v4 = 0LL;
  do
  {
    if ( v3 )
    {
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, DISPLAYCONFIG_PATH_INFO *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        v3);
      v3 = 0LL;
    }
    if ( v4 )
    {
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, DISPLAYCONFIG_MODE_INFO *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        v4);
      v4 = 0LL;
    }
    DisplayConfigBufferSizes = GetDisplayConfigBufferSizes(2u, &numPathArrayElements, numModeInfoArrayElements);
    v8 = DisplayConfigBufferSizes < 0;
    if ( DisplayConfigBufferSizes > 0 )
    {
      DisplayConfigBufferSizes = (unsigned __int16)DisplayConfigBufferSizes | 0x80070000;
      v8 = DisplayConfigBufferSizes < 0;
    }
    if ( v8 )
      break;
    v17 = 72LL * numPathArrayElements;
    if ( !is_mul_ok(numPathArrayElements, 0x48uLL) )
      v17 = -1LL;
    v3 = (DISPLAYCONFIG_PATH_INFO *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                               + 8LL))(
                                      WPF::g_pProcessHeap,
                                      v17);
    if ( !v3 )
      goto LABEL_10;
    v18 = (unsigned __int64)numModeInfoArrayElements[0] << 6;
    if ( !is_mul_ok(numModeInfoArrayElements[0], 0x40uLL) )
      v18 = -1LL;
    modeInfoArray = (DISPLAYCONFIG_MODE_INFO *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, unsigned __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                                 WPF::g_pProcessHeap,
                                                 v18);
    v4 = modeInfoArray;
    if ( !modeInfoArray )
    {
      DisplayConfigBufferSizes = -2147024882;
      break;
    }
    DisplayConfigBufferSizes = QueryDisplayConfig(
                                 2u,
                                 &numPathArrayElements,
                                 v3,
                                 numModeInfoArrayElements,
                                 modeInfoArray,
                                 0LL);
    if ( DisplayConfigBufferSizes > 0 )
      DisplayConfigBufferSizes = (unsigned __int16)DisplayConfigBufferSizes | 0x80070000;
  }
  while ( DisplayConfigBufferSizes == -2147024774 );
  if ( DisplayConfigBufferSizes < 0 )
    goto LABEL_10;
  v11 = 0LL;
  if ( !numPathArrayElements )
    goto LABEL_10;
  while ( 1 )
  {
    memset_0(&requestPacket, 0, 0x54uLL);
    requestPacket.type = DISPLAYCONFIG_DEVICE_INFO_GET_SOURCE_NAME;
    requestPacket.adapterId = v3[v11].sourceInfo.adapterId;
    id = v3[v11].sourceInfo.id;
    requestPacket.size = 84;
    requestPacket.id = id;
    DeviceInfo = DisplayConfigGetDeviceInfo(&requestPacket);
    v9 = DeviceInfo;
    if ( DeviceInfo > 0 )
      v9 = (unsigned __int16)DeviceInfo | 0x80070000;
    if ( v9 >= 0 )
    {
      v14 = a1;
      do
      {
        v15 = *(const unsigned __int16 *)((char *)v14 + &v23 - (char *)a1);
        v16 = *v14 - v15;
        if ( v16 )
          break;
        ++v14;
      }
      while ( v15 );
      if ( !v16 )
        break;
    }
    v11 = (unsigned int)(v11 + 1);
    if ( (unsigned int)v11 >= numPathArrayElements )
      goto LABEL_10;
  }
  if ( (_DWORD)v11 == -1 )
  {
LABEL_10:
    v9 = -2147024809;
    goto LABEL_11;
  }
  *(_OWORD *)&a3->sourceInfo.adapterId.LowPart = *(_OWORD *)&v3[(int)v11].sourceInfo.adapterId.LowPart;
  *(_OWORD *)&a3->sourceInfo.statusFlags = *(_OWORD *)&v3[(int)v11].sourceInfo.statusFlags;
  *(_OWORD *)&a3->targetInfo.modeInfoIdx = *(_OWORD *)&v3[(int)v11].targetInfo.modeInfoIdx;
  *(_OWORD *)&a3->targetInfo.refreshRate.Numerator = *(_OWORD *)&v3[(int)v11].targetInfo.refreshRate.Numerator;
  *(_QWORD *)&a3->targetInfo.statusFlags = *(_QWORD *)&v3[(int)v11].targetInfo.statusFlags;
LABEL_11:
  if ( v3 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, DISPLAYCONFIG_PATH_INFO *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v3);
  if ( v4 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, DISPLAYCONFIG_MODE_INFO *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v4);
  return (unsigned int)v9;
}
