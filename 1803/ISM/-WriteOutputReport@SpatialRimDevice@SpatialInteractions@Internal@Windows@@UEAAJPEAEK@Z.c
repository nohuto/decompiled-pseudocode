/*
 * XREFs of ?WriteOutputReport@SpatialRimDevice@SpatialInteractions@Internal@Windows@@UEAAJPEAEK@Z @ 0x180075970
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800030E0 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18005D838 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialRimDevice::WriteOutputReport(
        HSTRING *this,
        unsigned __int8 *a2,
        DWORD a3)
{
  unsigned int LastError; // ebx
  __int64 v7; // rdi
  const WCHAR *StringRawBuffer; // rax
  HANDLE FileW; // rax
  const char *v10; // r9
  __int64 v11; // rdx
  signed int v12; // eax
  unsigned __int64 v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  DWORD NumberOfBytesWritten; // [rsp+60h] [rbp+18h] BYREF

  if ( !a3 )
  {
    LastError = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x75,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevice.cpp",
      (const char *)0x80070057LL);
    return LastError;
  }
  v7 = -1LL;
  StringRawBuffer = WindowsGetStringRawBuffer(this[8], 0LL);
  FileW = CreateFileW(StringRawBuffer, 0xC0000000, 3u, 0LL, 3u, 0, 0LL);
  if ( FileW == (HANDLE)-1LL )
  {
    v11 = 120LL;
    goto LABEL_11;
  }
  v7 = (__int64)FileW;
  if ( !WriteFile(FileW, a2, a3, &NumberOfBytesWritten, 0LL) )
  {
    v11 = 122LL;
LABEL_11:
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)v11,
                  (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevice.cpp",
                  v10);
    goto LABEL_12;
  }
  if ( NumberOfBytesWritten == a3 )
  {
    LastError = 0;
  }
  else
  {
    LastError = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7B,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevice.cpp",
      (const char *)0x8000FFFFLL);
  }
LABEL_12:
  if ( v7 != -1 && !CloseHandle((HANDLE)v7) )
  {
    v12 = GetLastError();
    v13 = (unsigned __int16)v12 | 0x80070000;
    if ( v12 <= 0 )
      v13 = (unsigned int)v12;
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)v13);
    JUMPOUT(0x180075A91LL);
  }
  return LastError;
}
