/*
 * XREFs of ?DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z @ 0x180021C3C
 * Callers:
 *     ?UnusableNotification@CD3DResourceManager@@UEAAXPEAVCMILPoolResource@@@Z @ 0x180021CE0 (-UnusableNotification@CD3DResourceManager@@UEAAXPEAVCMILPoolResource@@@Z.c)
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_N@Z @ 0x180089290 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_N@Z.c)
 *     ?DestroyAllResources@CD3DResourceManager@@QEAAXXZ @ 0x1800D7708 (-DestroyAllResources@CD3DResourceManager@@QEAAXXZ.c)
 *     ?DestroyDelayedResources@CD3DResourceManager@@AEAAIXZ @ 0x1800D7758 (-DestroyDelayedResources@CD3DResourceManager@@AEAAIXZ.c)
 *     ?ClearProtectedResources@CD3DDeviceLevel1@@QEAA_NXZ @ 0x1801DEFF8 (-ClearProtectedResources@CD3DDeviceLevel1@@QEAA_NXZ.c)
 * Callees:
 *     ?Invalidate@CD3DResource@@IEAAXXZ @ 0x1800219FC (-Invalidate@CD3DResource@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD3DResourceManager::DestroyResource(CD3DResourceManager *this, struct CD3DResource ***a2)
{
  struct CD3DResource **v4; // rdx
  struct CD3DResource **v5; // rcx

  ((void (__fastcall *)(struct CD3DResource ***))**a2)(a2);
  if ( ((unsigned __int8 (__fastcall *)(struct CD3DResource ***))(*a2)[4])(a2) )
    CD3DResource::Invalidate((CD3DResource *)a2);
  if ( *((_BYTE *)a2 + 68) )
    --*((_DWORD *)this + 18);
  ((void (__fastcall *)(struct CD3DResource ***))(*a2)[5])(a2);
  a2[2] = 0LL;
  v4 = a2[4];
  if ( v4[1] != (struct CD3DResource *)(a2 + 4) || (v5 = a2[5], *v5 != (struct CD3DResource *)(a2 + 4)) )
    __fastfail(3u);
  *v5 = (struct CD3DResource *)v4;
  v4[1] = (struct CD3DResource *)v5;
  *((_DWORD *)this + 12) -= *((_DWORD *)a2 + 16);
  ((void (__fastcall *)(struct CD3DResource ***))(*a2)[1])(a2);
}
