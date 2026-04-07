/*
 * XREFs of ??0CButton@@IEAA@XZ @ 0x1800206C0
 * Callers:
 *     ?Create@CButton@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x1800162C4 (-Create@CButton@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CAtlasedRectsVisual@@IEAA@XZ @ 0x180021EB0 (--0CAtlasedRectsVisual@@IEAA@XZ.c)
 */

CButton *__fastcall CButton::CButton(CButton *this)
{
  __int64 v1; // rcx
  CButton *result; // rax

  CAtlasedRectsVisual::CAtlasedRectsVisual(this);
  *(_QWORD *)(v1 + 288) = 0LL;
  *(_QWORD *)(v1 + 296) = 0LL;
  *(_QWORD *)v1 = &CButton::`vftable';
  *(_QWORD *)(v1 + 304) = 0LL;
  *(_QWORD *)(v1 + 312) = 0LL;
  *(_QWORD *)(v1 + 320) = 0LL;
  *(_DWORD *)(v1 + 328) = 0;
  *(_QWORD *)(v1 + 336) = 0LL;
  *(_QWORD *)(v1 + 344) = 0LL;
  *(_QWORD *)(v1 + 352) = 0LL;
  *(_DWORD *)(v1 + 360) = 0;
  *(_BYTE *)(v1 + 280) |= 1u;
  *(_DWORD *)(v1 + 384) = 1065353216;
  *(_DWORD *)(v1 + 400) = 1065353216;
  *(_DWORD *)(v1 + 404) = 1065353216;
  result = (CButton *)v1;
  *(_QWORD *)(v1 + 368) = 0LL;
  *(_QWORD *)(v1 + 376) = 0LL;
  *(_QWORD *)(v1 + 392) = 0LL;
  *(_DWORD *)(v1 + 408) = 2;
  return result;
}
