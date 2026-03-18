/*
 * XREFs of ?HasCompositionSurface@CDropShadow@@UEBA_NXZ @ 0x18018A540
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CDropShadow::HasCompositionSurface(CDropShadow *this)
{
  char v1; // bl
  __int64 v2; // rcx

  v1 = 0;
  if ( !*((_DWORD *)this + 47) )
  {
    v2 = *((_QWORD *)this + 28);
    if ( v2 )
      return (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v2 + 240LL))(v2) != 0;
  }
  return v1;
}
