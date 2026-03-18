/*
 * XREFs of EditionUpdateCursorAsync @ 0x1C00F9CD0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0145A00 (memset.c)
 */

LONG_PTR __fastcall EditionUpdateCursorAsync(__int64 a1)
{
  LONG_PTR result; // rax
  void *v2; // rbx
  _DWORD v3[14]; // [rsp+20h] [rbp-38h] BYREF

  result = ReferenceDwmApiPort(a1);
  v2 = (void *)result;
  if ( result )
  {
    memset(v3, 0, 0x2CuLL);
    v3[0] = 2883588;
    LOWORD(v3[1]) = 0x8000;
    v3[10] = 1073741913;
    LpcRequestPort(v2, v3);
    return ObfDereferenceObject(v2);
  }
  return result;
}
