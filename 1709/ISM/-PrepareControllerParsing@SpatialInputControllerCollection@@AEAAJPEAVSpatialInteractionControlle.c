/*
 * XREFs of ?PrepareControllerParsing@SpatialInputControllerCollection@@AEAAJPEAVSpatialInteractionController@SpatialInteractionDevices@@PEAVHIDDevice@@@Z @ 0x180092060
 * Callers:
 *     ?DoDeviceAttach@SpatialInputControllerCollection@@IEAAJKPEAUDeviceInfo@@@Z @ 0x180092FFC (-DoDeviceAttach@SpatialInputControllerCollection@@IEAAJKPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800032A4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003320 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18007BCE4 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z @ 0x18009CFDC (-GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z.c)
 *     ?BeginPrepareParsing@SpatialInteractionController@SpatialInteractionDevices@@QEAAJQEAU_HIDP_CAPS@@PEAU_HIDP_PREPARSED_DATA@@GGGPEAUHSTRING__@@@Z @ 0x1800C440C (-BeginPrepareParsing@SpatialInteractionController@SpatialInteractionDevices@@QEAAJQEAU_HIDP_CAPS.c)
 *     memset @ 0x1800CAA5E (memset.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CB5C4 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall SpatialInputControllerCollection::PrepareControllerParsing(
        SpatialInputControllerCollection *this,
        struct SpatialInteractionDevices::SpatialInteractionController *a2,
        struct _HIDP_PREPARSED_DATA **a3)
{
  struct _HIDP_CAPS *v6; // rsi
  int HIDCapabilities; // eax
  int v8; // ebx
  struct _HIDP_PREPARSED_DATA *v10; // r13
  int v11; // ebx
  struct _HIDP_PREPARSED_DATA *v12; // r15
  __int64 v13; // r14
  int v14; // eax
  int v15; // edi
  int v16; // edi
  unsigned __int64 v17; // rax
  WCHAR *v18; // rax
  WCHAR *v19; // rbx
  int v20; // eax
  int v21; // eax
  _QWORD v22[5]; // [rsp+40h] [rbp-29h] BYREF
  unsigned __int16 v23[44]; // [rsp+68h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  HSTRING string; // [rsp+E0h] [rbp+77h] BYREF
  struct _HIDP_CAPS *v26; // [rsp+E8h] [rbp+7Fh] BYREF

  memset(v23, 0, 0x28uLL);
  v6 = (struct _HIDP_CAPS *)((char *)a3 + 60);
  v26 = 0LL;
  if ( *((_WORD *)a3 + 30) )
  {
    v8 = 0;
  }
  else
  {
    HIDCapabilities = HIDDevice::GetHIDCapabilities((HIDDevice *)a3, &v26);
    v6 = v26;
    v8 = HIDCapabilities;
  }
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x31C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
      (const char *)(unsigned int)v8);
    return (unsigned int)v8;
  }
  v10 = a3[6];
  v11 = RIMGetDeviceProperties(*((_QWORD *)this + 10), a3[2], v23);
  if ( (v11 & 0xC0000000) == 0xC0000000 )
  {
    v8 = v11 | 0x10000000;
    if ( v8 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x320,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
        (const char *)(unsigned int)v8);
    return (unsigned int)v8;
  }
  string = 0LL;
  WindowsDeleteString(0LL);
  v12 = a3[2];
  v13 = *((_QWORD *)this + 10);
  string = 0LL;
  memset((char *)v22 + 4, 0, 0x24uLL);
  LODWORD(v22[0]) = 4;
  v14 = RIMGetDeviceProperties(v13, v12, v22);
  if ( v14 >= 0 )
  {
    v16 = v22[1];
    v17 = 2LL * LODWORD(v22[1]);
    if ( !is_mul_ok(LODWORD(v22[1]), 2uLL) )
      v17 = -1LL;
    v18 = (WCHAR *)operator new[](v17, (const struct std::nothrow_t *)&std::nothrow);
    v19 = v18;
    if ( !v18 )
    {
      v15 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6E,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
        (const char *)0x8007000ELL);
      goto LABEL_21;
    }
    v22[2] = v18;
    v20 = RIMGetDeviceProperties(v13, v12, v22);
    if ( v20 >= 0 )
      v21 = WindowsCreateString(v19, v16 - 1, &string);
    else
      v21 = wil::details::in1diag3::Return_NtStatus(
              retaddr,
              (void *)0x71,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
              (const char *)(unsigned int)v20);
    v15 = v21;
    operator delete(v19);
  }
  else
  {
    v15 = wil::details::in1diag3::Return_NtStatus(
            retaddr,
            (void *)0x69,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
            (const char *)(unsigned int)v14);
  }
  if ( v15 >= 0 )
  {
    v15 = SpatialInteractionDevices::SpatialInteractionController::BeginPrepareParsing(
            a2,
            v6,
            v10,
            v23[10],
            v23[11],
            v23[12],
            string);
    goto LABEL_23;
  }
LABEL_21:
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x323,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
    (const char *)(unsigned int)v15);
LABEL_23:
  WindowsDeleteString(string);
  return (unsigned int)v15;
}
