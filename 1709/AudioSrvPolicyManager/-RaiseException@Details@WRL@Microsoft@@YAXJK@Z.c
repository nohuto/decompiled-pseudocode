/*
 * XREFs of ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1800213D8
 * Callers:
 *     IsEUCountry @ 0x1800213F4 (IsEUCountry.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Details::RaiseException(Microsoft::WRL::Details *this)
{
  RaiseException((DWORD)this, 1u, 0, 0LL);
}
