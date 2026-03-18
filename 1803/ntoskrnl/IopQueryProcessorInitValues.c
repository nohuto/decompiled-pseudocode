/*
 * XREFs of IopQueryProcessorInitValues @ 0x140654D50
 * Callers:
 *     IoInitializeProcessor @ 0x140622290 (IoInitializeProcessor.c)
 *     IoEnableIrpCredits @ 0x140719270 (IoEnableIrpCredits.c)
 *     IoInitSystemPreDrivers @ 0x1408A1BE4 (IoInitSystemPreDrivers.c)
 * Callees:
 *     MmIsThisAnNtAsSystem @ 0x140006260 (MmIsThisAnNtAsSystem.c)
 */

__int64 __fastcall IopQueryProcessorInitValues(__int64 a1)
{
  __int16 v2; // ax
  int v3; // edx
  __int16 v4; // cx
  __int16 v5; // r8
  unsigned int v6; // kr00_4
  __int64 result; // rax

  if ( MmIsThisAnNtAsSystem() )
  {
    v2 = 128;
    v3 = 0x10000;
    v5 = 256;
    v4 = 96;
  }
  else
  {
    v2 = 64;
    v3 = 1536;
    v4 = 32;
    v5 = 128;
  }
  *(_WORD *)(a1 + 6) = v4;
  *(_WORD *)a1 = v4;
  *(_WORD *)(a1 + 4) = v2;
  *(_WORD *)(a1 + 8) = v5;
  *(_DWORD *)(a1 + 28) = v3;
  *(_WORD *)(a1 + 2) = *(_WORD *)(a1 + 4);
  v6 = *(_DWORD *)(a1 + 28);
  *(_DWORD *)(a1 + 12) = 280;
  *(_DWORD *)(a1 + 28) = v6 / 0x500;
  *(_DWORD *)(a1 + 16) = 72 * IopMediumIrpStackLocations + 208;
  result = (unsigned int)IopLargeIrpStackLocations;
  *(_DWORD *)(a1 + 24) = 184;
  *(_DWORD *)(a1 + 20) = 72 * result + 208;
  return result;
}
