/*
 * XREFs of _FindProp @ 0x1C0064018
 * Callers:
 *     IsWindowGhosted @ 0x1C0060008 (IsWindowGhosted.c)
 *     ?IsCompositionInputWindow@@YAHPEAUtagWND@@@Z @ 0x1C0061FD0 (-IsCompositionInputWindow@@YAHPEAUtagWND@@@Z.c)
 *     InternalRemoveProp @ 0x1C0062014 (InternalRemoveProp.c)
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHQEAUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x1C00622F0 (--$GetProp@VCoreWindowProp@@@CWindowProp@@SAHQEAUtagWND@@PEAPEAVCoreWindowProp@@@Z.c)
 *     NtUserGetWindowCompositionAttribute @ 0x1C00630D0 (NtUserGetWindowCompositionAttribute.c)
 *     GetWindowCloakState @ 0x1C0063F5C (GetWindowCloakState.c)
 *     _GetWindowCompositionInfo @ 0x1C0065464 (_GetWindowCompositionInfo.c)
 *     InternalSetProp @ 0x1C009B790 (InternalSetProp.c)
 *     StoreQMessage @ 0x1C00ABB30 (StoreQMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FindProp(__int64 a1, __int16 a2, int a3)
{
  __int64 v3; // rax
  int v5; // edx
  __int64 v6; // rcx

  v3 = *(_QWORD *)(a1 + 184);
  if ( !v3 )
    return 0LL;
  if ( !a2 )
    return 0LL;
  v5 = *(_DWORD *)(v3 + 4);
  v6 = v3 + 8;
  if ( !v5 )
    return 0LL;
  while ( 1 )
  {
    if ( *(_WORD *)(v6 + 8) != a2 )
      goto LABEL_5;
    if ( !a3 )
      break;
    if ( (*(_BYTE *)(v6 + 10) & 1) != 0 )
      return v6;
LABEL_5:
    v6 += 16LL;
    if ( !--v5 )
      return 0LL;
  }
  if ( (*(_BYTE *)(v6 + 10) & 1) != 0 )
    goto LABEL_5;
  return v6;
}
