/*
 * XREFs of ?InitializeViewId@CActivatedEventArgsWithViewIdBase@@UEAAJH@Z @ 0x1801E0F60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CActivatedEventArgsWithViewIdBase::InitializeViewId(CActivatedEventArgsWithViewIdBase *this, int a2)
{
  unsigned int v2; // ebx

  v2 = *((_DWORD *)this + 8) != 0 ? 0x8000FFFF : 0;
  if ( *((_DWORD *)this + 8) )
    RoOriginateError(v2, 0LL);
  else
    *((_DWORD *)this + 8) = a2;
  return v2;
}
