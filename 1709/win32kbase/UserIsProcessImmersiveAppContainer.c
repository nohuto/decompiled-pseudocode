/*
 * XREFs of UserIsProcessImmersiveAppContainer @ 0x1C00204B0
 * Callers:
 *     ?vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C001FE64 (-vAppContainerOwner@SURFACE@@QEAAXPEAU_EPROCESS@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UserIsProcessImmersiveAppContainer(__int64 a1)
{
  __int64 result; // rax
  unsigned int v2; // ecx
  int v3; // edx

  result = PsGetProcessWin32Process(a1);
  v2 = 0;
  if ( result )
  {
    if ( *(_DWORD *)(result + 836) )
    {
      v3 = *(_DWORD *)(result + 776);
      if ( (v3 & 0x30) == 0x10 )
        return (v3 & 0x200) == 0;
    }
    return v2;
  }
  return result;
}
