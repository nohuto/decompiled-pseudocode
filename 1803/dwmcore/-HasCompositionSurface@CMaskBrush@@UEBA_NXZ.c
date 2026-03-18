/*
 * XREFs of ?HasCompositionSurface@CMaskBrush@@UEBA_NXZ @ 0x18019B150
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CMaskBrush::HasCompositionSurface(CMaskBrush *this)
{
  char v2; // bl
  __int64 v3; // rcx
  __int64 v4; // rcx

  v2 = 0;
  v3 = *((_QWORD *)this + 10);
  if ( v3 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v3 + 240LL))(v3) )
    return 1;
  v4 = *((_QWORD *)this + 9);
  if ( v4 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 240LL))(v4) )
      return 1;
  }
  return v2;
}
