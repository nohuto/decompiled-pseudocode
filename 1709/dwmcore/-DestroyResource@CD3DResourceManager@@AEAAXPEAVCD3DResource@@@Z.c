/*
 * XREFs of ?DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z @ 0x1800810C0
 * Callers:
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z @ 0x18001A6C0 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z.c)
 *     ?UnusableNotification@CD3DResourceManager@@UEAAXPEAVCMILPoolResource@@@Z @ 0x180081190 (-UnusableNotification@CD3DResourceManager@@UEAAXPEAVCMILPoolResource@@@Z.c)
 *     ?DestroyAllResources@CD3DResourceManager@@QEAAXXZ @ 0x180081198 (-DestroyAllResources@CD3DResourceManager@@QEAAXXZ.c)
 *     ?DestroyDelayedResources@CD3DResourceManager@@AEAAIXZ @ 0x18011DB78 (-DestroyDelayedResources@CD3DResourceManager@@AEAAIXZ.c)
 *     ?ClearProtectedResources@CD3DDeviceLevel1@@QEAA_NXZ @ 0x1801A61F0 (-ClearProtectedResources@CD3DDeviceLevel1@@QEAA_NXZ.c)
 * Callees:
 *     ?Release@CD3DSurface@@UEAAKXZ @ 0x18002D9B0 (-Release@CD3DSurface@@UEAAKXZ.c)
 *     ?ReleaseD3DResources@CD3DSurface@@MEAAXXZ @ 0x18002DF40 (-ReleaseD3DResources@CD3DSurface@@MEAAXXZ.c)
 *     ?Invalidate@CD3DResource@@IEAAXXZ @ 0x180092808 (-Invalidate@CD3DResource@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD3DResourceManager::DestroyResource(CD3DResourceManager *this, struct CD3DResource ***a2)
{
  void (__fastcall *v4)(CD3DSurface *); // rax
  struct CD3DResource **v5; // rdx
  struct CD3DResource **v6; // rcx
  __int64 (__fastcall *v7)(CD3DSurface *); // rax

  ((void (__fastcall *)(struct CD3DResource ***))**a2)(a2);
  if ( ((unsigned __int8 (__fastcall *)(struct CD3DResource ***))(*a2)[4])(a2) )
    CD3DResource::Invalidate((CD3DResource *)a2);
  if ( *((_BYTE *)a2 + 68) )
    --*((_DWORD *)this + 18);
  v4 = (void (__fastcall *)(CD3DSurface *))(*a2)[5];
  if ( v4 == CD3DSurface::ReleaseD3DResources )
    CD3DSurface::ReleaseD3DResources((CD3DSurface *)a2);
  else
    v4((CD3DSurface *)a2);
  a2[2] = 0LL;
  v5 = a2[4];
  if ( v5[1] != (struct CD3DResource *)(a2 + 4) || (v6 = a2[5], *v6 != (struct CD3DResource *)(a2 + 4)) )
    __fastfail(3u);
  *v6 = (struct CD3DResource *)v5;
  v5[1] = (struct CD3DResource *)v6;
  *((_DWORD *)this + 12) -= *((_DWORD *)a2 + 16);
  v7 = (__int64 (__fastcall *)(CD3DSurface *))(*a2)[1];
  if ( v7 == CD3DSurface::Release )
    CD3DSurface::Release((CD3DSurface *)a2);
  else
    v7((CD3DSurface *)a2);
}
