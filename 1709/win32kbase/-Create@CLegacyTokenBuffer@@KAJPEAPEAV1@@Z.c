/*
 * XREFs of ?Create@CLegacyTokenBuffer@@KAJPEAPEAV1@@Z @ 0x1C009A8C8
 * Callers:
 *     ?EnsureCurrentLegacyTokenBuffer@CTokenManager@@IEAAJXZ @ 0x1C0035DF4 (-EnsureCurrentLegacyTokenBuffer@CTokenManager@@IEAAJXZ.c)
 * Callees:
 *     ?Reset@CLegacyTokenBuffer@@IEAAXXZ @ 0x1C00393CC (-Reset@CLegacyTokenBuffer@@IEAAXXZ.c)
 *     Win32AllocPool @ 0x1C0040660 (Win32AllocPool.c)
 */

__int64 __fastcall CLegacyTokenBuffer::Create(struct CLegacyTokenBuffer **a1)
{
  __int64 v2; // rax
  __int64 v3; // r8
  struct CLegacyTokenBuffer *v4; // rbx

  *a1 = 0LL;
  v2 = Win32AllocPool(2112LL, 0x746C4D54u);
  v4 = (struct CLegacyTokenBuffer *)v2;
  if ( v2 )
  {
    *(_DWORD *)(v2 + 32) = 0;
    *(_DWORD *)(v2 + 2084) = 0;
    *(_QWORD *)(v2 + 24) = v2 + 16;
    *(_QWORD *)(v2 + 16) = v2 + 16;
    *(_QWORD *)(v2 + 2088) = v2 + 16;
    *(_BYTE *)(v2 + 2108) = 0;
    CLegacyTokenBuffer::Reset((CLegacyTokenBuffer *)v2, v2 + 16, v3);
  }
  else
  {
    v4 = 0LL;
  }
  if ( v4 )
    *a1 = v4;
  return v4 == 0LL ? 0xC0000017 : 0;
}
