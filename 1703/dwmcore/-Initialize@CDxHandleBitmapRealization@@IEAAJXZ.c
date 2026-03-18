/*
 * XREFs of ?Initialize@CDxHandleBitmapRealization@@IEAAJXZ @ 0x18007A43C
 * Callers:
 *     ?Create@CDxHandleBitmapRealization@@SAHAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVCBitmapRealization@@@Z @ 0x18007CC30 (-Create@CDxHandleBitmapRealization@@SAHAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION.c)
 *     ?Create@CDxHandleAdvancedDirectFlipBitmapRealization@@SAHAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@U_LUID@@PEAPEAVCBitmapRealization@@@Z @ 0x1800C53C0 (-Create@CDxHandleAdvancedDirectFlipBitmapRealization@@SAHAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@A.c)
 *     ?Create@CDxHandleStereoBitmapRealization@@SAHAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAPEAVCBitmapRealization@@@Z @ 0x1801B5FC0 (-Create@CDxHandleStereoBitmapRealization@@SAHAEBU_GUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALI.c)
 * Callees:
 *     ?GetAdapterLuid@CBitmapRealization@@QEBA?AU_LUID@@XZ @ 0x180036B6C (-GetAdapterLuid@CBitmapRealization@@QEBA-AU_LUID@@XZ.c)
 *     ?IsXboxAdapterLuid@CD3DDeviceManager@@QEAA_NU_LUID@@@Z @ 0x1800428F8 (-IsXboxAdapterLuid@CD3DDeviceManager@@QEAA_NU_LUID@@@Z.c)
 *     ?EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ @ 0x180079BA0 (-EnsureD2DBitmap@CDxHandleBitmapRealization@@MEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDxHandleBitmapRealization::Initialize(CDxHandleBitmapRealization *this)
{
  __int64 (*v2)(void); // rax
  int v3; // eax
  unsigned int v4; // edi
  struct _LUID *AdapterLuid; // rax
  CD3DDeviceManager *v6; // rcx
  struct _LUID v8; // [rsp+30h] [rbp+8h] BYREF
  char v9; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(__int64 (**)(void))(*(_QWORD *)this + 104LL);
  if ( (char *)v2 == (char *)CDxHandleBitmapRealization::EnsureD2DBitmap )
    v3 = CDxHandleBitmapRealization::EnsureD2DBitmap(this);
  else
    v3 = v2();
  v4 = v3;
  if ( v3 >= 0 )
  {
    if ( *((_DWORD *)this + 40) == 1
      || (AdapterLuid = (struct _LUID *)CBitmapRealization::GetAdapterLuid(this, &v8),
          CD3DDeviceManager::IsXboxAdapterLuid(v6, *AdapterLuid))
      && ((*(void (__fastcall **)(__int64, char *, struct _LUID *))(*(_QWORD *)(*((_QWORD *)this + 51) + 104LL) + 48LL))(
            *((_QWORD *)this + 51) + 104LL,
            &v9,
            &v8),
          v8.LowPart > 0x438) )
    {
      *((_BYTE *)this + 420) = 0;
    }
  }
  return v4;
}
