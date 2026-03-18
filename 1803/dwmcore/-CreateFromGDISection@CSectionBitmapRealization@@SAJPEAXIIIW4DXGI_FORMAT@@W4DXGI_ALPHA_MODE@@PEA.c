/*
 * XREFs of ?CreateFromGDISection@CSectionBitmapRealization@@SAJPEAXIIIW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAVCBitmapRealization@@@Z @ 0x1800C55F4
 * Callers:
 *     ?CreateSectionBitmap@CGdiSpriteBitmap@@IEAAJPEAXII@Z @ 0x180094624 (-CreateSectionBitmap@CGdiSpriteBitmap@@IEAAJPEAXII@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??0CSectionBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUCSM_SYSMEM_SECTION_INFO@@@Z @ 0x1800812BC (--0CSectionBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@AEBUCSM_.c)
 *     ?EnsureBitmapCacheSource@CSectionBitmapRealization@@AEAAJXZ @ 0x180081434 (-EnsureBitmapCacheSource@CSectionBitmapRealization@@AEAAJXZ.c)
 *     ??2CSectionBitmapRealization@@KAPEAX_K@Z @ 0x1800C56F0 (--2CSectionBitmapRealization@@KAPEAX_K@Z.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
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
  unsigned __int64 v11; // rcx
  CSectionBitmapRealization *v12; // rax
  CSectionBitmapRealization *v13; // rbx
  int v14; // edi
  unsigned int v16; // eax
  HANDLE v17; // [rsp+38h] [rbp-91h] BYREF
  int v18; // [rsp+40h] [rbp-89h]
  int v19; // [rsp+44h] [rbp-85h]
  int v20; // [rsp+48h] [rbp-81h]
  enum DXGI_FORMAT v21; // [rsp+4Ch] [rbp-7Dh]
  _DWORD v22[10]; // [rsp+50h] [rbp-79h] BYREF
  _DWORD v23[32]; // [rsp+78h] [rbp-51h] BYREF

  memset_0(v23, 0, 0x78uLL);
  memset_0(v22, 0, 0x20uLL);
  v23[11] = 0;
  *a7 = 0LL;
  v23[0] = a6;
  v21 = a5;
  v22[0] = 1;
  v17 = hObject;
  v18 = a2;
  v19 = a3;
  v20 = a4;
  v12 = (CSectionBitmapRealization *)CSectionBitmapRealization::operator new(v11);
  if ( v12 )
    v13 = CSectionBitmapRealization::CSectionBitmapRealization(
            v12,
            (const struct CSM_BUFFER_ATTRIBUTES *)v23,
            (const struct CSM_REALIZATION_INFO *)v22,
            (const struct CSM_SYSMEM_SECTION_INFO *)&v17);
  else
    v13 = 0LL;
  if ( v13 )
  {
    hObject = 0LL;
    (*(void (__fastcall **)(CSectionBitmapRealization *))(*(_QWORD *)v13 + 8LL))(v13);
    v14 = CSectionBitmapRealization::EnsureBitmapCacheSource(v13);
    if ( v14 >= 0 )
    {
      *a7 = v13;
      return (unsigned int)v14;
    }
    v16 = 87;
  }
  else
  {
    v14 = -2147024882;
    v16 = 81;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, v16);
  if ( hObject )
    CloseHandle(hObject);
  if ( v13 )
    (*(void (__fastcall **)(CSectionBitmapRealization *))(*(_QWORD *)v13 + 16LL))(v13);
  return (unsigned int)v14;
}
