/*
 * XREFs of ?SetOpacity@CImage@@UEAAXN@Z @ 0x1800782C0
 * Callers:
 *     ?UpdateTransition@CPressTapVisual@@MEAAJXZ @ 0x180092E50 (-UpdateTransition@CPressTapVisual@@MEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CImage::SetOpacity(CImage *this, double a2)
{
  __int64 v2; // rdx

  v2 = *((_QWORD *)this + 39);
  if ( v2 )
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v2 + 16) + 304LL))(
      *(_QWORD *)(v2 + 16),
      *(unsigned int *)(v2 + 24));
  else
    CVisual::SendSetOpacity(this, a2);
}
