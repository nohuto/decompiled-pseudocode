/*
 * XREFs of ?Initialize@HeatProcessor@@IEAAJPEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x180047BB0
 * Callers:
 *     ?Create@HeatProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180047E80 (-Create@HeatProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     ?OnDeviceArrival@HeatProcessor@@QEAAJPEAUDeviceInfo@@@Z @ 0x18004805C (-OnDeviceArrival@HeatProcessor@@QEAAJPEAUDeviceInfo@@@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HeatProcessor::Initialize(
        HeatProcessor *this,
        struct DeviceInfo *a2,
        struct IInputProcessorHost *a3)
{
  __int64 v5; // rcx
  _QWORD *v7; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rdi
  int v10; // esi
  __int64 v11; // rcx
  int v12; // eax
  HMODULE LibraryW; // rax
  HMODULE v14; // rsi
  FARPROC ProcAddress; // r14
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  signed int v19; // edi
  signed int LastError; // eax
  __int64 v21; // rcx
  __int64 v22; // rax
  char v23; // di
  int v24; // r9d
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rcx

  v5 = *((_QWORD *)this + 8);
  if ( v5 )
  {
    *((_QWORD *)this + 8) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v7 = malloc(0x38uLL);
  v9 = v7;
  if ( v7 )
    memset(v7, 0, 0x38uLL);
  if ( !v9 )
  {
    LOBYTE(v10) = 14;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      return 0LL;
    McTemplateU0qqq(v8, &MinInput_Warning_CheckResult, 0, 58, 14);
    goto LABEL_17;
  }
  v9[2] = &RefCountedObject::`vftable';
  *((_DWORD *)v9 + 6) = 1;
  v9[5] = 0LL;
  *v9 = &ISMHeatFrameworkHost::`vftable'{for `IHeatFrameworkHost'};
  v9[1] = &ISMHeatFrameworkHost::`vftable'{for `ISystemContextObserver'};
  v9[2] = &ISMHeatFrameworkHost::`vftable'{for `RefCountedObject'};
  v9[4] = a3;
  v9[6] = 0LL;
  v12 = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*v9 + 32LL))(v9, 1LL);
  v10 = v12;
  if ( v12 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    McTemplateU0qqq(v11, &MinInput_Warning_CheckResult, 0, 37, v12);
  if ( v10 >= 0 )
  {
    *((_QWORD *)this + 8) = v9;
  }
  else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
  {
    McTemplateU0qqq(v11, &MinInput_Warning_CheckResult, 0, 61, v10);
  }
  if ( v10 < 0 )
  {
LABEL_17:
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v11, &MinInput_Warning_CheckResult, 0, 56, v10);
    return 0LL;
  }
  LibraryW = LoadLibraryW(L"HeatCore.dll");
  v14 = LibraryW;
  if ( LibraryW )
  {
    ProcAddress = GetProcAddress(LibraryW, "InitializeHeatFramework");
    v16 = *((_QWORD *)this + 7);
    if ( v16 )
    {
      *((_QWORD *)this + 7) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
    v17 = ((__int64 (__fastcall *)(_QWORD, char *))ProcAddress)(*((_QWORD *)this + 8), (char *)this + 56);
    v19 = v17;
    if ( v17 >= 0 )
    {
      *((_QWORD *)this + 6) = v14;
    }
    else if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      McTemplateU0qqq(v18, &MinInput_Warning_CheckResult, 0, 289, v17);
    }
  }
  else
  {
    LastError = GetLastError();
    v19 = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      v19 = LastError;
    if ( v19 >= 0 )
      goto LABEL_34;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v18, &MinInput_Warning_CheckResult, 0, 296, v19);
  }
  if ( v19 < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v18, &MinInput_Warning_CheckResult, 0, 60, v19);
    return 0LL;
  }
LABEL_34:
  v21 = *((_QWORD *)this + 7);
  v22 = *((_QWORD *)this + 8);
  if ( !v21 )
  {
    v23 = 87;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      return 0LL;
    v24 = 101;
    goto LABEL_40;
  }
  if ( *(_QWORD *)(v22 + 40) )
  {
    v23 = -1;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      return 0LL;
    v24 = 105;
LABEL_40:
    McTemplateU0qqq(v21, &MinInput_Warning_CheckResult, 0, v24, v23);
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v25, &MinInput_Warning_CheckResult, 0, 64, v23);
    return 0LL;
  }
  *(_QWORD *)(v22 + 40) = v21;
  v26 = HeatProcessor::OnDeviceArrival(this, a2);
  if ( v26 < 0 && (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    McTemplateU0qqq(v27, &MinInput_Warning_CheckResult, 0, 66, v26);
  return 0LL;
}
