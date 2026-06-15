/*
 * XREFs of s_winmmGetPnpInfo @ 0x18002FBB0
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180049340 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x180057FA0 (memcpy_0.c)
 */

__int64 __fastcall s_winmmGetPnpInfo(_DWORD *a1, _QWORD *a2)
{
  unsigned __int64 v4; // rcx
  void *v5; // rax
  void *v6; // rbx
  unsigned int v7; // ebx

  if ( !(unsigned int)IsWinmmGetPnpInfoSupported() )
    return 1LL;
  RtlAcquireResourceShared(&PnpInfoResource, 1u);
  v4 = *(unsigned int *)g_pPnpInfoActual;
  if ( v4 <= 0x40000 && (v5 = operator new[](v4, (const struct std::nothrow_t *)&std::nothrow), (v6 = v5) != 0LL) )
  {
    memcpy_0(v5, g_pPnpInfoActual, *(unsigned int *)g_pPnpInfoActual);
    *a1 = *(_DWORD *)g_pPnpInfoActual;
    *a2 = v6;
    v7 = 0;
  }
  else
  {
    *a1 = 0;
    *a2 = 0LL;
    v7 = 14;
  }
  RtlReleaseResource(&PnpInfoResource);
  return v7;
}
