/*
 * XREFs of ??1CHwCacheablePoolBrush@@MEAA@XZ @ 0x1801F6D28
 * Callers:
 *     ??_ECHwLinearGradientBrush@@UEAAPEAXI@Z @ 0x1801F68F0 (--_ECHwLinearGradientBrush@@UEAAPEAXI@Z.c)
 *     ??_GCHwCacheablePoolBrush@@MEAAPEAXI@Z @ 0x1801F6D78 (--_GCHwCacheablePoolBrush@@MEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CHwCacheablePoolBrush::~CHwCacheablePoolBrush(CHwCacheablePoolBrush *this)
{
  CHwCacheablePoolBrush **v1; // r8
  CHwCacheablePoolBrush **v2; // rax

  *(_QWORD *)this = &CHwCacheablePoolBrush::`vftable'{for `IMILCacheableResource'};
  *((_QWORD *)this + 1) = &CHwCacheablePoolBrush::`vftable'{for `CMILPoolResource'};
  *((_QWORD *)this + 4) = &CHwCacheablePoolBrush::`vftable'{for `CHwBrush'};
  v1 = (CHwCacheablePoolBrush **)*((_QWORD *)this + 8);
  if ( v1[1] != (CHwCacheablePoolBrush *)((char *)this + 64)
    || (v2 = (CHwCacheablePoolBrush **)*((_QWORD *)this + 9), *v2 != (CHwCacheablePoolBrush *)((char *)this + 64)) )
  {
    __fastfail(3u);
  }
  *v2 = (CHwCacheablePoolBrush *)v1;
  v1[1] = (CHwCacheablePoolBrush *)v2;
  *((_QWORD *)this + 1) = &CMILRefCountBase::`vftable';
}
