/*
 * XREFs of ?UpdateAttributes@CDxHandleBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x18007A120
 * Callers:
 *     ?UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEAUHRGN__@@PEBUScrollOptimization@@_N@Z @ 0x180076744 (-UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFE.c)
 * Callees:
 *     ?GetAlphaMode@CBitmapRealization@@UEBA?AW4DXGI_ALPHA_MODE@@XZ @ 0x180036CD0 (-GetAlphaMode@CBitmapRealization@@UEBA-AW4DXGI_ALPHA_MODE@@XZ.c)
 *     ?UpdateDisplayRestriction@CBitmapRealization@@QEAA_NHPEAUHMONITOR__@@@Z @ 0x180036CE4 (-UpdateDisplayRestriction@CBitmapRealization@@QEAA_NHPEAUHMONITOR__@@@Z.c)
 *     ?UpdateAttributes@CBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x180036E30 (-UpdateAttributes@CBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDxHandleBitmapRealization::UpdateAttributes(
        CDxHandleBitmapRealization *this,
        const struct CSM_BUFFER_ATTRIBUTES *a2)
{
  CBitmapRealization *v2; // rdi
  char updated; // bp
  __int64 v4; // rax
  CBitmapRealization *v7; // rcx
  __int64 (__fastcall *v8)(CBitmapRealization *); // rax
  int AlphaMode; // eax
  int v10; // r14d
  int v11; // edx
  __int64 (__fastcall *v12)(CBitmapRealization *); // rax
  unsigned int v13; // eax
  __int64 v14; // rax

  v2 = (CDxHandleBitmapRealization *)((char *)this + 104);
  updated = 0;
  v4 = *((_QWORD *)this + 13);
  v7 = (CDxHandleBitmapRealization *)((char *)this + 104);
  v8 = *(__int64 (__fastcall **)(CBitmapRealization *))(v4 + 48);
  if ( v8 == CBitmapRealization::GetAlphaMode )
    AlphaMode = CBitmapRealization::GetAlphaMode(v7);
  else
    AlphaMode = v8(v7);
  v10 = AlphaMode;
  v11 = *((_DWORD *)a2 + 29) & 1;
  if ( v11 != (*((_DWORD *)this + 59) & 1) || *((_QWORD *)a2 + 1) != *((_QWORD *)this + 16) )
    updated = CBitmapRealization::UpdateDisplayRestriction(this, v11, *((HMONITOR *)a2 + 1));
  CBitmapRealization::UpdateAttributes(this, a2);
  v12 = *(__int64 (__fastcall **)(CBitmapRealization *))(*(_QWORD *)v2 + 48LL);
  if ( v12 == CBitmapRealization::GetAlphaMode )
    v13 = CBitmapRealization::GetAlphaMode(v2);
  else
    v13 = v12(v2);
  if ( v10 != v13 )
  {
    (*(void (__fastcall **)(char *, _QWORD))(*((_QWORD *)this + 2) + 32LL))((char *)this + 16, v13);
    updated = 1;
  }
  if ( updated )
  {
    v14 = *((_QWORD *)this + 44);
    if ( v14 )
      *(_BYTE *)(v14 + 229) = 0;
  }
}
