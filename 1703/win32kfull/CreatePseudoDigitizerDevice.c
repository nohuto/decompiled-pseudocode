/*
 * XREFs of CreatePseudoDigitizerDevice @ 0x1C01B99AC
 * Callers:
 *     _InitializeTouchInjectionWithQDCData @ 0x1C01B8424 (_InitializeTouchInjectionWithQDCData.c)
 * Callees:
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 *     FindRimDevBackedDeviceInfo @ 0x1C01A8160 (FindRimDevBackedDeviceInfo.c)
 *     ?_UpdateReportDescriptor@@YAXUtagRECT@@KK@Z @ 0x1C01B9560 (-_UpdateReportDescriptor@@YAXUtagRECT@@KK@Z.c)
 *     ComputeVirtualDesktopPhysicalSize @ 0x1C01B9668 (ComputeVirtualDesktopPhysicalSize.c)
 */

struct DEVICEINFO *__fastcall CreatePseudoDigitizerDevice(int a1, int a2, __int64 a3, __int64 a4)
{
  struct DEVICEINFO *v6; // rsi
  __int64 v9; // rcx
  HANDLE *v10; // r14
  int KernelHandleToRimObj; // eax
  __int64 v12; // rcx
  int v13; // edi
  int v14; // ebx
  struct tagRECT v15; // xmm6
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  void **v19; // rbx
  unsigned int v20; // ecx
  struct DEVICEINFO *DeviceInfo; // rax
  __int64 v22; // rcx
  __int64 v24; // [rsp+28h] [rbp-E0h]
  int v25; // [rsp+38h] [rbp-D0h] BYREF
  int v26; // [rsp+3Ch] [rbp-CCh] BYREF
  struct tagRECT v27; // [rsp+48h] [rbp-C0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v29[18]; // [rsp+68h] [rbp-A0h] BYREF

  v6 = 0LL;
  v26 = 0;
  v25 = 0;
  RtlInitUnicodeString(&DestinationString, L"\\??\\VIRTUAL_DIGITIZER");
  EnterDeviceInfoListCrit_(v9);
  EtwTracePseudoDevCreationStart();
  v10 = (HANDLE *)(a4 + 80);
  if ( (gdwMitConfig & 4) != 0 )
  {
    KernelHandleToRimObj = CHidInput::GetKernelHandleToRimObj(gpHidInput, (void **)(a4 + 80));
  }
  else
  {
    v24 = a4 + 80;
    KernelHandleToRimObj = RawInputManagerObjectCreateKernelHandle(aDeviceTemplate[153], 3LL, 0LL);
  }
  if ( KernelHandleToRimObj >= 0 )
  {
    ComputeVirtualDesktopPhysicalSize(&v26, &v25, a3);
    v13 = v25;
    v14 = v26;
    v27 = *(struct tagRECT *)(*gpDispInfo + 24LL);
    v15 = v27;
    _UpdateReportDescriptor(&v27, 3937 * v26 / 0x64u, 3937 * v25 / 0x64u);
    memset(v29, 0, sizeof(v29));
    LODWORD(v29[1]) = 498;
    v29[0] = &unk_1C0329290;
    v29[10] = 0LL;
    *(struct tagRECT *)((char *)&v29[11] + 4) = v15;
    LODWORD(v29[11]) = a1;
    HIDWORD(v29[13]) = v14;
    LODWORD(v29[14]) = v13;
    *(_QWORD *)((char *)&v29[14] + 4) = *(_QWORD *)(PsGetCurrentProcessWin32Process(v17, v16) + 824);
    v19 = (void **)(a4 + 88);
    LOBYTE(v24) = 0;
    v20 = *(_DWORD *)(PsGetCurrentProcessWin32Process(*(_QWORD *)((char *)&v29[14] + 4), v18) + 12) & 0x80000000;
    LODWORD(v29[16]) = a2;
    HIDWORD(v29[15]) = v20;
    if ( (int)RIMAddInjectionDeviceOfType(*v10, &DestinationString, 2LL, v29, v24, a4 + 88) < 0 )
    {
      ZwClose(*v10);
      *v10 = 0LL;
      *v19 = 0LL;
    }
    else
    {
      if ( (gdwMitConfig & 4) != 0 )
        DeviceInfo = CBaseInput::FindDeviceInfo(gpHidInput, *v19, 0);
      else
        DeviceInfo = FindRimDevBackedDeviceInfo(*v19, 0, 2LL);
      v6 = DeviceInfo;
    }
  }
  EtwTracePseudoDevCreationStop(v12);
  LeaveDeviceInfoListCrit_(v22);
  return v6;
}
