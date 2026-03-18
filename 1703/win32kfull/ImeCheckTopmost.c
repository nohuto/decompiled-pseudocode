/*
 * XREFs of ImeCheckTopmost @ 0x1C001E73C
 * Callers:
 *     NtUserSetImeOwnerWindow @ 0x1C001E610 (NtUserSetImeOwnerWindow.c)
 *     zzzImeCanDestroyDefIME @ 0x1C00C9D04 (zzzImeCanDestroyDefIME.c)
 * Callees:
 *     ImeSetTopmost @ 0x1C001E790 (ImeSetTopmost.c)
 */

__int64 __fastcall ImeCheckTopmost(__int64 a1)
{
  __int64 v1; // r8
  unsigned int v2; // r9d
  __int64 v3; // r10
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 120);
  v2 = 0;
  if ( v1 )
  {
    v3 = *(_QWORD *)(a1 + 120);
    if ( *(_QWORD *)(a1 + 16) == gptiForeground )
      v3 = 0LL;
    if ( (*(_BYTE *)(v1 + 64) & 8) != 0 || *(_DWORD *)(a1 + 320) != 1 )
      v2 = 1;
    return ImeSetTopmost(a1, v2, v3);
  }
  return result;
}
