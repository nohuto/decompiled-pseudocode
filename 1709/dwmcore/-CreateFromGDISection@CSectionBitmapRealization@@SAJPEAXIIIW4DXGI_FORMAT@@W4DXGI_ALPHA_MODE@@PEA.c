/*
 * XREFs of ?CreateFromGDISection@CSectionBitmapRealization@@SAJPEAXIIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAVCBitmapRealization@@@Z @ 0x180087BC0
 * Callers:
 *     ?CreateSectionBitmap@CGdiSpriteBitmap@@IEAAJPEAXII@Z @ 0x18009DCE8 (-CreateSectionBitmap@CGdiSpriteBitmap@@IEAAJPEAXII@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??2CSectionBitmapRealization@@KAPEAX_K@Z @ 0x180087B98 (--2CSectionBitmapRealization@@KAPEAX_K@Z.c)
 *     ??0CSectionBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUCSM_SYSMEM_SECTION_INFO@@@Z @ 0x180087CF0 (--0CSectionBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUCSM_.c)
 *     ?EnsureBitmapCacheSource@CSectionBitmapRealization@@AEAAJXZ @ 0x180087E60 (-EnsureBitmapCacheSource@CSectionBitmapRealization@@AEAAJXZ.c)
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSectionBitmapRealization::CreateFromGDISection(
        HANDLE hObject,
        int a2,
        int a3,
        int a4,
        enum DXGI_FORMAT a5,
        enum DXGI_ALPHA_MODE a6,
        struct CBitmapRealization **a7)
{
  CSectionBitmapRealization *v11; // rax
  CSectionBitmapRealization *v12; // rbx
  signed int v13; // eax
  unsigned int v14; // edi
  HANDLE v16; // [rsp+38h] [rbp-91h] BYREF
  int v17; // [rsp+40h] [rbp-89h]
  int v18; // [rsp+44h] [rbp-85h]
  int v19; // [rsp+48h] [rbp-81h]
  enum DXGI_FORMAT v20; // [rsp+4Ch] [rbp-7Dh]
  _DWORD v21[10]; // [rsp+50h] [rbp-79h] BYREF
  _DWORD v22[32]; // [rsp+78h] [rbp-51h] BYREF

  memset_0(v22, 0, 0x78uLL);
  memset_0(v21, 0, 0x20uLL);
  v22[11] = 0;
  *a7 = 0LL;
  v22[0] = a6;
  v20 = a5;
  v21[0] = 1;
  v16 = hObject;
  v17 = a2;
  v18 = a3;
  v19 = a4;
  v11 = (CSectionBitmapRealization *)CSectionBitmapRealization::operator new();
  if ( v11 )
    v12 = CSectionBitmapRealization::CSectionBitmapRealization(
            v11,
            (const struct CSM_BUFFER_ATTRIBUTES *)v22,
            (const struct CSM_REALIZATION_INFO *)v21,
            (const struct CSM_SYSMEM_SECTION_INFO *)&v16);
  else
    v12 = 0LL;
  if ( v12 )
  {
    hObject = 0LL;
    (*(void (__fastcall **)(CSectionBitmapRealization *))(*(_QWORD *)v12 + 8LL))(v12);
    v13 = CSectionBitmapRealization::EnsureBitmapCacheSource(v12);
    v14 = v13;
    if ( v13 >= 0 )
    {
      *a7 = v12;
      return v14;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v13, 0x57u);
  }
  else
  {
    v14 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x51u);
  }
  if ( hObject )
    CloseHandle(hObject);
  if ( v12 )
    (*(void (__fastcall **)(CSectionBitmapRealization *))(*(_QWORD *)v12 + 16LL))(v12);
  return v14;
}
