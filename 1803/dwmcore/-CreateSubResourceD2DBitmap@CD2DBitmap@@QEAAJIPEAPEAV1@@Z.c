/*
 * XREFs of ?CreateSubResourceD2DBitmap@CD2DBitmap@@QEAAJIPEAPEAV1@@Z @ 0x1801E594C
 * Callers:
 *     ?EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ @ 0x180214C90 (-EnsureD2DBitmap@CDxHandleStereoBitmapRealization@@MEAAJXZ.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ?CreateInternal@CD2DBitmap@@KAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@PEAUIDXGISurface@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@I_NPEAPEAV1@@Z @ 0x180025124 (-CreateInternal@CD2DBitmap@@KAJPEAVCD2DResourceManager@@PEAUID3D11Texture2D@@PEAUIDXGISurface@@A.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DBitmap::CreateSubResourceD2DBitmap(CD2DBitmap *this, int a2, struct CD2DBitmap **a3)
{
  int Internal; // eax
  unsigned int v6; // ebx
  int v7; // r9d
  unsigned int v9; // [rsp+20h] [rbp-40h]
  __int64 v10; // [rsp+50h] [rbp-10h] BYREF
  int v11; // [rsp+88h] [rbp+28h] BYREF
  __int64 v12; // [rsp+90h] [rbp+30h] BYREF
  __int64 v13; // [rsp+98h] [rbp+38h] BYREF

  v11 = a2;
  v10 = 0LL;
  v13 = 0LL;
  v12 = 0LL;
  *a3 = 0LL;
  if ( *((_DWORD *)this + 64) || *((_DWORD *)this + 45) <= 1u )
  {
    v6 = -2147467259;
    v9 = 510;
    v7 = -2147467259;
  }
  else
  {
    Internal = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 17))(
                 *((_QWORD *)this + 17),
                 &GUID_aba496dd_b617_4cb8_a866_bc44d7eb1fa2,
                 &v10);
    v6 = Internal;
    if ( Internal < 0 )
    {
      v9 = 522;
    }
    else
    {
      Internal = (*(__int64 (__fastcall **)(__int64, GUID *, __int64 *, int *))(*(_QWORD *)v10 + 104LL))(
                   v10,
                   &GUID_30961379_4609_4a41_998e_54fe567ee0c1,
                   &v13,
                   &v11);
      v6 = Internal;
      if ( Internal < 0 )
      {
        v9 = 526;
      }
      else
      {
        Internal = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v13 + 96LL))(v13, 1LL, &v12);
        v6 = Internal;
        if ( Internal < 0 )
        {
          v9 = 531;
        }
        else
        {
          Internal = CD2DBitmap::CreateInternal(
                       *((struct CD2DResourceManager **)this + 3),
                       *((_QWORD *)this + 16),
                       v12,
                       (__int64)this + 168,
                       (__int64)this + 216,
                       *((_DWORD *)this + 62),
                       *((_DWORD *)this + 63),
                       1,
                       *((_BYTE *)this + 33),
                       a3);
          v6 = Internal;
          if ( Internal >= 0 )
            goto LABEL_14;
          v9 = 545;
        }
      }
    }
    v7 = Internal;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, v9);
LABEL_14:
  ReleaseInterfaceNoNULL<IWICBitmap>(v12);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  ReleaseInterfaceNoNULL<IWICBitmap>(v10);
  return v6;
}
