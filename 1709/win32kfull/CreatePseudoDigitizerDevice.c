/*
 * XREFs of CreatePseudoDigitizerDevice @ 0x1C01BE290
 * Callers:
 *     _InitializeTouchInjectionWorker @ 0x1C01BD608 (_InitializeTouchInjectionWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     memset @ 0x1C0145A00 (memset.c)
 *     FindRimDevBackedDeviceInfo @ 0x1C01AB500 (FindRimDevBackedDeviceInfo.c)
 *     ?_UpdateReportDescriptor@@YAXUtagRECT@@KK@Z @ 0x1C01BE188 (-_UpdateReportDescriptor@@YAXUtagRECT@@KK@Z.c)
 */

struct DEVICEINFO *__fastcall CreatePseudoDigitizerDevice(int a1, int a2, __int64 a3)
{
  struct DEVICEINFO *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  HANDLE *v11; // r14
  int KernelHandleToRimObj; // eax
  __int64 v13; // rcx
  unsigned __int64 v14; // xmm0_8
  __int128 v15; // xmm6
  __int64 v16; // rcx
  void **v17; // rbx
  unsigned int v18; // ecx
  struct DEVICEINFO *DeviceInfo; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v24; // [rsp+28h] [rbp-B9h]
  _QWORD v25[3]; // [rsp+30h] [rbp-B1h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-99h] BYREF
  _QWORD v27[18]; // [rsp+58h] [rbp-89h] BYREF

  v6 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\??\\VIRTUAL_DIGITIZER");
  EnterDeviceInfoListCrit_(v8, v7, v9, v10);
  EtwTracePseudoDevCreationStart();
  v11 = (HANDLE *)(a3 + 88);
  if ( (gdwMitConfig & 4) != 0 )
  {
    KernelHandleToRimObj = CHidInput::GetKernelHandleToRimObj(gpHidInput, (void **)(a3 + 88));
  }
  else
  {
    v24 = a3 + 88;
    KernelHandleToRimObj = RawInputManagerObjectCreateKernelHandle(aDeviceTemplate[153], 3LL, 0LL);
  }
  if ( KernelHandleToRimObj >= 0 )
  {
    v14 = _mm_srli_si128(*(__m128i *)RIMGetVirtualDesktopPhysicalSize(&v25[1]), 8).m128i_u64[0];
    *(_OWORD *)&v25[1] = *(_OWORD *)(*gpDispInfo + 24LL);
    v15 = *(_OWORD *)&v25[1];
    _UpdateReportDescriptor(
      (struct tagRECT *)&v25[1],
      3937 * ((int)v14 / 1000) / 0x64u,
      3937 * (SHIDWORD(v14) / 1000) / 0x64u);
    memset(v27, 0, sizeof(v27));
    LODWORD(v27[1]) = 498;
    v27[0] = &unk_1C0324100;
    v27[10] = 0LL;
    *(_OWORD *)((char *)&v27[11] + 4) = v15;
    LODWORD(v27[11]) = a1;
    HIDWORD(v27[13]) = (int)v14 / 1000;
    LODWORD(v27[14]) = SHIDWORD(v14) / 1000;
    *(_QWORD *)((char *)&v27[14] + 4) = *(_QWORD *)(PsGetCurrentProcessWin32Process(v16) + 832);
    v17 = (void **)(a3 + 96);
    LOBYTE(v24) = 0;
    v18 = *(_DWORD *)(PsGetCurrentProcessWin32Process(*(_QWORD *)((char *)&v27[14] + 4)) + 12) & 0x80000000;
    LODWORD(v27[16]) = a2;
    HIDWORD(v27[15]) = v18;
    if ( (int)RIMAddInjectionDeviceOfType(*v11, &DestinationString, 2LL, v27, v24, a3 + 96) < 0 )
    {
      ZwClose(*v11);
      *v11 = 0LL;
      *v17 = 0LL;
    }
    else
    {
      if ( (gdwMitConfig & 4) != 0 )
        DeviceInfo = CBaseInput::FindDeviceInfo(gpHidInput, *v17, 0);
      else
        DeviceInfo = FindRimDevBackedDeviceInfo(*v17, 0, 2LL);
      v6 = DeviceInfo;
    }
  }
  EtwTracePseudoDevCreationStop(v13);
  LeaveDeviceInfoListCrit_(v21, v20, v22);
  return v6;
}
