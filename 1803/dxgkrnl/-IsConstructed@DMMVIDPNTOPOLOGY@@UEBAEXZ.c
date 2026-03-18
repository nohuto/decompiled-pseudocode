/*
 * XREFs of ?IsConstructed@DMMVIDPNTOPOLOGY@@UEBAEXZ @ 0x1C0004290
 * Callers:
 *     ?IsConstructed@DMMVIDPNTOPOLOGY@@WDI@EBAEXZ @ 0x1C001CD50 (-IsConstructed@DMMVIDPNTOPOLOGY@@WDI@EBAEXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall DMMVIDPNTOPOLOGY::IsConstructed(DMMVIDPNTOPOLOGY *this)
{
  char v2; // al
  char v3; // dl

  v2 = (**((__int64 (__fastcall ***)(char *))this + 1))((char *)this + 8);
  v3 = 0;
  if ( v2 )
    return *((_DWORD *)this + 18) == 2;
  return v3;
}
