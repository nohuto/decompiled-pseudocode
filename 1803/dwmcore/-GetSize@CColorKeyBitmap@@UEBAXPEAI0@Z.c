/*
 * XREFs of ?GetSize@CColorKeyBitmap@@UEBAXPEAI0@Z @ 0x1800B85F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CColorKeyBitmap::GetSize(CColorKeyBitmap *this, unsigned int *a2, unsigned int *a3)
{
  (*(void (__fastcall **)(_QWORD, unsigned int *, unsigned int *))(**((_QWORD **)this + 1) + 32LL))(
    *((_QWORD *)this + 1),
    a2,
    a3);
}
