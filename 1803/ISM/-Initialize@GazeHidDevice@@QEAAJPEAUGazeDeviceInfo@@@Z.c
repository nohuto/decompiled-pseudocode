/*
 * XREFs of ?Initialize@GazeHidDevice@@QEAAJPEAUGazeDeviceInfo@@@Z @ 0x180075AF4
 * Callers:
 *     ?OnDeviceAttach@GazeDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180073FD0 (-OnDeviceAttach@GazeDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180017A2C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180075ACC (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?TryUpdateDisplayMapping@GazeHidDevice@@QEAAJXZ @ 0x180075F54 (-TryUpdateDisplayMapping@GazeHidDevice@@QEAAJXZ.c)
 *     ?TrySetTrackingEnabled@GazeHidDevice@@QEAAJ_N@Z @ 0x180076180 (-TrySetTrackingEnabled@GazeHidDevice@@QEAAJ_N@Z.c)
 *     ?TryUpdateCalibrationState@GazeHidDevice@@QEAAJXZ @ 0x18007635C (-TryUpdateCalibrationState@GazeHidDevice@@QEAAJXZ.c)
 *     ?Initialize@GazeHidParser@@QEAAJPEAU_HIDP_PREPARSED_DATA@@@Z @ 0x1800AE65C (-Initialize@GazeHidParser@@QEAAJPEAU_HIDP_PREPARSED_DATA@@@Z.c)
 *     ?IsPropertySupported@GazeHidParser@@QEAA_NW4GazeProperty@@@Z @ 0x1800AE8B0 (-IsPropertySupported@GazeHidParser@@QEAA_NW4GazeProperty@@@Z.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E212C (--_U@YAPEAX_K@Z.c)
 *     memcpy_0 @ 0x1800E3217 (memcpy_0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GazeHidDevice::Initialize(GazeHidDevice *this, struct GazeDeviceInfo *a2)
{
  char *v4; // rbp
  int v5; // eax
  unsigned int v6; // esi
  NTSTATUS Caps; // eax
  int v9; // r11d
  void *v10; // rdi
  const char *v11; // r9
  size_t v12; // rsi
  void *v13; // rax
  void *v14; // rcx
  void **v15; // rsi
  int updated; // eax
  int v17; // eax
  int v18; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *((_QWORD *)this + 4) = a2;
  v4 = (char *)this + 128;
  v5 = GazeHidParser::Initialize((PHIDP_CAPS)this + 2, *((PHIDP_PREPARSED_DATA *)this + 6));
  v6 = v5;
  if ( v5 >= 0 )
  {
    Caps = HidP_GetCaps(*((PHIDP_PREPARSED_DATA *)this + 6), (PHIDP_CAPS)((char *)this + 60));
    if ( Caps >= 0 )
    {
      *((_DWORD *)a2 + 251) = 0;
      if ( (unsigned __int8)GazeHidParser::IsPropertySupported(v4, 6LL) )
        *((_DWORD *)a2 + 251) = 1;
      if ( (unsigned __int8)GazeHidParser::IsPropertySupported(v4, 10LL) )
        *((_DWORD *)a2 + 251) = v9 | 2;
      *((_DWORD *)a2 + 255) = *((_DWORD *)this + 14);
      memcpy_0((char *)a2 + 1024, *((const void **)this + 6), *((unsigned int *)this + 14));
      *((_DWORD *)this + 58) = *((unsigned __int16 *)this + 32) + 96;
      v10 = operator new(8uLL);
      v12 = *((unsigned int *)this + 58);
      *(_QWORD *)v10 = 0LL;
      if ( v12 < 0x60 )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x1D6,
          (__int64)"internal\\onecoreuapwindows\\inc\\moderncore\\RawInput\\rawinput.h",
          v11);
        __debugbreak();
      }
      v13 = operator new[]((unsigned int)v12);
      v14 = *(void **)v10;
      *(_QWORD *)v10 = v13;
      if ( v14 )
      {
        operator delete(v14);
        v13 = *(void **)v10;
      }
      memset_0(v13, 0, v12);
      *(_DWORD *)(*(_QWORD *)v10 + 24LL) = v12;
      v15 = (void **)*((_QWORD *)this + 28);
      *((_QWORD *)this + 28) = v10;
      if ( v15 )
      {
        if ( *v15 )
          operator delete(*v15);
        operator delete(v15);
      }
      updated = GazeHidDevice::TryUpdateDisplayMapping(this);
      if ( updated < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x36,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazehiddevice.cpp",
          (const char *)(unsigned int)updated);
      v17 = GazeHidDevice::TryUpdateCalibrationState(this);
      if ( v17 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x37,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazehiddevice.cpp",
          (const char *)(unsigned int)v17);
      v18 = GazeHidDevice::TrySetTrackingEnabled(this, 1);
      if ( v18 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x38,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazehiddevice.cpp",
          (const char *)(unsigned int)v18);
      return 0LL;
    }
    else
    {
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)0x1C,
               (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazehiddevice.cpp",
               (const char *)(unsigned int)Caps);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x19,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazehiddevice.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
}
