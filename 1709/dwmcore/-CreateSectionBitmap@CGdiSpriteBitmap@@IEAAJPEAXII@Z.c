/*
 * XREFs of ?CreateSectionBitmap@CGdiSpriteBitmap@@IEAAJPEAXII@Z @ 0x18009DCE8
 * Callers:
 *     ?CreateBitmap@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z @ 0x18009DF10 (-CreateBitmap@CGdiSpriteBitmap@@IEAAJW4DXGI_FORMAT@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCBitmapRealization@@@@YAXPEAVCBitmapRealization@@@Z @ 0x180076A28 (--$ReleaseInterfaceNoNULL@VCBitmapRealization@@@@YAXPEAVCBitmapRealization@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007950C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateFromGDISection@CSectionBitmapRealization@@SAJPEAXIIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAVCBitmapRealization@@@Z @ 0x180087BC0 (-CreateFromGDISection@CSectionBitmapRealization@@SAJPEAXIIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEA.c)
 *     ?ReleaseBitmapResources@CGdiSpriteBitmap@@IEAAXXZ @ 0x18009E0E0 (-ReleaseBitmapResources@CGdiSpriteBitmap@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?Create@CColorKeyBitmap@@SAJPEAVIBitmapRealization@@AEBVCColorKey@@PEAPEAV2@@Z @ 0x1801D1554 (-Create@CColorKeyBitmap@@SAJPEAVIBitmapRealization@@AEBVCColorKey@@PEAPEAV2@@Z.c)
 */

__int64 __fastcall CGdiSpriteBitmap::CreateSectionBitmap(HANDLE *this, void *a2, unsigned int a3, unsigned int a4)
{
  signed int v4; // ebx
  unsigned int v5; // edi
  CBitmapRealization *v6; // r14
  void *v9; // r12
  int v10; // r13d
  unsigned __int64 v11; // rax
  HANDLE CurrentProcess; // rbx
  HANDLE v13; // rax
  signed int v14; // eax
  signed int v15; // eax
  signed int v16; // eax
  char *v17; // rax
  signed int LastError; // eax
  struct IBitmapRealization *v20; // rcx
  signed int v21; // eax
  struct IBitmapRealization *v22; // rdi
  signed int v23; // eax
  signed int v24; // eax
  enum DXGI_FORMAT v25; // [rsp+20h] [rbp-30h]
  struct CBitmapRealization *v26; // [rsp+40h] [rbp-10h] BYREF
  struct IBitmapRealization *v27; // [rsp+48h] [rbp-8h] BYREF
  __int64 v28; // [rsp+98h] [rbp+48h] BYREF
  unsigned int v29; // [rsp+A0h] [rbp+50h]
  unsigned int v30; // [rsp+A8h] [rbp+58h]

  v30 = a4;
  v29 = a3;
  v4 = 0;
  v5 = a3;
  v27 = 0LL;
  v6 = 0LL;
  v26 = 0LL;
  v9 = a2;
  v10 = 0;
  CGdiSpriteBitmap::ReleaseBitmapResources((CGdiSpriteBitmap *)this);
  if ( !v5 || !v30 )
  {
    this[37] = a2;
    goto LABEL_13;
  }
  v11 = 4LL * v5;
  v10 = -1;
  if ( v11 <= 0xFFFFFFFF )
    v10 = 4 * v5;
  v4 = v11 > 0xFFFFFFFF ? 0x80070216 : 0;
  if ( v11 > 0xFFFFFFFF )
  {
    v25 = DXGI_FORMAT_V408|DXGI_FORMAT_R32G8X24_TYPELESS|0x100;
LABEL_37:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, v25);
    goto LABEL_14;
  }
  SetLastError(0);
  CurrentProcess = GetCurrentProcess();
  v13 = GetCurrentProcess();
  if ( !DuplicateHandle(v13, v9, CurrentProcess, this + 37, 0, 0, 2u) )
  {
    LastError = GetLastError();
    v4 = LastError;
    if ( LastError > 0 )
      v4 = (unsigned __int16)LastError | 0x80070000;
    v25 = 417;
    if ( v4 >= 0 )
      v4 = -2003304445;
    goto LABEL_37;
  }
  v5 = v29;
  v9 = 0LL;
  v14 = CSectionBitmapRealization::CreateFromGDISection(
          a2,
          v29,
          v30,
          v10,
          (enum DXGI_FORMAT)*((_DWORD *)this + 22),
          (enum DXGI_ALPHA_MODE)*((_DWORD *)this + 23),
          &v26);
  v4 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v14, 0x1ACu);
    v6 = v26;
  }
  else
  {
    v28 = 0LL;
    if ( *((char *)this + 116) < 0 )
    {
      v6 = v26;
      if ( v26 )
        v20 = (struct CBitmapRealization *)((char *)v26 + 144);
      else
        v20 = 0LL;
      v21 = CColorKeyBitmap::Create(v20, (const struct CColorKey *)(this + 38), &v27);
      v4 = v21;
      if ( v21 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v21, 0x1BCu);
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
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v23, 0x1BEu);
        }
        else
        {
          v24 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v28 + 24LL))(v28, (char *)this + 64);
          v4 = v24;
          if ( v24 >= 0 )
          {
            this[47] = v22;
            v5 = v29;
            goto LABEL_12;
          }
          MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v24, 0x1BFu);
        }
      }
    }
    else
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v28);
      v6 = v26;
      v15 = (**(__int64 (__fastcall ***)(struct CBitmapRealization *, GUID *, __int64 *))v26)(
              v26,
              &GUID_475af409_d8b1_4ca5_8177_4562f6260b68,
              &v28);
      v4 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v15, 0x1B1u);
      }
      else
      {
        v16 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v28 + 24LL))(v28, (char *)this + 64);
        v4 = v16;
        if ( v16 >= 0 )
        {
          v17 = (char *)v6 + 144;
          v6 = 0LL;
          this[47] = v17;
LABEL_12:
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v28);
LABEL_13:
          v9 = 0LL;
          *((_DWORD *)this + 91) = v30;
          *((_DWORD *)this + 90) = v5;
          *((_DWORD *)this + 92) = v10;
          goto LABEL_14;
        }
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v16, 0x1B2u);
      }
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v28);
  }
LABEL_14:
  ReleaseInterfaceNoNULL<CBitmapRealization>(v6);
  if ( v9 )
    CloseHandle(v9);
  return (unsigned int)v4;
}
