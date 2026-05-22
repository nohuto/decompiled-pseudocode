/*
 * XREFs of ?SetScaleFactor@DWMHardwareCursor@@UEAAJN@Z @ 0x1800280C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMHardwareCursor::SetScaleFactor(DWMHardwareCursor *this, double a2)
{
  __int64 result; // rax

  *((double *)this + 46) = a2;
  result = 0LL;
  *((_BYTE *)this + 392) = 1;
  return result;
}
