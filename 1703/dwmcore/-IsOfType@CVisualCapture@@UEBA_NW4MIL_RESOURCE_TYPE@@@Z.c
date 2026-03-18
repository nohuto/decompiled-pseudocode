/*
 * XREFs of ?IsOfType@CVisualCapture@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180026FA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CVisualCapture::IsOfType(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rcx
  _BOOL8 result; // rax

  result = (unsigned int)a2 <= 0x3A && (v2 = 0x400082000000000LL, _bittest64(&v2, a2)) || (_DWORD)a2 == 116;
  return result;
}
