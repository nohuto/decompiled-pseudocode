/*
 * XREFs of ?FindMonitorForEdid@GazeHidParser@@SAJUMonitorEdid@@PEAPEAUHMONITOR__@@@Z @ 0x1800C8888
 * Callers:
 *     ?UpdateCalibrationInfo@GazeDeviceCollection@@IEAAJPEAUDeviceInfo@@@Z @ 0x18009BFD0 (-UpdateCalibrationInfo@GazeDeviceCollection@@IEAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18004CAF4 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800CB52C (--_U@YAPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GazeHidParser::FindMonitorForEdid(const void *a1, HMONITOR *a2)
{
  unsigned int DisplayConfigBufferSizes; // eax
  __int64 v5; // rdx
  unsigned int v6; // ebx
  __int64 v7; // rbx
  DISPLAYCONFIG_PATH_INFO *v8; // rsi
  UINT32 numPathArrayElements[2]; // [rsp+38h] [rbp-D0h] BYREF
  DISPLAYCONFIG_PATH_INFO *pathArray; // [rsp+40h] [rbp-C8h] BYREF
  POINT pt[2]; // [rsp+48h] [rbp-C0h] BYREF
  POINT *v13; // [rsp+58h] [rbp-B0h]
  __int64 v14; // [rsp+60h] [rbp-A8h]
  __int64 v15; // [rsp+68h] [rbp-A0h]
  DISPLAYCONFIG_DEVICE_INFO_HEADER requestPacket[27]; // [rsp+78h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2D0h] [rbp+1C8h]

  v15 = -2LL;
  pathArray = 0LL;
  pt[0] = 0LL;
  numPathArrayElements[0] = 0;
  numPathArrayElements[1] = 0;
  pt[1] = (POINT)&pathArray;
  v13 = pt;
  LOBYTE(v14) = 1;
  *a2 = 0LL;
  DisplayConfigBufferSizes = GetDisplayConfigBufferSizes(2u, numPathArrayElements, &numPathArrayElements[1]);
  if ( DisplayConfigBufferSizes )
  {
    v5 = 507LL;
LABEL_5:
    v6 = wil::details::in1diag3::Return_Win32(
           retaddr,
           (void *)v5,
           (__int64)"onecoreuap\\windows\\input\\gaze\\hid\\lib\\gazehidparser.cpp",
           (const char *)DisplayConfigBufferSizes);
    goto LABEL_14;
  }
  pathArray = (DISPLAYCONFIG_PATH_INFO *)operator new[](saturated_mul(numPathArrayElements[0], 0x48uLL));
  pt[0] = (POINT)operator new[](saturated_mul(numPathArrayElements[1], 0x40uLL));
  DisplayConfigBufferSizes = QueryDisplayConfig(
                               2u,
                               numPathArrayElements,
                               pathArray,
                               &numPathArrayElements[1],
                               *(DISPLAYCONFIG_MODE_INFO **)pt,
                               0LL);
  if ( DisplayConfigBufferSizes )
  {
    v5 = 516LL;
    goto LABEL_5;
  }
  v7 = 0LL;
  if ( numPathArrayElements[0] )
  {
    while ( 1 )
    {
      v8 = pathArray;
      memset(requestPacket, 0, 0x218uLL);
      requestPacket[0].type = -8;
      requestPacket[0].size = 536;
      requestPacket[0].adapterId = pathArray[v7].sourceInfo.adapterId;
      requestPacket[0].id = pathArray[v7].targetInfo.id;
      if ( !DisplayConfigGetDeviceInfo(requestPacket)
        && requestPacket[1].type >= 0x14u
        && RtlCompareMemory(a1, &requestPacket[1].adapterId.HighPart, 0xCuLL) == 12 )
      {
        break;
      }
      v7 = (unsigned int)(v7 + 1);
      if ( (unsigned int)v7 >= numPathArrayElements[0] )
        goto LABEL_13;
    }
    pt[1] = *(POINT *)(((unsigned __int64)v8[v7].sourceInfo.modeInfoIdx << 6) + *(_QWORD *)pt + 28);
    *a2 = MonitorFromPoint(pt[1], 0);
  }
LABEL_13:
  v6 = 0;
LABEL_14:
  if ( pathArray )
    operator delete(pathArray);
  if ( pt[0] )
    operator delete(*(void **)pt);
  return v6;
}
