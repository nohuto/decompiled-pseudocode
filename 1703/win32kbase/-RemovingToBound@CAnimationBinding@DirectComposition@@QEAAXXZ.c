/*
 * XREFs of ?RemovingToBound@CAnimationBinding@DirectComposition@@QEAAXXZ @ 0x1C014174C
 * Callers:
 *     ?BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCBaseAnimation@2@@Z @ 0x1C001A680 (-BindAnimation@CApplicationChannel@DirectComposition@@IEAAJPEAVCResourceMarshaler@2@IPEAVCBaseAn.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CAnimationBinding::RemovingToBound(DirectComposition::CAnimationBinding *this)
{
  DirectComposition::CResourceMarshaler *v1; // rax

  *((_DWORD *)this + 2) = *((_DWORD *)this + 2) & 0xFFFFFFFA | 1;
  v1 = (DirectComposition::CResourceMarshaler *)(***((__int64 (__fastcall ****)(_QWORD))this + 3))(*((_QWORD *)this + 3));
  DirectComposition::CResourceMarshaler::AddRef(v1);
}
