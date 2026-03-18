/*
 * XREFs of ?GetCurrentBufferPointer@CLegacyTokenBuffer@@QEAAJPEAPEAEPEAII@Z @ 0x1C0017AC0
 * Callers:
 *     ?ProcessGdiSysmemTokens@CTokenManager@@IEAAJXZ @ 0x1C00178D8 (-ProcessGdiSysmemTokens@CTokenManager@@IEAAJXZ.c)
 * Callees:
 *     ?Grow@CLegacyTokenBuffer@@IEAAJXZ @ 0x1C0017A28 (-Grow@CLegacyTokenBuffer@@IEAAJXZ.c)
 */

__int64 __fastcall CLegacyTokenBuffer::GetCurrentBufferPointer(
        CLegacyTokenBuffer *this,
        unsigned __int8 **a2,
        unsigned int *a3,
        unsigned int a4)
{
  unsigned int v4; // eax
  unsigned int v5; // r10d

  v4 = *((_DWORD *)this + 526);
  v5 = 0;
  if ( a4 > v4 )
  {
    v5 = CLegacyTokenBuffer::Grow(this);
    v4 = *((_DWORD *)this + 526);
  }
  *a2 = (unsigned __int8 *)*((_QWORD *)this + 262);
  *a3 = v4;
  return v5;
}
