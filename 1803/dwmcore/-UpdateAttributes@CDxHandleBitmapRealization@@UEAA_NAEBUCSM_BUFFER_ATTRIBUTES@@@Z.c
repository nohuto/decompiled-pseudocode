/*
 * XREFs of ?UpdateAttributes@CDxHandleBitmapRealization@@UEAA_NAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x180045A60
 * Callers:
 *     ?UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEAUHRGN__@@PEBUScrollOptimization@@_N@Z @ 0x1800807D8 (-UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFE.c)
 * Callees:
 *     ?GetDisplayId@CDxHandleBitmapRealization@@UEBA?AVDisplayId@@XZ @ 0x1800457F0 (-GetDisplayId@CDxHandleBitmapRealization@@UEBA-AVDisplayId@@XZ.c)
 *     ?UpdateBitmapAttributes@CDxHandleBitmapRealization@@MEAA_NVDisplayId@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180045B40 (-UpdateBitmapAttributes@CDxHandleBitmapRealization@@MEAA_NVDisplayId@@W4DXGI_ALPHA_MODE@@W4DXGI_.c)
 *     ?CalcDisplayRestriction@CBitmapRealization@@IEBA?AVDisplayId@@HPEAUHMONITOR__@@@Z @ 0x1800493C8 (-CalcDisplayRestriction@CBitmapRealization@@IEBA-AVDisplayId@@HPEAUHMONITOR__@@@Z.c)
 *     ?UpdateAttributes@CBitmapRealization@@UEAA_NAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x180049404 (-UpdateAttributes@CBitmapRealization@@UEAA_NAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDxHandleBitmapRealization::UpdateAttributes(
        CDxHandleBitmapRealization *this,
        const struct CSM_BUFFER_ATTRIBUTES *a2)
{
  _DWORD *(__fastcall *v4)(__int64, unsigned int *); // rax
  __int64 v5; // rcx
  unsigned int v6; // ebp
  unsigned int v7; // esi
  __int64 v8; // r8
  bool updated; // di
  __int64 (__fastcall *v10)(CDxHandleBitmapRealization *, _QWORD, _QWORD, _QWORD); // rax
  char v11; // al
  bool v12; // zf
  __int64 result; // rax
  unsigned int v14; // [rsp+50h] [rbp+8h] BYREF
  char v15; // [rsp+58h] [rbp+10h] BYREF

  v4 = *(_DWORD *(__fastcall **)(__int64, unsigned int *))(*(_QWORD *)this + 48LL);
  if ( v4 == CDxHandleBitmapRealization::GetDisplayId )
    CDxHandleBitmapRealization::GetDisplayId((__int64)this, &v14);
  else
    v4((__int64)this, &v14);
  v6 = *((_DWORD *)this + 49);
  v7 = 3;
  if ( *((_DWORD *)this + 38) )
    v7 = *((_DWORD *)this + 38);
  v8 = *((_DWORD *)a2 + 29) & 1;
  if ( (_DWORD)v8 != (*((_DWORD *)this + 67) & 1) || *((_QWORD *)a2 + 1) != *((_QWORD *)this + 20) )
    *((_DWORD *)this + 100) = *(_DWORD *)CBitmapRealization::CalcDisplayRestriction(v5, &v15, v8, *((_QWORD *)a2 + 1));
  updated = CBitmapRealization::UpdateAttributes(this, a2);
  v10 = *(__int64 (__fastcall **)(CDxHandleBitmapRealization *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)this + 96LL);
  if ( (char *)v10 == (char *)CDxHandleBitmapRealization::UpdateBitmapAttributes )
    v11 = CDxHandleBitmapRealization::UpdateBitmapAttributes(this, v14, v7, v6);
  else
    v11 = v10(this, v14, v7, v6);
  v12 = v11 == 0;
  result = updated;
  if ( !v12 )
    return 1LL;
  return result;
}
