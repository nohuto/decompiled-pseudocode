/*
 * XREFs of ?ReadFeatureReport@SpatialRimDevice@SpatialInteractions@Internal@Windows@@UEAAJEPEAEK@Z @ 0x180075890
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@RawInputProvidersTracing@@KAPEAV1@XZ @ 0x18006E5E4 (-Instance@RawInputProvidersTracing@@KAPEAV1@XZ.c)
 *     ?ReadFeatureReport_@RawInputProvidersTracing@@QEAAXJKE@Z @ 0x1800754DC (-ReadFeatureReport_@RawInputProvidersTracing@@QEAAXJKE@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180075ACC (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialRimDevice::ReadFeatureReport(
        Windows::Internal::SpatialInteractions::SpatialRimDevice *this,
        char a2,
        char *a3,
        int a4)
{
  unsigned int v6; // ebx
  int v7; // eax
  _DWORD *v8; // rcx
  RawInputProvidersTracing *v9; // rcx
  int v11; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v13; // [rsp+78h] [rbp+20h] BYREF

  if ( a4 )
  {
    v13 = 0;
    *a3 = a2;
    v7 = RIMDeviceIoControl(*((_QWORD *)this + 19), *((_QWORD *)this + 21), 721298LL, 0LL, 0, a3, a4, &v13, 0);
    if ( v7 >= 0 )
      v6 = 0;
    else
      v6 = wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)0x6B,
             (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevice.cpp",
             (const char *)(unsigned int)v7,
             v11);
    v8 = (_DWORD *)*((_QWORD *)RawInputProvidersTracing::Instance() + 1);
    if ( v8 && *v8 )
    {
      RawInputProvidersTracing::Instance();
      RawInputProvidersTracing::ReadFeatureReport_(v9, v6, *((_DWORD *)this + 12), a2);
    }
  }
  else
  {
    v6 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevice.cpp",
      (const char *)0x80070057LL);
  }
  return v6;
}
