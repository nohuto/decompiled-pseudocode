/*
 * XREFs of ?IsEqualByAppId@CImmersiveApp@@UEAAJPEBGPEAH@Z @ 0x1800518B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveApp::IsEqualByAppId(LPCWCH *this, const unsigned __int16 *a2, int *a3)
{
  BOOL v4; // ecx
  __int64 result; // rax

  v4 = CompareStringOrdinal(a2, -1, this[54], -1, 1) == 2;
  result = 0LL;
  *a3 = v4;
  return result;
}
