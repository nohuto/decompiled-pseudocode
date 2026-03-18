/*
 * XREFs of IsMDIItem @ 0x1C0218A20
 * Callers:
 *     ?MBC_RightJustifyMenu@@YAXPEAUtagMENU@@@Z @ 0x1C007CEAC (-MBC_RightJustifyMenu@@YAXPEAUtagMENU@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsMDIItem(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // ecx

  if ( (*(_DWORD *)(a1 + 4) & 0x20000000) == 0 )
    return 0;
  v1 = *(_QWORD *)(a1 + 104);
  v2 = 1;
  if ( (unsigned __int64)(v1 - 1) > 6 )
    return 0;
  return v2;
}
