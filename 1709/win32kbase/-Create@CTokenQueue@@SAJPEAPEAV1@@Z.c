/*
 * XREFs of ?Create@CTokenQueue@@SAJPEAPEAV1@@Z @ 0x1C0095DF4
 * Callers:
 *     ?EnsureTokenQueue@CTokenManager@@IEAAJPEAUCompositionSurfaceObject@@PEAPEAUTokenQueueTableEntry@1@@Z @ 0x1C00354DC (-EnsureTokenQueue@CTokenManager@@IEAAJPEAUCompositionSurfaceObject@@PEAPEAUTokenQueueTableEntry@.c)
 * Callees:
 *     Win32AllocPool @ 0x1C0040660 (Win32AllocPool.c)
 */

__int64 __fastcall CTokenQueue::Create(struct CTokenQueue **a1)
{
  __int64 v2; // rax

  v2 = Win32AllocPool(32LL, 0x71744D54u);
  if ( v2 )
  {
    *(_QWORD *)(v2 + 16) = 0LL;
    *(_DWORD *)(v2 + 24) = 0;
    *(_QWORD *)(v2 + 8) = v2;
    *(_QWORD *)v2 = v2;
  }
  *a1 = (struct CTokenQueue *)v2;
  return v2 == 0 ? 0xC0000017 : 0;
}
