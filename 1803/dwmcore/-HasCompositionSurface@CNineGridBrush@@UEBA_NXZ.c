/*
 * XREFs of ?HasCompositionSurface@CNineGridBrush@@UEBA_NXZ @ 0x18019DA70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CNineGridBrush::HasCompositionSurface(CNineGridBrush *this)
{
  __int64 v1; // rcx
  char v2; // bl

  v1 = *((_QWORD *)this + 9);
  v2 = 0;
  if ( v1 )
    return (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v1 + 240LL))(v1) != 0;
  return v2;
}
