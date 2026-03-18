/*
 * XREFs of ?GetSize@CColorKeyBitmapRealization@@UEBAXPEAI0@Z @ 0x180213840
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CColorKeyBitmapRealization::GetSize(
        CColorKeyBitmapRealization *this,
        unsigned int *a2,
        unsigned int *a3)
{
  (*(void (__fastcall **)(__int64, unsigned int *, unsigned int *))(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 32LL))(
    *((_QWORD *)this + 1) + 16LL,
    a2,
    a3);
}
