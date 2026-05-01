/*
 * XREFs of ?ThumbnailSizeChanged@CMultitaskingViewElementBase@@UEAAXPEAX@Z @ 0x18028BC00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CMultitaskingViewElementBase::ThumbnailSizeChanged(CMultitaskingViewElementBase *this, void *a2)
{
  _QWORD *v2; // rbx
  _QWORD *v4; // rdi

  v2 = (_QWORD *)*((_QWORD *)this + 2);
  v4 = &v2[*((_QWORD *)this + 3)];
  while ( v2 != v4 )
  {
    (*(void (__fastcall **)(_QWORD, void *))(*(_QWORD *)*v2 + 480LL))(*v2, a2);
    ++v2;
  }
}
