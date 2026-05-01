/*
 * XREFs of ObservablePropertyCallback__lambda_3d6638088535fad8bc54773006e1fbb5___::Run @ 0x18029D6E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?InvalidateThumbnailVisual@SwitchItemThumbnailElement@@IEAAXXZ @ 0x18029D578 (-InvalidateThumbnailVisual@SwitchItemThumbnailElement@@IEAAXXZ.c)
 */

__int64 __fastcall ObservablePropertyCallback__lambda_3d6638088535fad8bc54773006e1fbb5___::Run(__int64 a1)
{
  SwitchItemThumbnailElement *v1; // rbx
  __int64 result; // rax

  v1 = *(SwitchItemThumbnailElement **)(*(_QWORD *)(a1 + 16) + 16LL);
  if ( v1 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v1 + 8LL))(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL));
    SwitchItemThumbnailElement::InvalidateThumbnailVisual(v1);
    return (*(__int64 (__fastcall **)(SwitchItemThumbnailElement *))(*(_QWORD *)v1 + 16LL))(v1);
  }
  return result;
}
