/*
 * XREFs of ?SetRemarshalingFlags@CPrimitiveGroupMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C01438A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall DirectComposition::CPrimitiveGroupMarshaler::SetRemarshalingFlags(
        DirectComposition::CPrimitiveGroupMarshaler *this)
{
  unsigned int v1; // edx
  bool v2; // zf
  _BOOL8 result; // rax

  v1 = *((_DWORD *)this + 4) & 0xFFFFFFDF;
  *((_DWORD *)this + 42) = 0;
  *((_DWORD *)this + 21) = 0;
  v2 = *((_QWORD *)this + 6) == 0LL;
  *((_DWORD *)this + 25) = 0;
  result = !v2;
  *((_DWORD *)this + 4) = v1 | 0x100;
  return result;
}
