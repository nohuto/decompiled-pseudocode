/*
 * XREFs of ?MapSectionBitmap@CaptureBitsResponse@@IEAAJXZ @ 0x18007FB70
 * Callers:
 *     ?OnPresentComplete@CaptureBitsResponse@@UEAAJXZ @ 0x18007FD40 (-OnPresentComplete@CaptureBitsResponse@@UEAAJXZ.c)
 *     ?OnPresentComplete@VisualCaptureBitsResponse@@UEAAJXZ @ 0x18013B980 (-OnPresentComplete@VisualCaptureBitsResponse@@UEAAJXZ.c)
 * Callees:
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x18000A5D4 (-HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterfaceNoNULL@UID2D1Bitmap1@@@@YAXPEAUID2D1Bitmap1@@@Z @ 0x1800823A0 (--$ReleaseInterfaceNoNULL@UID2D1Bitmap1@@@@YAXPEAUID2D1Bitmap1@@@Z.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CaptureBitsResponse::MapSectionBitmap(CaptureBitsResponse *this)
{
  struct IBitmapSource *v2; // rdi
  void *v3; // rax
  signed int v4; // eax
  signed int v5; // ebx
  int v6; // eax
  signed int LastError; // eax
  DWORD v9; // r9d
  unsigned int dwNumberOfBytesToMap; // [rsp+20h] [rbp-28h]
  struct IUnknown *v11; // [rsp+30h] [rbp-18h]
  struct IBitmapSource *v12; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0LL;
  v12 = 0LL;
  SetLastError(0);
  v3 = MapViewOfFile(*((HANDLE *)this + 14), 2u, 0, 0, *((unsigned int *)this + 32));
  *((_QWORD *)this + 15) = v3;
  if ( !v3 )
  {
    LastError = GetLastError();
    v5 = LastError;
    if ( LastError > 0 )
      v5 = (unsigned __int16)LastError | 0x80070000;
    dwNumberOfBytesToMap = 342;
    if ( v5 >= 0 )
      v5 = -2003304445;
    v9 = v5;
    goto LABEL_11;
  }
  memset_0(v3, 0, *((unsigned int *)this + 32));
  v4 = HrCreateBitmapFromMemoryEx(
         *((_DWORD *)this + 22),
         *((_DWORD *)this + 23),
         (CaptureBitsResponse *)((char *)this + 100),
         *((_DWORD *)this + 33),
         *((_DWORD *)this + 32),
         *((unsigned __int8 **)this + 15),
         v11,
         &v12);
  v5 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, 0x166u);
    v2 = v12;
    goto LABEL_4;
  }
  v2 = v12;
  v6 = (**(__int64 (__fastcall ***)(struct IBitmapSource *, GUID *, char *))v12)(
         v12,
         &GUID_14d094dc_1246_4784_b811_74305a3ecec8,
         (char *)this + 136);
  v5 = v6;
  if ( v6 < 0 )
  {
    dwNumberOfBytesToMap = 364;
    v9 = v6;
LABEL_11:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, dwNumberOfBytesToMap);
  }
LABEL_4:
  ReleaseInterfaceNoNULL<ID2D1Bitmap1>(v2);
  return (unsigned int)v5;
}
