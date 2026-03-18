/*
 * XREFs of PnpDuplicateUnicodeString @ 0x140147994
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x1405CF9D8 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgBuildIndirectString @ 0x1405D8850 (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgQueryDriverNode @ 0x1405D8B48 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1405DA154 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDevCfgConfigureDeviceLocation @ 0x1405E8480 (PiDevCfgConfigureDeviceLocation.c)
 *     PiDevCfgProcessDeviceCallback @ 0x1406433E0 (PiDevCfgProcessDeviceCallback.c)
 *     PiDevCfgAppendMultiSz @ 0x14072ADB8 (PiDevCfgAppendMultiSz.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14072D8D8 (PiDevCfgQueryIncludedDriverNode.c)
 * Callees:
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExpAllocateStringRoutine @ 0x140518FA0 (ExpAllocateStringRoutine.c)
 */

char __fastcall PnpDuplicateUnicodeString(__int64 a1, __int64 a2)
{
  void *StringRoutine; // rax

  if ( *(_QWORD *)(a2 + 8) )
  {
    StringRoutine = (void *)ExpAllocateStringRoutine(*(unsigned __int16 *)(a2 + 2));
    *(_QWORD *)(a1 + 8) = StringRoutine;
    if ( !StringRoutine )
      return (char)StringRoutine;
    memmove(StringRoutine, *(const void **)(a2 + 8), *(unsigned __int16 *)(a2 + 2));
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  *(_WORD *)a1 = *(_WORD *)a2;
  *(_WORD *)(a1 + 2) = *(_WORD *)(a2 + 2);
  LOBYTE(StringRoutine) = 1;
  return (char)StringRoutine;
}
