/*
 * XREFs of ?IsLockValid@CCompositionSurface@@MEBA_NXZ @ 0x1C0011CD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CCompositionSurface::IsLockValid(CCompositionSurface *this)
{
  char *v1; // rcx
  __int64 (*v2)(void); // rax

  v1 = (char *)this - 16;
  v2 = **(__int64 (***)(void))v1;
  if ( (char *)v2 == (char *)CCompositionSurface::IsValid )
    return v1[40];
  else
    return v2();
}
