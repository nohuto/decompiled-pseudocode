/*
 * XREFs of ?ReadHidReport@SpatialInteractionDevice@@UEAAJPEAUInputReport@SpatialInteractionDevices@@PEAE@Z @ 0x180074C30
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032A4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x180028C80 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18004CAF4 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     _lambda_ac879a184350821f45c5795b09041ac5_::operator() @ 0x180074E2C (_lambda_ac879a184350821f45c5795b09041ac5_--operator().c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@QEB_W@Z @ 0x18007595C (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@QEB_W@Z.c)
 *     Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialInteractionSnapshot__lambda_13d25de601502b3f3668de287f572ce2___ @ 0x180075A10 (Windows--Internal--Holographic--HolographicDeviceSnapshot--Write_Windows--Internal--Holographic-.c)
 *     ?ParseInputReport@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEAUInputReport@1@@Z @ 0x1800784C8 (-ParseInputReport@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@1@PEAUHID_REPORT@1@PEAUInputRepor.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

__int64 __fastcall SpatialInteractionDevice::ReadHidReport(
        SpatialInteractionDevice *this,
        struct SpatialInteractionDevices::InputReport *a2,
        unsigned __int8 *a3)
{
  __int64 v4; // rcx
  __int128 v5; // xmm0
  bool v6; // zf
  struct SpatialInteractionDevices::InputReport *v7; // r9
  SpatialInteractionDevice *v8; // rcx
  __int64 v9; // rdx
  unsigned int v10; // ebx
  unsigned __int8 *v11; // r8
  unsigned int v12; // eax
  DWORD LastError; // eax
  WCHAR *StringRawBuffer; // rax
  DWORD NumberOfBytesRead; // [rsp+30h] [rbp-39h] BYREF
  __int128 v17; // [rsp+38h] [rbp-31h] BYREF
  DWORD **p_p_NumberOfBytesRead; // [rsp+48h] [rbp-21h]
  unsigned __int8 *v19; // [rsp+50h] [rbp-19h] BYREF
  struct SpatialInteractionDevices::InputReport *v20; // [rsp+58h] [rbp-11h] BYREF
  DWORD *p_NumberOfBytesRead; // [rsp+60h] [rbp-9h] BYREF
  SpatialInteractionDevice *v22; // [rsp+68h] [rbp-1h]
  unsigned __int8 **v23; // [rsp+70h] [rbp+7h]
  struct SpatialInteractionDevices::HID_REPORT **v24; // [rsp+78h] [rbp+Fh]
  __int128 v25; // [rsp+80h] [rbp+17h] BYREF
  char v26; // [rsp+90h] [rbp+27h]
  unsigned __int64 v27[4]; // [rsp+98h] [rbp+2Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v20 = a2;
  v19 = a3;
  memset(a2, 0, 0x68uLL);
  if ( v19 )
    *v19 = 0;
  v4 = *((_QWORD *)this + 11);
  NumberOfBytesRead = 0;
  *((_QWORD *)&v17 + 1) = v20;
  p_NumberOfBytesRead = &NumberOfBytesRead;
  v23 = &v19;
  v24 = &v20;
  *(_QWORD *)&v17 = this;
  v5 = v17;
  *((_QWORD *)&v17 + 1) = &NumberOfBytesRead;
  v26 = 1;
  v25 = v5;
  v22 = this;
  v6 = *(_BYTE *)(v4 + 80) == 0;
  p_p_NumberOfBytesRead = &p_NumberOfBytesRead;
  *(_QWORD *)&v17 = this;
  if ( !v6 )
    goto LABEL_12;
  if ( ReadFile(
         *(HANDLE *)(v4 + 8),
         *(LPVOID *)(v4 + 256),
         *(unsigned __int16 *)(v4 + 108),
         &NumberOfBytesRead,
         (LPOVERLAPPED)(v4 + 48)) )
  {
    v8 = v22;
    v9 = *((_QWORD *)v22 + 11);
    if ( *p_NumberOfBytesRead != *(unsigned __int16 *)(v9 + 108) )
    {
      v10 = -2147418113;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x14E,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractiondevice.cpp",
        (const char *)0x8000FFFFLL);
      goto LABEL_19;
    }
    LODWORD(v17) = *(unsigned __int16 *)(v9 + 108);
    v11 = *(unsigned __int8 **)(v9 + 256);
    *((_QWORD *)&v17 + 1) = v11;
    if ( *v23 )
    {
      **v23 = *v11;
      v8 = v22;
    }
    v12 = SpatialInteractionDevices::ParseInputReport(
            *((SpatialInteractionDevices **)v8 + 11),
            (struct SpatialInteractionDevices::HID_HANDLE *)&v17,
            *v24,
            v7);
    goto LABEL_17;
  }
  LastError = GetLastError();
  if ( LastError == 997 )
  {
    *(_BYTE *)(*((_QWORD *)this + 11) + 80LL) = 1;
    v4 = *((_QWORD *)this + 11);
LABEL_12:
    if ( WaitForSingleObject(*(HANDLE *)(v4 + 72), 0) )
    {
      v10 = -2147483638;
      goto LABEL_19;
    }
    v12 = lambda_ac879a184350821f45c5795b09041ac5_::operator()(&v17);
    goto LABEL_17;
  }
  if ( LastError )
  {
    v12 = wil::details::in1diag3::Return_Win32(
            retaddr,
            (void *)0x17F,
            (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractiondevice.cpp",
            (const char *)LastError);
LABEL_17:
    v10 = v12;
    goto LABEL_19;
  }
  v10 = 0;
LABEL_19:
  if ( v26 )
  {
    v26 = 0;
    StringRawBuffer = (WCHAR *)WindowsGetStringRawBuffer(*(HSTRING *)(v25 + 80), 0LL);
    std::wstring::wstring(v27, StringRawBuffer);
    *(_QWORD *)&v17 = (char *)&v25 + 8;
    Windows::Internal::Holographic::HolographicDeviceSnapshot::Write_Windows::Internal::Holographic::SpatialInteractionSnapshot__lambda_13d25de601502b3f3668de287f572ce2___(
      v27,
      &v17);
    std::wstring::_Tidy_deallocate(v27);
  }
  return v10;
}
