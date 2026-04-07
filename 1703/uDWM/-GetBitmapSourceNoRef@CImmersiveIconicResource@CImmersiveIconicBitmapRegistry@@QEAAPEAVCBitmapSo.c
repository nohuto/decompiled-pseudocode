/*
 * XREFs of ?GetBitmapSourceNoRef@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAPEAVCBitmapSource@@H@Z @ 0x18007B7F4
 * Callers:
 *     ?GetIconicRepresentationTypeClosestToSize@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAA?AW4IconicRepresentationType@@HW4DEVICE_SCALE_FACTOR@@@Z @ 0x18007B894 (-GetIconicRepresentationTypeClosestToSize@CImmersiveIconicResource@CImmersiveIconicBitmapRegistr.c)
 *     ?SetBitmapResource@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAXPEAVCBitmapSource@@@Z @ 0x18007BC30 (-SetBitmapResource@CImmersiveIconicResource@CImmersiveIconicBitmapRegistry@@QEAAXPEAVCBitmapSour.c)
 *     ?_RegisterIconicRepresentation@CImmersiveIconicBitmapRegistry@@AEAAJPEAVCImmersiveIconicResource@1@PEAUHWND__@@HW4DEVICE_SCALE_FACTOR@@_NPEAW4IconicRepresentationType@@4@Z @ 0x18007C224 (-_RegisterIconicRepresentation@CImmersiveIconicBitmapRegistry@@AEAAJPEAVCImmersiveIconicResource.c)
 *     ?Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z @ 0x18007C6F0 (-Initialize@CImmersiveWindowIconic@@IEAAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_N@Z.c)
 *     ?LoadIconW@CImmersiveWindowIconic@@AEAAJXZ @ 0x18007C944 (-LoadIconW@CImmersiveWindowIconic@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct CBitmapSource *__fastcall CImmersiveIconicBitmapRegistry::CImmersiveIconicResource::GetBitmapSourceNoRef(
        CImmersiveIconicBitmapRegistry::CImmersiveIconicResource *this,
        int a2)
{
  __int64 v2; // rdi
  unsigned int v5; // esi
  __int64 v6; // rcx
  int v7; // ebx
  int v8; // ebx

  v2 = 0LL;
  v5 = 0;
  if ( *((_DWORD *)this + 8) )
  {
    while ( 1 )
    {
      v6 = *(_QWORD *)(*((_QWORD *)this + 1) + 8LL * v5);
      if ( v6 )
      {
        v7 = *(_DWORD *)(v6 + 24);
        if ( v7 > MulDiv(a2, 8, 10) )
        {
          v8 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 8LL * v5) + 24LL);
          if ( v8 < MulDiv(a2, 12, 10) )
            break;
        }
      }
      if ( ++v5 >= *((_DWORD *)this + 8) )
        return (struct CBitmapSource *)v2;
    }
    return *(struct CBitmapSource **)(*((_QWORD *)this + 1) + 8LL * v5);
  }
  return (struct CBitmapSource *)v2;
}
