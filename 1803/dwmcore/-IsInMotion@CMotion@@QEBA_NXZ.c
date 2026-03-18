/*
 * XREFs of ?IsInMotion@CMotion@@QEBA_NXZ @ 0x1801C4E1C
 * Callers:
 *     ?IsInMotion@CScrollAnimation@@UEBA_NXZ @ 0x1801BE450 (-IsInMotion@CScrollAnimation@@UEBA_NXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?HasImpulse@CMotion@@QEBA_NXZ @ 0x1801BE2E4 (-HasImpulse@CMotion@@QEBA_NXZ.c)
 */

char __fastcall CMotion::IsInMotion(CMotion *this)
{
  char v2; // bl
  int v3; // ecx
  int v4; // ecx
  __int64 v5; // rcx

  v2 = 0;
  v3 = *((_DWORD *)this + 4);
  if ( !v3 )
    return CMotion::HasImpulse(this);
  v4 = v3 - 1;
  if ( !v4 )
    return 1;
  if ( v4 == 1 )
  {
    if ( CMotion::HasImpulse(this) )
      return 1;
    v5 = *((_QWORD *)this + 17);
    if ( !v5 )
      return *((float *)this + 17) > *((float *)this + 6);
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v5 + 24LL))(v5)
      && *((float *)this + 36) > *((float *)this + 6) )
    {
      return 1;
    }
  }
  return v2;
}
