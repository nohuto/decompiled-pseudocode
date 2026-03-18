/*
 * XREFs of WindowHasShadow @ 0x1C0066870
 * Callers:
 *     zzzSetWindowCompositionCloak @ 0x1C00578F4 (zzzSetWindowCompositionCloak.c)
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0067D30 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 *     NtUserSetLayeredWindowAttributes @ 0x1C008F740 (NtUserSetLayeredWindowAttributes.c)
 * Callees:
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C010A6A4 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 */

__int64 __fastcall WindowHasShadow(__int64 a1)
{
  unsigned int v1; // r8d

  v1 = 0;
  if ( (*(_BYTE *)(a1 + 71) & 0x10) != 0 )
    return FindShadow((struct tagWND *)a1) != 0LL;
  return v1;
}
