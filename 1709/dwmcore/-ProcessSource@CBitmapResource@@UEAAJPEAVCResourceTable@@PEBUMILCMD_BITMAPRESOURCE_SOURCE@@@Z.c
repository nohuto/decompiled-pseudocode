/*
 * XREFs of ?ProcessSource@CBitmapResource@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BITMAPRESOURCE_SOURCE@@@Z @ 0x18008D690
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x180001680 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x18000A5D4 (-HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x18000B600 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z @ 0x180086E7C (-HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapResource::ProcessSource(
        CBitmapResource *this,
        struct CResourceTable *a2,
        const struct MILCMD_BITMAPRESOURCE_SOURCE *a3)
{
  struct IBitmapSource **v3; // rdi
  unsigned int v6; // ebx
  int (__fastcall ***v7)(_QWORD, GUID *, struct IBitmapSource **); // rcx
  signed int BitmapFromWICBitmapSource; // eax
  signed int v9; // eax
  __int64 v10; // rcx
  signed int BitmapFromMemory; // eax
  signed int v13; // eax
  struct IUnknown *v14; // [rsp+30h] [rbp-28h]
  _DWORD v15[6]; // [rsp+40h] [rbp-18h] BYREF

  v3 = (struct IBitmapSource **)((char *)this + 80);
  v6 = 0;
  ReleaseInterface<IBitmapLock>((__int64 *)this + 10);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)this + 11);
  v7 = (int (__fastcall ***)(_QWORD, GUID *, struct IBitmapSource **))*((_QWORD *)a3 + 1);
  if ( v7 )
  {
    if ( (**v7)(v7, &GUID_d82bbf04_48b7_4100_86b5_a6e5bb0e3213, v3) < 0 )
    {
      BitmapFromWICBitmapSource = HrCreateBitmapFromWICBitmapSource(*((struct IWICBitmapSource **)a3 + 1), v3);
      v6 = BitmapFromWICBitmapSource;
      if ( BitmapFromWICBitmapSource < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, BitmapFromWICBitmapSource, 0x73u);
      }
      else
      {
        v9 = (*(__int64 (__fastcall **)(struct IBitmapSource *, char *, char *))(*(_QWORD *)*v3 + 32LL))(
               *v3,
               (char *)this + 72,
               (char *)this + 76);
        v6 = v9;
        if ( v9 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x75u);
      }
    }
  }
  else
  {
    v15[2] = 0;
    v15[0] = 87;
    v15[1] = 1;
    BitmapFromMemory = HrCreateBitmapFromMemoryEx(
                         1u,
                         1u,
                         (const struct PixelFormatInfo *)v15,
                         4u,
                         4u,
                         &byte_180272A64,
                         v14,
                         v3);
    v6 = BitmapFromMemory;
    if ( BitmapFromMemory < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, BitmapFromMemory, 0x8Bu);
    }
    else
    {
      v13 = (*(__int64 (__fastcall **)(struct IBitmapSource *, char *, char *))(*(_QWORD *)*v3 + 32LL))(
              *v3,
              (char *)this + 72,
              (char *)this + 76);
      v6 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, 0x8Du);
    }
  }
  v10 = *((_QWORD *)a3 + 1);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  (*(void (__fastcall **)(char *, _QWORD, _QWORD))(*((_QWORD *)this + 2) + 64LL))((char *)this + 16, 0LL, 0LL);
  return v6;
}
