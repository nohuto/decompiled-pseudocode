/*
 * XREFs of ?Release@CAdapter@@UEAAJXZ @ 0x1C00140E0
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCAdapter@@IEAAPEAXI@Z @ 0x1C00140A4 (--_GCAdapter@@IEAAPEAXI@Z.c)
 */

__int64 __fastcall CAdapter::Release(CAdapter *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 23);
  if ( !v1 && this )
    CAdapter::`scalar deleting destructor'(this);
  return v1;
}
