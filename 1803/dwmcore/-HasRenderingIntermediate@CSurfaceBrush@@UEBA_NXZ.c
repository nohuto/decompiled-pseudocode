/*
 * XREFs of ?HasRenderingIntermediate@CSurfaceBrush@@UEBA_NXZ @ 0x1801A5B10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CSurfaceBrush::HasRenderingIntermediate(CSurfaceBrush *this)
{
  __int64 v1; // rcx
  char v2; // bl

  v1 = *((_QWORD *)this + 11);
  v2 = 0;
  if ( v1 )
    return (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 48LL))(v1, 15LL) != 0;
  return v2;
}
