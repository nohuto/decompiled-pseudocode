/*
 * XREFs of ?Open@CCompositionSurface@@MEAAJPEAU_WIN32_OPENMETHOD_PARAMETERS@@@Z @ 0x1C0011740
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionSurface::Open(CCompositionSurface *this, struct _WIN32_OPENMETHOD_PARAMETERS *a2)
{
  PVOID v2; // rax

  v2 = (PVOID)*((_QWORD *)a2 + 1);
  if ( v2 && v2 == g_pepDwm )
  {
    *((_QWORD *)this + 5) = v2;
    _InterlockedIncrement((volatile signed __int32 *)this + 9);
  }
  return 0LL;
}
