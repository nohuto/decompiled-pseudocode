/*
 * XREFs of ??1CMILResourceCache@@IEAA@XZ @ 0x18007BED8
 * Callers:
 *     ??1CMILBrushBitmap@@MEAA@XZ @ 0x1800461D0 (--1CMILBrushBitmap@@MEAA@XZ.c)
 *     ??1CBitmap@@UEAA@XZ @ 0x18008C96C (--1CBitmap@@UEAA@XZ.c)
 *     ??1CMILBrushGradient@@MEAA@XZ @ 0x1801CEE30 (--1CMILBrushGradient@@MEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CMILResourceCache::~CMILResourceCache(CMILResourceCache *this)
{
  bool v1; // zf
  __int64 v3; // rcx

  v1 = *((_DWORD *)this + 8) == 0;
  *(_QWORD *)this = &CMILResourceCache::`vftable';
  if ( !v1 )
  {
    do
    {
      v3 = *(_QWORD *)(*((_QWORD *)this + 1) + 8LL * (unsigned int)--*((_DWORD *)this + 8));
      if ( v3 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
    }
    while ( *((_DWORD *)this + 8) );
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 1);
}
