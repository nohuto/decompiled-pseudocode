/*
 * XREFs of ?IsInMotion@CMotion@@QEBA_NXZ @ 0x180185078
 * Callers:
 *     ?IsInMotion@CScrollAnimation@@UEBA_NXZ @ 0x180181CA0 (-IsInMotion@CScrollAnimation@@UEBA_NXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?HasImpulse@CMotion@@QEBA_NXZ @ 0x180181AF0 (-HasImpulse@CMotion@@QEBA_NXZ.c)
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
    v5 = *((_QWORD *)this + 23);
    if ( !v5 )
      return *((float *)this + 17) > *((float *)this + 6);
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5)
      && *((float *)this + 48) > *((float *)this + 6) )
    {
      return 1;
    }
  }
  return v2;
}
