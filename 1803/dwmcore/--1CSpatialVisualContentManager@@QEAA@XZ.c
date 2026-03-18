/*
 * XREFs of ??1CSpatialVisualContentManager@@QEAA@XZ @ 0x1801AD564
 * Callers:
 *     ?Initialize@CComposition@@IEAAJXZ @ 0x180033E24 (-Initialize@CComposition@@IEAAJXZ.c)
 *     ??1CComposition@@MEAA@XZ @ 0x1801497E4 (--1CComposition@@MEAA@XZ.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CSpatialVisualContentManager::~CSpatialVisualContentManager(char **this)
{
  char *v1; // rbx
  __int64 v3; // rbp
  unsigned __int64 v4; // rsi

  v1 = *this;
  v3 = 0LL;
  v4 = (unsigned __int64)(this[1] - *this + 7) >> 3;
  if ( *this > this[1] )
    v4 = 0LL;
  if ( v4 )
  {
    do
    {
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v1 + 16LL))(*(_QWORD *)v1);
      ++v3;
      v1 += 8;
    }
    while ( v3 != v4 );
    v1 = *this;
  }
  if ( v1 )
  {
    std::_Deallocate(v1, (this[2] - v1) >> 3, 8uLL);
    *this = 0LL;
    this[1] = 0LL;
    this[2] = 0LL;
  }
}
