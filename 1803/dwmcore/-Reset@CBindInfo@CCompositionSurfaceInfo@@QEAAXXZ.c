/*
 * XREFs of ?Reset@CBindInfo@CCompositionSurfaceInfo@@QEAAXXZ @ 0x180082BA8
 * Callers:
 *     ?ProcessSurfaceUpdateInternal@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@@Z @ 0x180080F84 (-ProcessSurfaceUpdateInternal@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@@Z.c)
 *     ??1CCompositionSurfaceInfo@@MEAA@XZ @ 0x180081074 (--1CCompositionSurfaceInfo@@MEAA@XZ.c)
 *     ?Initialize@CBindInfo@CCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x180082AC4 (-Initialize@CBindInfo@CCompositionSurfaceInfo@@QEAAJ_K@Z.c)
 *     ?NotifyInvalidResource@CCompositionSurfaceInfo@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801ACB70 (-NotifyInvalidResource@CCompositionSurfaceInfo@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?RemoveResourceNotifier@CBitmapRealization@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x18000C800 (-RemoveResourceNotifier@CBitmapRealization@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ??$ReleaseInterface@VIRenderTargetBitmap@@@@YAXAEAPEAVIRenderTargetBitmap@@@Z @ 0x180021460 (--$ReleaseInterface@VIRenderTargetBitmap@@@@YAXAEAPEAVIRenderTargetBitmap@@@Z.c)
 *     ?Release@CBitmapRealization@@UEAAKXZ @ 0x1800498E0 (-Release@CBitmapRealization@@UEAAKXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180079700 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?UnpinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ @ 0x1801AD124 (-UnpinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ.c)
 */

void __fastcall CCompositionSurfaceInfo::CBindInfo::Reset(CCompositionSurfaceInfo::CBindInfo *this)
{
  __int64 v2; // rcx
  __int64 v3; // rbp
  __int64 v4; // rdi
  CBitmapRealization *v5; // rsi
  const struct IDeviceResourceNotify *v6; // rdx
  CBitmapRealization *v7; // rcx
  __int64 (__fastcall *v8)(CBitmapRealization *, const struct IDeviceResourceNotify *); // rax
  __int64 (__fastcall *v9)(CBitmapRealization *); // rax

  if ( *((_BYTE *)this + 172) )
    CCompositionSurfaceInfo::CBindInfo::UnpinResources(this);
  if ( *((_DWORD *)this + 14) )
  {
    v3 = *((unsigned int *)this + 14);
    v4 = 0LL;
    do
    {
      v5 = *(CBitmapRealization **)(v4 + *((_QWORD *)this + 4));
      v6 = (const struct IDeviceResourceNotify *)((*(_QWORD *)this + 16LL) & ((unsigned __int128)-(__int128)*(unsigned __int64 *)this >> 64));
      v7 = (CBitmapRealization *)((char *)v5 + 88);
      v8 = *(__int64 (__fastcall **)(CBitmapRealization *, const struct IDeviceResourceNotify *))(*((_QWORD *)v5 + 11)
                                                                                                + 32LL);
      if ( v8 == CBitmapRealization::RemoveResourceNotifier )
        CBitmapRealization::RemoveResourceNotifier(v7, v6);
      else
        v8(v7, v6);
      v9 = *(__int64 (__fastcall **)(CBitmapRealization *))(*(_QWORD *)v5 + 16LL);
      if ( v9 == CBitmapRealization::Release )
        CBitmapRealization::Release(v5);
      else
        v9(v5);
      v4 += 8LL;
      --v3;
    }
    while ( v3 );
  }
  *((_DWORD *)this + 14) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 32, 8u);
  *((_QWORD *)this + 9) = 0LL;
  v2 = *((_QWORD *)this + 19);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 19) = 0LL;
  }
  ReleaseInterface<IRenderTargetBitmap>((__int64 *)this + 10);
  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 4) = 0;
  *((_BYTE *)this + 20) = 0;
  *((struct _LUID *)this + 16) = g_luidZero;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 24) = 0;
  *(_QWORD *)((char *)this + 100) = 0LL;
  *(_QWORD *)((char *)this + 108) = 0LL;
  *(_QWORD *)((char *)this + 116) = 0LL;
  *((_DWORD *)this + 31) = 0;
  *((_QWORD *)this + 20) = 0LL;
  *((_DWORD *)this + 42) = 0;
  *((_BYTE *)this + 173) = 0;
  *((_DWORD *)this + 22) = 2;
  *((_BYTE *)this + 148) = 0;
}
