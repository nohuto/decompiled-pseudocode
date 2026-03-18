/*
 * XREFs of ?MapSectionBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x18001E56C
 * Callers:
 *     ?OnPresentComplete@CaptureBitsResponse@@UEAAJXZ @ 0x18001E3A0 (-OnPresentComplete@CaptureBitsResponse@@UEAAJXZ.c)
 *     ?OnPresentComplete@VisualCaptureBitsResponse@@UEAAJXZ @ 0x18015DEB0 (-OnPresentComplete@VisualCaptureBitsResponse@@UEAAJXZ.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VIBitmapSource@@@@YAXPEAVIBitmapSource@@@Z @ 0x18001DE20 (--$ReleaseInterfaceNoNULL@VIBitmapSource@@@@YAXPEAVIBitmapSource@@@Z.c)
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x180020A04 (-HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CaptureBitsResponse::MapSectionBitmap(CaptureBitsResponse *this)
{
  struct IBitmapSource *v2; // rdi
  void *v3; // rax
  int v4; // eax
  signed int v5; // ebx
  int v6; // eax
  signed int LastError; // eax
  struct IUnknown *v9; // [rsp+30h] [rbp-18h]
  struct IBitmapSource *v10; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0LL;
  v10 = 0LL;
  SetLastError(0);
  v3 = MapViewOfFile(*((HANDLE *)this + 14), 2u, 0, 0, *((unsigned int *)this + 32));
  *((_QWORD *)this + 15) = v3;
  if ( v3 )
  {
    memset_0(v3, 0, *((unsigned int *)this + 32));
    v4 = HrCreateBitmapFromMemoryEx(
           *((_DWORD *)this + 22),
           *((_DWORD *)this + 23),
           (CaptureBitsResponse *)((char *)this + 100),
           *((_DWORD *)this + 33),
           *((_DWORD *)this + 32),
           *((unsigned __int8 **)this + 15),
           v9,
           &v10);
    v5 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x164u);
      v2 = v10;
    }
    else
    {
      v2 = v10;
      v6 = (**(__int64 (__fastcall ***)(struct IBitmapSource *, GUID *, char *))v10)(
             v10,
             &GUID_14d094dc_1246_4784_b811_74305a3ecec8,
             (char *)this + 136);
      v5 = v6;
      if ( v6 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x16Au);
    }
  }
  else
  {
    LastError = GetLastError();
    v5 = LastError;
    if ( LastError > 0 )
      v5 = (unsigned __int16)LastError | 0x80070000;
    if ( v5 >= 0 )
      v5 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x154u);
  }
  ReleaseInterfaceNoNULL<IBitmapSource>((__int64)v2);
  return (unsigned int)v5;
}
