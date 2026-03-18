/*
 * XREFs of ?vFreePql@PFEOBJ@@QEAAXXZ @ 0x1C003BF58
 * Callers:
 *     bUnloadEudcFont @ 0x1C003EFC4 (bUnloadEudcFont.c)
 * Callees:
 *     <none>
 */

void __fastcall PFEOBJ::vFreePql(PFEOBJ *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx

  *(_DWORD *)(*(_QWORD *)this + 12LL) &= ~0x200u;
  v4 = *(_QWORD *)(*(_QWORD *)this + 120LL);
  if ( v4 )
  {
    Win32FreePool(v4, a2, a3);
    *(_QWORD *)(*(_QWORD *)this + 120LL) = 0LL;
  }
}
