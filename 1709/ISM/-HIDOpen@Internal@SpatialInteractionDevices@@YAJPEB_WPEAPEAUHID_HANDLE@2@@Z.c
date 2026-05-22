/*
 * XREFs of ?HIDOpen@Internal@SpatialInteractionDevices@@YAJPEB_WPEAPEAUHID_HANDLE@2@@Z @ 0x18007BFEC
 * Callers:
 *     ?RuntimeClassInitialize@SpatialInteractionDevice@@QEAAJPEB_WK@Z @ 0x1800749CC (-RuntimeClassInitialize@SpatialInteractionDevice@@QEAAJPEB_WK@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032A4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180003350 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::_Reallocate_for__lambda_3fa8b2c8193a0f3144fc4b1b8f243931__wchar_t_const_____ptr64_ @ 0x180034298 (std--basic_string_wchar_t_std--char_traits_wchar_t__std--allocator_wchar_t___--_Reallocate_for__.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1800367A8 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18007BCE4 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?HidStatus@SpatialInteractionDevices@@YAJJ@Z @ 0x18007BD0C (-HidStatus@SpatialInteractionDevices@@YAJJ@Z.c)
 *     ??0HID_HANDLE@SpatialInteractionDevices@@QEAA@XZ @ 0x18007C2C0 (--0HID_HANDLE@SpatialInteractionDevices@@QEAA@XZ.c)
 *     ?InitializeValueCaps@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@@Z @ 0x18007C3C8 (-InitializeValueCaps@Internal@SpatialInteractionDevices@@YAJPEAUHID_HANDLE@2@@Z.c)
 *     ?HIDClose@Internal@SpatialInteractionDevices@@YAXPEAUHID_HANDLE@2@@Z @ 0x18007C9FC (-HIDClose@Internal@SpatialInteractionDevices@@YAXPEAUHID_HANDLE@2@@Z.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CB534 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SpatialInteractionDevices::Internal::HIDOpen(
        const WCHAR *this,
        wchar_t *a2,
        struct SpatialInteractionDevices::HID_HANDLE **a3)
{
  signed int v5; // ebx
  SpatialInteractionDevices::HID_HANDLE *v6; // rax
  SpatialInteractionDevices::HID_HANDLE *v7; // rbx
  __int64 v8; // rax
  char v9; // r12
  __int64 v10; // rdx
  HANDLE FileW; // rax
  __int64 v12; // r8
  const char *v13; // r9
  HANDLE v14; // r14
  unsigned __int64 v15; // rbx
  signed int LastError; // eax
  struct SpatialInteractionDevices::HID_HANDLE *v17; // rdx
  SpatialInteractionDevices::Internal *v18; // rdi
  HANDLE v19; // rcx
  signed int v20; // eax
  unsigned __int64 v21; // rcx
  unsigned __int64 *v22; // rcx
  char *v23; // rdi
  size_t v24; // rbx
  signed int v25; // eax
  signed int v26; // eax
  unsigned int Caps; // eax
  int v28; // eax
  struct SpatialInteractionDevices::HID_HANDLE *v29; // rdx
  int v30; // eax
  SpatialInteractionDevices::Internal *v31; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  SpatialInteractionDevices::Internal *v34; // [rsp+A8h] [rbp+48h]

  if ( !a2 )
  {
    v5 = -2147467261;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x88,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\hidparser.cpp",
      (const char *)0x80004003LL);
    return (unsigned int)v5;
  }
  *(_QWORD *)a2 = 0LL;
  v6 = (SpatialInteractionDevices::HID_HANDLE *)operator new(0x158uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( v6 )
  {
    memset(v6, 0, 0x158uLL);
    v8 = SpatialInteractionDevices::HID_HANDLE::HID_HANDLE(v7);
  }
  else
  {
    v8 = 0LL;
  }
  v34 = (SpatialInteractionDevices::Internal *)v8;
  v9 = 1;
  if ( !v8 )
  {
    v5 = -2147024882;
    v10 = 146LL;
LABEL_35:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\hidparser.cpp",
      (const char *)(unsigned int)v5);
LABEL_41:
    v31 = v34;
    goto LABEL_43;
  }
  FileW = CreateFileW(this, 0xC0000000, 3u, 0LL, 3u, 0x40000000u, 0LL);
  v14 = FileW;
  v15 = -1LL;
  if ( FileW == (HANDLE)-1LL )
  {
    LastError = wil::details::in1diag3::Return_GetLastError(
                  retaddr,
                  (void *)0x9D,
                  (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\hidparser.cpp",
                  v13);
LABEL_38:
    v5 = LastError;
    goto LABEL_41;
  }
  v18 = v34;
  v19 = (HANDLE)*((_QWORD *)v34 + 1);
  if ( FileW != v19 )
  {
    if ( v19 != (HANDLE)-1LL )
    {
      if ( !CloseHandle(v19) )
      {
        v20 = GetLastError();
        v21 = (unsigned __int16)v20 | 0x80070000;
        if ( v20 <= 0 )
          v21 = (unsigned int)v20;
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)v21);
        __debugbreak();
      }
      *((_QWORD *)v34 + 1) = -1LL;
    }
    *((_QWORD *)v34 + 1) = v14;
    v18 = v34;
  }
  v22 = (unsigned __int64 *)((char *)v18 + 16);
  do
    ++v15;
  while ( this[v15] );
  if ( v15 > *((_QWORD *)v18 + 5) )
  {
    std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::_Reallocate_for__lambda_3fa8b2c8193a0f3144fc4b1b8f243931__wchar_t_const_____ptr64_(
      v22,
      v15,
      v12,
      this);
  }
  else
  {
    v23 = (char *)v18 + 16;
    if ( v22[3] >= 8 )
      v23 = (char *)*v22;
    v22[2] = v15;
    v24 = 2 * v15;
    memmove(v23, this, v24);
    *(_WORD *)&v23[v24] = 0;
  }
  memset((char *)v34 + 48, 0, 0x20uLL);
  *((_QWORD *)v34 + 9) = CreateEventW(0LL, 0, 0, 0LL);
  if ( !HidD_GetAttributes(*((HANDLE *)v34 + 1), (PHIDD_ATTRIBUTES)v34 + 7) )
  {
    v25 = GetLastError();
    v5 = (unsigned __int16)v25 | 0x80070000;
    if ( v25 <= 0 )
      v5 = v25;
    if ( v5 >= 0 )
      goto LABEL_41;
    v10 = 166LL;
    goto LABEL_35;
  }
  if ( !HidD_GetPreparsedData(*((HANDLE *)v34 + 1), (PHIDP_PREPARSED_DATA *)v34 + 12) )
  {
    v26 = GetLastError();
    v5 = (unsigned __int16)v26 | 0x80070000;
    if ( v26 <= 0 )
      v5 = v26;
    if ( v5 >= 0 )
      goto LABEL_41;
    v10 = 168LL;
    goto LABEL_35;
  }
  Caps = HidP_GetCaps(*((PHIDP_PREPARSED_DATA *)v34 + 12), (PHIDP_CAPS)((char *)v34 + 104));
  v28 = SpatialInteractionDevices::HidStatus((SpatialInteractionDevices *)Caps);
  if ( v28 < 0 )
  {
    LastError = wil::details::in1diag3::Return_NtStatus(
                  retaddr,
                  (void *)0xAA,
                  (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\hidparser.cpp",
                  (const char *)(unsigned int)v28);
    goto LABEL_38;
  }
  v30 = SpatialInteractionDevices::Internal::InitializeValueCaps(v34, v29);
  v5 = v30;
  if ( v30 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xAC,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\hidparser.cpp",
      (const char *)(unsigned int)v30);
    goto LABEL_41;
  }
  v31 = v34;
  *(_QWORD *)a2 = v34;
  v9 = 0;
  v5 = 0;
LABEL_43:
  if ( v9 )
    SpatialInteractionDevices::Internal::HIDClose(v31, v17);
  return (unsigned int)v5;
}
