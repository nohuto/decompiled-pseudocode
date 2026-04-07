/*
 * XREFs of ?SetOpacity@CImage@@UEAAXN@Z @ 0x18007C3C0
 * Callers:
 *     ?UpdateTransition@CPressTapVisual@@MEAAJXZ @ 0x18008EE00 (-UpdateTransition@CPressTapVisual@@MEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CImage::SetOpacity(CImage *this, double a2)
{
  __int64 v2; // rdx

  v2 = *((_QWORD *)this + 39);
  if ( v2 )
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v2 + 16) + 296LL))(
      *(_QWORD *)(v2 + 16),
      *(unsigned int *)(v2 + 24));
  else
    CVisual::SendSetOpacity(this, a2);
}
