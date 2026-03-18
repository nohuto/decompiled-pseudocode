/*
 * XREFs of ?CreateSectionBitmap@CGdiSpriteBitmap@@IEAAJPEAXII@Z @ 0x180094624
 * Callers:
 *     ?CreateBitmap@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z @ 0x180094860 (-CreateBitmap@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000DD00 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ReleaseBitmapResources@CGdiSpriteBitmap@@IEAAXXZ @ 0x180094A30 (-ReleaseBitmapResources@CGdiSpriteBitmap@@IEAAXXZ.c)
 *     ?CreateFromGDISection@CSectionBitmapRealization@@SAJPEAXIIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAVCBitmapRealization@@@Z @ 0x1800C55F4 (-CreateFromGDISection@CSectionBitmapRealization@@SAJPEAXIIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEA.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?Create@CColorKeyBitmapRealization@@SAJPEAVIBitmapRealization@@AEBVCColorKey@@PEAPEAV2@@Z @ 0x1802135FC (-Create@CColorKeyBitmapRealization@@SAJPEAVIBitmapRealization@@AEBVCColorKey@@PEAPEAV2@@Z.c)
 */

__int64 __fastcall CGdiSpriteBitmap::CreateSectionBitmap(HANDLE *this, void *a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // ebx
  struct CBitmapRealization *v6; // rdi
  unsigned int v10; // r15d
  unsigned __int64 v11; // rax
  HANDLE CurrentProcess; // rbx
  HANDLE v13; // rax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  char *v17; // rax
  signed int LastError; // eax
  struct IBitmapRealization *v20; // rcx
  int v21; // eax
  struct IBitmapRealization *v22; // r14
  int v23; // eax
  int v24; // eax
  enum DXGI_FORMAT v25; // [rsp+20h] [rbp-30h]
  struct CBitmapRealization *v26; // [rsp+40h] [rbp-10h] BYREF
  struct IBitmapRealization *v27; // [rsp+48h] [rbp-8h] BYREF
  __int64 v28; // [rsp+88h] [rbp+38h] BYREF

  v4 = 0;
  v27 = 0LL;
  v6 = 0LL;
  v26 = 0LL;
  v10 = 0;
  CGdiSpriteBitmap::ReleaseBitmapResources((CGdiSpriteBitmap *)this);
  if ( !a3 || !a4 )
  {
    this[38] = a2;
    goto LABEL_13;
  }
  v11 = 4LL * a3;
  v10 = -1;
  if ( v11 <= 0xFFFFFFFF )
    v10 = 4 * a3;
  v4 = v11 > 0xFFFFFFFF ? 0x80070216 : 0;
  if ( v11 > 0xFFFFFFFF )
  {
    v25 = DXGI_FORMAT_V408|DXGI_FORMAT_R32G8X24_TYPELESS|0x100;
LABEL_25:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, v25);
    goto LABEL_17;
  }
  SetLastError(0);
  CurrentProcess = GetCurrentProcess();
  v13 = GetCurrentProcess();
  if ( !DuplicateHandle(v13, a2, CurrentProcess, this + 38, 0, 0, 2u) )
  {
    LastError = GetLastError();
    v4 = LastError;
    if ( LastError > 0 )
      v4 = (unsigned __int16)LastError | 0x80070000;
    v25 = 417;
    if ( (v4 & 0x80000000) == 0 )
      v4 = -2003304445;
    goto LABEL_25;
  }
  v14 = CSectionBitmapRealization::CreateFromGDISection(
          a2,
          a3,
          a4,
          v10,
          (enum DXGI_FORMAT)*((_DWORD *)this + 22),
          (enum DXGI_ALPHA_MODE)*((_DWORD *)this + 23),
          &v26);
  v4 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0x1ACu);
    v6 = v26;
    goto LABEL_14;
  }
  v28 = 0LL;
  if ( *((char *)this + 116) < 0 )
  {
    v6 = v26;
    if ( v26 )
      v20 = (struct CBitmapRealization *)((char *)v26 + 144);
    else
      v20 = 0LL;
    v21 = CColorKeyBitmapRealization::Create(v20, (const struct CColorKey *)(this + 39), &v27);
    v4 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x1BCu);
    }
    else
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v28);
      v22 = v27;
      v23 = (**(__int64 (__fastcall ***)(struct IBitmapRealization *, GUID *, __int64 *))v27)(
              v27,
              &GUID_475af409_d8b1_4ca5_8177_4562f6260b68,
              &v28);
      v4 = v23;
      if ( v23 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0x1BEu);
      }
      else
      {
        v24 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v28 + 24LL))(v28, (char *)this + 64);
        v4 = v24;
        if ( v24 >= 0 )
        {
          this[48] = v22;
          goto LABEL_12;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0x1BFu);
      }
    }
LABEL_29:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v28);
    goto LABEL_14;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v28);
  v6 = v26;
  v15 = (**(__int64 (__fastcall ***)(struct CBitmapRealization *, GUID *, __int64 *))v26)(
          v26,
          &GUID_475af409_d8b1_4ca5_8177_4562f6260b68,
          &v28);
  v4 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x1B1u);
    goto LABEL_29;
  }
  v16 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v28 + 24LL))(v28, (char *)this + 64);
  v4 = v16;
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0x1B2u);
    goto LABEL_29;
  }
  v17 = (char *)v6 + 144;
  v6 = 0LL;
  this[48] = v17;
LABEL_12:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v28);
LABEL_13:
  *((_DWORD *)this + 92) = a3;
  *((_DWORD *)this + 93) = a4;
  *((_DWORD *)this + 94) = v10;
LABEL_14:
  if ( !v6 )
    return v4;
  (*(void (__fastcall **)(struct CBitmapRealization *))(*(_QWORD *)v6 + 16LL))(v6);
  a2 = 0LL;
LABEL_17:
  if ( a2 )
    CloseHandle(a2);
  return v4;
}
