/*
 * XREFs of ?ReadTexture@CColorKeyBitmap@@UEAAXXZ @ 0x1801D1B00
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?DebugInspectMappedTexture@@YAXAEBUD3D11_TEXTURE2D_DESC@@AEBUD3D11_MAPPED_SUBRESOURCE@@@Z @ 0x18018E69C (-DebugInspectMappedTexture@@YAXAEBUD3D11_TEXTURE2D_DESC@@AEBUD3D11_MAPPED_SUBRESOURCE@@@Z.c)
 */

void __fastcall CColorKeyBitmap::ReadTexture(CColorKeyBitmap *this)
{
  signed int v2; // eax
  signed int v3; // eax
  signed int v4; // eax
  __int64 v5; // [rsp+30h] [rbp-29h] BYREF
  struct D3D11_MAPPED_SUBRESOURCE v6; // [rsp+38h] [rbp-21h] BYREF
  _BYTE v7[8]; // [rsp+48h] [rbp-11h] BYREF
  struct D3D11_TEXTURE2D_DESC v8; // [rsp+50h] [rbp-9h] BYREF
  _DWORD v9[2]; // [rsp+80h] [rbp+27h] BYREF
  int v10; // [rsp+88h] [rbp+2Fh] BYREF
  int v11; // [rsp+8Ch] [rbp+33h] BYREF
  _BYTE v12[16]; // [rsp+90h] [rbp+37h] BYREF

  v5 = 0LL;
  memset_0(&v8, 0, sizeof(v8));
  v6.pData = 0LL;
  *(_QWORD *)&v6.RowPitch = 0LL;
  (*(void (__fastcall **)(CColorKeyBitmap *, int *, int *))(*(_QWORD *)this + 32LL))(this, &v10, &v11);
  v2 = (*(__int64 (__fastcall **)(char *, _DWORD *, __int64 *))(*((_QWORD *)this + 1) + 64LL))(
         (char *)this + 8,
         v9,
         &v5);
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v2, 0x95u);
  }
  else
  {
    v8.Width = v10 - v9[0];
    v8.Height = v11 - v9[1];
    v8.Format = *(_DWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v5 + 24LL))(v5, v12);
    v3 = (*(__int64 (__fastcall **)(__int64, _BYTE *, struct D3D11_MAPPED_SUBRESOURCE *))(*(_QWORD *)v5 + 48LL))(
           v5,
           v7,
           &v6);
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0x9Cu);
    }
    else
    {
      v4 = (*(__int64 (__fastcall **)(__int64, UINT *))(*(_QWORD *)v5 + 40LL))(v5, &v6.RowPitch);
      if ( v4 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, 0x9Eu);
      else
        DebugInspectMappedTexture(&v8, &v6);
    }
  }
  ReleaseInterfaceNoNULL<CManipulationManager>(v5);
}
