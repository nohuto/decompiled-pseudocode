/*
 * XREFs of ?Release@CCompositionFrameCollection@@UEAAJXZ @ 0x1C004ACD0
 * Callers:
 *     <none>
 * Callees:
 *     ??_GCCompositionFrameCollection@@IEAAPEAXI@Z @ 0x1C004ABF0 (--_GCCompositionFrameCollection@@IEAAPEAXI@Z.c)
 */

__int64 __fastcall CCompositionFrameCollection::Release(CCompositionFrameCollection *this)
{
  unsigned __int32 v1; // ebx

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v1 && this )
    CCompositionFrameCollection::`scalar deleting destructor'(this);
  return v1;
}
