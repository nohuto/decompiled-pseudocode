/*
 * XREFs of ?UpdateAttributes@CDxHandleBitmapRealization@@UEAA_NAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x18004D4E0
 * Callers:
 *     ?UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEAUHRGN__@@PEBUScrollOptimization@@_N@Z @ 0x18004AEE0 (-UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFE.c)
 * Callees:
 *     ?CalcDisplayRestriction@CBitmapRealization@@IEBA?AVDisplayId@@HPEAUHMONITOR__@@@Z @ 0x18002AF94 (-CalcDisplayRestriction@CBitmapRealization@@IEBA-AVDisplayId@@HPEAUHMONITOR__@@@Z.c)
 *     ?GetDisplayId@CDxHandleBitmapRealization@@UEBA?AVDisplayId@@XZ @ 0x18004D320 (-GetDisplayId@CDxHandleBitmapRealization@@UEBA-AVDisplayId@@XZ.c)
 *     ?UpdateBitmapAttributes@CDxHandleBitmapRealization@@MEAA_NVDisplayId@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18004D6A0 (-UpdateBitmapAttributes@CDxHandleBitmapRealization@@MEAA_NVDisplayId@@W4DXGI_ALPHA_MODE@@W4DXGI_.c)
 *     memcmp_0 @ 0x1800C5D80 (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?AddHwProtectedEntity@CD3DDeviceManager@@QEAAXU_LUID@@@Z @ 0x1801A513C (-AddHwProtectedEntity@CD3DDeviceManager@@QEAAXU_LUID@@@Z.c)
 *     ?RemoveHwProtectedEntity@CD3DDeviceManager@@QEAAXU_LUID@@@Z @ 0x1801A5C6C (-RemoveHwProtectedEntity@CD3DDeviceManager@@QEAAXU_LUID@@@Z.c)
 */

__int64 __fastcall CDxHandleBitmapRealization::UpdateAttributes(
        CDxHandleBitmapRealization *this,
        const struct CSM_BUFFER_ATTRIBUTES *a2)
{
  _DWORD *(__fastcall *v4)(__int64, unsigned int *); // rax
  CDisplaySet *v5; // rcx
  unsigned int *v6; // rbp
  unsigned int v7; // esi
  int v8; // r8d
  unsigned int v9; // r14d
  bool v10; // zf
  unsigned int v11; // eax
  bool v12; // r15
  int v13; // ecx
  __int64 (__fastcall *v14)(CDxHandleBitmapRealization *, _QWORD, _QWORD, _QWORD); // rax
  char updated; // al
  __int64 result; // rax
  struct _LUID v17; // rdx
  unsigned int v18; // [rsp+60h] [rbp+8h] BYREF
  char v19; // [rsp+68h] [rbp+10h] BYREF

  v4 = *(_DWORD *(__fastcall **)(__int64, unsigned int *))(*(_QWORD *)this + 48LL);
  if ( v4 == CDxHandleBitmapRealization::GetDisplayId )
    CDxHandleBitmapRealization::GetDisplayId((__int64)this, &v18);
  else
    v4((__int64)this, &v18);
  v6 = (unsigned int *)((char *)this + 152);
  v7 = 3;
  if ( *((_DWORD *)this + 38) )
    v7 = *v6;
  v8 = *((_DWORD *)a2 + 29) & 1;
  v9 = *((_DWORD *)this + 49);
  if ( v8 != (*((_DWORD *)this + 67) & 1) || *((_QWORD *)a2 + 1) != *((_QWORD *)this + 20) )
    *((_DWORD *)this + 100) = *(_DWORD *)CBitmapRealization::CalcDisplayRestriction(
                                           v5,
                                           (struct DisplayId *)&v19,
                                           v8,
                                           *((HMONITOR *)a2 + 1));
  v10 = memcmp_0(a2, (char *)this + 152, 0x78uLL) == 0;
  v11 = *((_DWORD *)this + 67);
  *(_OWORD *)v6 = *(_OWORD *)a2;
  v12 = !v10;
  *(_OWORD *)((char *)this + 168) = *((_OWORD *)a2 + 1);
  *(_OWORD *)((char *)this + 184) = *((_OWORD *)a2 + 2);
  *(_OWORD *)((char *)this + 200) = *((_OWORD *)a2 + 3);
  *(_OWORD *)((char *)this + 216) = *((_OWORD *)a2 + 4);
  *(_OWORD *)((char *)this + 232) = *((_OWORD *)a2 + 5);
  *(_OWORD *)((char *)this + 248) = *((_OWORD *)a2 + 6);
  *((_QWORD *)this + 33) = *((_QWORD *)a2 + 14);
  v13 = (*((_DWORD *)this + 67) >> 8) & 1;
  if ( ((v11 >> 8) & 1) != v13 )
  {
    v17 = (struct _LUID)*((_QWORD *)this + 36);
    if ( v13 )
      CD3DDeviceManager::AddHwProtectedEntity((CD3DDeviceManager *)&g_D3DDeviceManager, v17);
    else
      CD3DDeviceManager::RemoveHwProtectedEntity((CD3DDeviceManager *)&g_D3DDeviceManager, v17);
  }
  v14 = *(__int64 (__fastcall **)(CDxHandleBitmapRealization *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)this + 96LL);
  if ( (char *)v14 == (char *)CDxHandleBitmapRealization::UpdateBitmapAttributes )
    updated = CDxHandleBitmapRealization::UpdateBitmapAttributes(this, v18, v7, v9);
  else
    updated = v14(this, v18, v7, v9);
  v10 = updated == 0;
  result = v12;
  if ( !v10 )
    return 1LL;
  return result;
}
