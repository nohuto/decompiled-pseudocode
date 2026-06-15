/*
 * XREFs of s_winmmGetPnpInfo @ 0x1800A1BF0
 * Callers:
 *     <none>
 * Callees:
 *     MIDL_user_allocate @ 0x18001F580 (MIDL_user_allocate.c)
 *     memcpy_0 @ 0x180036B8F (memcpy_0.c)
 */

__int64 __fastcall s_winmmGetPnpInfo(_DWORD *a1, _QWORD *a2)
{
  unsigned int v4; // ebx
  void *v5; // rax
  void *v6; // rbp

  v4 = 0;
  if ( !(unsigned int)IsWinmmGetPnpInfoSupported() )
    return 1LL;
  RtlAcquireResourceShared(&PnpInfoResource, 1u);
  v5 = MIDL_user_allocate(*(unsigned int *)g_pPnpInfoActual);
  v6 = v5;
  if ( v5 )
  {
    memcpy_0(v5, g_pPnpInfoActual, *(unsigned int *)g_pPnpInfoActual);
    *a1 = *(_DWORD *)g_pPnpInfoActual;
    *a2 = v6;
  }
  else
  {
    *a1 = 0;
    *a2 = 0LL;
    v4 = 14;
  }
  RtlReleaseResource(&PnpInfoResource);
  return v4;
}
