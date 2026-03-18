/*
 * XREFs of PnpDuplicateUnicodeString @ 0x140133158
 * Callers:
 *     PiDevCfgConfigureDeviceLocation @ 0x14059D25C (PiDevCfgConfigureDeviceLocation.c)
 *     PiDevCfgQueryDriverNode @ 0x1405A1890 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1405A24F0 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDevCfgConfigureDevice @ 0x1405A296C (PiDevCfgConfigureDevice.c)
 *     PiDevCfgBuildIndirectString @ 0x1405A38E0 (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgAppendMultiSz @ 0x1406C4A18 (PiDevCfgAppendMultiSz.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x1406C6DE8 (PiDevCfgQueryIncludedDriverNode.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExpAllocateStringRoutine @ 0x1404DF9E0 (ExpAllocateStringRoutine.c)
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
