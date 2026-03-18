/*
 * XREFs of ?SetGlobalCursorLevel@@YAXH@Z @ 0x1C008F6E0
 * Callers:
 *     ?MKHideMouseCursor@@YAXXZ @ 0x1C0074980 (-MKHideMouseCursor@@YAXXZ.c)
 *     ?MKShowMouseCursor@@YAXXZ @ 0x1C0118BB0 (-MKShowMouseCursor@@YAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall SetGlobalCursorLevel(int a1)
{
  __int64 i; // rdx
  __int64 k; // rcx
  __int64 v4; // rax
  __int64 *j; // rcx
  __int64 v6; // rax

  if ( grpdeskRitInput )
  {
    for ( i = *(_QWORD *)(*((_QWORD *)grpdeskRitInput + 5) + 16LL); i; i = *(_QWORD *)(i + 32) )
    {
      for ( j = *(__int64 **)(i + 168); j != (__int64 *)(i + 168); j = (__int64 *)*j )
      {
        v6 = *(j - 34);
        *((_DWORD *)j + 4) = a1;
        *(_DWORD *)(v6 + 336) = a1;
      }
    }
  }
  for ( k = *(_QWORD *)(PsGetProcessWin32Process(gpepCSRSS) + 288); k; k = *(_QWORD *)(k + 584) )
  {
    v4 = *(_QWORD *)(k + 384);
    *(_DWORD *)(k + 672) = a1;
    *(_DWORD *)(v4 + 336) = a1;
  }
}
