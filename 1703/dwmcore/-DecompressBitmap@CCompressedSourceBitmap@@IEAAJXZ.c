/*
 * XREFs of ?DecompressBitmap@CCompressedSourceBitmap@@IEAAJXZ @ 0x1801AA78C
 * Callers:
 *     ?EnsureUncompressedBitmap@CCompressedSourceBitmap@@IEAAJXZ @ 0x1801AA958 (-EnsureUncompressedBitmap@CCompressedSourceBitmap@@IEAAJXZ.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z @ 0x180001C80 (--$ReleaseInterfaceNoNULL@UID2D1Ink@@@@YAXPEAUID2D1Ink@@@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z @ 0x1800C6190 (-HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureWICBitmapFrame@CCompressedSourceBitmap@@IEAAJXZ @ 0x1801AA994 (-EnsureWICBitmapFrame@CCompressedSourceBitmap@@IEAAJXZ.c)
 */

__int64 __fastcall CCompressedSourceBitmap::DecompressBitmap(CCompressedSourceBitmap *this)
{
  struct IBitmapSource *v1; // rsi
  int v3; // eax
  unsigned int v4; // ebx
  GUID *v5; // r8
  int v6; // eax
  unsigned int v8; // [rsp+20h] [rbp-20h]
  struct IWICBitmapSource *v9; // [rsp+68h] [rbp+28h] BYREF
  __int64 v10; // [rsp+70h] [rbp+30h] BYREF
  struct IBitmapSource *v11; // [rsp+78h] [rbp+38h] BYREF

  v9 = 0LL;
  v1 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v3 = CCompressedSourceBitmap::EnsureWICBitmapFrame(this);
  v4 = v3;
  if ( v3 < 0 )
  {
    v8 = 311;
    goto LABEL_18;
  }
  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 34) + 80LL))(*((_QWORD *)this + 34), &v10);
  v4 = v3;
  if ( v3 < 0 )
  {
    v8 = 314;
    goto LABEL_18;
  }
  v5 = &GUID_WICPixelFormat8bppGray;
  if ( *((_DWORD *)this + 46) != 61 )
    v5 = &GUID_WICPixelFormat32bppPBGRA;
  v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD *)v10 + 64LL))(
         v10,
         *((_QWORD *)this + 30),
         v5,
         0LL,
         0LL,
         0LL,
         0);
  v4 = v3;
  if ( v3 < 0 )
  {
    v8 = 325;
    goto LABEL_18;
  }
  v3 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, struct IWICBitmapSource **))(**((_QWORD **)this + 34) + 144LL))(
         *((_QWORD *)this + 34),
         v10,
         2LL,
         &v9);
  v4 = v3;
  if ( v3 < 0 )
  {
    v8 = 329;
    goto LABEL_18;
  }
  if ( !v9 )
  {
    v4 = -2147024890;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024890, 0x14Au);
    goto LABEL_19;
  }
  v3 = ((__int64 (*)(void))v9->lpVtbl[1].Release)();
  v4 = v3;
  if ( v3 < 0 )
  {
    v8 = 332;
LABEL_18:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, v8);
    goto LABEL_19;
  }
  v6 = HrCreateBitmapFromWICBitmapSource(v9, &v11);
  v4 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x151u);
    v1 = v11;
  }
  else
  {
    *((_QWORD *)this + 31) = v11;
  }
LABEL_19:
  ReleaseInterfaceNoNULL<ID2D1Ink>((__int64)v1);
  ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v9);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  return v4;
}
