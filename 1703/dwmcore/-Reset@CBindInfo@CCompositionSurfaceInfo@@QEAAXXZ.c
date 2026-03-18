/*
 * XREFs of ?Reset@CBindInfo@CCompositionSurfaceInfo@@QEAAXXZ @ 0x18007641C
 * Callers:
 *     ?Initialize@CBindInfo@CCompositionSurfaceInfo@@QEAAJ_K@Z @ 0x18007632C (-Initialize@CBindInfo@CCompositionSurfaceInfo@@QEAAJ_K@Z.c)
 *     ?ProcessSurfaceUpdateInternal@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@@Z @ 0x180076E90 (-ProcessSurfaceUpdateInternal@CCompositionSurfaceInfo@@AEAAJAEBUCSM_SURFACE_UPDATE@@@Z.c)
 *     ??1CCompositionSurfaceInfo@@MEAA@XZ @ 0x180076F7C (--1CCompositionSurfaceInfo@@MEAA@XZ.c)
 *     ?NotifyInvalidResource@CCompositionSurfaceInfo@@UEAAXPEBVIDeviceResource@@@Z @ 0x180175790 (-NotifyInvalidResource@CCompositionSurfaceInfo@@UEAAXPEBVIDeviceResource@@@Z.c)
 * Callees:
 *     ?Release@CBitmapRealization@@UEAAKXZ @ 0x180036BA0 (-Release@CBitmapRealization@@UEAAKXZ.c)
 *     ?RemoveResourceNotifier@CBitmapRealization@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x180036EB0 (-RemoveResourceNotifier@CBitmapRealization@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x18004CFE8 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800711F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?UnpinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ @ 0x180175D64 (-UnpinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ.c)
 */

void __fastcall CCompositionSurfaceInfo::CBindInfo::Reset(CCompositionSurfaceInfo::CBindInfo *this)
{
  __int64 v2; // rbp
  __int64 v3; // rdi
  CBitmapRealization *v4; // rsi
  const struct IDeviceResourceNotify *v5; // rdx
  CBitmapRealization *v6; // rcx
  __int64 (__fastcall *v7)(CBitmapRealization *, const struct IDeviceResourceNotify *); // rax
  __int64 (__fastcall *v8)(CBitmapRealization *); // rax
  __int64 v9; // rcx

  if ( *((_BYTE *)this + 172) )
    CCompositionSurfaceInfo::CBindInfo::UnpinResources(this);
  if ( *((_DWORD *)this + 14) )
  {
    v2 = *((unsigned int *)this + 14);
    v3 = 0LL;
    do
    {
      v4 = *(CBitmapRealization **)(v3 + *((_QWORD *)this + 4));
      v5 = (const struct IDeviceResourceNotify *)((*(_QWORD *)this + 16LL) & ((unsigned __int128)-(__int128)*(unsigned __int64 *)this >> 64));
      v6 = (CBitmapRealization *)((char *)v4 + 112);
      v7 = *(__int64 (__fastcall **)(CBitmapRealization *, const struct IDeviceResourceNotify *))(*((_QWORD *)v4 + 14)
                                                                                                + 32LL);
      if ( v7 == CBitmapRealization::RemoveResourceNotifier )
        CBitmapRealization::RemoveResourceNotifier(v6, v5);
      else
        v7(v6, v5);
      v8 = *(__int64 (__fastcall **)(CBitmapRealization *))(*(_QWORD *)v4 + 16LL);
      if ( v8 == CBitmapRealization::Release )
        CBitmapRealization::Release(v4);
      else
        v8(v4);
      v3 += 8LL;
      --v2;
    }
    while ( v2 );
  }
  *((_DWORD *)this + 14) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 32, 8u);
  *((_QWORD *)this + 9) = 0LL;
  v9 = *((_QWORD *)this + 19);
  if ( v9 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    *((_QWORD *)this + 19) = 0LL;
  }
  ReleaseInterface<ID2D1Geometry>((__int64 *)this + 10);
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
