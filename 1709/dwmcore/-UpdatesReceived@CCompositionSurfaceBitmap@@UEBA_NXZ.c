/*
 * XREFs of ?UpdatesReceived@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x18015E150
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CCompositionSurfaceBitmap::UpdatesReceived(CCompositionSurfaceBitmap *this)
{
  __int64 v1; // rax
  char v2; // dl

  v1 = *((_QWORD *)this + 4);
  v2 = 0;
  if ( v1 && (*(_BYTE *)(v1 + 304) || **(_DWORD **)(v1 + 312)) )
    return 1;
  return v2;
}
